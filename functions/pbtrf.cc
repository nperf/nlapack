#include "pbtrf.h"
#include "fortran.h"

NAN_METHOD(dpbtrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kd = info[2]->Uint32Value();
	assert(info[3]->IsFloat64Array());
	void *ab_data = info[3].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *ab = reinterpret_cast<double*>(ab_data);
	int i;
	FORTRAN_DOUBLE_ORDER(kd + 1, n, ab);
	dpbtrf_(&uplo, &n, &kd, ab, &i);
	FORTRAN_DOUBLE_ORDER(kd + 1, n, ab);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(spbtrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	int kd = info[2]->Uint32Value();
	assert(info[3]->IsFloat32Array());
	void *ab_data = info[3].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *ab = reinterpret_cast<float*>(ab_data);
	int i;
	FORTRAN_SINGLE_ORDER(kd + 1, n, ab);
	spbtrf_(&uplo, &n, &kd, ab, &i);
	FORTRAN_SINGLE_ORDER(kd + 1, n, ab);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
