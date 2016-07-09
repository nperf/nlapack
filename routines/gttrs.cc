#include "routines.h"

void dgttrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int trans = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	double *dl = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *d = reinterpret_cast<double*>(info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *du = reinterpret_cast<double*>(info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *du2 = reinterpret_cast<double*>(info[6].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int *ipiv = reinterpret_cast<int*>(info[7].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	double *b = reinterpret_cast<double*>(info[8].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldb = info[9]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(ldb, ipiv);
	dgttrs_(&trans, &n, &nrhs, dl, d, du, du2, ipiv, b, &ldb, &i);
	IPIV_C(ldb, ipiv);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgttrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int trans = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	float *dl = reinterpret_cast<float*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	float *d = reinterpret_cast<float*>(info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	float *du = reinterpret_cast<float*>(info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	float *du2 = reinterpret_cast<float*>(info[6].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int *ipiv = reinterpret_cast<int*>(info[7].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	float *b = reinterpret_cast<float*>(info[8].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldb = info[9]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(ldb, ipiv);
	sgttrs_(&trans, &n, &nrhs, dl, d, du, du2, ipiv, b, &ldb, &i);
	IPIV_C(ldb, ipiv);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
