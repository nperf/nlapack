#include "routines.h"

void dpstrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();
	lapack_int *piv = reinterpret_cast<int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));
	lapack_int *rank = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));
	double tol = info[6].As<v8::Number>()->Value();

	lapack_int i = LAPACKE_dpstrf(LAPACK_ROW_MAJOR, uplo, n, a, lda, piv, rank, tol);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spstrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	lapack_int lda = info[3].As<v8::Integer>()->Value();
	lapack_int *piv = reinterpret_cast<int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));
	lapack_int *rank = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));
	float tol = info[6].As<v8::Number>()->Value();

	lapack_int i = LAPACKE_spstrf(LAPACK_ROW_MAJOR, uplo, n, a, lda, piv, rank, tol);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
