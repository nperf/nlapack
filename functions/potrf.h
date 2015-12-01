#ifndef POTRF_H
#define POTRF_H

#include <nan.h>

NAN_METHOD(dpotrf);
extern "C" int dpotrf_ (
	int*,
	int*,
	double*,
	int*,
	int*
);

NAN_METHOD(spotrf);
extern "C" int spotrf_ (
	int*,
	int*,
	float*,
	int*,
	int*
);

#endif
