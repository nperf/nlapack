#include "routines.h"

void dgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kl = info[2].As<v8::Integer>()->Value();
	lapack_int ku = info[3].As<v8::Integer>()->Value();
	lapack_int nrhs = info[4].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldab = info[6].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[7].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldb = info[9].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dgbtrs(LAPACK_ROW_MAJOR, trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kl = info[2].As<v8::Integer>()->Value();
	lapack_int ku = info[3].As<v8::Integer>()->Value();
	lapack_int nrhs = info[4].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int ldab = info[6].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[7].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	lapack_int ldb = info[9].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_sgbtrs(LAPACK_ROW_MAJOR, trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
