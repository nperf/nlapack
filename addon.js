(function() {
  'use strict';

  var addon = require('./build/Release/addon');

  addon.getrf =
    (m, n, x) => {
      var ipiv = new Int32Array(Math.max(1, Math.min(m, n)));
      return [
        x.constructor === Float64Array ?
          addon.dgetrf(m, n, x, m, ipiv) :
          addon.sgetrf(m, n, x, m, ipiv),
        x,
        ipiv
      ];
    };

  module.exports = addon;
}());
