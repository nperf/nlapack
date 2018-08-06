#include "routines.h"

void dlamch(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char cmach = info[0]->Uint32Value();

	double val = LAPACKE_dlamch(cmach);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), val)
	);
}

void slamch(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char cmach = info[0]->Uint32Value();

	float val = LAPACKE_slamch(cmach);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), val)
	);
}
