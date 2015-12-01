#ifndef GTTRF_H
#define GTTRF_H

#include <nan.h>

NAN_METHOD(dgttrf);
extern "C" int dgttrf_ (
	int*,
	double*,
	double*,
	double*,
	double*,
	int*,
	int*
);

NAN_METHOD(sgttrf);
extern "C" int sgttrf_ (
	int*,
	float*,
	float*,
	float*,
	float*,
	int*,
	int*
);

#endif
