#include "routines.h"

void dtbrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	char trans = info[1]->Uint32Value();
	char diag = info[2]->Uint32Value();
 	lapack_int n = info[3]->Uint32Value();
 	lapack_int kd = info[4]->Uint32Value();
	lapack_int nrhs = info[5]->Uint32Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldab = info[7]->Uint32Value();
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldb = info[9]->Uint32Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[10].As<v8::Float64Array>()));
	lapack_int ldx = info[11]->Uint32Value();
	double *ferr = reinterpret_cast<double*>(GET_CONTENTS(info[12].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[13].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dtbrfs(LAPACK_ROW_MAJOR, uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void stbrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	char trans = info[1]->Uint32Value();
	char diag = info[2]->Uint32Value();
 	lapack_int n = info[3]->Uint32Value();
 	lapack_int kd = info[4]->Uint32Value();
	lapack_int nrhs = info[5]->Uint32Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldab = info[7]->Uint32Value();
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	lapack_int ldb = info[9]->Uint32Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[10].As<v8::Float32Array>()));
	lapack_int ldx = info[11]->Uint32Value();
	float *ferr = reinterpret_cast<float*>(GET_CONTENTS(info[12].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[13].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_stbrfs(LAPACK_ROW_MAJOR, uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
