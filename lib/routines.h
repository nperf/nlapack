#ifndef ROUTINES_H
#define ROUTINES_H

#include <node.h>
#include <complex.h>
#include <lapacke.h>

#if V8_MAJOR_VERSION < 8
  #define GET_CONTENTS(view) \
  (static_cast<unsigned char*>(view->Buffer()->GetContents().Data()) + view->ByteOffset())
#else
  #define GET_CONTENTS(view) \
  (static_cast<unsigned char*>(view->Buffer()->GetBackingStore()->Data()) + view->ByteOffset())
#endif

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
void dsyrfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssyrfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dherfs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sherfs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dherfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sherfsx(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtrrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void strrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void stprfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtbrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
void stbrfs(const v8::FunctionCallbackInfo<v8::Value>& info);
// LAPACK Routines for Matrix Inversion
void dgetri(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpotri(const v8::FunctionCallbackInfo<v8::Value>& info);
void spotri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpftri(const v8::FunctionCallbackInfo<v8::Value>& info);
void spftri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpptri(const v8::FunctionCallbackInfo<v8::Value>& info);
void spptri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytri(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytri(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dsytri_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ssytri_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhetri(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shetri(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhetri_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shetri_rook(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dsytri2(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ssytri2(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhetri2(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shetri2(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dsytri2x(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ssytri2x(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhetri2x(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shetri2x(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsptri(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssptri(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dhptri(const v8::FunctionCallbackInfo<v8::Value>& info);
// void shptri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtrtri(const v8::FunctionCallbackInfo<v8::Value>& info);
void strtri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtftri(const v8::FunctionCallbackInfo<v8::Value>& info);
void stftri(const v8::FunctionCallbackInfo<v8::Value>& info);
void dtptri(const v8::FunctionCallbackInfo<v8::Value>& info);
void stptri(const v8::FunctionCallbackInfo<v8::Value>& info);
// LAPACK Routines for Matrix Equilibration
void dgeequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgeequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgeequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgeequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpoequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void spoequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpoequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void spoequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void dppequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void sppequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbequ(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsyequb(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssyequb(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dheequb(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sheequb(const v8::FunctionCallbackInfo<v8::Value>& info);
// LAPACK Linear Equation Driver Routines
void dgesv(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgesv(const v8::FunctionCallbackInfo<v8::Value>& info);

// LAPACK Least Squares and Eigenvalue Problem Driver Routines
void dgeev(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgeev(const v8::FunctionCallbackInfo<v8::Value>& info);

// LAPACK Utility Functions and Routines
void ilaver(const v8::FunctionCallbackInfo<v8::Value>& info);
void dlamch(const v8::FunctionCallbackInfo<v8::Value>& info);
void slamch(const v8::FunctionCallbackInfo<v8::Value>& info);

// LAPACK Test Functions and Routines
void dlatms(const v8::FunctionCallbackInfo<v8::Value>& info);
void slatms(const v8::FunctionCallbackInfo<v8::Value>& info);

#endif
