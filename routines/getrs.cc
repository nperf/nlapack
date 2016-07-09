#include "routines.h"

void dgetrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int trans = info[0]->Uint32Value();
 	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[4]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[5].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	double *b = reinterpret_cast<double*>(info[6].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldb = info[7]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(lda, ipiv);
	dgetrs_(&trans, &n, &nrhs, a, &lda, ipiv, b, &ldb, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgetrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int trans = info[0]->Uint32Value();
 	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	float *a = reinterpret_cast<float*>(info[3].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int lda = info[4]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[5].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	float *b = reinterpret_cast<float*>(info[6].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int ldb = info[7]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(lda, ipiv);
	sgetrs_(&trans, &n, &nrhs, a, &lda, ipiv, b, &ldb, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
