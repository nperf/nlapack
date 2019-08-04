#include "routines.h"

void dlatms(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
 	char dist = info[2].As<v8::Integer>()->Value();
	lapack_int *iseed = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));
	char sym = info[4].As<v8::Integer>()->Value();
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int mode = info[6].As<v8::Integer>()->Value();
	double cond = info[7].As<v8::Number>()->Value();
	double dmax = info[8].As<v8::Number>()->Value();
	lapack_int kl = info[9].As<v8::Integer>()->Value();
	lapack_int ku = info[10].As<v8::Integer>()->Value();
	char pack = info[11].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[12].As<v8::Float64Array>()));
	lapack_int lda = info[13].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dlatms(LAPACK_ROW_MAJOR, m, n, dist, iseed, sym, d, mode, cond, dmax, kl, ku, pack, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void slatms(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	char dist = info[2].As<v8::Integer>()->Value();
	lapack_int *iseed = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));
	char sym = info[4].As<v8::Integer>()->Value();
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int mode = info[6].As<v8::Integer>()->Value();
	float cond = info[7].As<v8::Number>()->Value();
	float dmax = info[8].As<v8::Number>()->Value();
	lapack_int kl = info[9].As<v8::Integer>()->Value();
	lapack_int ku = info[10].As<v8::Integer>()->Value();
	char pack = info[11].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[12].As<v8::Float32Array>()));
	lapack_int lda = info[13].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_slatms(LAPACK_ROW_MAJOR, m, n, dist, iseed, sym, d, mode, cond, dmax, kl, ku, pack, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
