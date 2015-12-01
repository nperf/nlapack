#ifndef SPTRF_H
#define SPTRF_H

#include <nan.h>

NAN_METHOD(dsptrf);
extern "C" int dsptrf_ (
	int*,
	int*,
	double*,
	int*,
	int*
);

NAN_METHOD(ssptrf);
extern "C" int ssptrf_ (
	int*,
	int*,
	float*,
	int*,
	int*
);

#endif
