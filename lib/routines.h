#ifndef ROUTINES_H
#define ROUTINES_H

#include <node.h>
#include <lapacke.h>

#define GET_CONTENTS(view) \
(static_cast<unsigned char*>(view->Buffer()->GetContents().Data()) + view->ByteOffset())

// LAPACK Linear Equation Computational Routines
// LAPACK Matrix Factorization Routines
void dgetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgetrf2(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetrf2(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void ddttrfb(const v8::FunctionCallbackInfo<v8::Value>& info);
void sdttrfb(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpotrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spotrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpotrf2(const v8::FunctionCallbackInfo<v8::Value>& info);
void spotrf2(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpstrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spstrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpftrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spftrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrf_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrf_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrf_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrf_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrf_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrf_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrf_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrf_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void shptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// LAPACK Routines for Solving Systems of Linear Equations
void dgetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void ddttrsb(const v8::FunctionCallbackInfo<v8::Value>& info);
void sdttrsb(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpotrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spotrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpftrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spftrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrs_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrs_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrs_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrs_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrs_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrs_aa(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrs_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrs_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrs2(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrs2(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhetrs2(const v8::FunctionCallbackInfo<v8::Value>& info);
void shetrs2(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dhptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void shptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtrtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void strtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void stptrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void stbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// LAPACK Routines for Estimating the Condition Number
void dgecon(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgecon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgtcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgtcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpocon(const v8::FunctionCallbackInfo<v8::Value>& info);
void spocon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dppcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void sppcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dptcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void sptcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsycon(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssycon(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dsycon_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ssycon_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhecon(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shecon(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhecon_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shecon_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
void dspcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void sspcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtrcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void strcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtpcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void stpcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtbcon(const v8::FunctionCallbackInfo<v8::Value>& info);
void stbcon(const v8::FunctionCallbackInfo<v8::Value>& info);
// LAPACK Routines for Refining the Solution and Estimating Its Error
void dgerfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgerfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgerfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgerfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbrfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbrfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgtrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgtrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dporfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sporfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dporfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void sporfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dptrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sptrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsyrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssyrfs(const v8::FunctionCallbackInfo<v8::Value>& info);

#endif
