/** @file function.h
 *  @author T J Atherton
 *
 *  @brief Defines function object type and Function veneer class
 */

#ifndef function_h
#define function_h

#include "object.h"

/* -------------------------------------------------------
 * Function objects
 * ------------------------------------------------------- */

extern objecttype objectfunctiontype;
#define OBJECT_FUNCTION objectfunctiontype

typedef struct {
    value symbol; /** Symbol associated with the variable */
    indx def; /** Default value as constant */
    indx reg; /** Associated register */
} optionalparam;

DECLARE_VARRAY(optionalparam, optionalparam)

/** A function object */
typedef struct sobjectfunction {
    object obj;
    int nargs;
    int varg; // The parameter number of a variadic parameter.
    value name;
    indx entry;
    struct sobjectfunction *parent;
    int nupvalues;
    int nregs;
    objectclass *klass;
    varray_value konst;
    varray_varray_upvalue prototype;
    varray_optionalparam opt;
} objectfunction;

/** Gets an objectfunction from a value */
#define MORPHO_GETFUNCTION(val)   ((objectfunction *) MORPHO_GETOBJECT(val))

/** Tests whether an object is a function */
#define MORPHO_ISFUNCTION(val) object_istype(val, OBJECT_FUNCTION)

/* -------------------------------------------------------
 * Function veneer class
 * ------------------------------------------------------- */

#define FUNCTION_CLASSNAME "Function"

/* -------------------------------------------------------
 * Function error messages
 * ------------------------------------------------------- */

/* -------------------------------------------------------
 * Function interface
 * ------------------------------------------------------- */

void object_functioninit(objectfunction *func);
void object_functionclear(objectfunction *func);
bool object_functionaddprototype(objectfunction *func, varray_upvalue *v, indx *ix);
objectfunction *object_getfunctionparent(objectfunction *func);
value object_getfunctionname(objectfunction *func);
varray_value *object_functiongetconstanttable(objectfunction *func);
objectfunction *object_newfunction(indx entry, value name, objectfunction *parent, unsigned int nargs);
bool object_functionhasvargs(objectfunction *func);
void object_functionsetvarg(objectfunction *func, unsigned int varg);

void objectfunction_printfn(object *obj, void *v);

void function_initialize(void);

#endif
