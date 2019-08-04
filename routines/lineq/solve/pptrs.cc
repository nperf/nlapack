#include "routines.h"

void dpptrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int nrhs = info[2].As<v8::Integer>()->Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldb = info[5].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dpptrs(LAPACK_ROW_MAJOR, uplo, n, nrhs, ap, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spptrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int nrhs = info[2].As<v8::Integer>()->Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int ldb = info[5].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_spptrs(LAPACK_ROW_MAJOR, uplo, n, nrhs, ap, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
