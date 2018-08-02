#include "routines.h"

void dgbcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int kl = info[2]->Uint32Value();
	lapack_int ku = info[3]->Uint32Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[6].As<v8::Int32Array>()));
	double anorm = info[7]->NumberValue();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgbcon(LAPACK_ROW_MAJOR, norm, n, kl, ku, ab, ldab, ipiv, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int kl = info[2]->Uint32Value();
	lapack_int ku = info[3]->Uint32Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[6].As<v8::Int32Array>()));
	float anorm = info[7]->NumberValue();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_sgbcon(LAPACK_ROW_MAJOR, norm, n, kl, ku, ab, ldab, ipiv, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
