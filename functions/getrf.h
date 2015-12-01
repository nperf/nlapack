#ifndef GETRF_H
#define GETRF_H

#include <nan.h>

NAN_METHOD(dgetrf);
extern "C" int dgetrf_ (
	int*,
	int*,
	double*,
	int*,
	int*,
	int*
);

NAN_METHOD(sgetrf);
extern "C" int sgetrf_ (
	int*,
	int*,
	float*,
	int*,
	int*,
	int*
);

#endif
