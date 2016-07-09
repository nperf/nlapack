#include "routines.h"

void dpotrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	dpotrf_(&uplo, &n, a, &lda, &i);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spotrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	spotrf_(&uplo, &n, a, &lda, &i);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
