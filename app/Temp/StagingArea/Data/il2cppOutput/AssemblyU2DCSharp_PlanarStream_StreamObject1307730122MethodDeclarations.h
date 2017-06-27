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

// PlanarStream/StreamObject
struct StreamObject_t1307730122;

#include "codegen/il2cpp-codegen.h"

// System.Void PlanarStream/StreamObject::.ctor()
extern "C"  void StreamObject__ctor_m2448907465 (StreamObject_t1307730122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::OnAxisEnter()
extern "C"  void StreamObject_OnAxisEnter_m2814102723 (StreamObject_t1307730122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::OnAxisExit()
extern "C"  void StreamObject_OnAxisExit_m1845020283 (StreamObject_t1307730122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::OnSubAxisEnter(System.Int32,System.Int32,System.Int32)
extern "C"  void StreamObject_OnSubAxisEnter_m2580798028 (StreamObject_t1307730122 * __this, int32_t ___limit0, int32_t ___increment1, int32_t ___mask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::OnSubAxisExit(System.Int32,System.Int32,System.Int32)
extern "C"  void StreamObject_OnSubAxisExit_m1614900678 (StreamObject_t1307730122 * __this, int32_t ___limit0, int32_t ___decrement1, int32_t ___mask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::Spawn()
extern "C"  void StreamObject_Spawn_m1218802146 (StreamObject_t1307730122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::Despawn(System.Boolean)
extern "C"  void StreamObject_Despawn_m1239501214 (StreamObject_t1307730122 * __this, bool ___isEnforce0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlanarStream/StreamObject::Enforce()
extern "C"  void StreamObject_Enforce_m1345900487 (StreamObject_t1307730122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
