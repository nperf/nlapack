#include "routines.h"

void dtbcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	char diag = info[2].As<v8::Integer>()->Value();
	lapack_int n = info[3].As<v8::Integer>()->Value();
	lapack_int kd = info[4].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldab = info[6].As<v8::Integer>()->Value();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dtbcon(LAPACK_ROW_MAJOR, norm, uplo, diag, n, kd, ab, ldab, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void stbcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	char diag = info[2].As<v8::Integer>()->Value();
	lapack_int n = info[3].As<v8::Integer>()->Value();
	lapack_int kd = info[4].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldab = info[6].As<v8::Integer>()->Value();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_stbcon(LAPACK_ROW_MAJOR, norm, uplo, diag, n, kd, ab, ldab, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
