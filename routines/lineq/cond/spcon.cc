#include "routines.h"

void dspcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));
	double anorm = info[4].As<v8::Number>()->Value();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dspcon(LAPACK_ROW_MAJOR, uplo, n, ap, ipiv, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sspcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));
	float anorm = info[4].As<v8::Number>()->Value();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_sspcon(LAPACK_ROW_MAJOR, uplo, n, ap, ipiv, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
