#include "routines.h"

void dgeequ(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
 	lapack_int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	lapack_int lda = info[3]->Uint32Value();
	double *r = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *c = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *rowcnd = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	double *colcnd = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	double *amax = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgeequ(LAPACK_ROW_MAJOR, m, n, a, lda, r, c, rowcnd, colcnd, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgeequ(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	lapack_int lda = info[3]->Uint32Value();
	float *r = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *c = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	float *rowcnd = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	float *colcnd = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	float *amax = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sgeequ(LAPACK_ROW_MAJOR, m, n, a, lda, r, c, rowcnd, colcnd, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
