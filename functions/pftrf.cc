#include "pftrf.h"

NAN_METHOD(dpftrf) {
	int transr = info[0]->Uint32Value();
	int uplo = info[1]->Uint32Value();
	int n = info[2]->Uint32Value();
	assert(info[3]->IsFloat64Array());
	void *a_data = info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *a = reinterpret_cast<double*>(a_data);
	int i;
	dpftrf_(&transr, &uplo, &n, a, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(spftrf) {
	int transr = info[0]->Uint32Value();
	int uplo = info[1]->Uint32Value();
	int n = info[2]->Uint32Value();
	assert(info[3]->IsFloat64Array());
	void *a_data = info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *a = reinterpret_cast<double*>(a_data);
	int i;
	spftrf_(&transr, &uplo, &n, a, &i);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
