#include "routines.h"

void dpotrf2(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dpotrf2(LAPACK_ROW_MAJOR, uplo, n, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spotrf2(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_spotrf2(LAPACK_ROW_MAJOR, uplo, n, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
