# nLAPACK ![travis](https://img.shields.io/travis/mateogianolio/nlapack.svg)

Node `>=4.0` C++ bindings for all single- and double-precision CLAPACK (Linear Algebra Package) routines.

```bash
$ npm install mateogianolio/nlapack
$ npm test
```

* **[Matrix Factorization Routines](https://software.intel.com/en-us/node/468680)**
  - [x] [`?getrf(m, n, a, ipiv)`](https://software.intel.com/node/42740a2c-4898-4efa-88b9-94ca6eaac4db)
  - [x] [`?gbtrf(m, n, kl, ku, ab, ipiv)`](https://software.intel.com/node/045b7e16-b40d-4440-80fb-e0e406544c5d)
  - [x] [`?gttrf(n, dl, d, du, du2, ipiv)`](https://software.intel.com/node/20841474-62ac-440c-a4a6-4a750ebe3468)
  - [x] [`?potrf(m, n, a, [uplo = 'U'])`](https://software.intel.com/node/526c0ad5-b853-4aac-b27a-e631ee80f066)
  - [x] [`?pstrf(m, n, a, piv, rank, tol, work, [uplo = 'U'])`](https://software.intel.com/node/e061ee7e-9e3a-485f-bc08-6255ea926250)
  - [x] [`?pftrf(n, a, [transr = 'N'], [uplo = 'U'])`](https://software.intel.com/node/baf8fa42-4089-4a7f-b458-90579ef970f8)
  - [x] [`?pptrf(n, ap, [uplo = 'U'])`](https://software.intel.com/node/a2934477-60d2-40b4-b07d-2ad982989c47)
  - [x] [`?pbtrf(m, n, a, kd, [uplo = 'U'])`](https://software.intel.com/node/bc3b6a9a-6ac2-4054-aab1-f2cd32f1b051)
  - [x] [`?pttrf(n, a, kd, [uplo = 'U'])`](https://software.intel.com/node/9ec992f0-6e90-4ae6-8a4e-b02976e4c06a)
  - [x] [`?sytrf(m, n, a, ipiv, work, lwork, [uplo = 'U'])`](https://software.intel.com/node/3aae6840-280f-44c9-9865-38ad3a13285c)
  - [x] [`?sptrf(n, ap, ipiv, [uplo = 'U'])`](https://software.intel.com/node/944f7cc2-ee39-40e8-82e1-0adeca0dd455)


* **[Routines for Solving Systems of Linear Equations](https://software.intel.com/en-us/node/520891)**
  - [x] [`?getrs(n, a, b, ipiv, [nhrs = 1], [trans = 'N'])`](https://software.intel.com/en-us/node/520892#642A8C07-088C-408D-BC89-D0F2A6E75416)
  - [x] [`?gbtrs(m, n, kl, ku, ab, b, ipiv, [nrhs = 1], [trans = 'N'])`](https://software.intel.com/en-us/node/520893)
  - [ ] [`?gttrs`](https://software.intel.com/en-us/node/520894)
  - [ ] [`?dttrsb`](https://software.intel.com/en-us/node/520895)
  - [ ] [`?potrs`](https://software.intel.com/en-us/node/520896)
  - [ ] [`?pftrs`](https://software.intel.com/en-us/node/520897)
  - [ ] [`?pptrs`](https://software.intel.com/en-us/node/520898)
  - [ ] [`?pbtrs`](https://software.intel.com/en-us/node/520899)
  - [ ] [`?pttrs`](https://software.intel.com/en-us/node/520900)
  - [ ] [`?sytrs`](https://software.intel.com/en-us/node/520901)
  - [ ] [`?sytrs2`](https://software.intel.com/en-us/node/520903)
  - [ ] [`?sptrs`](https://software.intel.com/en-us/node/520905)
  - [ ] [`?trtrs`](https://software.intel.com/en-us/node/520907)
  - [ ] [`?tptrs`](https://software.intel.com/en-us/node/520908)
  - [ ] [`?tbtrs`](https://software.intel.com/en-us/node/520909)

Works out of the box with OSX since CLAPACK is included in the standard Accelerate framework. You might have to download and build [LAPACK](http://www.netlib.org/lapack/#_lapack_version_3_6_0) from source on other operating systems (**LINUX:** `sudo apt-get liblapack-dev`).

Double precision functions expect `Float64Array` vectors, single precision functions expect `Float32Array` vectors.
