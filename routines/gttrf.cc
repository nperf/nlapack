#include "routines.h"

void dgttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int n = info[0]->Uint32Value();
	double *dl = reinterpret_cast<double*>(info[1].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *d = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *du = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *du2 = reinterpret_cast<double*>(info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int *ipiv = reinterpret_cast<int*>(info[5].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	IPIV_FORTRAN(n, ipiv);
	dgttrf_(&n, dl, d, du, du2, ipiv, &i);
	IPIV_C(n, ipiv);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int n = info[0]->Uint32Value();
	float *dl = reinterpret_cast<float*>(info[1].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *d = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *du = reinterpret_cast<float*>(info[3].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *du2 = reinterpret_cast<float*>(info[4].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int *ipiv = reinterpret_cast<int*>(info[5].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int i;
	IPIV_FORTRAN(n, ipiv);
	sgttrf_(&n, dl, d, du, du2, ipiv, &i);
	IPIV_C(n, ipiv);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
