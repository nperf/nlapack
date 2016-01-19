#ifndef FORTRAN_H
#define FORTRAN_H

// fortran column-major <=> c row-major
#define FORTRAN_DOUBLE_ORDER(m, n, a) {													\
	double* b = new double[m * n];																\
	for (int i = 0; i < m; i++)																		\
		for (int j = 0; j < n; j++)																	\
			b[(i * n + j) % m * m + (i * n + j) / m] = a[i * n + j];	\
	memmove(a, b, m * n * sizeof(double));												\
}

#define FORTRAN_SINGLE_ORDER(m, n, a) {													\
	float* b = new float[m * n];																  \
	for (int i = 0; i < m; i++)																		\
		for (int j = 0; j < n; j++)																	\
			b[(i * n + j) % m * m + (i * n + j) / m] = a[i * n + j];	\
	memmove(a, b, m * n * sizeof(float));													\
}

// fortran array indexing <=> c
#define IPIV_FORTRAN(n, ipiv) {	\
	for (int i = 0; i < n; i++)		\
		ipiv[i] = ipiv[i] + 1;			\
}

#define IPIV_C(n, ipiv) {				\
	for (int i = 0; i < n; i++)		\
		ipiv[i] = ipiv[i] - 1;			\
}

#endif
