#ifndef GBTRF_H
#define GBTRF_H

#include <nan.h>

NAN_METHOD(dgbtrf);
extern "C" void dgbtrf_ (
	int*,
	int*,
	int*,
	int*,
	double*,
	int*,
	int*,
	int*
);

NAN_METHOD(sgbtrf);
extern "C" void sgbtrf_ (
	int*,
	int*,
	int*,
	int*,
	double*,
	int*,
	int*,
	int*
);

#endif
