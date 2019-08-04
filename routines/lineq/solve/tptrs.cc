#include "routines.h"

void dtptrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	char trans = info[1].As<v8::Integer>()->Value();
	char diag = info[2].As<v8::Integer>()->Value();
	lapack_int n = info[3].As<v8::Integer>()->Value();
	lapack_int nrhs = info[4].As<v8::Integer>()->Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldb = info[7].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dtptrs(LAPACK_ROW_MAJOR, uplo, trans, diag, n, nrhs, ap, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void stptrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	char trans = info[1].As<v8::Integer>()->Value();
	char diag = info[2].As<v8::Integer>()->Value();
	lapack_int n = info[3].As<v8::Integer>()->Value();
	lapack_int nrhs = info[4].As<v8::Integer>()->Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldb = info[7].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_stptrs(LAPACK_ROW_MAJOR, uplo, trans, diag, n, nrhs, ap, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
