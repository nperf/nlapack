#include "lapacke.h"
#include "routines.h"

void dpttrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	lapack_int nrhs = info[1]->Uint32Value();
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double *e = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldb = info[5]->Uint32Value();

	lapack_int i = LAPACKE_dpttrs(LAPACK_ROW_MAJOR, n, nrhs, d, e, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spttrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	lapack_int nrhs = info[1]->Uint32Value();
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	float *e = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int ldb = info[5]->Uint32Value();

	lapack_int i = LAPACKE_spttrs(LAPACK_ROW_MAJOR, n, nrhs, d, e, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
