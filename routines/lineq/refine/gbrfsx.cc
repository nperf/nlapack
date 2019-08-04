#include "routines.h"

void dgbrfsx(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
	char equed = info[1].As<v8::Integer>()->Value();
 	lapack_int n = info[2].As<v8::Integer>()->Value();
 	lapack_int kl = info[3].As<v8::Integer>()->Value();
 	lapack_int ku = info[4].As<v8::Integer>()->Value();
	lapack_int nrhs = info[5].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	lapack_int ldab = info[7].As<v8::Integer>()->Value();
	double *afb = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	lapack_int ldafb = info[9].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[10].As<v8::Int32Array>()));
	double *r = reinterpret_cast<double*>(GET_CONTENTS(info[11].As<v8::Float64Array>()));
	double *c = reinterpret_cast<double*>(GET_CONTENTS(info[12].As<v8::Float64Array>()));
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[13].As<v8::Float64Array>()));
	lapack_int ldb = info[14].As<v8::Integer>()->Value();
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[15].As<v8::Float64Array>()));
	lapack_int ldx = info[16].As<v8::Integer>()->Value();
	double *rcond = reinterpret_cast<double*>(GET_CONTENTS(info[17].As<v8::Float64Array>()));
	double *berr = reinterpret_cast<double*>(GET_CONTENTS(info[18].As<v8::Float64Array>()));
	lapack_int n_err_bnds = info[19].As<v8::Integer>()->Value();
	double *err_bnds_norm = reinterpret_cast<double*>(GET_CONTENTS(info[20].As<v8::Float64Array>()));
	double *err_bnds_comp = reinterpret_cast<double*>(GET_CONTENTS(info[21].As<v8::Float64Array>()));
	lapack_int nparams = info[22].As<v8::Integer>()->Value();
	double *params = reinterpret_cast<double*>(GET_CONTENTS(info[23].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dgbrfsx(LAPACK_ROW_MAJOR, trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void sgbrfsx(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char trans = info[0].As<v8::Integer>()->Value();
	char equed = info[1].As<v8::Integer>()->Value();
 	lapack_int n = info[2].As<v8::Integer>()->Value();
 	lapack_int kl = info[3].As<v8::Integer>()->Value();
 	lapack_int ku = info[4].As<v8::Integer>()->Value();
	lapack_int nrhs = info[5].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	lapack_int ldab = info[7].As<v8::Integer>()->Value();
	float *afb = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	lapack_int ldafb = info[9].As<v8::Integer>()->Value();
	lapack_int *ipiv = reinterpret_cast<int*>(GET_CONTENTS(info[10].As<v8::Int32Array>()));
	float *r = reinterpret_cast<float*>(GET_CONTENTS(info[11].As<v8::Float32Array>()));
	float *c = reinterpret_cast<float*>(GET_CONTENTS(info[12].As<v8::Float32Array>()));
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[13].As<v8::Float32Array>()));
	lapack_int ldb = info[14].As<v8::Integer>()->Value();
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[15].As<v8::Float32Array>()));
	lapack_int ldx = info[16].As<v8::Integer>()->Value();
	float *rcond = reinterpret_cast<float*>(GET_CONTENTS(info[17].As<v8::Float32Array>()));
	float *berr = reinterpret_cast<float*>(GET_CONTENTS(info[18].As<v8::Float32Array>()));
	lapack_int n_err_bnds = info[19].As<v8::Integer>()->Value();
	float *err_bnds_norm = reinterpret_cast<float*>(GET_CONTENTS(info[20].As<v8::Float32Array>()));
	float *err_bnds_comp = reinterpret_cast<float*>(GET_CONTENTS(info[21].As<v8::Float32Array>()));
	lapack_int nparams = info[22].As<v8::Integer>()->Value();
	float *params = reinterpret_cast<float*>(GET_CONTENTS(info[23].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_sgbrfsx(LAPACK_ROW_MAJOR, trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}
