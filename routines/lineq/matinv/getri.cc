#include "routines.h"

void dgetri(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	lapack_int n = info[0]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[1].As<v8::Float64Array>()));
	lapack_int lda = info[2]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_dgetri(LAPACK_ROW_MAJOR, n, a, lda, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgetri(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int n = info[0]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[1].As<v8::Float32Array>()));
	lapack_int lda = info[2]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[3].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_sgetri(LAPACK_ROW_MAJOR, n, a, lda, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
