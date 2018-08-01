#include "routines.h"

void dpbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int kd = info[2]->Uint32Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int ldab = info[4]->Uint32Value();

	lapack_int i = LAPACKE_dpbtrf(LAPACK_ROW_MAJOR, uplo, n, kd, ab, ldab);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int kd = info[2]->Uint32Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int ldab = info[4]->Uint32Value();

	lapack_int i = LAPACKE_spbtrf(LAPACK_ROW_MAJOR, uplo, n, kd, ab, ldab);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
