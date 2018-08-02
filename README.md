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
- [x] `?getrf2(m, n, a, lda, ipiv)`
- [x] `?gbtrf(m, n, kl, ku, ab, ldab, ipiv)`
- [x] `?gttrf(n, dl, d, du, du2, ipiv)`
- [ ] `?dttrfb(n, dl, d, du)`
- [x] `?potrf(uplo, n, a, lda)`
- [x] `?potrf2(uplo, n, a, lda)`
- [x] `?pstrf(uplo, n, a, lda, piv, rank, tol)`
- [x] `?pftrf(transr, uplo, n, a)`
- [x] `?pptrf(uplo, n, ap)`
- [x] `?pbtrf(uplo, n, kd, ab, ldab)`
- [x] `?pttrf(n, d, e)`
- [x] `?sytrf(uplo, n, a, lda, ipiv)`
- [x] `?sytrf_aa(uplo, n, a, lda, ipiv)`
- [x] `?sytrf_rook(uplo, n, a, lda, ipiv)`
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
- [x] `?sytrs_aa(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
- [x] `?sytrs_rook(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
- [ ] `?hetrs()`
- [ ] `?hetrs_aa()`
- [ ] `?hetrs_rook()`
- [x] `?sytrs2(uplo, n, nrhs, a, lda, ipiv, b, ldb)`
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

Works out of the box with OSX since CLAPACK is included in the standard Accelerate framework. You might have to download and build [LAPACK](http://www.netlib.org/lapack/#_lapack_version_3_6_0) from source on other operating systems (**LINUX:** `sudo apt-get liblapack-dev`).

Double precision functions expect `Float64Array` vectors, single precision functions expect `Float32Array` vectors.
