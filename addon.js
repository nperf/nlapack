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

  addon.gbtrf =
    (m, n, kl, ku, ab, ipiv) => {
      fortran(ab, m, n);
      var info = ab.constructor === Float64Array ?
        addon.dgbtrf(m, n, kl, ku, ab, n, ipiv || new Int32Array(Math.min(m, n))) :
        addon.sgbtrf(m, n, kl, ku, ab, n, ipiv || new Int32Array(Math.min(m, n)));
      fortran(ab, m, n);
      return info;
    };

  addon.getrf =
    (m, n, x, ipiv) => {
      fortran(x, m, n);
      var info = x.constructor === Float64Array ?
        addon.dgetrf(n, m, x, m, ipiv || new Int32Array(Math.min(m, n))) :
        addon.sgetrf(n, m, x, m, ipiv || new Int32Array(Math.min(m, n)));
      fortran(x, m, n);
      return info;
    };

  addon.gttrf =
    (n, dl, d, du, du2, ipiv) =>
      dl.constructor === Float64Array ?
        addon.dgttrf(n, dl, d, du, du2, ipiv || new Int32Array(Math.min(m, n))) :
        addon.sgttrf(n, dl, d, du, du2, ipiv || new Int32Array(Math.min(m, n)));

  module.exports = addon;
}());
