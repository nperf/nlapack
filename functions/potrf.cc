#include "potrf.h"
#include "fortran.h"

NAN_METHOD(dpotrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	assert(info[2]->IsFloat64Array());
	void *a_data = info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data();
	double *a = reinterpret_cast<double*>(a_data);
	int lda = info[3]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	dpotrf_(&uplo, &n, a, &lda, &i);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}

NAN_METHOD(spotrf) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	assert(info[2]->IsFloat32Array());
	void *a_data = info[2].As<v8::Float32Array>()->Buffer()->GetContents().Data();
	float *a = reinterpret_cast<float*>(a_data);
	int lda = info[3]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	spotrf_(&uplo, &n, a, &lda, &i);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		Nan::New<v8::Number>(i)
	);
}
