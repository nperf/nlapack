(function() {
  'use strict';

  var addon = require('./build/Release/addon');

  // Matrix Factorization Routines
  addon.gbtrf =
    (m, n, kl, ku, ab, ipiv) => {
      var info =
        ab.constructor === Float64Array ?
          addon.dgbtrf(n, m, kl, ku, ab, m, ipiv) :
          addon.sgbtrf(n, m, kl, ku, ab, m, ipiv);
      return info;
    };

  addon.getrf =
    (m, n, a, ipiv) => {
      var info =
        a.constructor === Float64Array ?
          addon.dgetrf(n, m, a, m, ipiv) :
          addon.sgetrf(n, m, a, m, ipiv);
      return info;
    };

  addon.gttrf =
    (n, dl, d, du, du2, ipiv) =>
      dl.constructor === Float64Array ?
        addon.dgttrf(n, dl, d, du, du2, ipiv) :
        addon.sgttrf(n, dl, d, du, du2, ipiv);

  addon.potrf =
    (m, n, a, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpotrf(uplo, m, a, n) :
          addon.spotrf(uplo, m, a, n);
      return info;
    };

  addon.pstrf =
    (m, n, a, piv, rank, tol, work, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpstrf(uplo, m, a, n, piv, rank, tol, work) :
          addon.spstrf(uplo, m, a, n, piv, rank, tol, work);
      return info;
    };

  addon.pftrf =
    (n, a, transr, uplo) => {
      transr = (uplo || 'N').charCodeAt(0);
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpftrf(transr, uplo, n, a) :
          addon.spftrf(transr, uplo, n, a);
      return info;
    };

  addon.pptrf =
    (n, ap, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        ap.constructor === Float64Array ?
          addon.dpptrf(uplo, n, ap) :
          addon.spptrf(uplo, n, ap);
      return info;
    };

  addon.pbtrf =
    (m, n, a, kd, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpotrf(uplo, m, a, n) :
          addon.spotrf(uplo, m, a, n);
      return info;
    };

  addon.pttrf =
    (n, a, kd, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpotrf(uplo, n, a, n) :
          addon.spotrf(uplo, n, a, n);
      return info;
    };

  addon.sytrf =
    (m, n, a, ipiv, work, lwork, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dsytrf(uplo, m, a, n, ipiv, work, lwork) :
          addon.ssytrf(uplo, m, a, n, ipiv, work, lwork);
      return info;
    };

  addon.sptrf =
    (n, ap, ipiv, uplo) => {
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        ap.constructor === Float64Array ?
          addon.dsptrf(uplo, n, ap, ipiv) :
          addon.ssptrf(uplo, n, ap, ipiv);
      return info;
    };

  // Routines for Solving Systems of Linear Equations
  addon.getrs =
    (n, a, b, ipiv, nrhs, trans) => {
      nrhs = nrhs || 1;
      trans = (trans || 'N').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dgetrs(trans, n, nrhs, a, n, ipiv, b, n) :
          addon.sgetrs(trans, n, nrhs, a, n, ipiv, b, n);
      return info;
    };

  addon.gbtrs =
    (m, n, kl, ku, ab, b, ipiv, nrhs, trans) => {
      nrhs = nrhs || 1;
      trans = (trans || 'N').charCodeAt(0);
      var info =
        ab.constructor === Float64Array ?
          addon.dgbtrs(trans, m, kl, ku, nrhs, ab, n, ipiv, b, n) :
          addon.sgbtrs(trans, m, kl, ku, nrhs, ab, n, ipiv, b, n);
      return info;
    };

  module.exports = addon;
}());
