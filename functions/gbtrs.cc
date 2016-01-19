#include "gbtrs.h"
#include "fortran.h"

NAN_METHOD(dgbtrs) {
	int trans = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	int nrhs = info[4]->Uint32Value();
	assert(info[5]->IsFloat64Array());
	void *ab_data = info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *ab = reinterpret_cast<double*>(ab_data);
	int ldab = info[6]->Uint32Value();
	assert(info[7]->IsInt32Array());
	void *ipiv_data = info[7].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	assert(info[8]->IsFloat64Array());
	void *b_data = info[8].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *b = reinterpret_cast<double*>(b_data);
	int ldb = info[9]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(ldab, n, ab);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(ldab, ipiv);
	dgbtrs_(&trans, &n, &kl, &ku, &nrhs, ab, &ldab, ipiv, b, &ldb, &i);
	IPIV_C(ldab, ipiv);
	FORTRAN_DOUBLE_ORDER(ldab, n, ab);
	FORTRAN_DOUBLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(sgbtrs) {
	int trans = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	int nrhs = info[4]->Uint32Value();
	assert(info[5]->IsFloat32Array());
	void *ab_data = info[5].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *ab = reinterpret_cast<float*>(ab_data);
	int ldab = info[6]->Uint32Value();
	assert(info[7]->IsInt32Array());
	void *ipiv_data = info[7].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	assert(info[8]->IsFloat32Array());
	void *b_data = info[8].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *b = reinterpret_cast<float*>(b_data);
	int ldb = info[9]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(ldab, n, ab);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	IPIV_FORTRAN(ldab, ipiv);
	sgbtrs_(&trans, &n, &kl, &ku, &nrhs, ab, &ldab, ipiv, b, &ldb, &i);
	IPIV_C(ldab, ipiv);
	FORTRAN_SINGLE_ORDER(ldab, n, ab);
	FORTRAN_SINGLE_ORDER(nrhs, n, b);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
