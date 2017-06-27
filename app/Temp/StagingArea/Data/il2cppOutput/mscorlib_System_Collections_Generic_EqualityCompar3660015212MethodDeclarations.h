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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<MsgPack.MessagePackObject>
struct DefaultComparer_t3660015212;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<MsgPack.MessagePackObject>::.ctor()
extern "C"  void DefaultComparer__ctor_m4036626561_gshared (DefaultComparer_t3660015212 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m4036626561(__this, method) ((  void (*) (DefaultComparer_t3660015212 *, const MethodInfo*))DefaultComparer__ctor_m4036626561_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<MsgPack.MessagePackObject>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m137271478_gshared (DefaultComparer_t3660015212 * __this, MessagePackObject_t2038085051  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m137271478(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t3660015212 *, MessagePackObject_t2038085051 , const MethodInfo*))DefaultComparer_GetHashCode_m137271478_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<MsgPack.MessagePackObject>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1997194670_gshared (DefaultComparer_t3660015212 * __this, MessagePackObject_t2038085051  ___x0, MessagePackObject_t2038085051  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m1997194670(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t3660015212 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))DefaultComparer_Equals_m1997194670_gshared)(__this, ___x0, ___y1, method)
