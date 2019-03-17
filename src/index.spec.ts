import {
  strictEqual,
} from 'assert';

import {
  dgetrf,
} from './';
import {
  FloatArray,
} from './types';

const equals: (x: FloatArray, y: FloatArray) => boolean = (x: FloatArray, y: FloatArray): boolean => {
  if (x.length !== y.length) {
    return false;
  }

  for (let i = 0; i < x.length; i++) {
    if (x[i] !== y[i]) {
      return false;
    }
  }

  return true;
};

describe('dgetrf', () => {
  it('should work as expected', () => {
    const x: Float64Array = new Float64Array([
      1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 2.6,
      1.2, 1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4,
      1.4, 1.2, 1, 1.2, 1.4, 1.6, 1.8, 2, 2.2,
      1.6, 1.4, 1.2, 1, 1.2, 1.4, 1.6, 1.8, 2,
      1.8, 1.6, 1.4, 1.2, 1, 1.2, 1.4, 1.6, 1.8,
      2, 1.8, 1.6, 1.4, 1.2, 1, 1.2, 1.4, 1.6,
      2.2, 2, 1.8, 1.6, 1.4, 1.2, 1, 1.2, 1.4,
      2.4, 2.2, 2, 1.8, 1.6, 1.4, 1.2, 1, 1.2,
      2.6, 2.4, 2.2, 2, 1.8, 1.6, 1.4, 1.2, 1,
    ]);
    const ipiv: Int32Array = new Int32Array(9);

    dgetrf(9, 9, x, 9, ipiv);

    strictEqual(
      true,
      equals(
        x.map((value: number): number => Number(value.toFixed(1))),
        new Float64Array([
          2.6, 2.4, 2.2, 2, 1.8, 1.6, 1.4, 1.2, 1,
          0.4, 0.3, 0.6, 0.8, 1.1, 1.4, 1.7, 1.9, 2.2,
          0.5, -0.4, 0.4, 0.8, 1.2, 1.6, 2, 2.4, 2.8,
          0.5, -0.3, -0, 0.4, 0.8, 1.2, 1.6, 2, 2.4,
          0.6, -0.3, 0, 0, 0.4, 0.8, 1.2, 1.6, 2,
          0.7, -0.2, -0, 0, 0, 0.4, 0.8, 1.2, 1.6,
          0.8, -0.2, -0, 0, 0, -0, 0.4, 0.8, 1.2,
          0.8, -0.1, 0, 0, 0, 0, 0, 0.4, 0.8,
          0.9, -0.1, 0, 0, 0, 0, 0, 0, 0.4,
        ])
      )
    );
  });
});
