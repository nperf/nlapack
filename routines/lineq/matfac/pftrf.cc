#include "routines.h"

void dpftrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char transr = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	lapack_int n = info[2].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpftrf(LAPACK_ROW_MAJOR, transr, uplo, n, a);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spftrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char transr = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	lapack_int n = info[2].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_spftrf(LAPACK_ROW_MAJOR, transr, uplo, n, a);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
