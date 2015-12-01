#ifndef PBTRF_H
#define PBTRF_H

#include <nan.h>

NAN_METHOD(dpbtrf);
extern "C" int dpbtrf_ (
	int*,
	int*,
	int*,
	double*,
	int*
);

NAN_METHOD(spbtrf);
extern "C" int spbtrf_ (
	int*,
	int*,
	int*,
	float*,
	int*
);

#endif
