import {
  INLapack,
  MatrixDistribution,
  MatrixEigenvector,
  MatrixEquilibration,
  MatrixNorm,
  MatrixPacking,
  MatrixSymmetry,
  MatrixTrans,
  MatrixUnit,
  MatrixUpperLower,
} from './types';

let nlapack: INLapack;
try {
  nlapack = require('../build/Release/nlapack');
} catch (_) {
  nlapack = require('./nlapack');
}

// From enums declared in functions/cblas.h
export const NoTrans: MatrixTrans = 78;
export const Trans: MatrixTrans = 84;
export const ConjTrans: MatrixTrans = 67;

export const Upper: MatrixUpperLower = 85;
export const Lower: MatrixUpperLower = 76;

export const NonUnit: MatrixUnit = 78;
export const Unit: MatrixUnit = 85;

export const OneNorm: MatrixNorm = 49;
export const InfinityNorm: MatrixNorm = 73;

export const NoEquilibration: MatrixEquilibration = 78;
export const RowEquilibration: MatrixEquilibration = 82;
export const ColumnEquilibration: MatrixEquilibration = 67;
export const BothEquilibration: MatrixEquilibration = 66;

export const UniformDistribution: MatrixDistribution = 85;
export const SymmetricDistribution: MatrixDistribution = 83;
export const NormalDistribution: MatrixDistribution = 78;

export const Symmetric: MatrixSymmetry = 83;
export const Hermitian: MatrixSymmetry = 72;
export const Positive: MatrixSymmetry = 80;
export const NonSymmetric: MatrixSymmetry = 78;

export const NoPacking: MatrixPacking = 78;
export const UpperPacking: MatrixPacking = 85;
export const LowerPacking: MatrixPacking = 76;
export const LowerBandPacking: MatrixPacking = 66;
export const UpperBandPacking: MatrixPacking = 81;
export const BandPacking: MatrixPacking = 90;

export const NoEigenvector: MatrixEigenvector = 78;
export const Eigenvector: MatrixEigenvector = 86;

// LAPACK Linear Equation Routines: Matrix Factorization
export const dgetrf: typeof nlapack.dgetrf = nlapack.dgetrf;
export const sgetrf: typeof nlapack.sgetrf = nlapack.sgetrf;

export const dgetrf2: typeof nlapack.dgetrf = nlapack.dgetrf;
export const sgetrf2: typeof nlapack.sgetrf = nlapack.sgetrf;

export const dgbtrf: typeof nlapack.dgbtrf = nlapack.dgbtrf;
export const sgbtrf: typeof nlapack.sgbtrf = nlapack.sgbtrf;

export const dgttrf: typeof nlapack.dgttrf = nlapack.dgttrf;
export const sgttrf: typeof nlapack.sgttrf = nlapack.sgttrf;

export const dpotrf: typeof nlapack.dpotrf = nlapack.dpotrf;
export const spotrf: typeof nlapack.spotrf = nlapack.spotrf;

export const dpotrf2: typeof nlapack.dpotrf = nlapack.dpotrf;
export const spotrf2: typeof nlapack.spotrf = nlapack.spotrf;

export const dpstrf: typeof nlapack.dpstrf = nlapack.dpstrf;
export const spstrf: typeof nlapack.spstrf = nlapack.spstrf;

export const dpftrf: typeof nlapack.dpftrf = nlapack.dpftrf;
export const spftrf: typeof nlapack.spftrf = nlapack.spftrf;

export const dpptrf: typeof nlapack.dpptrf = nlapack.dpptrf;
export const spptrf: typeof nlapack.spptrf = nlapack.spptrf;

export const dpbtrf: typeof nlapack.dpbtrf = nlapack.dpbtrf;
export const spbtrf: typeof nlapack.spbtrf = nlapack.spbtrf;

export const dpttrf: typeof nlapack.dpttrf = nlapack.dpttrf;
export const spttrf: typeof nlapack.spttrf = nlapack.spttrf;

export const dsytrf: typeof nlapack.dsytrf = nlapack.dsytrf;
export const ssytrf: typeof nlapack.ssytrf = nlapack.ssytrf;

