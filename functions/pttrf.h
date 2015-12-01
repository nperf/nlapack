#ifndef PTTRF_H
#define PTTRF_H

#include <nan.h>

NAN_METHOD(dpttrf);
extern "C" int dpttrf_ (
	int*,
	double*,
	double*,
	int*
);

NAN_METHOD(spttrf);
extern "C" int spttrf_ (
	int*,
	float*,
	float*,
	int*
);

#endif
