#include "routines.h"

void dpbrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
 	lapack_int kd = info[2].As<v8::Integer>()->Value();
	lapack_int nrhs = info[3].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5].As<v8::Integer>()->Value();
	double *afb = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldafb = info[7].As<v8::Integer>()->Value();
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldb = info[9].As<v8::Integer>()->Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[10].As<v8::Float64Array>()));
	lapack_int ldx = info[11].As<v8::Integer>()->Value();
	double *ferr = reinterpret_cast<double*>(GET_CONTENTS(info[12].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[13].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpbrfs(LAPACK_ROW_MAJOR, uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spbrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
 	lapack_int kd = info[2].As<v8::Integer>()->Value();
	lapack_int nrhs = info[3].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int ldab = info[5].As<v8::Integer>()->Value();
	float *afb = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldafb = info[7].As<v8::Integer>()->Value();
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	lapack_int ldb = info[9].As<v8::Integer>()->Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[10].As<v8::Float32Array>()));
	lapack_int ldx = info[11].As<v8::Integer>()->Value();
	float *ferr = reinterpret_cast<float*>(GET_CONTENTS(info[12].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[13].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_spbrfs(LAPACK_ROW_MAJOR, uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
