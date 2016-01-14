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

  // Routines for Solving Systems of Linear Equations
  addon.getrs =
    (n, nrhs, a, lda, ipiv, b, ldb, trans) => {
      fortran(a, n, n);
      fortran(b, 1, n);
      var info =
        a.constructor === Float64Array ?
          addon.dgetrs(trans || 30, n, nrhs, a, lda, ipiv, b, ldb) :
          addon.sgetrs(trans || 30, n, nrhs, a, lda, ipiv, b, ldb);
      fortran(a, lda, n);
      fortran(b, 1, n);
      return info;
    };

  module.exports = addon;
}());
