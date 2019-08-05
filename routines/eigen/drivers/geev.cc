#include "routines.h"

void dgeev(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	lapack_int jobvl = info[0].As<v8::Integer>()->Value();
 	lapack_int jobvr = info[1].As<v8::Integer>()->Value();
 	lapack_int n = info[2].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int lda = info[4].As<v8::Integer>()->Value();
	double *wr = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *wi = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	double *vl = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	lapack_int ldvl = info[8].As<v8::Integer>()->Value();
	double *vr = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	lapack_int ldvr = info[10].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dgeev(LAPACK_ROW_MAJOR, jobvl, jobvr, n, a, lda, wr, wi, vl, ldvl, vr, ldvr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgeev(const v8::FunctionCallbackInfo<v8::Value>& info) {
	lapack_int jobvl = info[0].As<v8::Integer>()->Value();
	lapack_int jobvr = info[1].As<v8::Integer>()->Value();
	lapack_int n = info[2].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int lda = info[4].As<v8::Integer>()->Value();
	float *wr = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	float *wi = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	float *vl = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	lapack_int ldvl = info[8].As<v8::Integer>()->Value();
	float *vr = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	lapack_int ldvr = info[10].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_sgeev(LAPACK_ROW_MAJOR, jobvl, jobvr, n, a, lda, wr, wi, vl, ldvl, vr, ldvr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
