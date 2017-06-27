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

// MsgPack.Int64Stack
struct Int64Stack_t1378392503;

#include "codegen/il2cpp-codegen.h"

// System.Int32 MsgPack.Int64Stack::get_Count()
extern "C"  int32_t Int64Stack_get_Count_m1722127444 (Int64Stack_t1378392503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Int64Stack::.ctor(System.Int32)
extern "C"  void Int64Stack__ctor_m3193294619 (Int64Stack_t1378392503 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Int64Stack::Push(System.Int64)
extern "C"  void Int64Stack_Push_m586330100 (Int64Stack_t1378392503 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.Int64Stack::Peek()
extern "C"  int64_t Int64Stack_Peek_m4275794260 (Int64Stack_t1378392503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.Int64Stack::Pop()
extern "C"  int64_t Int64Stack_Pop_m2723140504 (Int64Stack_t1378392503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