export const dsytrf_aa: typeof nlapack.dsytrf = nlapack.dsytrf;
export const ssytrf_aa: typeof nlapack.ssytrf = nlapack.ssytrf;

export const dsytrf_rook: typeof nlapack.dsytrf = nlapack.dsytrf;
export const ssytrf_rook: typeof nlapack.ssytrf = nlapack.ssytrf;

export const dsptrf: typeof nlapack.dsptrf = nlapack.dsptrf;
export const ssptrf: typeof nlapack.ssptrf = nlapack.ssptrf;

// LAPACK Linear Equation Routines: Solving Systems of Linear Equations
export const dgetrs: typeof nlapack.dgetrs = nlapack.dgetrs;
export const sgetrs: typeof nlapack.sgetrs = nlapack.sgetrs;

export const dgbtrs: typeof nlapack.dgbtrs = nlapack.dgbtrs;
export const sgbtrs: typeof nlapack.sgbtrs = nlapack.sgbtrs;

export const dgttrs: typeof nlapack.dgttrs = nlapack.dgttrs;
export const sgttrs: typeof nlapack.sgttrs = nlapack.sgttrs;

export const dpotrs: typeof nlapack.dpotrs = nlapack.dpotrs;
export const spotrs: typeof nlapack.spotrs = nlapack.spotrs;

export const dpftrs: typeof nlapack.dpftrs = nlapack.dpftrs;
export const spftrs: typeof nlapack.spftrs = nlapack.spftrs;

export const dpptrs: typeof nlapack.dpptrs = nlapack.dpptrs;
export const spptrs: typeof nlapack.spptrs = nlapack.spptrs;

export const dpbtrs: typeof nlapack.dpbtrs = nlapack.dpbtrs;
export const spbtrs: typeof nlapack.spbtrs = nlapack.spbtrs;

export const dpttrs: typeof nlapack.dpttrs = nlapack.dpttrs;
export const spttrs: typeof nlapack.spttrs = nlapack.spttrs;

export const dsytrs: typeof nlapack.dsytrs = nlapack.dsytrs;
export const ssytrs: typeof nlapack.ssytrs = nlapack.ssytrs;

export const dsytrs_aa: typeof nlapack.dsytrs_aa = nlapack.dsytrs_aa;
export const ssytrs_aa: typeof nlapack.ssytrs_aa = nlapack.ssytrs_aa;

export const dsytrs_rook: typeof nlapack.dsytrs_rook = nlapack.dsytrs_rook;
export const ssytrs_rook: typeof nlapack.ssytrs_rook = nlapack.ssytrs_rook;

export const dsytrs2: typeof nlapack.dsytrs2 = nlapack.dsytrs2;
export const ssytrs2: typeof nlapack.ssytrs2 = nlapack.ssytrs2;

export const dsptrs: typeof nlapack.dsptrs = nlapack.dsptrs;
export const ssptrs: typeof nlapack.ssptrs = nlapack.ssptrs;

export const dtrtrs: typeof nlapack.dtrtrs = nlapack.dtrtrs;
export const strtrs: typeof nlapack.strtrs = nlapack.strtrs;

export const dtptrs: typeof nlapack.dtptrs = nlapack.dtptrs;
export const stptrs: typeof nlapack.stptrs = nlapack.stptrs;

export const dtbtrs: typeof nlapack.dtbtrs = nlapack.dtbtrs;
export const stbtrs: typeof nlapack.stbtrs = nlapack.stbtrs;

// LAPACK Linear Equation Routines: Estimating the Condition Number
export const dgecon: typeof nlapack.dgecon = nlapack.dgecon;
export const sgecon: typeof nlapack.sgecon = nlapack.sgecon;

export const dgbcon: typeof nlapack.dgbcon = nlapack.dgbcon;
export const sgbcon: typeof nlapack.sgbcon = nlapack.sgbcon;

export const dgtcon: typeof nlapack.dgtcon = nlapack.dgtcon;
export const sgtcon: typeof nlapack.sgtcon = nlapack.sgtcon;

export const dpocon: typeof nlapack.dpocon = nlapack.dpocon;
export const spocon: typeof nlapack.spocon = nlapack.spocon;

export const dppcon: typeof nlapack.dppcon = nlapack.dppcon;
export const sppcon: typeof nlapack.sppcon = nlapack.sppcon;

