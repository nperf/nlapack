#include "routines.h"

void dsytrs_rook(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int nrhs = info[2].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int lda = info[4].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldb = info[7].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dsytrs_rook(LAPACK_ROW_MAJOR, uplo, n, nrhs, a, lda, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssytrs_rook(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int nrhs = info[2].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int lda = info[4].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldb = info[7].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_ssytrs_rook(LAPACK_ROW_MAJOR, uplo, n, nrhs, a, lda, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
