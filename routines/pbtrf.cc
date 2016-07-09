#include "routines.h"

void dpbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kd = info[2]->Uint32Value();
	double *ab = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_DOUBLE_ORDER(kd + 1, n, ab);
	dpbtrf_(&uplo, &n, &kd, ab, &i);
	FORTRAN_DOUBLE_ORDER(kd + 1, n, ab);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spbtrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kd = info[2]->Uint32Value();
	float *ab = reinterpret_cast<float*>(info[3].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_SINGLE_ORDER(kd + 1, n, ab);
	spbtrf_(&uplo, &n, &kd, ab, &i);
	FORTRAN_SINGLE_ORDER(kd + 1, n, ab);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
