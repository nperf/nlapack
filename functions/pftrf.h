#ifndef PFTRF_H
#define PFTRF_H

#include <nan.h>

NAN_METHOD(dpftrf);
extern "C" int dpftrf_ (
	int*,
	int*,
	int*,
	double*,
	int*
);

NAN_METHOD(spftrf);
extern "C" int spftrf_ (
	int*,
	int*,
	int*,
	double*,
	int*
);

#endif
