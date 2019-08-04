#include "routines.h"

void dpocon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();
	double anorm = info[4].As<v8::Number>()->Value();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpocon(LAPACK_ROW_MAJOR, uplo, n, a, lda, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spocon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();
	float anorm = info[4].As<v8::Number>()->Value();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_spocon(LAPACK_ROW_MAJOR, uplo, n, a, lda, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
