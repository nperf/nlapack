#include "routines.h"

void dptrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	lapack_int n = info[0]->Uint32Value();
	lapack_int nrhs = info[1]->Uint32Value();
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[2].As<v8::Float64Array>()));
	double *e = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *df = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *ef = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldb = info[7]->Uint32Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldx = info[9]->Uint32Value();
	double *ferr = reinterpret_cast<double*>(GET_CONTENTS(info[10].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[11].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dptrfs(LAPACK_ROW_MAJOR, n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr)
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sptrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	lapack_int n = info[0]->Uint32Value();
	lapack_int nrhs = info[1]->Uint32Value();
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[2].As<v8::Float32Array>()));
	float *e = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *df = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *ef = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldb = info[7]->Uint32Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	lapack_int ldx = info[9]->Uint32Value();
	float *ferr = reinterpret_cast<float*>(GET_CONTENTS(info[10].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[11].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sptrfs(LAPACK_ROW_MAJOR, n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr)
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
