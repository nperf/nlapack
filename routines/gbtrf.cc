#include "routines.h"

void dgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int m = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	double *ab = reinterpret_cast<double*>(info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldab = info[5]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[6].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_DOUBLE_ORDER(m, n, ab);
	IPIV_FORTRAN(m, ipiv);
	dgbtrf_(&m, &n, &kl, &ku, ab, &ldab, ipiv, &i);
	IPIV_C(m, ipiv);
	FORTRAN_DOUBLE_ORDER(m, n, ab);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int m = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
 	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	float *ab = reinterpret_cast<float*>(info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldab = info[5]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[6].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_SINGLE_ORDER(m, n, ab);
	IPIV_FORTRAN(m, ipiv);
	sgbtrf_(&m, &n, &kl, &ku, ab, &ldab, ipiv, &i);
	IPIV_C(m, ipiv);
	FORTRAN_SINGLE_ORDER(m, n, ab);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
