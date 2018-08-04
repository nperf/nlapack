#include "routines.h"

void dgttrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	double *dl = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *du = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *du2 = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[7].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldb = info[9]->Uint32Value();

	lapack_int i = LAPACKE_dgttrs(LAPACK_ROW_MAJOR, trans, n, nrhs, dl, d, du, du2, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgttrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0]->Uint32Value();
	lapack_int n = info[1]->Uint32Value();
	lapack_int nrhs = info[2]->Uint32Value();
	float *dl = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	float *du = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	float *du2 = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[7].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldb = info[9]->Uint32Value();

	lapack_int i = LAPACKE_sgttrs(LAPACK_ROW_MAJOR, trans, n, nrhs, dl, d, du, du2, ipiv, b, ldb);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
