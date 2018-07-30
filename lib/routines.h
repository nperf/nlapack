#ifndef ROUTINES_H
#define ROUTINES_H

#include <node.h>

#define GET_CONTENTS(view) \
(static_cast<unsigned char*>(view->Buffer()->GetContents().Data()) + view->ByteOffset())

#define IPIV_C(n, ipiv)\
	for (int i = 0; i < n; i++)\
		ipiv[i] = ipiv[i] - 1;\

enum CBLAS_UPLO {CblasUpper=121, CblasLower=122};

void dgetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgetrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dgttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void sgttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void dpbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
void spbtrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dpftrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void spftrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dpotrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void spotrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dpptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void spptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dpstrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void spstrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dpttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void spttrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dsptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ssptrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dsytrf(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ssytrf(const v8::FunctionCallbackInfo<v8::Value>& info);

// void dgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sgbtrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dgetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sgetrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dgttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sgttrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void ddttrsb(const v8::FunctionCallbackInfo<v8::Value>& info);
// void sdttrsb(const v8::FunctionCallbackInfo<v8::Value>& info);
// void dpotrs(const v8::FunctionCallbackInfo<v8::Value>& info);
// void spotrs(const v8::FunctionCallbackInfo<v8::Value>& info);

#endif
