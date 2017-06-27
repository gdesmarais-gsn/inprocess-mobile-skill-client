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

// GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>
struct GsnVector_1_t848728672;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::.ctor()
extern "C"  void GsnVector_1__ctor_m1616677285_gshared (GsnVector_1_t848728672 * __this, const MethodInfo* method);
#define GsnVector_1__ctor_m1616677285(__this, method) ((  void (*) (GsnVector_1_t848728672 *, const MethodInfo*))GsnVector_1__ctor_m1616677285_gshared)(__this, method)
// System.Void GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::.ctor(System.Int32,System.Boolean)
extern "C"  void GsnVector_1__ctor_m1572260759_gshared (GsnVector_1_t848728672 * __this, int32_t ___capacity0, bool ___f1, const MethodInfo* method);
#define GsnVector_1__ctor_m1572260759(__this, ___capacity0, ___f1, method) ((  void (*) (GsnVector_1_t848728672 *, int32_t, bool, const MethodInfo*))GsnVector_1__ctor_m1572260759_gshared)(__this, ___capacity0, ___f1, method)
// T GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::get_Item(System.Int32)
extern "C"  uint32_t GsnVector_1_get_Item_m2179024027_gshared (GsnVector_1_t848728672 * __this, int32_t ___index0, const MethodInfo* method);
#define GsnVector_1_get_Item_m2179024027(__this, ___index0, method) ((  uint32_t (*) (GsnVector_1_t848728672 *, int32_t, const MethodInfo*))GsnVector_1_get_Item_m2179024027_gshared)(__this, ___index0, method)
// System.Void GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::set_Item(System.Int32,T)
extern "C"  void GsnVector_1_set_Item_m1598402598_gshared (GsnVector_1_t848728672 * __this, int32_t ___index0, uint32_t ___value1, const MethodInfo* method);
#define GsnVector_1_set_Item_m1598402598(__this, ___index0, ___value1, method) ((  void (*) (GsnVector_1_t848728672 *, int32_t, uint32_t, const MethodInfo*))GsnVector_1_set_Item_m1598402598_gshared)(__this, ___index0, ___value1, method)
// System.Int32 GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::get_Count()
extern "C"  int32_t GsnVector_1_get_Count_m3150093653_gshared (GsnVector_1_t848728672 * __this, const MethodInfo* method);
#define GsnVector_1_get_Count_m3150093653(__this, method) ((  int32_t (*) (GsnVector_1_t848728672 *, const MethodInfo*))GsnVector_1_get_Count_m3150093653_gshared)(__this, method)
// System.Void GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::set_Count(System.Int32)
extern "C"  void GsnVector_1_set_Count_m1765580320_gshared (GsnVector_1_t848728672 * __this, int32_t ___value0, const MethodInfo* method);
#define GsnVector_1_set_Count_m1765580320(__this, ___value0, method) ((  void (*) (GsnVector_1_t848728672 *, int32_t, const MethodInfo*))GsnVector_1_set_Count_m1765580320_gshared)(__this, ___value0, method)
// System.Int32 GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Push(T)
extern "C"  int32_t GsnVector_1_Push_m35799833_gshared (GsnVector_1_t848728672 * __this, uint32_t ___o0, const MethodInfo* method);
#define GsnVector_1_Push_m35799833(__this, ___o0, method) ((  int32_t (*) (GsnVector_1_t848728672 *, uint32_t, const MethodInfo*))GsnVector_1_Push_m35799833_gshared)(__this, ___o0, method)
// T GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Pop()
extern "C"  uint32_t GsnVector_1_Pop_m508701269_gshared (GsnVector_1_t848728672 * __this, const MethodInfo* method);
#define GsnVector_1_Pop_m508701269(__this, method) ((  uint32_t (*) (GsnVector_1_t848728672 *, const MethodInfo*))GsnVector_1_Pop_m508701269_gshared)(__this, method)
// GSN.Skill.Games.Common.Utils.GsnVector`1<T> GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Splice(System.Int32,System.Int32)
extern "C"  GsnVector_1_t848728672 * GsnVector_1_Splice_m272628916_gshared (GsnVector_1_t848728672 * __this, int32_t ___index0, int32_t ___length1, const MethodInfo* method);
#define GsnVector_1_Splice_m272628916(__this, ___index0, ___length1, method) ((  GsnVector_1_t848728672 * (*) (GsnVector_1_t848728672 *, int32_t, int32_t, const MethodInfo*))GsnVector_1_Splice_m272628916_gshared)(__this, ___index0, ___length1, method)
// GSN.Skill.Games.Common.Utils.GsnVector`1<T> GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Slice(System.Int32,System.Int32)
extern "C"  GsnVector_1_t848728672 * GsnVector_1_Slice_m128360304_gshared (GsnVector_1_t848728672 * __this, int32_t ___startIndex0, int32_t ___endIndex1, const MethodInfo* method);
#define GsnVector_1_Slice_m128360304(__this, ___startIndex0, ___endIndex1, method) ((  GsnVector_1_t848728672 * (*) (GsnVector_1_t848728672 *, int32_t, int32_t, const MethodInfo*))GsnVector_1_Slice_m128360304_gshared)(__this, ___startIndex0, ___endIndex1, method)
// System.String GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Join(System.String)
extern "C"  String_t* GsnVector_1_Join_m902635972_gshared (GsnVector_1_t848728672 * __this, String_t* ___sep0, const MethodInfo* method);
#define GsnVector_1_Join_m902635972(__this, ___sep0, method) ((  String_t* (*) (GsnVector_1_t848728672 *, String_t*, const MethodInfo*))GsnVector_1_Join_m902635972_gshared)(__this, ___sep0, method)
// System.Void GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Unshift(T)
extern "C"  void GsnVector_1_Unshift_m2140998538_gshared (GsnVector_1_t848728672 * __this, uint32_t ___o0, const MethodInfo* method);
#define GsnVector_1_Unshift_m2140998538(__this, ___o0, method) ((  void (*) (GsnVector_1_t848728672 *, uint32_t, const MethodInfo*))GsnVector_1_Unshift_m2140998538_gshared)(__this, ___o0, method)
// T GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>::Shift()
extern "C"  uint32_t GsnVector_1_Shift_m671415108_gshared (GsnVector_1_t848728672 * __this, const MethodInfo* method);
#define GsnVector_1_Shift_m671415108(__this, method) ((  uint32_t (*) (GsnVector_1_t848728672 *, const MethodInfo*))GsnVector_1_Shift_m671415108_gshared)(__this, method)
