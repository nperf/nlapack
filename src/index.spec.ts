import {
  strictEqual,
} from 'assert';

import {
  dgeev,
  dgetrf,
  Eigenvector,
  NoEigenvector,
} from './';
import {
  FloatArray,
  MatrixEigenvector,
} from './types';

const equals: (x: FloatArray, y: FloatArray) => boolean = (x: FloatArray, y: FloatArray): boolean => {
  if (x.length !== y.length) {
    return false;
  }

  for (let i: number = 0; i < x.length; i += 1) {
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

describe('dgeev', () => {
  it ('should work as expected', () => {
    const x: Float64Array = new Float64Array([
      1, 0, 0,
      0, 2, 0,
      0, 0, 3,
    ]);

    const jobvl: MatrixEigenvector = NoEigenvector;
    const jobvr: MatrixEigenvector = Eigenvector;

    const wr: Float64Array = new Float64Array(3);
    const wi: Float64Array = new Float64Array(3);

    const vl: Float64Array = new Float64Array(9);
    const vr: Float64Array = new Float64Array(9);

    dgeev(jobvl, jobvr, 3, x, 3, wr, wi, vl, 3, vr, 3);

    strictEqual(
      true,
      equals(
        wr,
        new Float64Array([1, 2, 3])
      )
    );

    strictEqual(
      true,
      equals(
        vr,
        new Float64Array([
          1, 0, 0,
          0, 1, 0,
          0, 0, 1,
        ])
      )
    );
  });
});
