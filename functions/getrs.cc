#include "getrs.h"

NAN_METHOD(dgetrs) {
	char trans = info[0]->Uint32Value() + '0';
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
	dgetrs_(&trans, &n, &nrhs, a, &lda, ipiv, b, &ldb, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(sgetrs) {
	char trans = info[0]->Uint32Value() + '0';
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
	sgetrs_(&trans, &n, &nrhs, a, &lda, ipiv, b, &ldb, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
