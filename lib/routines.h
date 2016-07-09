#ifndef ROUTINES_H
#define ROUTINES_H

#include <node.h>
#include "macros.h"

extern "C" int dgetrf_ (int*, int*, double*, int*, int*, int*);
extern "C" int sgetrf_ (int*, int*, float*, int*, int*, int*);
extern "C" void dgbtrf_ (int*, int*, int*, int*, double*, int*, int*, int*);
extern "C" void sgbtrf_ (int*, int*, int*, int*, float*, int*, int*, int*);
extern "C" int dgttrf_ (int*, double*, double*, double*, double*, int*, int*);
extern "C" int sgttrf_ (int*, float*, float*, float*, float*, int*, int*);
extern "C" int dpbtrf_ (int*, int*, int*, double*, int*);
extern "C" int spbtrf_ (int*, int*, int*, float*, int*);
extern "C" int dpftrf_ (int*, int*, int*, double*, int*);
extern "C" int spftrf_ (int*, int*, int*, double*, int*);
extern "C" int dpotrf_ (int*, int*, double*, int*, int*);
extern "C" int spotrf_ (int*, int*, float*, int*, int*);
extern "C" int dpptrf_ (int*, int*, double*, int*);
extern "C" int spptrf_ (int*, int*, float*, int*);
extern "C" int dpstrf_ (int*, int*, double*, int*, int*, int*, double*, double*, int*);
extern "C" int spstrf_ (int*, int*, float*, int*, int*, int*, float*, float*, int*);
extern "C" int dpttrf_ (int*, double*, double*, int*);
extern "C" int spttrf_ (int*, float*, float*, int*);
extern "C" int dsptrf_ (int*, int*, double*, int*, int*);
extern "C" int ssptrf_ (int*, int*, float*, int*, int*);
extern "C" int dsytrf_ (int*, int*, double*, int*, int*, double*, int*, int*);
extern "C" int ssytrf_ (int*, int*, float*, int*, int*, float*, int*, int*);

extern "C" int dgbtrs_ (int*, int*, int*, int*, int*, double*, int*, int*, double*, int*, int*);
extern "C" int sgbtrs_ (int*, int*, int*, int*, int*, float*, int*, int*, float*, int*, int*);
extern "C" int dgetrs_ (int*, int*, int*, double*, int*, int*, double*, int*, int*);
extern "C" int sgetrs_ (int*, int*, int*, float*, int*, int*, float*, int*, int*);
extern "C" int dgttrs_ (int*, int*, int*, double*, double*, double*, double*, int*, double*, int*, int*);
extern "C" int sgttrs_ (int*, int*, int*, float*, float*, float*, float*, int*, float*, int*, int*);
extern "C" int ddttrsb_ (int*, int*, int*, double*, double*, double*, double*, int*, int*);
extern "C" int sdttrsb_ (int*, int*, int*, float*, float*, float*, float*, int*, int*);
extern "C" int dpotrs_ (int*, int*, int*, double*, int*, double*, int*, int*);
extern "C" int spotrs_ (int*, int*, int*, float*, int*, float*, int*, int*);

void dgetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpftrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spftrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpotrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spotrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpstrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spstrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dsytrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void ssytrf(const v8::FunctionCallbackInfo<v8::Value>& info);

void dgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void ddttrsb(const v8::FunctionCallbackInfo<v8::Value>& info);
void sdttrsb(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpotrs(const v8::FunctionCallbackInfo<v8::Value>& info);
void spotrs(const v8::FunctionCallbackInfo<v8::Value>& info);

#endif
