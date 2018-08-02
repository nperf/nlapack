#include "routines.h"

void dptcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	double *e = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double anorm = info[3]->NumberValue();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dptcon(n, d, e, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sptcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	float *e = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	float anorm = info[3]->NumberValue();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_sptcon(n, d, e, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
