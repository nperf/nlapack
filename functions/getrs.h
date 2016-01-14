#ifndef GETRS_H
#define GETRS_H

#include <nan.h>

NAN_METHOD(dgetrs);
extern "C" int dgetrs_ (
	char*,
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
	char*,
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
