#include "routines.h"

void dgttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	double *dl = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double *du = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *du2 = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_dgttrf(n, dl, d, du, du2, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	float *dl = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float32Array>()));
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	float *du = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *du2 = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_sgttrf(n, dl, d, du, du2, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
