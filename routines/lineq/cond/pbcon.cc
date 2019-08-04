#include "routines.h"

void dpbcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kd = info[2].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int ldab = info[4].As<v8::Integer>()->Value();
	double anorm = info[5].As<v8::Number>()->Value();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpbcon(LAPACK_ROW_MAJOR, uplo, n, kd, ab, ldab, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spbcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kd = info[2].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int ldab = info[4].As<v8::Integer>()->Value();
	float anorm = info[5].As<v8::Number>()->Value();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_spbcon(LAPACK_ROW_MAJOR, uplo, n, kd, ab, ldab, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