export const dpbcon: typeof nlapack.dpbcon = nlapack.dpbcon;
export const spbcon: typeof nlapack.spbcon = nlapack.spbcon;

export const dptcon: typeof nlapack.dptcon = nlapack.dptcon;
export const sptcon: typeof nlapack.sptcon = nlapack.sptcon;

export const dsycon: typeof nlapack.dsycon = nlapack.dsycon;
export const ssycon: typeof nlapack.ssycon = nlapack.ssycon;

export const dspcon: typeof nlapack.dspcon = nlapack.dspcon;
export const sspcon: typeof nlapack.sspcon = nlapack.sspcon;

export const dtrcon: typeof nlapack.dtrcon = nlapack.dtrcon;
export const strcon: typeof nlapack.strcon = nlapack.strcon;

export const dtpcon: typeof nlapack.dtpcon = nlapack.dtpcon;
export const stpcon: typeof nlapack.stpcon = nlapack.stpcon;

export const dtbcon: typeof nlapack.dtbcon = nlapack.dtbcon;
export const stbcon: typeof nlapack.stbcon = nlapack.stbcon;

// LAPACK Linear Equation Routines: Refining the Solution and Estimating Its Error
export const dgerfs: typeof nlapack.dgerfs = nlapack.dgerfs;
export const sgerfs: typeof nlapack.sgerfs = nlapack.sgerfs;

export const dgerfsx: typeof nlapack.dgerfsx = nlapack.dgerfsx;
export const sgerfsx: typeof nlapack.sgerfsx = nlapack.sgerfsx;

export const dgbrfs: typeof nlapack.dgbrfs = nlapack.dgbrfs;
export const sgbrfs: typeof nlapack.sgbrfs = nlapack.sgbrfs;

export const dgbrfsx: typeof nlapack.dgbrfsx = nlapack.dgbrfsx;
export const sgbrfsx: typeof nlapack.sgbrfsx = nlapack.sgbrfsx;

export const dgtrfs: typeof nlapack.dgtrfs = nlapack.dgtrfs;
export const sgtrfs: typeof nlapack.sgtrfs = nlapack.sgtrfs;

export const dporfs: typeof nlapack.dporfs = nlapack.dporfs;
export const sporfs: typeof nlapack.sporfs = nlapack.sporfs;

export const dporfsx: typeof nlapack.dporfsx = nlapack.dporfsx;
export const sporfsx: typeof nlapack.sporfsx = nlapack.sporfsx;

export const dpprfs: typeof nlapack.dpprfs = nlapack.dpprfs;
export const spprfs: typeof nlapack.spprfs = nlapack.spprfs;

export const dpbrfs: typeof nlapack.dpbrfs = nlapack.dpbrfs;
export const spbrfs: typeof nlapack.spbrfs = nlapack.spbrfs;

export const dptrfs: typeof nlapack.dptrfs = nlapack.dptrfs;
export const sptrfs: typeof nlapack.sptrfs = nlapack.sptrfs;

export const dsyrfs: typeof nlapack.dsyrfs = nlapack.dsyrfs;
export const ssyrfs: typeof nlapack.ssyrfs = nlapack.ssyrfs;

export const dsyrfsx: typeof nlapack.dsyrfsx = nlapack.dsyrfsx;
export const ssyrfsx: typeof nlapack.ssyrfsx = nlapack.ssyrfsx;

export const dsprfs: typeof nlapack.dsprfs = nlapack.dsprfs;
export const ssprfs: typeof nlapack.ssprfs = nlapack.ssprfs;

export const dtrrfs: typeof nlapack.dtrrfs = nlapack.dtrrfs;
export const strrfs: typeof nlapack.strrfs = nlapack.strrfs;

export const dtprfs: typeof nlapack.dtprfs = nlapack.dtprfs;
export const stprfs: typeof nlapack.stprfs = nlapack.stprfs;

export const dtbrfs: typeof nlapack.dtbrfs = nlapack.dtbrfs;
export const stbrfs: typeof nlapack.stbrfs = nlapack.stbrfs;

