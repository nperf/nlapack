#include "lapacke.h"
#include "routines.h"

void dpftrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char transr = info[0]->Uint32Value();
	char uplo = info[1]->Uint32Value();
	lapack_int n = info[2]->Uint32Value();
	lapack_int nrhs = info[3]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldb = info[6]->Uint32Value();

	lapack_int i = LAPACKE_dpftrs(LAPACK_ROW_MAJOR, transr, uplo, n, nrhs, a, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spftrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char transr = info[0]->Uint32Value();
	char uplo = info[1]->Uint32Value();
	lapack_int n = info[2]->Uint32Value();
	lapack_int nrhs = info[3]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int ldb = info[6]->Uint32Value();

	lapack_int i = LAPACKE_spftrs(LAPACK_ROW_MAJOR, transr, uplo, n, nrhs, a, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
