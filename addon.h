#ifndef ADDON_H
#define ADDON_H

#include <nan.h>

// LAPACK Matrix Factorization Routines
#include "functions/getrf.h"
#include "functions/gbtrf.h"
#include "functions/gttrf.h"
#include "functions/potrf.h"
#include "functions/pstrf.h"
#include "functions/pftrf.h"
#include "functions/pptrf.h"
#include "functions/pbtrf.h"
#include "functions/pttrf.h"
#include "functions/sytrf.h"
#include "functions/sptrf.h"

// LAPACK Routines for Solving Systems of Linear Equations
#include "functions/getrs.h"

#endif
