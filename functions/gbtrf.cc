#include "gbtrf.h"

NAN_METHOD(dgbtrf) {
	int m = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	assert(info[4]->IsFloat64Array());
	void *ab_data = info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *ab = reinterpret_cast<double*>(ab_data);
	int ldab = info[5]->Uint32Value();
	assert(info[6]->IsInt32Array());
	void *ipiv_data = info[6].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	int i;
	dgbtrf_(&m, &n, &kl, &ku, ab, &ldab, ipiv, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(sgbtrf) {
	int m = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
 	int kl = info[2]->Uint32Value();
	int ku = info[3]->Uint32Value();
	assert(info[4]->IsFloat32Array());
	void *ab_data = info[4].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *ab = reinterpret_cast<double*>(ab_data);
	int ldab = info[5]->Uint32Value();
	assert(info[6]->IsInt32Array());
	void *ipiv_data = info[6].As<v8::Int32Array>()->Buffer()->GetContents().Data();
	int *ipiv = reinterpret_cast<int*>(ipiv_data);
	int i;
	sgbtrf_(&m, &n, &kl, &ku, ab, &ldab, ipiv, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}