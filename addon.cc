#include <node.h>
#include "routines.h"

void Init(v8::Local<v8::Object> exports) {
  // LAPACK Matrix Factorization Routines
  NODE_SET_METHOD(exports, "dgetrf", dgetrf);
  NODE_SET_METHOD(exports, "sgetrf", sgetrf);
  NODE_SET_METHOD(exports, "dgbtrf", dgbtrf);
  NODE_SET_METHOD(exports, "sgbtrf", sgbtrf);
  NODE_SET_METHOD(exports, "dpbtrf", dpbtrf);
  NODE_SET_METHOD(exports, "spbtrf", spbtrf);
  // NODE_SET_METHOD(exports, "dgttrf", dgttrf);
  // NODE_SET_METHOD(exports, "sgttrf", sgttrf);
  // NODE_SET_METHOD(exports, "dpotrf", dpotrf);
  // NODE_SET_METHOD(exports, "spotrf", spotrf);
  // NODE_SET_METHOD(exports, "dpstrf", dpstrf);
  // NODE_SET_METHOD(exports, "spstrf", spstrf);
  // NODE_SET_METHOD(exports, "dpftrf", dpftrf);
  // NODE_SET_METHOD(exports, "spftrf", spftrf);
  // NODE_SET_METHOD(exports, "dpptrf", dpptrf);
  // NODE_SET_METHOD(exports, "spptrf", spptrf);
  // NODE_SET_METHOD(exports, "dpttrf", dpttrf);
  // NODE_SET_METHOD(exports, "spttrf", spttrf);
  // NODE_SET_METHOD(exports, "dsytrf", dsytrf);
  // NODE_SET_METHOD(exports, "ssytrf", ssytrf);
  // NODE_SET_METHOD(exports, "dsptrf", dsptrf);
  // NODE_SET_METHOD(exports, "ssptrf", ssptrf);

  // // LAPACK Routines for Solving Systems of Linear Equations
  // NODE_SET_METHOD(exports, "dgetrs", dgetrs);
  // NODE_SET_METHOD(exports, "sgetrs", sgetrs);
  // NODE_SET_METHOD(exports, "dgbtrs", dgbtrs);
  // NODE_SET_METHOD(exports, "sgbtrs", sgbtrs);
  // NODE_SET_METHOD(exports, "dgttrs", dgttrs);
  // NODE_SET_METHOD(exports, "sgttrs", sgttrs);
  // NODE_SET_METHOD(exports, "ddttrsb", ddttrsb);
  // NODE_SET_METHOD(exports, "sdttrsb", sdttrsb);
  // NODE_SET_METHOD(exports, "dpotrs", dpotrs);
  // NODE_SET_METHOD(exports, "spotrs", spotrs);
}

NODE_MODULE(addon, Init)
