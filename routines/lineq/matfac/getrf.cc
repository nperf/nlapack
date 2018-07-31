#include "lapacke.h"
#include "routines.h"

void dgetrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
 	lapack_int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_dgetrf(LAPACK_ROW_MAJOR, m, n, a, lda, ipiv);
	IPIV_C(lda, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgetrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	lapack_int lda = info[3]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<lapack_int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_sgetrf(LAPACK_ROW_MAJOR, m, n, a, lda, ipiv);
	IPIV_C(lda, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
