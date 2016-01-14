(function () {
  'use strict';

  var assert = require('assert'),
      addon = require('../addon');

  describe('?getrf', function () {
    it('works for 2x2 matrix', function () {
      var x = new Float64Array([1, 1, 1, -1]),
          y = new Float64Array([1, 1, 1, -2]),
          ipiv = new Int32Array(2);

      addon.getrf(2, 2, x, ipiv);
      assert.deepEqual(y, x);
      assert.deepEqual(new Int32Array([1, 2]), ipiv);
    });

    it('works for 3x3 matrix', function () {
      var x = new Float64Array([1, 3, 5, 2, 4, 7, 1, 1, 0]),
          y = new Float64Array([2, 4, 7, 0.5, 1, 1.5, 0.5, -1, -2]),
          ipiv = new Int32Array(3);

      addon.getrf(3, 3, x, ipiv);
      assert.deepEqual(y, x);
      assert.deepEqual(new Int32Array([2, 2, 3]), ipiv);
    });
  });
}());
