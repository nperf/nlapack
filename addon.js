(function() {
  'use strict';

  var addon = require('./build/Release/addon');

  function fortran(data, width, height) {
    var copy = new data.constructor(width * height),
        index, i, j;
    for (i = 0; i < width; i++) {
      for (j = 0; j < height; j++) {
        index = i * height + j;
        copy[(index % width) * width + Math.floor(index / width)] = data[index];
      }
    }

    for (i = 0; i < width * height; i++)
      data[i] = copy[i];
  }

  // Matrix Factorization Routines
  addon.gbtrf =
    (m, n, kl, ku, ab, ipiv) => {
      fortran(ab, m, n);
      var info =
        ab.constructor === Float64Array ?
          addon.dgbtrf(n, m, kl, ku, ab, m, ipiv) :
          addon.sgbtrf(n, m, kl, ku, ab, m, ipiv);
      fortran(ab, m, n);
      return info;
    };

  addon.getrf =
    (m, n, a, ipiv) => {
      fortran(a, m, n);
      var info =
        a.constructor === Float64Array ?
          addon.dgetrf(n, m, a, m, ipiv) :
          addon.sgetrf(n, m, a, m, ipiv);
      fortran(a, m, n);
      return info;
    };

  addon.gttrf =
    (n, dl, d, du, du2, ipiv) =>
      dl.constructor === Float64Array ?
        addon.dgttrf(n, dl, d, du, du2, ipiv) :
        addon.sgttrf(n, dl, d, du, du2, ipiv);

  addon.potrf =
    (m, n, a, uplo) => {
      fortran(a, m, n);
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpotrf(uplo, n, a, m) :
          addon.spotrf(uplo, n, a, m);
      fortran(a, m, n);
      return info;
    };

  addon.pstrf =
    (m, n, a, piv, rank, tol, work, uplo) => {
      fortran(a, m, n);
      uplo = (uplo || 'U').charCodeAt(0);
      var info =
        a.constructor === Float64Array ?
          addon.dpstrf(uplo, n, a, m, piv, rank, tol, work) :
          addon.spstrf(uplo, n, a, m, piv, rank, tol, work);
      fortran(a, m, n);
      return info;
    };

  // Routines for Solving Systems of Linear Equations
  addon.getrs =
    (n, a, b, ipiv, nrhs, trans) => {
      fortran(a, n, n);
      fortran(b, 1, n);
      trans = (trans || 'N').charCodeAt(0);
      nrhs = nrhs || 1;
      var info =
        a.constructor === Float64Array ?
          addon.dgetrs(trans, n, nrhs, a, n, ipiv, b, n) :
          addon.sgetrs(trans, n, nrhs, a, n, ipiv, b, n);
      fortran(a, n, n);
      fortran(b, 1, n);
      return info;
    };

  module.exports = addon;
}());
