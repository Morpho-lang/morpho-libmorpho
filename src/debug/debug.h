/** @file debug.h
 *  @author T J Atherton
 *
 *  @brief Debugger, dissassembly and other tools
 */

#ifndef debug_h
#define debug_h

#include <stdio.h>
#include "syntaxtree.h"
#include "object.h"
#include "program.h"
#include "debugannotation.h"

#define DEBUG_ISSINGLESTEP(d) ((d) && (d->singlestep))

/* -------------------------------------------------------
 * Debugger error messages
 * ------------------------------------------------------- */

#define DEBUGGER_SYMBOL                    "DbgSymbl"
#define DEBUGGER_SYMBOL_MSG                "Can't find symbol '%s' in current context."

#define DEBUGGER_SETPROPERTY               "DbgStPrp"
#define DEBUGGER_SETPROPERTY_MSG           "Object does not support setting properties."

#define DEBUGGER_INVLDREGISTER             "DbgInvldRg"
#define DEBUGGER_INVLDREGISTER_MSG         "Invalid register."

#define DEBUGGER_REGISTEROBJ               "DbgRgObj"
#define DEBUGGER_REGISTEROBJ_MSG           "Register %i does not contain an object."

/* -------------------------------------------------------
 * Debugger interface
 * ------------------------------------------------------- */

bool debug_infofromindx(program *code, instructionindx indx, value *module, int *line, int *posn, objectfunction **func, objectclass **klass);
bool debug_indxfromline(program *code, int line, instructionindx *out);
bool debug_indxfromfunction(program *code, value klassname, value fname, instructionindx *indx);
bool debug_symbolsforfunction(program *code, objectfunction *func, instructionindx *indx, value *symbols);

void debugger_init(debugger *d, program *p);
void debugger_clear(debugger *d);

void debugger_seterror(debugger *d, error *err);

vm *debugger_currentvm(debugger *d);
bool debugger_isactive(debugger *d);

void debugger_setsinglestep(debugger *d, bool singlestep);
bool debugger_insinglestep(debugger *d);

void debugger_setbreakpoint(debugger *d, instructionindx indx);
void debugger_clearbreakpoint(debugger *d, instructionindx indx);
bool debugger_shouldbreakat(debugger *d, instructionindx indx);

void debugger_disassembleinstruction(vm *v, instruction instruction, instructionindx indx, value *konst, value *reg);
void debugger_disassemble(vm *v, program *code, int *matchline);

void debugger_garbagecollect(debugger *debug);
void debugger_quit(debugger *debug);

void debugger_showlocation(debugger *debug, instructionindx indx);
bool debugger_showaddress(debugger *debug, indx rindx);
void debugger_showbreakpoints(debugger *debug);
void debugger_showglobals(debugger *debug);
bool debugger_showglobal(debugger *debug, indx g);
void debugger_showregisters(debugger *debug);
void debugger_showstack(debugger *debug);

bool debugger_showsymbol(debugger *debug, value symbol);
bool debugger_showproperty(debugger *debug, value obj, value property);
void debugger_showsymbols(debugger *debug);

bool debugger_setregister(debugger *debug, indx reg, value val);
bool debugger_setsymbol(debugger *debug, value symbol, value val);
bool debugger_setproperty(debugger *debug, value symbol, value property, value val);

bool debugger_enter(debugger *debug, vm *v);

void debugger_initialize(void);

#endif /* debug_h */
