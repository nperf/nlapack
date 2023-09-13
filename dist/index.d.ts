import { INLapack, MatrixDistribution, MatrixEigenvector, MatrixEquilibration, MatrixNorm, MatrixPacking, MatrixSymmetry, MatrixTrans, MatrixUnit, MatrixUpperLower } from './types';
declare let nlapack: INLapack;
export declare const NoTrans: MatrixTrans;
export declare const Trans: MatrixTrans;
export declare const ConjTrans: MatrixTrans;
export declare const Upper: MatrixUpperLower;
export declare const Lower: MatrixUpperLower;
export declare const NonUnit: MatrixUnit;
export declare const Unit: MatrixUnit;
export declare const OneNorm: MatrixNorm;
export declare const InfinityNorm: MatrixNorm;
export declare const NoEquilibration: MatrixEquilibration;
export declare const RowEquilibration: MatrixEquilibration;
export declare const ColumnEquilibration: MatrixEquilibration;
export declare const BothEquilibration: MatrixEquilibration;
export declare const UniformDistribution: MatrixDistribution;
export declare const SymmetricDistribution: MatrixDistribution;
export declare const NormalDistribution: MatrixDistribution;
export declare const Symmetric: MatrixSymmetry;
export declare const Hermitian: MatrixSymmetry;
export declare const Positive: MatrixSymmetry;
export declare const NonSymmetric: MatrixSymmetry;
export declare const NoPacking: MatrixPacking;
export declare const UpperPacking: MatrixPacking;
export declare const LowerPacking: MatrixPacking;
export declare const LowerBandPacking: MatrixPacking;
export declare const UpperBandPacking: MatrixPacking;
export declare const BandPacking: MatrixPacking;
export declare const NoEigenvector: MatrixEigenvector;
export declare const Eigenvector: MatrixEigenvector;
export declare const dgetrf: typeof nlapack.dgetrf;
export declare const sgetrf: typeof nlapack.sgetrf;
export declare const dgetrf2: typeof nlapack.dgetrf;
export declare const sgetrf2: typeof nlapack.sgetrf;
export declare const dgbtrf: typeof nlapack.dgbtrf;
export declare const sgbtrf: typeof nlapack.sgbtrf;
export declare const dgttrf: typeof nlapack.dgttrf;
export declare const sgttrf: typeof nlapack.sgttrf;
export declare const dpotrf: typeof nlapack.dpotrf;
export declare const spotrf: typeof nlapack.spotrf;
export declare const dpotrf2: typeof nlapack.dpotrf;
export declare const spotrf2: typeof nlapack.spotrf;
export declare const dpstrf: typeof nlapack.dpstrf;
export declare const spstrf: typeof nlapack.spstrf;
export declare const dpftrf: typeof nlapack.dpftrf;
export declare const spftrf: typeof nlapack.spftrf;
export declare const dpptrf: typeof nlapack.dpptrf;
export declare const spptrf: typeof nlapack.spptrf;
export declare const dpbtrf: typeof nlapack.dpbtrf;
export declare const spbtrf: typeof nlapack.spbtrf;
export declare const dpttrf: typeof nlapack.dpttrf;
export declare const spttrf: typeof nlapack.spttrf;
export declare const dsytrf: typeof nlapack.dsytrf;
export declare const ssytrf: typeof nlapack.ssytrf;
export declare const dsytrf_aa: typeof nlapack.dsytrf;
export declare const ssytrf_aa: typeof nlapack.ssytrf;
export declare const dsytrf_rook: typeof nlapack.dsytrf;
export declare const ssytrf_rook: typeof nlapack.ssytrf;
export declare const dsptrf: typeof nlapack.dsptrf;
export declare const ssptrf: typeof nlapack.ssptrf;
export declare const dgetrs: typeof nlapack.dgetrs;
export declare const sgetrs: typeof nlapack.sgetrs;
export declare const dgbtrs: typeof nlapack.dgbtrs;
export declare const sgbtrs: typeof nlapack.sgbtrs;
export declare const dgttrs: typeof nlapack.dgttrs;
export declare const sgttrs: typeof nlapack.sgttrs;
export declare const dpotrs: typeof nlapack.dpotrs;
export declare const spotrs: typeof nlapack.spotrs;
export declare const dpftrs: typeof nlapack.dpftrs;
export declare const spftrs: typeof nlapack.spftrs;
export declare const dpptrs: typeof nlapack.dpptrs;
export declare const spptrs: typeof nlapack.spptrs;
export declare const dpbtrs: typeof nlapack.dpbtrs;
export declare const spbtrs: typeof nlapack.spbtrs;
export declare const dpttrs: typeof nlapack.dpttrs;
export declare const spttrs: typeof nlapack.spttrs;
export declare const dsytrs: typeof nlapack.dsytrs;
export declare const ssytrs: typeof nlapack.ssytrs;
export declare const dsytrs_aa: typeof nlapack.dsytrs_aa;
export declare const ssytrs_aa: typeof nlapack.ssytrs_aa;
export declare const dsytrs_rook: typeof nlapack.dsytrs_rook;
export declare const ssytrs_rook: typeof nlapack.ssytrs_rook;
export declare const dsytrs2: typeof nlapack.dsytrs2;
export declare const ssytrs2: typeof nlapack.ssytrs2;
export declare const dsptrs: typeof nlapack.dsptrs;
export declare const ssptrs: typeof nlapack.ssptrs;
export declare const dtrtrs: typeof nlapack.dtrtrs;
export declare const strtrs: typeof nlapack.strtrs;
export declare const dtptrs: typeof nlapack.dtptrs;
export declare const stptrs: typeof nlapack.stptrs;
export declare const dtbtrs: typeof nlapack.dtbtrs;
export declare const stbtrs: typeof nlapack.stbtrs;
export declare const dgecon: typeof nlapack.dgecon;
export declare const sgecon: typeof nlapack.sgecon;
export declare const dgbcon: typeof nlapack.dgbcon;
export declare const sgbcon: typeof nlapack.sgbcon;
export declare const dgtcon: typeof nlapack.dgtcon;
export declare const sgtcon: typeof nlapack.sgtcon;
export declare const dpocon: typeof nlapack.dpocon;
export declare const spocon: typeof nlapack.spocon;
export declare const dppcon: typeof nlapack.dppcon;
export declare const sppcon: typeof nlapack.sppcon;
export declare const dpbcon: typeof nlapack.dpbcon;
export declare const spbcon: typeof nlapack.spbcon;
export declare const dptcon: typeof nlapack.dptcon;
export declare const sptcon: typeof nlapack.sptcon;
export declare const dsycon: typeof nlapack.dsycon;
export declare const ssycon: typeof nlapack.ssycon;
export declare const dspcon: typeof nlapack.dspcon;
export declare const sspcon: typeof nlapack.sspcon;
export declare const dtrcon: typeof nlapack.dtrcon;
export declare const strcon: typeof nlapack.strcon;
export declare const dtpcon: typeof nlapack.dtpcon;
export declare const stpcon: typeof nlapack.stpcon;
export declare const dtbcon: typeof nlapack.dtbcon;
export declare const stbcon: typeof nlapack.stbcon;
export declare const dgerfs: typeof nlapack.dgerfs;
export declare const sgerfs: typeof nlapack.sgerfs;
export declare const dgerfsx: typeof nlapack.dgerfsx;
export declare const sgerfsx: typeof nlapack.sgerfsx;
export declare const dgbrfs: typeof nlapack.dgbrfs;
export declare const sgbrfs: typeof nlapack.sgbrfs;
export declare const dgbrfsx: typeof nlapack.dgbrfsx;
export declare const sgbrfsx: typeof nlapack.sgbrfsx;
export declare const dgtrfs: typeof nlapack.dgtrfs;
export declare const sgtrfs: typeof nlapack.sgtrfs;
export declare const dporfs: typeof nlapack.dporfs;
export declare const sporfs: typeof nlapack.sporfs;
export declare const dporfsx: typeof nlapack.dporfsx;
export declare const sporfsx: typeof nlapack.sporfsx;
export declare const dpprfs: typeof nlapack.dpprfs;
export declare const spprfs: typeof nlapack.spprfs;
export declare const dpbrfs: typeof nlapack.dpbrfs;
export declare const spbrfs: typeof nlapack.spbrfs;
export declare const dptrfs: typeof nlapack.dptrfs;
export declare const sptrfs: typeof nlapack.sptrfs;
export declare const dsyrfs: typeof nlapack.dsyrfs;
export declare const ssyrfs: typeof nlapack.ssyrfs;
export declare const dsyrfsx: typeof nlapack.dsyrfsx;
export declare const ssyrfsx: typeof nlapack.ssyrfsx;
export declare const dsprfs: typeof nlapack.dsprfs;
export declare const ssprfs: typeof nlapack.ssprfs;
export declare const dtrrfs: typeof nlapack.dtrrfs;
export declare const strrfs: typeof nlapack.strrfs;
export declare const dtprfs: typeof nlapack.dtprfs;
export declare const stprfs: typeof nlapack.stprfs;
export declare const dtbrfs: typeof nlapack.dtbrfs;
export declare const stbrfs: typeof nlapack.stbrfs;
export declare const dgetri: typeof nlapack.dgetri;
export declare const sgetri: typeof nlapack.sgetri;
export declare const dpotri: typeof nlapack.dpotri;
export declare const spotri: typeof nlapack.spotri;
export declare const dpftri: typeof nlapack.dpftri;
export declare const spftri: typeof nlapack.spftri;
export declare const dpptri: typeof nlapack.dpptri;
export declare const spptri: typeof nlapack.spptri;
export declare const dsytri: typeof nlapack.dsytri;
export declare const ssytri: typeof nlapack.ssytri;
export declare const dsytri_rook: typeof nlapack.dsytri_rook;
export declare const ssytri_rook: typeof nlapack.ssytri_rook;
export declare const dsytri2: typeof nlapack.dsytri2;
export declare const ssytri2: typeof nlapack.ssytri2;
export declare const dsytri2x: typeof nlapack.dsytri2x;
export declare const ssytri2x: typeof nlapack.ssytri2x;
export declare const dsptri: typeof nlapack.dsptri;
export declare const ssptri: typeof nlapack.ssptri;
export declare const dtrtri: typeof nlapack.dtrtri;
export declare const strtri: typeof nlapack.strtri;
export declare const dtftri: typeof nlapack.dtftri;
export declare const stftri: typeof nlapack.stftri;
export declare const dtptri: typeof nlapack.dtptri;
export declare const stptri: typeof nlapack.stptri;
export declare const dgeequ: typeof nlapack.dgeequ;
export declare const sgeequ: typeof nlapack.sgeequ;
export declare const dgeequb: typeof nlapack.dgeequb;
export declare const sgeequb: typeof nlapack.sgeequb;
export declare const dgbequ: typeof nlapack.dgbequ;
export declare const sgbequ: typeof nlapack.sgbequ;
export declare const dgbequb: typeof nlapack.dgbequb;
export declare const sgbequb: typeof nlapack.sgbequb;
export declare const dpoequ: typeof nlapack.dpoequ;
export declare const spoequ: typeof nlapack.spoequ;
export declare const dpoequb: typeof nlapack.dpoequb;
export declare const spoequb: typeof nlapack.spoequb;
export declare const dppequ: typeof nlapack.dppequ;
export declare const sppequ: typeof nlapack.sppequ;
export declare const dpbequ: typeof nlapack.dpbequ;
export declare const spbequ: typeof nlapack.spbequ;
export declare const dsyequb: typeof nlapack.dsyequb;
export declare const ssyequb: typeof nlapack.ssyequb;
export declare const dgesv: typeof nlapack.dgesv;
export declare const sgesv: typeof nlapack.sgesv;
export declare const dgeev: typeof nlapack.dgeev;
export declare const sgeev: typeof nlapack.sgeev;
export declare const ilaver: typeof nlapack.ilaver;
export declare const dlatms: typeof nlapack.dlatms;
export declare const slatms: typeof nlapack.slatms;
export {};