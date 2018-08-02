#include "routines.h"

void dsptrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldb = info[6]->Uint32Value();

	lapack_int i = LAPACKE_dsptrs(LAPACK_ROW_MAJOR, uplo, n, nrhs, ap, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssptrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[4].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int ldb = info[6]->Uint32Value();

	lapack_int i = LAPACKE_ssptrs(LAPACK_ROW_MAJOR, uplo, n, nrhs, ap, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
