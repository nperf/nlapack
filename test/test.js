(function () {
  'use strict';

  var assert = require('assert'),
      addon = require('../addon');

  describe('?getrf', function () {
    it('works for 2x2 matrix', function () {
      var a = new Float64Array([
        1, 1,
        1, -1
      ]);

      var b = new Float64Array([
        1, 1,
        1, -2
      ]);

      var ipiv = new Int32Array(2);

      addon.getrf(2, 2, a, ipiv);
      assert.deepEqual(b, a);
      assert.deepEqual(new Int32Array([1, 2]), ipiv);
    });

    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        1, 3, 5,
        2, 4, 7,
        1, 1, 0
      ]);

      var b = new Float64Array([
        2, 4, 7,
        0.5, 1, 1.5,
        0.5, -1, -2
      ]);

      var ipiv = new Int32Array(3);

      addon.getrf(3, 3, a, ipiv);
      assert.deepEqual(b, a);
      assert.deepEqual(new Int32Array([2, 2, 3]), ipiv);
    });
  });

  describe('?getrs', function () {
    it('works for 2x2 matrix', function () {
      var a = new Float64Array([
        1, 1,
        1, -1
      ]);

      var b = new Float64Array([
        2,
        0
      ]);

      var ipiv = new Int32Array(2);

      addon.getrf(2, 2, a, ipiv);
      addon.getrs(2, 1, a, 2, ipiv, b, 2);
      assert.deepEqual(new Float64Array([1, 1]), b);
    });

    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        1, 1, -1,
        3, 4, -2,
        -2, 1, 3
      ]);

      var b = new Float64Array([
        1,
        2,
        0
      ]);

      var ipiv = new Int32Array(3);

      addon.getrf(3, 3, a, ipiv);
      addon.getrs(3, 2, a, 3, ipiv, b, 3);
      assert.deepEqual(new Float64Array([-3, 1.5, -2.5]), b);
    });
  });
}());
