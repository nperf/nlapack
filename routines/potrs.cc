#include "routines.h"

void dpotrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[4]->Uint32Value();
	double *b = reinterpret_cast<double*>(info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int ldb = info[5]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	FORTRAN_DOUBLE_ORDER(ldb, n, b);
	dpotrs_(&uplo, &n, &nrhs, a, &lda, b, &ldb, &i);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	FORTRAN_DOUBLE_ORDER(ldb, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spotrs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	float *a = reinterpret_cast<float*>(info[3].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int lda = info[4]->Uint32Value();
	float *b = reinterpret_cast<float*>(info[5].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	int ldb = info[5]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	FORTRAN_SINGLE_ORDER(ldb, n, b);
	spotrs_(&uplo, &n, &nrhs, a, &lda, b, &ldb, &i);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	FORTRAN_SINGLE_ORDER(ldb, n, b);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
