#ifndef GETRS_H
#define GETRS_H

#include <nan.h>

NAN_METHOD(dgetrs);
extern "C" int dgetrs_ (
	int*,
	int*,
	int*,
	double*,
	int*,
	int*,
	double*,
	int*,
	int*
);

NAN_METHOD(sgetrs);
extern "C" int sgetrs_ (
	int*,
	int*,
	int*,
	float*,
	int*,
	int*,
	float*,
	int*,
	int*
);

#endif
