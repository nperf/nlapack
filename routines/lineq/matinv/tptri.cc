#include "routines.h"

void dtptri(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char uplo = info[0].As<v8::Integer>()->Value();
 	char diag = info[1].As<v8::Integer>()->Value();
 	lapack_int n = info[2].As<v8::Integer>()->Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dtptri(LAPACK_ROW_MAJOR, uplo, diag, n, ap);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void stptri(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	char diag = info[1].As<v8::Integer>()->Value();
	lapack_int n = info[2].As<v8::Integer>()->Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_stptri(LAPACK_ROW_MAJOR, uplo, diag, n, ap);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
