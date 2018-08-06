#include "routines.h"

void ilaver(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int *vers_major = reinterpret_cast<int*>(GET_CONTENTS(info[0].As<v8::Int32Array>()));
	lapack_int *vers_minor = reinterpret_cast<int*>(GET_CONTENTS(info[1].As<v8::Int32Array>()));
	lapack_int *vers_patch = reinterpret_cast<int*>(GET_CONTENTS(info[2].As<v8::Int32Array>()));

	LAPACKE_ilaver(vers_major, vers_minor, vers_patch);
}
