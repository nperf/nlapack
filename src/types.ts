export type FloatArray = Float64Array | Float32Array;
export type MatrixTrans = 78 | 84 | 67;
export type MatrixUpperLower = 85 | 76;
export type MatrixUnit = 78 | 85;
export type MatrixNorm = 49 | 48 | 73;
export type MatrixEquilibration = 78 | 82 | 67 | 66;
export type MatrixDistribution = 85 | 83 | 78;
export type MatrixSymmetry = 83 | 72 | 80 | 78;
export type MatrixMode = -6 | -5 | -4 | -3 | -2 | -1 | 0 | 1 | 2 | 3 | 4 | 5 | 6;
export type MatrixPacking = 78 | 85 | 76 | 66 | 81 | 90;
export type MatrixEigenvector = 78 | 86;

export interface INLapack {
  // tslint:disable: max-line-length
  dgetrf(m: number, n: number, a: Float64Array, lda: number, ipiv: Int32Array): number;
  sgetrf(m: number, n: number, a: Float32Array, lda: number, ipiv: Int32Array): number;
  dgetrf2(m: number, n: number, a: Float64Array, lda: number, ipiv: Int32Array): number;
  sgetrf2(m: number, n: number, a: Float32Array, lda: number, ipiv: Int32Array): number;
  dgbtrf(
    m: number,
    n: number,
    kl: Float64Array,
    ku: Float64Array,
    ab: Float64Array,
    ldab: number,
    ipiv: Int32Array
  ): number;
  sgbtrf(
    m: number,
    n: number,
    kl: Float32Array,
    ku: Float32Array,
    ab: Float32Array,
    ldab: number,
    ipiv: Int32Array
  ): number;
  dgttrf(
    n: number,
    dl: Float64Array,
    d: Float64Array,
    du: Float64Array,
    du2: Float64Array,
    ipiv: Int32Array
  ): number;
  sgttrf(
    n: number,
    dl: Float32Array,
    d: Float32Array,
    du: Float32Array,
    du2: Float32Array,
    ipiv: Int32Array
  ): number;
  dpotrf(uplo: MatrixUpperLower, n: number, a: Float64Array, lda: number): number;
  spotrf(uplo: MatrixUpperLower, n: number, a: Float32Array, lda: number): number;
  dpotrf2(uplo: MatrixUpperLower, n: number, a: Float64Array, lda: number): number;
  spotrf2(uplo: MatrixUpperLower, n: number, a: Float32Array, lda: number): number;
  dpstrf(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    piv: Int32Array,
    rank: Int32Array,
    tol: number
  ): number;
  spstrf(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    piv: Int32Array,
    rank: Int32Array,
    tol: number
  ): number;
  dpftrf(transr: MatrixTrans, uplo: MatrixUpperLower, n: number, a: Float64Array): number;
  spftrf(transr: MatrixTrans, uplo: MatrixUpperLower, n: number, a: Float32Array): number;
  dpptrf(uplo: MatrixUpperLower, n: number, ap: Float64Array): number;
  spptrf(uplo: MatrixUpperLower, n: number, ap: Float32Array): number;
  dpbtrf(
    uplo: MatrixUpperLower,
    n: number,
    kd: Float64Array,
    ab: Float64Array,
    ldab: number
  ): number;
  spbtrf(
    uplo: MatrixUpperLower,
    n: number,
    kd: Float32Array,
    ab: Float32Array,
    ldab: number
  ): number;
  dpttrf(n: number, d: Float64Array, e: Float64Array): number;
  spttrf(n: number, d: Float32Array, e: Float32Array): number;
  dsytrf(uplo: MatrixUpperLower, n: number, a: Float64Array, lda: number, ipiv: Int32Array): number;
  ssytrf(uplo: MatrixUpperLower, n: number, a: Float32Array, lda: number, ipiv: Int32Array): number;
  dsytrf_aa(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  ssytrf_aa(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  dsytrf_rook(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  ssytrf_rook(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  dsptrf(uplo: MatrixUpperLower, n: number, ap: Float64Array, ipiv: Int32Array): number;
  ssptrf(uplo: MatrixUpperLower, n: number, ap: Float32Array, ipiv: Int32Array): number;

  dgetrs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  sgetrs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dgbtrs(
    trans: MatrixTrans,
    n: number,
    kl: number,
    ku: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  sgbtrs(
    trans: MatrixTrans,
    n: number,
    kl: number,
    ku: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dgttrs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    dl: Float64Array,
    d: Float64Array,
    du: Float64Array,
    du2: Float64Array,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  sgttrs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    dl: Float32Array,
    d: Float32Array,
    du: Float32Array,
    du2: Float32Array,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dpotrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    b: Float64Array,
    ldb: number
  ): number;
  spotrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    b: Float32Array,
    ldb: number
  ): number;
  dpftrs(
    transr: MatrixTrans,
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    b: Float64Array,
    ldb: number
  ): number;
  spftrs(
    transr: MatrixTrans,
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dpptrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float64Array,
    b: Float64Array,
    ldb: number
  ): number;
  spptrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dpbtrs(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    b: Float64Array,
    ldb: number
  ): number;
  spbtrs(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    b: Float32Array,
    ldb: number
  ): number;
  dpttrs(
    n: number,
    nrhs: number,
    d: Float64Array,
    e: Float64Array,
    b: Float64Array,
    ldb: number
  ): number;
  spttrs(
    n: number,
    nrhs: number,
    d: Float32Array,
    e: Float32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dsytrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  ssytrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dsytrs_aa(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  ssytrs_aa(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dsytrs_rook(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  ssytrs_rook(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dsytrs2(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  ssytrs2(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dsptrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float64Array,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  ssptrs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float32Array,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dtrtrs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    b: Float64Array,
    ldb: number
  ): number;
  strtrs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    b: Float32Array,
    ldb: number
  ): number;
  dtptrs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    ap: Float64Array,
    b: Float64Array,
    ldb: number
  ): number;
  stptrs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    ap: Float32Array,
    b: Float32Array,
    ldb: number
  ): number;
  dtbtrs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    kd: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    b: Float64Array,
    ldb: number
  ): number;
  stbtrs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    kd: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    b: Float32Array,
    ldb: number
  ): number;

  dgecon(
    norm: MatrixNorm,
    n: number,
    a: Float64Array,
    lda: number,
    anorm: number,
    rcond: Float64Array
  ): number;
  sgecon(
    norm: MatrixNorm,
    n: number,
    a: Float32Array,
    lda: number,
    anorm: number,
    rcond: Float32Array
  ): number;
  dgbcon(
    norm: MatrixNorm,
    n: number,
    kl: number,
    ku: number,
    ab: Float64Array,
    ldab: number,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float64Array
  ): number;
  sgbcon(
    norm: MatrixNorm,
    n: number,
    kl: number,
    ku: number,
    ab: Float32Array,
    ldab: number,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float32Array
  ): number;
  dgtcon(
    norm: MatrixNorm,
    n: number,
    dl: Float64Array,
    d: Float64Array,
    du: Float64Array,
    du2: Float64Array,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float64Array
  ): number;
  sgtcon(
    norm: MatrixNorm,
    n: number,
    dl: Float32Array,
    d: Float32Array,
    du: Float32Array,
    du2: Float32Array,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float32Array
  ): number;
  dpocon(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    anorm: number,
    rcond: Float64Array
  ): number;
  spocon(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    anorm: number,
    rcond: Float32Array
  ): number;
  dppcon(
    uplo: MatrixUpperLower,
    n: number,
    ap: Float64Array,
    anorm: number,
    rcond: Float64Array
  ): number;
  sppcon(
    uplo: MatrixUpperLower,
    n: number,
    ap: Float32Array,
    anorm: number,
    rcond: Float32Array
  ): number;
  dpbcon(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    ab: Float64Array,
    ldab: number,
    anorm: number,
    rcond: Float64Array
  ): number;
  spbcon(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    ab: Float32Array,
    ldab: number,
    anorm: number,
    rcond: Float32Array
  ): number;
  dptcon(n: number, d: Float64Array, e: Float64Array, anorm: number, rcond: Float64Array): number;
  sptcon(n: number, d: Float32Array, e: Float32Array, anorm: number, rcond: Float32Array): number;
  dsycon(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float64Array
  ): number;
  ssycon(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float32Array
  ): number;
  dspcon(
    uplo: MatrixUpperLower,
    n: number,
    ap: Float64Array,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float64Array
  ): number;
  sspcon(
    uplo: MatrixUpperLower,
    n: number,
    ap: Float32Array,
    ipiv: Int32Array,
    anorm: number,
    rcond: Float32Array
  ): number;
  dtrcon(
    norm: MatrixNorm,
    uplo: MatrixUpperLower,
    diag: MatrixUnit,
    n: number,
    a: Float64Array,
    lda: number,
    rcond: Float64Array
  ): number;
  strcon(
    norm: MatrixNorm,
    uplo: MatrixUpperLower,
    diag: MatrixUnit,
    n: number,
    a: Float32Array,
    lda: number,
    rcond: Float64Array
  ): number;
  dtpcon(
    norm: MatrixNorm,
    uplo: MatrixUpperLower,
    diag: MatrixUnit,
    n: number,
    ap: Float64Array,
    rcond: Float64Array
  ): number;
  stpcon(
    norm: MatrixNorm,
    uplo: MatrixUpperLower,
    diag: MatrixUnit,
    n: number,
    ap: Float32Array,
    rcond: Float32Array
  ): number;
  dtbcon(
    norm: MatrixNorm,
    uplo: MatrixUpperLower,
    diag: MatrixUnit,
    n: number,
    kd: number,
    ab: Float64Array,
    ldab: number,
    rcond: Float64Array
  ): number;
  stbcon(
    norm: MatrixNorm,
    uplo: MatrixUpperLower,
    diag: MatrixUnit,
    n: number,
    kd: number,
    ab: Float32Array,
    ldab: number,
    rcond: Float32Array
  ): number;

  dgerfs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    af: Float64Array,
    ldaf: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  sgerfs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    af: Float32Array,
    ldaf: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dgerfsx(
    trans: MatrixTrans,
    equed: MatrixEquilibration,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    af: Float64Array,
    ldaf: number,
    ipiv: Int32Array,
    r: Float64Array,
    c: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    rcond: Float64Array,
    berr: Float64Array,
    n_err_bnds: number,
    err_bnds_norm: Float64Array,
    err_bnds_comp: Float64Array,
    nparams: number,
    params: Float64Array
  ): number;
  sgerfsx(
    trans: MatrixTrans,
    equed: MatrixEquilibration,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    af: Float32Array,
    ldaf: number,
    ipiv: Int32Array,
    r: Float32Array,
    c: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    rcond: Float32Array,
    berr: Float32Array,
    n_err_bnds: number,
    err_bnds_norm: Float32Array,
    err_bnds_comp: Float32Array,
    nparams: number,
    params: Float32Array
  ): number;
  dgbrfs(
    trans: MatrixTrans,
    n: number,
    kl: number,
    ku: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    afb: Float64Array,
    ldafb: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  sgbrfs(
    trans: MatrixTrans,
    n: number,
    kl: number,
    ku: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    afb: Float32Array,
    ldafb: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dgbrfsx(
    trans: MatrixTrans,
    equed: MatrixEquilibration,
    n: number,
    kl: number,
    ku: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    afb: Float64Array,
    ldafb: number,
    ipiv: Int32Array,
    r: Float64Array,
    c: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    rcond: Float64Array,
    berr: Float64Array,
    n_err_bnds: number,
    err_bnds_norm: Float64Array,
    err_bnds_comp: Float64Array,
    nparams: number,
    params: Float64Array
  ): number;
  sgbrfsx(
    trans: MatrixTrans,
    equed: MatrixEquilibration,
    n: number,
    kl: number,
    ku: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    afb: Float32Array,
    ldafb: number,
    ipiv: Int32Array,
    r: Float32Array,
    c: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    rcond: Float32Array,
    berr: Float32Array,
    n_err_bnds: number,
    err_bnds_norm: Float32Array,
    err_bnds_comp: Float32Array,
    nparams: number,
    params: Float32Array
  ): number;
  dgtrfs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    dl: Float64Array,
    d: Float64Array,
    du: Float64Array,
    dlf: Float64Array,
    df: Float64Array,
    duf: Float64Array,
    du2: Float64Array,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  sgtrfs(
    trans: MatrixTrans,
    n: number,
    nrhs: number,
    dl: Float32Array,
    d: Float32Array,
    du: Float32Array,
    dlf: Float32Array,
    df: Float32Array,
    duf: Float32Array,
    du2: Float32Array,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dporfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    af: Float64Array,
    ldaf: number,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  sporfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    af: Float32Array,
    ldaf: number,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dporfsx(
    uplo: MatrixUpperLower,
    equed: MatrixEquilibration,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    af: Float64Array,
    ldaf: number,
    s: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    rcond: Float64Array,
    berr: Float64Array,
    n_err_bnds: number,
    err_bnds_norm: Float64Array,
    err_bnds_comp: Float64Array,
    nparams: number,
    params: Float64Array
  ): number;
  sporfsx(
    uplo: MatrixUpperLower,
    equed: MatrixEquilibration,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    af: Float32Array,
    ldaf: number,
    s: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    rcond: Float32Array,
    berr: Float32Array,
    n_err_bnds: number,
    err_bnds_norm: Float32Array,
    err_bnds_comp: Float32Array,
    nparams: number,
    params: Float32Array
  ): number;
  dpprfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float64Array,
    afp: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  spprfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float32Array,
    afp: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dpbrfs(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    afb: Float64Array,
    ldafb: number,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  spbrfs(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    afb: Float32Array,
    ldafb: number,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dptrfs(
    n: number,
    nrhs: number,
    d: Float64Array,
    e: Float64Array,
    df: Float64Array,
    ef: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  sptrfs(
    n: number,
    nrhs: number,
    d: Float32Array,
    e: Float32Array,
    df: Float32Array,
    ef: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dsyrfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    af: Float64Array,
    ldaf: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  ssyrfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    af: Float32Array,
    ldaf: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dsyrfsx(
    uplo: MatrixUpperLower,
    equed: MatrixEquilibration,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    af: Float64Array,
    ldaf: number,
    ipiv: Int32Array,
    s: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    rcond: Float64Array,
    berr: Float64Array,
    n_err_bnds: number,
    err_bnds_norm: Float64Array,
    err_bnds_comp: Float64Array,
    nparams: number,
    params: Float64Array
  ): number;
  ssyrfsx(
    uplo: MatrixUpperLower,
    equed: MatrixEquilibration,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    af: Float32Array,
    ldaf: number,
    ipiv: Int32Array,
    s: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    rcond: Float32Array,
    berr: Float32Array,
    n_err_bnds: number,
    err_bnds_norm: Float32Array,
    err_bnds_comp: Float32Array,
    nparams: number,
    params: Float32Array
  ): number;
  dsprfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float64Array,
    afp: Float64Array,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  ssprfs(
    uplo: MatrixUpperLower,
    n: number,
    nrhs: number,
    ap: Float32Array,
    afp: Float32Array,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dtrrfs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  strrfs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dtprfs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    ap: Float64Array,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  stprfs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    ap: Float32Array,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;
  dtbrfs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    ab: Float64Array,
    ldab: number,
    b: Float64Array,
    ldb: number,
    x: Float64Array,
    ldx: number,
    ferr: Float64Array,
    berr: Float64Array
  ): number;
  stbrfs(
    uplo: MatrixUpperLower,
    trans: MatrixTrans,
    diag: MatrixUnit,
    n: number,
    nrhs: number,
    ab: Float32Array,
    ldab: number,
    b: Float32Array,
    ldb: number,
    x: Float32Array,
    ldx: number,
    ferr: Float32Array,
    berr: Float32Array
  ): number;

  dgetri(n: number, a: Float64Array, lda: number, ipiv: Int32Array): number;
  sgetri(n: number, a: Float32Array, lda: number, ipiv: Int32Array): number;
  dpotri(uplo: MatrixUpperLower, n: number, a: Float64Array, lda: number): number;
  spotri(uplo: MatrixUpperLower, n: number, a: Float32Array, lda: number): number;
  dpftri(transr: MatrixTrans, uplo: MatrixUpperLower, n: number, a: Float64Array): number;
  spftri(transr: MatrixTrans, uplo: MatrixUpperLower, n: number, a: Float32Array): number;
  dpptri(uplo: MatrixUpperLower, n: number, ap: Float64Array): number;
  spptri(uplo: MatrixUpperLower, n: number, ap: Float32Array): number;
  dsytri(uplo: MatrixUpperLower, n: number, a: Float64Array, lda: number, ipiv: Int32Array): number;
  ssytri(uplo: MatrixUpperLower, n: number, a: Float32Array, lda: number, ipiv: Int32Array): number;
  dsytri_rook(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  ssytri_rook(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  dsytri2(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  ssytri2(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  dsytri2x(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  ssytri2x(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array
  ): number;
  dsptri(uplo: MatrixUpperLower, n: number, ap: Float64Array, ipiv: Int32Array): number;
  ssptri(uplo: MatrixUpperLower, n: number, ap: Float32Array, ipiv: Int32Array): number;
  dtrtri(uplo: MatrixUpperLower, diag: MatrixUnit, n: number, a: Float64Array, lda: number): number;
  strtri(uplo: MatrixUpperLower, diag: MatrixUnit, n: number, a: Float32Array, lda: number): number;
  dtftri(transr: MatrixTrans, uplo: MatrixUpperLower, diag: MatrixUnit, a: Float64Array): number;
  stftri(transr: MatrixTrans, uplo: MatrixUpperLower, diag: MatrixUnit, a: Float32Array): number;
  dtptri(uplo: MatrixUpperLower, diag: MatrixUnit, n: number, ap: Float64Array): number;
  stptri(uplo: MatrixUpperLower, diag: MatrixUnit, n: number, ap: Float32Array): number;

  dgeequ(
    m: number,
    n: number,
    a: Float64Array,
    lda: number,
    r: Float64Array,
    c: Float64Array,
    rowcnd: Float64Array,
    colcnd: Float64Array,
    amax: Float64Array
  ): number;
  sgeequ(
    m: number,
    n: number,
    a: Float64Array,
    lda: number,
    r: Float32Array,
    c: Float32Array,
    rowcnd: Float32Array,
    colcnd: Float32Array,
    amax: Float32Array
  ): number;
  dgeequb(
    m: number,
    n: number,
    a: Float64Array,
    lda: number,
    r: Float64Array,
    c: Float64Array,
    rowcnd: Float64Array,
    colcnd: Float64Array,
    amax: Float64Array
  ): number;
  sgeequb(
    m: number,
    n: number,
    a: Float32Array,
    lda: number,
    r: Float32Array,
    c: Float32Array,
    rowcnd: Float32Array,
    colcnd: Float32Array,
    amax: Float32Array
  ): number;
  dgbequ(
    m: number,
    n: number,
    kl: number,
    ku: number,
    ab: Float64Array,
    ldab: number,
    r: Float64Array,
    c: Float64Array,
    rowcnd: Float64Array,
    colcnd: Float64Array,
    amax: Float64Array
  ): number;
  sgbequ(
    m: number,
    n: number,
    kl: number,
    ku: number,
    ab: Float32Array,
    ldab: number,
    r: Float32Array,
    c: Float32Array,
    rowcnd: Float32Array,
    colcnd: Float32Array,
    amax: Float32Array
  ): number;
  dgbequb(
    m: number,
    n: number,
    kl: number,
    ku: number,
    ab: Float64Array,
    ldab: number,
    r: Float64Array,
    c: Float64Array,
    rowcnd: Float64Array,
    colcnd: Float64Array,
    amax: Float64Array
  ): number;
  sgbequb(
    m: number,
    n: number,
    kl: number,
    ku: number,
    ab: Float32Array,
    ldab: number,
    r: Float32Array,
    c: Float32Array,
    rowcnd: Float32Array,
    colcnd: Float32Array,
    amax: Float32Array
  ): number;
  dpoequ(
    n: number,
    a: Float64Array,
    lda: number,
    s: Float64Array,
    scond: Float64Array,
    amax: Float64Array
  ): number;
  spoequ(
    n: number,
    a: Float32Array,
    lda: number,
    s: Float32Array,
    scond: Float32Array,
    amax: Float32Array
  ): number;
  dpoequb(
    n: number,
    a: Float64Array,
    lda: number,
    s: Float64Array,
    scond: Float64Array,
    amax: Float64Array
  ): number;
  spoequb(
    n: number,
    a: Float32Array,
    lda: number,
    s: Float32Array,
    scond: Float32Array,
    amax: Float32Array
  ): number;
  dppequ(
    uplo: MatrixUpperLower,
    n: number,
    ap: Float64Array,
    s: Float64Array,
    scond: Float64Array,
    amax: Float64Array
  ): number;
  sppequ(
    uplo: MatrixUpperLower,
    n: number,
    ap: Float32Array,
    s: Float32Array,
    scond: Float32Array,
    amax: Float32Array
  ): number;
  dpbequ(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    ab: Float64Array,
    ldab: number,
    s: Float64Array,
    scond: Float64Array,
    amax: Float64Array
  ): number;
  spbequ(
    uplo: MatrixUpperLower,
    n: number,
    kd: number,
    ab: Float32Array,
    ldab: number,
    s: Float32Array,
    scond: Float32Array,
    amax: Float32Array
  ): number;
  dsyequb(
    uplo: MatrixUpperLower,
    n: number,
    a: Float64Array,
    lda: number,
    s: Float64Array,
    scond: Float64Array,
    amax: Float64Array
  ): number;
  ssyequb(
    uplo: MatrixUpperLower,
    n: number,
    a: Float32Array,
    lda: number,
    s: Float32Array,
    scond: Float32Array,
    amax: Float32Array
  ): number;

  dgesv(
    n: number,
    nrhs: number,
    a: Float64Array,
    lda: number,
    ipiv: Int32Array,
    b: Float64Array,
    ldb: number
  ): number;
  sgesv(
    n: number,
    nrhs: number,
    a: Float32Array,
    lda: number,
    ipiv: Int32Array,
    b: Float32Array,
    ldb: number
  ): number;

  dgeev(
    jobvl: MatrixEigenvector,
    jobvr: MatrixEigenvector,
    n: number,
    a: Float64Array,
    lda: number,
    wr: Float64Array,
    wi: Float64Array,
    vl: Float64Array,
    ldvl: number,
    vr: Float64Array,
    ldvr: number
  ): number;
  sgeev(
    jobvl: MatrixEigenvector,
    jobvr: MatrixEigenvector,
    n: number,
    a: Float32Array,
    lda: number,
    wr: Float32Array,
    wi: Float32Array,
    vl: Float32Array,
    ldvl: number,
    vr: Float32Array,
    ldvr: number
  ): number;

  ilaver(vers_major: Int32Array, vers_minor: Int32Array, vers_patch: Int32Array): void;

  dlatms(
    m: number,
    n: number,
    dist: MatrixDistribution,
    iseed: Int32Array,
    sym: MatrixSymmetry,
    d: Float64Array,
    mode: MatrixMode,
    cond: number,
    dmax: number,
    kl: number,
    ku: number,
    pack: MatrixPacking,
    a: Float64Array,
    lda: number
  ): number;
  slatms(
    m: number,
    n: number,
    dist: MatrixDistribution,
    iseed: Int32Array,
    sym: MatrixSymmetry,
    d: Float32Array,
    mode: MatrixMode,
    cond: number,
    dmax: number,
    kl: number,
    ku: number,
    pack: MatrixPacking,
    a: Float64Array,
    lda: number
  ): number;
}
