//
//  wren_debug.h
//  wren
//
//  Created by Bob Nystrom on 11/29/13.
//  Copyright (c) 2013 Bob Nystrom. All rights reserved.
//

#ifndef wren_wren_debug_h
#define wren_wren_debug_h

#include "wren_value.h"
#include "wren_vm.h"

int wrenDebugDumpInstruction(WrenVM* vm, ObjFn* fn, int i);
void wrenDebugDumpCode(WrenVM* vm, ObjFn* fn);
void wrenDebugDumpStack(Fiber* fiber);

#endif
