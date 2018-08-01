#include "routines.h"

void dpttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	double *e = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	
	lapack_int i = LAPACKE_dpttrf(n, d, e);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float32Array>()));
	float *e = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	
	lapack_int i = LAPACKE_spttrf(n, d, e);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
