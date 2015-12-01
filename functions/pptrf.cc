#include "pptrf.h"

NAN_METHOD(dpptrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	assert(info[2]->IsFloat64Array());
	void *ap_data = info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *ap = reinterpret_cast<double*>(ap_data);
	int i;
	dpptrf_(&uplo, &n, ap, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(spptrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	assert(info[2]->IsFloat32Array());
	void *ap_data = info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *ap = reinterpret_cast<float*>(ap_data);
	int i;
	spptrf_(&uplo, &n, ap, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