// LAPACK Linear Equation Routines: Matrix Inversion
export const dgetri: typeof nlapack.dgetri = nlapack.dgetri;
export const sgetri: typeof nlapack.sgetri = nlapack.sgetri;

export const dpotri: typeof nlapack.dpotri = nlapack.dpotri;
export const spotri: typeof nlapack.spotri = nlapack.spotri;

export const dpftri: typeof nlapack.dpftri = nlapack.dpftri;
export const spftri: typeof nlapack.spftri = nlapack.spftri;

export const dpptri: typeof nlapack.dpptri = nlapack.dpptri;
export const spptri: typeof nlapack.spptri = nlapack.spptri;

export const dsytri: typeof nlapack.dsytri = nlapack.dsytri;
export const ssytri: typeof nlapack.ssytri = nlapack.ssytri;

export const dsytri_rook: typeof nlapack.dsytri_rook = nlapack.dsytri_rook;
export const ssytri_rook: typeof nlapack.ssytri_rook = nlapack.ssytri_rook;

export const dsytri2: typeof nlapack.dsytri2 = nlapack.dsytri2;
export const ssytri2: typeof nlapack.ssytri2 = nlapack.ssytri2;

export const dsytri2x: typeof nlapack.dsytri2x = nlapack.dsytri2x;
export const ssytri2x: typeof nlapack.ssytri2x = nlapack.ssytri2x;

export const dsptri: typeof nlapack.dsptri = nlapack.dsptri;
export const ssptri: typeof nlapack.ssptri = nlapack.ssptri;

export const dtrtri: typeof nlapack.dtrtri = nlapack.dtrtri;
export const strtri: typeof nlapack.strtri = nlapack.strtri;

export const dtftri: typeof nlapack.dtftri = nlapack.dtftri;
export const stftri: typeof nlapack.stftri = nlapack.stftri;

export const dtptri: typeof nlapack.dtptri = nlapack.dtptri;
export const stptri: typeof nlapack.stptri = nlapack.stptri;

// LAPACK Linear Equation Routines: Matrix Equilibration
export const dgeequ: typeof nlapack.dgeequ = nlapack.dgeequ;
export const sgeequ: typeof nlapack.sgeequ = nlapack.sgeequ;

export const dgeequb: typeof nlapack.dgeequb = nlapack.dgeequb;
export const sgeequb: typeof nlapack.sgeequb = nlapack.sgeequb;

export const dgbequ: typeof nlapack.dgbequ = nlapack.dgbequ;
export const sgbequ: typeof nlapack.sgbequ = nlapack.sgbequ;

export const dgbequb: typeof nlapack.dgbequb = nlapack.dgbequb;
export const sgbequb: typeof nlapack.sgbequb = nlapack.sgbequb;

export const dpoequ: typeof nlapack.dpoequ = nlapack.dpoequ;
export const spoequ: typeof nlapack.spoequ = nlapack.spoequ;

export const dpoequb: typeof nlapack.dpoequb = nlapack.dpoequb;
export const spoequb: typeof nlapack.spoequb = nlapack.spoequb;

export const dppequ: typeof nlapack.dppequ = nlapack.dppequ;
export const sppequ: typeof nlapack.sppequ = nlapack.sppequ;

export const dpbequ: typeof nlapack.dpbequ = nlapack.dpbequ;
export const spbequ: typeof nlapack.spbequ = nlapack.spbequ;

export const dsyequb: typeof nlapack.dsyequb = nlapack.dsyequb;
export const ssyequb: typeof nlapack.ssyequb = nlapack.ssyequb;

// LAPACK Linear Equation Routines: Drivers
export const dgesv: typeof nlapack.dgesv = nlapack.dgesv;
export const sgesv: typeof nlapack.sgesv = nlapack.sgesv;

// LAPACK Least Squares and Eigenvalue Problem Driver Routines
export const dgeev: typeof nlapack.dgeev = nlapack.dgeev;
export const sgeev: typeof nlapack.sgeev = nlapack.sgeev;

// LAPACK Utility Functions and Routines
export const ilaver: typeof nlapack.ilaver = nlapack.ilaver;

// LAPACK Test Functions and Routines
export const dlatms: typeof nlapack.dlatms = nlapack.dlatms;
export const slatms: typeof nlapack.slatms = nlapack.slatms;
