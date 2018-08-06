#include "routines.h"

void dlatms(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
 	lapack_int n = info[1]->Uint32Value();
 	char dist = info[2]->Uint32Value();
	lapack_int *iseed = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));
	char sym = info[4]->Uint32Value();
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int mode = info[6]->Uint32Value();
	double cond = info[7]->NumberValue();
	double dmax = info[8]->NumberValue();
	lapack_int kl = info[9]->Uint32Value();
	lapack_int ku = info[10]->Uint32Value();
	char pack = info[11]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[12].As<v8::Float64Array>()));
	lapack_int lda = info[13]->Uint32Value();

	lapack_int i = LAPACKE_dlatms(LAPACK_ROW_MAJOR, m, n, dist, iseed, sym, d, mode, cond, dmax, kl, ku, pack, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void slatms(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	char dist = info[2]->Uint32Value();
	lapack_int *iseed = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));
	char sym = info[4]->Uint32Value();
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int mode = info[6]->Uint32Value();
	float cond = info[7]->NumberValue();
	float dmax = info[8]->NumberValue();
	lapack_int kl = info[9]->Uint32Value();
	lapack_int ku = info[10]->Uint32Value();
	char pack = info[11]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[12].As<v8::Float32Array>()));
	lapack_int lda = info[13]->Uint32Value();

	lapack_int i = LAPACKE_slatms(LAPACK_ROW_MAJOR, m, n, dist, iseed, sym, d, mode, cond, dmax, kl, ku, pack, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
