#include "lapacke.h"
#include "routines.h"

void dpotrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int lda = info[4]->Uint32Value();
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldb = info[5]->Uint32Value();

	lapack_int i = LAPACKE_dpotrs(LAPACK_ROW_MAJOR, uplo, n, nrhs, a, lda, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spotrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int lda = info[4]->Uint32Value();
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int ldb = info[5]->Uint32Value();

	lapack_int i = LAPACKE_spotrs(LAPACK_ROW_MAJOR, uplo, n, nrhs, a, lda, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
