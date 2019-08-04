#include "routines.h"

void dgtrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int nrhs = info[2].As<v8::Integer>()->Value();
	double *dl = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	double *d = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *du = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *dlf = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	double *df = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	double *duf = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	double *du2 = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[10].As<v8::Int32Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[11].As<v8::Float64Array>()));
	lapack_int ldb = info[12].As<v8::Integer>()->Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[13].As<v8::Float64Array>()));
	lapack_int ldx = info[14].As<v8::Integer>()->Value();
	double *ferr = reinterpret_cast<double*>(GET_CONTENTS(info[15].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[16].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgtrfs(LAPACK_ROW_MAJOR, trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgtrfs(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
 	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int nrhs = info[2].As<v8::Integer>()->Value();
	float *dl = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	float *d = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *du = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	float *dlf = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	float *df = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	float *duf = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	float *du2 = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[10].As<v8::Int32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[11].As<v8::Float32Array>()));
	lapack_int ldb = info[12].As<v8::Integer>()->Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[13].As<v8::Float32Array>()));
	lapack_int ldx = info[14].As<v8::Integer>()->Value();
	float *ferr = reinterpret_cast<float*>(GET_CONTENTS(info[15].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[16].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sgtrfs(LAPACK_ROW_MAJOR, trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
