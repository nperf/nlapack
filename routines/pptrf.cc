#include "routines.h"

void dpptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	double *ap = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int i;
	dpptrf_(&uplo, &n, ap, &i);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spptrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	float *ap = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int i;
	spptrf_(&uplo, &n, ap, &i);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
