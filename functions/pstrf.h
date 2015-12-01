#ifndef PSTRF_H
#define PSTRF_H

#include <nan.h>

NAN_METHOD(dpstrf);
extern "C" int dpstrf_ (
	int*,
	int*,
	double*,
	int*,
	int*,
	int*,
	double*,
	double*,
	int*
);

NAN_METHOD(spstrf);
extern "C" int spstrf_ (
	int*,
	int*,
	float*,
	int*,
	int*,
	int*,
	float*,
	float*,
	int*
);

#endif
