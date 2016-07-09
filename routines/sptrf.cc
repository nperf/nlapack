#include "routines.h"

void dsptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	double *ap = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int *ipiv = reinterpret_cast<int*>(info[3].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	IPIV_FORTRAN(n, ipiv);
	dsptrf_(&uplo, &n, ap, ipiv, &i);
	IPIV_C(n, ipiv);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	float *ap = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int *ipiv = reinterpret_cast<int*>(info[3].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	IPIV_FORTRAN(n, ipiv);
	ssptrf_(&uplo, &n, ap, ipiv, &i);
	IPIV_C(n, ipiv);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
