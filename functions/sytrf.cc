#include "sytrf.h"

NAN_METHOD(dsytrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	assert(info[2]->IsFloat64Array());
	void *a_data = info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *a = reinterpret_cast<double*>(a_data);
	int lda = info[3]->Uint32Value();
	assert(info[4]->IsInt32Array());
	void *ipiv_data = info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	assert(info[5]->IsFloat64Array());
	void *work_data = info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *work = reinterpret_cast<double*>(work_data);
	int lwork = info[6]->Uint32Value();
	int i;
	dsytrf_(&uplo, &n, a, &lda, ipiv, work, &lwork, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(ssytrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	assert(info[2]->IsFloat64Array());
	void *a_data = info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *a = reinterpret_cast<double*>(a_data);
	int lda = info[3]->Uint32Value();
	assert(info[4]->IsInt32Array());
	void *ipiv_data = info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	assert(info[5]->IsFloat64Array());
	void *work_data = info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *work = reinterpret_cast<double*>(work_data);
	int lwork = info[6]->Uint32Value();
	int i;
	ssytrf_(&uplo, &n, a, &lda, ipiv, work, &lwork, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
