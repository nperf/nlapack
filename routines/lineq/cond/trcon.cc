#include "routines.h"

void dtrcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	char diag = info[2].As<v8::Integer>()->Value();
	lapack_int n = info[3].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int lda = info[5].As<v8::Integer>()->Value();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dtrcon(LAPACK_ROW_MAJOR, norm, uplo, diag, n, a, lda, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void strcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	char diag = info[2].As<v8::Integer>()->Value();
	lapack_int n = info[3].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int lda = info[5].As<v8::Integer>()->Value();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_strcon(LAPACK_ROW_MAJOR, norm, uplo, diag, n, a, lda, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
