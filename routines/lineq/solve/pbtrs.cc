#include "routines.h"

void dpbtrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kd = info[2].As<v8::Integer>()->Value();
	lapack_int nrhs = info[3].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5].As<v8::Integer>()->Value();
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldb = info[7].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dpbtrs(LAPACK_ROW_MAJOR, uplo, n, kd, nrhs, ab, ldab, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spbtrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kd = info[2].As<v8::Integer>()->Value();
	lapack_int nrhs = info[3].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int ldab = info[5].As<v8::Integer>()->Value();
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldb = info[7].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_spbtrs(LAPACK_ROW_MAJOR, uplo, n, kd, nrhs, ab, ldab, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
