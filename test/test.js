(function () {
  'use strict';

  var assert = require('assert'),
      addon = require('../addon'),
      util = require('../util');

  const SIZE = 9,
        DIM = Math.sqrt(SIZE);
  var f64a = new Float64Array(util.randomArray(SIZE)),
      f64b = new Float64Array(util.randomArray(SIZE)),
      f32a = new Float32Array(util.randomArray(SIZE)),
      f32b = new Float32Array(util.randomArray(SIZE));

  describe('?getrf', function () {
    it('works without crashing', function () {
      var x = f64a.slice(0),
          ipiv = new Int32Array(DIM);

      console.log(addon.getrf(DIM, DIM, x));
    });
    it('works without crashing', function () {
      var x = f32a.slice(0),
          ipiv = new Int32Array(DIM);

      console.log(addon.getrf(DIM, DIM, x));
    });
  });

  describe('?gbtrf', function () {
    it('works without crashing', function () {
      var x = f64a.slice(0),
          ipiv = new Int32Array(DIM);

      console.log(addon.gbtrf(DIM, DIM, DIM, DIM, x, ipiv));
    });
    it('works without crashing', function () {
      var x = f32a.slice(0),
          ipiv = new Int32Array(DIM);

      console.log(addon.gbtrf(DIM, DIM, DIM, DIM, x, ipiv));
    });
  });
}());
