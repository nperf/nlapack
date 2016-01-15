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

  describe('?gbtrf', function () {
    it('works for 3x3 matrix', function () {
      var ab = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      var ipiv = new Int32Array(3),
          kl = 1,
          ku = 0;

      assert.equal(0, addon.gbtrf(3, 3, kl, ku, ab, ipiv));
    });
  });

  describe('?potrf', function () {
    it('works for 2x2 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      addon.potrf(3, 3, a);
    });

    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      addon.potrf(3, 3, a);
    });
  });

  describe('?pstrf', function () {
    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      var piv = new Int32Array(3),
          work = new Float64Array(9),
          tol = 1,
          rank;

      assert.equal(0, addon.pstrf(3, 3, a, piv, rank, tol, work));
    });
  });

  describe('?pftrf', function () {
    it('runs for 3x3 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      addon.pftrf(3, a);
    });
  });

  describe('?pptrf', function () {
    it('runs for 3x3 matrix', function () {
      // should be packed
      var ap = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      addon.pptrf(3, ap);
    });
  });

  describe('?pbtrf', function () {
    it('runs for 3x3 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      assert.equal(0, addon.pbtrf(3, 3, a, 2));
    });
  });

  describe('?pttrf', function () {
    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      assert.equal(0, addon.pttrf(3, a, 2));
    });
  });

  describe('?sytrf', function () {
    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      var piv = new Int32Array(3),
          work = new Float64Array(9);

      assert.equal(0, addon.sytrf(3, 3, a, piv, work, 3));
    });
  });

  describe('?sptrf', function () {
    it('runs for 3x3 matrix', function () {
      // should be packed
      var ap = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      var piv = new Int32Array(3);

      addon.sptrf(3, ap, piv);
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
      addon.getrs(2, a, b, ipiv);
      assert.deepEqual(new Float64Array([1, 1]), b);
    });

    it('works for 3x3 matrix', function () {
      var a = new Float64Array([
        -1, 0, 1,
        -2, -1, 5,
        2, 1, 0
      ]);

      var b = new Float64Array([
        3,
        -1,
        1
      ]);

      var ipiv = new Int32Array(3);

      addon.getrf(3, 3, a, ipiv);
      addon.getrs(3, a, b, ipiv);
      assert.deepEqual(new Float64Array([-3, 7, 0]), b);
    });
  });

  describe('?gbtrs', function () {
    it('works for 3x3 matrix', function () {
      var ab = new Float64Array([
        2, -1, 0,
        -1, 2, -1,
        0, -1, 2
      ]);

      var b = new Float64Array([
        1,
        0,
        -1
      ]);

      var x = new Float64Array([-1, 0, 1]);

      var ipiv = new Int32Array(3),
          kl = 1,
          ku = 0;

      addon.gbtrf(3, 3, kl, ku, ab, ipiv);
      addon.gbtrs(3, 3, kl, ku, ab, b, ipiv);
      assert.deepEqual(x, b);
    });
  });
}());
