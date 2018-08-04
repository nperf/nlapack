#include "routines.h"

void dgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int kl = info[2]->Uint32Value();
	lapack_int ku = info[3]->Uint32Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[6].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_dgbtrf(LAPACK_ROW_MAJOR, m, n, kl, ku, ab, ldab, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
 	lapack_int kl = info[2]->Uint32Value();
	lapack_int ku = info[3]->Uint32Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5]->Uint32Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[6].As<v8::Int32Array>()));

	lapack_int i = LAPACKE_sgbtrf(LAPACK_ROW_MAJOR, m, n, kl, ku, ab, ldab, ipiv);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
