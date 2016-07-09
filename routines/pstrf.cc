#include "routines.h"

void dpstrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int *piv = reinterpret_cast<int*>(info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int rank = info[5]->Uint32Value();
	double tol = info[6]->NumberValue();
	double *work = reinterpret_cast<double*>(info[7].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	IPIV_FORTRAN(lda, piv);
	dpstrf_(&uplo, &n, a, &lda, piv, &rank, &tol, work, &i);
	IPIV_C(lda, piv);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spstrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int *piv = reinterpret_cast<int*>(info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	int rank = info[5]->Uint32Value();
	float tol = info[6]->NumberValue();
	float *work = reinterpret_cast<float*>(info[7].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	IPIV_FORTRAN(lda, piv);
	spstrf_(&uplo, &n, a, &lda, piv, &rank, &tol, work, &i);
	IPIV_C(lda, piv);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
