#include "routines.h"

void dsytri2x(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char uplo = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));
	lapack_int nb = info[5].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dsytri2x(LAPACK_ROW_MAJOR, uplo, n, a, lda, ipiv, nb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssytri2x(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));
	lapack_int nb = info[5].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_ssytri2x(LAPACK_ROW_MAJOR, uplo, n, a, lda, ipiv, nb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
