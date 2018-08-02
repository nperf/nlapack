#include "routines.h"

void dtpcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0]->Uint32Value();
	char uplo = info[1]->Uint32Value();
	char diag = info[2]->Uint32Value();
	lapack_int n = info[3]->Uint32Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dtpcon(LAPACK_ROW_MAJOR, norm, uplo, diag, n, ap, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void stpcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char norm = info[0]->Uint32Value();
	char uplo = info[1]->Uint32Value();
	char diag = info[2]->Uint32Value();
	lapack_int n = info[3]->Uint32Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_stpcon(LAPACK_ROW_MAJOR, norm, uplo, diag, n, ap, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
