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

// GSN.Skill.Games.Common.Utils.Heap
struct Heap_t3225244008;
// GSN.Skill.Games.Common.Utils.Heap/ItemWorker
struct ItemWorker_t4038187906;
// GSN.Skill.Games.Common.Utils.IHeapable
struct IHeapable_t2168791121;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Hea4038187906.h"

// System.Void GSN.Skill.Games.Common.Utils.Heap::.ctor()
extern "C"  void Heap__ctor_m7466993 (Heap_t3225244008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Heap::get_Count()
extern "C"  int32_t Heap_get_Count_m397212593 (Heap_t3225244008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::ForEach(GSN.Skill.Games.Common.Utils.Heap/ItemWorker)
extern "C"  void Heap_ForEach_m832945023 (Heap_t3225244008 * __this, ItemWorker_t4038187906 * ___workFn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::Add(GSN.Skill.Games.Common.Utils.IHeapable)
extern "C"  void Heap_Add_m3865564093 (Heap_t3225244008 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::Remove(GSN.Skill.Games.Common.Utils.IHeapable)
extern "C"  void Heap_Remove_m3708490430 (Heap_t3225244008 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::internalRemove(System.Int32)
extern "C"  void Heap_internalRemove_m2646711177 (Heap_t3225244008 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::internalAdd(GSN.Skill.Games.Common.Utils.IHeapable)
extern "C"  void Heap_internalAdd_m3785931734 (Heap_t3225244008 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::__adjustIndex(GSN.Skill.Games.Common.Utils.IHeapable)
extern "C"  void Heap___adjustIndex_m1184331119 (Heap_t3225244008 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.Heap::bubbleUp(System.Int32)
extern "C"  bool Heap_bubbleUp_m1529855403 (Heap_t3225244008 * __this, int32_t ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::bubbleDown(System.Int32)
extern "C"  void Heap_bubbleDown_m3747654470 (Heap_t3225244008 * __this, int32_t ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Heap::getLesserChild(System.Int32)
extern "C"  int32_t Heap_getLesserChild_m2006186990 (Heap_t3225244008 * __this, int32_t ___heapIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IHeapable GSN.Skill.Games.Common.Utils.Heap::get_Top()
extern "C"  Il2CppObject * Heap_get_Top_m1383889277 (Heap_t3225244008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IHeapable GSN.Skill.Games.Common.Utils.Heap::PopTop()
extern "C"  Il2CppObject * Heap_PopTop_m2716207611 (Heap_t3225244008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Heap::Grow()
extern "C"  void Heap_Grow_m4230724190 (Heap_t3225244008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
