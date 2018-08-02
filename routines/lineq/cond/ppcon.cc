#include "routines.h"

void dppcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double anorm = info[3]->NumberValue();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dppcon(LAPACK_ROW_MAJOR, uplo, n, ap, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sppcon(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	float anorm = info[3]->NumberValue();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_sppcon(LAPACK_ROW_MAJOR, uplo, n, ap, anorm, rcond);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
