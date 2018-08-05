#include "routines.h"

void dpotri(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char uplo = info[0]->Uint32Value();
 	lapack_int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3]->Uint32Value();

	lapack_int i = LAPACKE_dpotri(LAPACK_ROW_MAJOR, uplo, n, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spotri(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	lapack_int lda = info[3]->Uint32Value();

	lapack_int i = LAPACKE_spotri(LAPACK_ROW_MAJOR, uplo, n, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
