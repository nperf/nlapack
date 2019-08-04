#include "routines.h"

void dpoequb(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	lapack_int n = info[0].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	lapack_int lda = info[2].As<v8::Integer>()->Value();
	double *s = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *scond = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *amax = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpoequb(LAPACK_ROW_MAJOR, n, a, lda, s, scond, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spoequb(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float32Array>()));
	lapack_int lda = info[2].As<v8::Integer>()->Value();
	float *s = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *scond = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *amax = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_spoequb(LAPACK_ROW_MAJOR, n, a, lda, s, scond, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
