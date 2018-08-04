#include "routines.h"

void dsprfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
 	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *afp = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldb = info[7]->Uint32Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldx = info[9]->Uint32Value();
	double *ferr = reinterpret_cast<double*>(GET_CONTENTS(info[10].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[11].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dsprfs(LAPACK_ROW_MAJOR, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssprfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
 	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *afp = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[5].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldb = info[7]->Uint32Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	lapack_int ldx = info[9]->Uint32Value();
	float *ferr = reinterpret_cast<float*>(GET_CONTENTS(info[10].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[11].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_ssprfs(LAPACK_ROW_MAJOR, uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
