#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MsgPack.BooleanStack
struct BooleanStack_t2953109678;

#include "codegen/il2cpp-codegen.h"

// System.Void MsgPack.BooleanStack::.ctor(System.Int32)
extern "C"  void BooleanStack__ctor_m1534735520 (BooleanStack_t2953109678 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.BooleanStack::Push(System.Boolean)
extern "C"  void BooleanStack_Push_m3281400404 (BooleanStack_t2953109678 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.BooleanStack::Peek()
extern "C"  bool BooleanStack_Peek_m3825091124 (BooleanStack_t2953109678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.BooleanStack::Pop()
extern "C"  bool BooleanStack_Pop_m2948513400 (BooleanStack_t2953109678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
