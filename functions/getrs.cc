#include "getrs.h"
#include "fortran.h"

NAN_METHOD(dgetrs) {
	int trans = info[0]->Uint32Value();
 	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	assert(info[3]->IsFloat64Array());
	void *a_data = info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *a = reinterpret_cast<double*>(a_data);
	int lda = info[4]->Uint32Value();
	void *ipiv_data = info[5].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	assert(info[6]->IsFloat64Array());
	void *b_data = info[6].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *b = reinterpret_cast<double*>(b_data);
	int ldb = info[7]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(lda, ipiv);
	dgetrs_(&trans, &n, &nrhs, a, &lda, ipiv, b, &ldb, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(sgetrs) {
	int trans = info[0]->Uint32Value();
 	int n = info[1]->Uint32Value();
	int nrhs = info[2]->Uint32Value();
	assert(info[3]->IsFloat32Array());
	void *a_data = info[3].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *a = reinterpret_cast<float*>(a_data);
	int lda = info[4]->Uint32Value();
	void *ipiv_data = info[5].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	assert(info[6]->IsFloat32Array());
	void *b_data = info[6].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *b = reinterpret_cast<float*>(b_data);
	int ldb = info[7]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(lda, ipiv);
	sgetrs_(&trans, &n, &nrhs, a, &lda, ipiv, b, &ldb, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
