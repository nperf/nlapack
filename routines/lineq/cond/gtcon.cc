#include "routines.h"

void dgtcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	double *dl = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *du = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *du2 = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[6].As<v8::Int32Array>()));
	double anorm = info[7]->NumberValue();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgtcon(norm, n, dl, d, du, du2, ipiv, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgtcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *dl = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	float *du = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	float *du2 = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[6].As<v8::Int32Array>()));
	float anorm = info[7]->NumberValue();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_sgtcon(norm, n, dl, d, du, du2, ipiv, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
