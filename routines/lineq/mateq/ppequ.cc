#include "routines.h"

void dppequ(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double *s = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *scond = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *amax = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dppequ(LAPACK_ROW_MAJOR, uplo, n, ap, s, scond, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sppequ(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	float *s = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *scond = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *amax = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sppequ(LAPACK_ROW_MAJOR, uplo, n, ap, s, scond, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
