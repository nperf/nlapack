#ifndef SYTRF_H
#define SYTRF_H

#include <nan.h>

NAN_METHOD(dsytrf);
extern "C" int dsytrf_ (
	int*,
	int*,
	double*,
	int*,
	int*,
	double*,
	int*,
	int*
);

NAN_METHOD(ssytrf);
extern "C" int ssytrf_ (
	int*,
	int*,
	double*,
	int*,
	int*,
	double*,
	int*,
	int*
);

#endif
