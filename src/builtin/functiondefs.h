/** @file functiondefs.h
 *  @author T J Atherton
 *
 *  @brief Built in function definitions
 */

#ifndef functiondefs_h
#define functiondefs_h

#include <stdio.h>

/* -------------------------------------------------------
 * Built in function labels
 * ------------------------------------------------------- */

#define FUNCTION_RANDOM        "random"
#define FUNCTION_RANDOMINT     "randomint"
#define FUNCTION_RANDOMNORMAL  "randomnormal"
#define FUNCTION_CLOCK         "clock"
#define FUNCTION_SYSTEM        "system"

#define FUNCTION_INT           "Int"
#define FUNCTION_FLOAT         "Float"
#define FUNCTION_BOOL          "Bool"
#define FUNCTION_MOD           "mod"
#define FUNCTION_ABS           "abs"
#define FUNCTION_ISCALLABLE    "iscallable"
#define FUNCTION_MIN           "min"
#define FUNCTION_MAX           "max"
#define FUNCTION_BOUNDS        "bounds"

#define FUNCTION_REAL           "real"
#define FUNCTION_IMAG           "imag"
#define FUNCTION_ANGLE          "angle"
#define FUNCTION_CONJ           "conj"

#define FUNCTION_SIGN           "sign"

#define FUNCTION_APPLY         "apply"

#define FUNCTION_ARCTAN        "arctan"

/* -------------------------------------------------------
 * Errors thrown by builtin functions
 * ------------------------------------------------------- */

#define MATH_ARGS                    "ExpctNmArgs"
#define MATH_ARGS_MSG                "Function '%s' expects numerical arguments."

#define MATH_NUMARGS                 "ExpctArgNm"
#define MATH_NUMARGS_MSG             "Function '%s' expects 1 numerical argument."

#define MATH_ATANARGS                "AtanArgNm"
#define MATH_ATANARGS_MSG            "Function 'arctan' expects either 1 or 2 numerical arguments."

#define TYPE_NUMARGS                 "TypArgNm"
#define TYPE_NUMARGS_MSG             "Function '%s' expects one argument."

#define MAX_ARGS                     "MnMxArgs"
#define MAX_ARGS_MSG                 "Function '%s' expects at least one numerical argument, list or matrix."

#define APPLY_ARGS                   "ApplyArgs"
#define APPLY_ARGS_MSG               "Function 'apply' expects at least two arguments."

#define APPLY_NOTCALLABLE            "ApplyNtCllble"
#define APPLY_NOTCALLABLE_MSG        "Function 'apply' requires a callable object as its first argument."

/* -------------------------------------------------------
 * Interface to define builtin functions
 * ------------------------------------------------------- */

void functiondefs_initialize(void);

#endif /* functions_h */
