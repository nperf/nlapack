#include "routines.h"

void dgetrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int m = info[0]->Uint32Value();
 	int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_DOUBLE_ORDER(m, n, a);
	IPIV_FORTRAN(lda, ipiv);
	dgetrf_(&m, &n, a, &lda, ipiv, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_DOUBLE_ORDER(m, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgetrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int m = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_SINGLE_ORDER(m, n, a);
	IPIV_FORTRAN(lda, ipiv);
	sgetrf_(&m, &n, a, &lda, ipiv, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_SINGLE_ORDER(m, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
