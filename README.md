# nLAPACK ![travis](https://img.shields.io/travis/nperf/nlapack.svg)

[![Greenkeeper badge](https://badges.greenkeeper.io/nperf/nlapack.svg)](https://greenkeeper.io/)

Node `>=6.9` C++ bindings for all single- and double-precision LAPACK (Linear Algebra Package) routines.

### Requirements

#### Linux

```bash
$ sudo apt-get install libblas-dev liblapack-dev liblapacke-dev
```

#### MacOS

```bash
$ brew install lapack
```

### Usage

```bash
$ npm install nlapack
```

### [LAPACK Linear Equation Computational Routines](https://software.intel.com/en-us/mkl-developer-reference-fortran-lapack-linear-equation-computational-routines)

#### [Matrix Factorization](https://software.intel.com/en-us/node/468680)

- [x] `?getrf(m, n, a, lda, ipiv)`
- [ ] `?getrf2(m, n, a, lda, ipiv)`
- [x] `?gbtrf(m, n, kl, ku, ab, ldab, ipiv)`
- [x] `?gttrf(n, dl, d, du, du2, ipiv)`
- [ ] `?dttrfb(n, dl, d, du)`
- [x] `?potrf(uplo, n, a, lda)`
- [ ] `?potrf2(uplo, n, a, lda)`
- [x] `?pstrf(uplo, n, a, lda, piv, rank, tol)`
- [x] `?pftrf(transr, uplo, n, a)`
- [x] `?pptrf(uplo, n, ap)`
- [x] `?pbtrf(uplo, n, kd, ab, ldab)`
- [x] `?pttrf(n, d, e)`
- [x] `?sytrf(uplo, n, a, lda, ipiv)`
- [ ] `?sytrf_aa(uplo, n, a, lda, ipiv)`
- [ ] `?sytrf_rook(uplo, n, a, lda, ipiv)`
- [ ] `?hetrf(uplo, n, a, lda, ipiv)`
- [ ] `?hetrf_aa(uplo, n, a, lda, ipiv)`
- [ ] `?hetrf_rook(uplo, n, a, lda, ipiv)`
- [x] `?sptrf(uplo, n, ap, ipiv)`
- [ ] `?hptrf(uplo, n, ap, ipiv)`

#### [Solving Systems of Linear Equations](https://software.intel.com/en-us/node/520891)

- [x] `?getrs(trans, n, nrhs, a, lda, ipiv, b, ldb)`
- [x] `?gbtrs(trans, n, kl, ku, nrhs, ab, ldab, ipiv, b, ldb)`
- [x] `?gttrs(trans, n, nrhs, dl, d, du du2, ipiv, b, ldb)`
- [ ] `?dttrsb(trans, n, nrhs, dl, d, du, b, ldb)`
- [x] `?potrs(uplo, n, nrhs, a, lda, b, ldb)`
- [x] `?pftrs(transr, uplo, n, nrhs, a, b, ldb)`
- [x] `?pptrs(uplo, n, nrhs, ap, b, ldb)`
- [x] `?pbtrs(uplo, n, kd, nrhs, ab, ldab, b, ldb)`
- [x] `?pttrs(n, nrhs, d, e, b, ldb)`
- [x] `?sytrs(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
- [ ] `?sytrs_aa(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
- [ ] `?sytrs_rook(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
- [ ] `?hetrs()`
- [ ] `?hetrs_aa()`
- [ ] `?hetrs_rook()`
- [ ] `?sytrs2(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
- [ ] `?hetrs2()`
- [x] `?sptrs(uplo, n, nrhs, ap, ipiv, b, ldb)`
- [ ] `?hptrs()`
- [x] `?trtrs(uplo, trans, diag, n, nrhs, a, lda, b, ldb)`
- [x] `?tptrs(uplo, trans, diag, n, nrhs, ap, b, ldb)`
- [x] `?tbtrs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb)`

#### [Estimating the Condition Number](https://software.intel.com/en-us/mkl-developer-reference-fortran-estimating-the-condition-number-lapack-computational-routines)

- [x] `?gecon(norm, n, a, lda, anorm, rcond)`
- [x] `?gbcon(norm, n, kl, ku, ab, ldab, ipiv, anorm, rcond)`
- [x] `?gtcon(norm, n, dl, d, du, du2, ipiv, anorm, rcond)`
- [x] `?pocon(uplo, n, a, lda, anorm, rcond)`
- [x] `?ppcon(uplo, n, ap, anorm, rcond)`
- [x] `?pbcon(uplo, n, kd, ab, ldab, anorm, rcond)`
- [x] `?ptcon(uplo, d, e, anorm, rcond)`
- [x] `?sycon(uplo, n, a, lda, ipiv, anorm, rcond)`
- [ ] `?sycon_rook(uplo, n, a, lda, ipiv, anorm, rcond)`
- [ ] `?hecon(uplo, n, a, lda, ipiv, anorm, rcond)`
- [ ] `?hecon_rook(uplo, n, a, lda, ipiv, anorm, rcond)`
- [x] `?spcon(uplo, n, ap, ipiv, anorm, rcond)`
- [x] `?trcon(norm, uplo, diag, n, a, lda, rcond)`
- [x] `?tpcon(norm, uplo, diag, n, ap, rcond)`
- [x] `?tbcon(norm, uplo, diag, n, kd, ab, ldab, rcond)`

#### [Refining the Solution and Estimating Its Error](https://software.intel.com/en-us/mkl-developer-reference-fortran-refining-the-solution-and-estimating-its-error-lapack-computational-routines)

- [x] `?gerfs(trans, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr)`
- [x] `?gerfsx(trans, equed, n, nrhs, a, lda, af, ldaf, ipiv, r, c, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [x] `?gbrfs(trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr)`
- [x] `?gbrfsx(trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [x] `?gtrfs(trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr)`
- [x] `?porfs(uplo, n, nrhs, a, lda, af, ldaf, b, ldb, x, ldx, ferr, berr)`
- [x] `?porfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, s, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [x] `?pprfs(uplo, n, nrhs, ap, afp, b, ldb, x, ldx, ferr, berr)`
- [x] `?pbrfs(uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr)`
- [x] `?ptrfs(n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr)`
- [x] `?syrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr)`
- [x] `?syrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [ ] `?herfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?herfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [x] `?sprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?hprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr)`
- [x] `?trrfs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, x, ldx, ferr, berr)`
- [x] `?tprfs(uplo, trans, diag, n, nrhs, ap, b, ldb, x, ldx, ferr, berr)`
- [x] `?tbrfs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr)`

#### [Matrix Inversion](https://software.intel.com/en-us/mkl-developer-reference-fortran-matrix-inversion-lapack-computational-routines)

- [x] `?getri(n, a, lda, ipiv)`
- [x] `?potri(uplo, n, a, lda)`
- [x] `?pftri(transr, uplo, n, a)`
- [x] `?pptri(uplo, n, ap)`
- [x] `?sytri(uplo, n, a, lda, ipiv)`
- [ ] `?sytri_rook(uplo, n, a, lda, ipiv)`
- [ ] `?hetri(uplo, n, a, lda, ipiv)`
- [ ] `?hetri_rook(uplo, n, a, lda, ipiv)`
- [ ] `?sytri2(uplo, n, a, lda, ipiv)`
- [ ] `?hetri2(uplo, n, a, lda, ipiv)`
- [ ] `?sytri2x(uplo, n, a, lda, ipiv, nb)`
- [ ] `?hetri2x(uplo, n, a, lda, ipiv, nb)`
- [x] `?sptri(uplo, n, ap, ipiv)`
- [ ] `?hptri(uplo, n, ap, ipiv)`
- [x] `?trtri(uplo, diag, n, a, lda)`
- [x] `?tftri(transr, uplo, diag, n, a)`
- [x] `?tptri(uplo, diag, n, ap)`

#### [Matrix Equilibration](https://software.intel.com/en-us/mkl-developer-reference-fortran-matrix-equilibration-lapack-computational-routines)

- [x] `?geequ(m, n, a, lda, r, c, rowcnd, colcnd, amax)`
- [x] `?geequb(m, n, a, lda, r, c, rowcnd, colcnd, amax)`
- [x] `?gbequ(m, n, kl, ku, ab, ldab, r, c, rowcnd, colcnd, amax)`
- [x] `?gbequb(m, n, kl, ku, ab, ldab, r, c, rowcnd, colcnd, amax)`
- [x] `?poequ(n, a, lda, s, scond, amax)`
- [x] `?poequb(n, a, lda, s, scond, amax)`
- [x] `?ppequ(uplo, n, ap, s, scond, amax)`
- [x] `?pbequ(uplo, n, kd, ab, ldab, s, scond, amax)`
- [x] `?syequb(uplo, n, a, lda, s, scond, amax)`
- [ ] `?heequb(uplo, n, a, lda, s, scond, amax)`

### [LAPACK Utility Functions and Routines](https://software.intel.com/en-us/mkl-developer-reference-fortran-matrix-equilibration-lapack-computational-routines)

- [x] `ilaver(vers_major, vers_minor, vers_patch)`
- [x] `?lamch(cmach)`

### [LAPACK Test Functions and Routines](https://software.intel.com/en-us/mkl-developer-reference-fortran-lapack-test-functions-and-routines)

- [x] `?latms(m, n, dist, iseed, sym, d, mode, cond, dmax, kl, ku, pack, a, lda)`


Double precision functions expect `Float64Array` vectors, single precision functions expect `Float32Array` vectors.
