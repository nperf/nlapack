#include "routines.h"

void dgbequb(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
 	lapack_int kl = info[2].As<v8::Integer>()->Value();
 	lapack_int ku = info[3].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	lapack_int ldab = info[5].As<v8::Integer>()->Value();
	double *r = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	double *c = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	double *rowcnd = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	double *colcnd = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	double *amax = reinterpret_cast<double*>(GET_CONTENTS(info[10].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgbequb(LAPACK_ROW_MAJOR, m, n, kl, ku, ab, ldab, r, c, rowcnd, colcnd, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbequb(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int m = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kl = info[2].As<v8::Integer>()->Value();
	lapack_int ku = info[3].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	lapack_int ldab = info[5].As<v8::Integer>()->Value();
	float *r = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	float *c = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	float *rowcnd = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	float *colcnd = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	float *amax = reinterpret_cast<float*>(GET_CONTENTS(info[10].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sgbequb(LAPACK_ROW_MAJOR, m, n, kl, ku, ab, ldab, r, c, rowcnd, colcnd, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
