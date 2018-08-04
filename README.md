# nLAPACK ![travis](https://img.shields.io/travis/mateogianolio/nlapack.svg)

Node `>=4.0` C++ bindings for all single- and double-precision CLAPACK (Linear Algebra Package) routines.

```bash
$ brew install lapack # OSX
$ brew link lapack --force # OSX
$ npm install mateogianolio/nlapack
$ npm test
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

#### [Refining the Solution and Estimating Its Error](https://software.intel.com/en-us/mkl-developer-reference-fortran-estimating-the-condition-number-lapack-computational-routines)

- [x] `?gerfs(trans, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr)`
- [x] `?gerfsx(trans, equed, n, nrhs, a, lda, af, ldaf, ipiv, r, c, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [ ] `?gbrfs(trans, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?gbrfsx(trans, equed, n, kl, ku, nrhs, ab, ldab, afb, ldafb, ipiv, r, c, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [ ] `?gtrfs(trans, n, nrhs, dl, d, du, dlf, df, duf, du2, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?porfs(uplo, n, nrhs, a, lda, af, ldaf, b, ldb, x, ldx, ferr, berr)`
- [ ] `?porfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, s, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [ ] `?pprfs(uplo, n, nrhs, ap, afp, b, ldb, x, ldx, ferr, berr)`
- [ ] `?pbrfs(uplo, n, kd, nrhs, ab, ldab, afb, ldafb, b, ldb, x, ldx, ferr, berr)`
- [ ] `?ptrfs(n, nrhs, d, e, df, ef, b, ldb, x, ldx, ferr, berr)`
- [ ] `?syrfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?syrfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [ ] `?herfs(uplo, n, nrhs, a, lda, af, ldaf, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?herfsx(uplo, equed, n, nrhs, a, lda, af, ldaf, ipiv, s, b, ldb, x, ldx, rcond, berr, n_err_bnds, err_bnds_norm, err_bnds_comp, nparams, params)`
- [ ] `?sprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?hprfs(uplo, n, nrhs, ap, afp, ipiv, b, ldb, x, ldx, ferr, berr)`
- [ ] `?trrfs(uplo, trans, diag, n, nrhs, a, lda, b, ldb, x, ldx, ferr, berr)`
- [ ] `?tprfs(uplo, trans, diag, n, nrhs, ap, b, ldb, x, ldx, ferr, berr)`
- [ ] `?tbrfs(uplo, trans, diag, n, kd, nrhs, ab, ldab, b, ldb, x, ldx, ferr, berr)`


Works out of the box with OSX since CLAPACK is included in the standard Accelerate framework. You might have to download and build [LAPACK](http://www.netlib.org/lapack/#_lapack_version_3_6_0) from source on other operating systems (**LINUX:** `sudo apt-get liblapack-dev`).

Double precision functions expect `Float64Array` vectors, single precision functions expect `Float32Array` vectors.
