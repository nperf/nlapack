#include "routines.h"

void dtftri(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char transr = info[0]->Uint32Value();
 	char uplo = info[1]->Uint32Value();
 	char diag = info[2]->Uint32Value();
 	lapack_int n = info[3]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dtftri(LAPACK_ROW_MAJOR, transr, uplo, diag, n, a);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void stftri(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char transr = info[0]->Uint32Value();
	char uplo = info[1]->Uint32Value();
	char diag = info[2]->Uint32Value();
	lapack_int n = info[3]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_stftri(LAPACK_ROW_MAJOR, transr, uplo, diag, n, a);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
