#include "routines.h"

void dpttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int n = info[0]->Uint32Value();
	double *d = reinterpret_cast<double*>(info[1].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *e = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int i;
	dpttrf_(&n, d, e, &i);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spttrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int n = info[0]->Uint32Value();
	float *d = reinterpret_cast<float*>(info[1].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *e = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int i;
	spttrf_(&n, d, e, &i);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
