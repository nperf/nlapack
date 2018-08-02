#include "routines.h"

void dsptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	double *ap = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	lapack_int *ipiv = reinterpret_cast<int*>(info[3].As<v8::Int32Array>()->Buffer()->GetContents().Data());

	lapack_int i = LAPACKE_dsptrf(LAPACK_ROW_MAJOR, uplo, n, ap, ipiv);
	IPIV_C(n, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *ap = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	lapack_int *ipiv = reinterpret_cast<int*>(info[3].As<v8::Int32Array>()->Buffer()->GetContents().Data());

	lapack_int i = LAPACKE_ssptrf(LAPACK_ROW_MAJOR, uplo, n, ap, ipiv);
	IPIV_C(n, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
