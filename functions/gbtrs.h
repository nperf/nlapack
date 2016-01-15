#ifndef GBTRS_H
#define GBTRS_H

#include <nan.h>

NAN_METHOD(dgbtrs);
extern "C" int dgbtrs_ (
	int*,
	int*,
	int*,
	int*,
	int*,
	double*,
	int*,
	int*,
	double*,
	int*
);

NAN_METHOD(sgbtrs);
extern "C" int sgbtrs_ (
	int*,
	int*,
	int*,
	int*,
	int*,
	float*,
	int*,
	int*,
	float*,
	int*
);

#endif
