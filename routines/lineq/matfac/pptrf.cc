#include "routines.h"

void dpptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	char n = info[1].As<v8::Integer>()->Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpptrf(LAPACK_ROW_MAJOR, uplo, n, ap);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	char n = info[1].As<v8::Integer>()->Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_spptrf(LAPACK_ROW_MAJOR, uplo, n, ap);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
