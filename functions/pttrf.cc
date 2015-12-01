#include "pttrf.h"

NAN_METHOD(dpttrf) {
	int n = info[0]->Uint32Value();
	assert(info[1]->IsFloat64Array());
	void *d_data = info[1].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *d = reinterpret_cast<double*>(d_data);
	assert(info[2]->IsFloat64Array());
	void *e_data = info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *e = reinterpret_cast<double*>(e_data);
	int i;
	dpttrf_(&n, d, e, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(spttrf) {
	int n = info[0]->Uint32Value();
	assert(info[1]->IsFloat32Array());
	void *d_data = info[1].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *d = reinterpret_cast<float*>(d_data);
	assert(info[2]->IsFloat32Array());
	void *e_data = info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *e = reinterpret_cast<float*>(e_data);
	int i;
	spttrf_(&n, d, e, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
