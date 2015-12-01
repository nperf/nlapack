#ifndef PPTRF_H
#define PPTRF_H

#include <nan.h>

NAN_METHOD(dpptrf);
extern "C" int dpptrf_ (
	int*,
	int*,
	double*,
	int*
);

NAN_METHOD(spptrf);
extern "C" int spptrf_ (
	int*,
	int*,
	float*,
	int*
);

#endif
