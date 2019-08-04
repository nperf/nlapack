#include "routines.h"

void dgbrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
 	lapack_int kl = info[2].As<v8::Integer>()->Value();
 	lapack_int ku = info[3].As<v8::Integer>()->Value();
	lapack_int nrhs = info[4].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	lapack_int ldab = info[6].As<v8::Integer>()->Value();
	double *afb = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	lapack_int ldafb = info[8].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[9].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[10].As<v8::Float64Array>()));
	lapack_int ldb = info[11].As<v8::Integer>()->Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[12].As<v8::Float64Array>()));
	lapack_int ldx = info[13].As<v8::Integer>()->Value();
	double *ferr = reinterpret_cast<double*>(GET_CONTENTS(info[14].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[15].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgbrfs(LAPACK_ROW_MAJOR, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
 	lapack_int kl = info[2].As<v8::Integer>()->Value();
 	lapack_int ku = info[3].As<v8::Integer>()->Value();
	lapack_int nrhs = info[4].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	lapack_int ldab = info[6].As<v8::Integer>()->Value();
	float *afb = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	lapack_int ldafb = info[8].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[9].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[10].As<v8::Float32Array>()));
	lapack_int ldb = info[11].As<v8::Integer>()->Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[12].As<v8::Float32Array>()));
	lapack_int ldx = info[13].As<v8::Integer>()->Value();
	float *ferr = reinterpret_cast<float*>(GET_CONTENTS(info[14].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[15].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sgbrfs(LAPACK_ROW_MAJOR, trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
