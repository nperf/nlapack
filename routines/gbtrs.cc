#include "routines.h"

void dgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int trans = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	int nrhs = info[4]->Uint32Value();
	double *ab = reinterpret_cast<double*>(info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldab = info[6]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[7].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	double *b = reinterpret_cast<double*>(info[8].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldb = info[9]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(ldab, n, ab);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(ldab, ipiv);
	dgbtrs_(&trans, &n, &kl, &ku, &nrhs, ab, &ldab, ipiv, b, &ldb, &i);
	IPIV_C(ldab, ipiv);
	FORTRAN_DOUBLE_ORDER(ldab, n, ab);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int trans = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	int nrhs = info[4]->Uint32Value();
	float *ab = reinterpret_cast<float*>(info[5].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int ldab = info[6]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[7].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	float *b = reinterpret_cast<float*>(info[8].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int ldb = info[9]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(ldab, n, ab);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(ldab, ipiv);
	sgbtrs_(&trans, &n, &kl, &ku, &nrhs, ab, &ldab, ipiv, b, &ldb, &i);
	IPIV_C(ldab, ipiv);
	FORTRAN_SINGLE_ORDER(ldab, n, ab);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
