#include "routines.h"

void dpftrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int transr = info[0]->Uint32Value();
	int uplo = info[1]->Uint32Value();
	int n = info[2]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int i;
	dpftrf_(&transr, &uplo, &n, a, &i);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spftrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int transr = info[0]->Uint32Value();
	int uplo = info[1]->Uint32Value();
	int n = info[2]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int i;
	spftrf_(&transr, &uplo, &n, a, &i);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
