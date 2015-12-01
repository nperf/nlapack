(function() {
  'use strict';

  var addon = require('./build/Release/addon');

  addon.getrf =
    (m, n, x, ipiv) =>
      x.constructor === Float64Array ?
        addon.dgetrf(m, n, x, m, ipiv || new Int32Array(Math.min(m, n))) :
        addon.sgetrf(m, n, x, m, ipiv || new Int32Array(Math.min(m, n)));

  addon.gbtrf =
    (m, n, kl, ku, ab, ipiv) =>
      ab.constructor === Float64Array ?
        addon.dgbtrf(m, n, kl, ku, ab, m, ipiv || new Int32Array(Math.min(m, n))) :
        addon.sgbtrf(m, n, kl, ku, ab, m, ipiv || new Int32Array(Math.min(m, n)));

  addon.gttrf =
    (n, dl, d, du, du2, ipiv) =>
      dl.constructor === Float64Array ?
        addon.dgttrf(n, dl, d, du, du2, ipiv || new Int32Array(Math.min(m, n))) :
        addon.sgttrf(n, dl, d, du, du2, ipiv || new Int32Array(Math.min(m, n)));

  module.exports = addon;
}());
