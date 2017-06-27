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

// GSN.Skill.Games.Common.Client.UIGameTipsBase
struct UIGameTipsBase_t3527044721;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Client.TipBase
struct TipBase_t2957623898;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.UIGameTipsBase::.ctor()
extern "C"  void UIGameTipsBase__ctor_m1967635410 (UIGameTipsBase_t3527044721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.UIGameTipsBase::GetTipsResourcePrefix()
extern "C"  String_t* UIGameTipsBase_GetTipsResourcePrefix_m3187338405 (UIGameTipsBase_t3527044721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIGameTipsBase::Setup()
extern "C"  void UIGameTipsBase_Setup_m2264712749 (UIGameTipsBase_t3527044721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIGameTipsBase::Preload(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * UIGameTipsBase_Preload_m1670074622 (UIGameTipsBase_t3527044721 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.UIGameTipsBase::PreloadCount()
extern "C"  int32_t UIGameTipsBase_PreloadCount_m4057499986 (UIGameTipsBase_t3527044721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.UIGameTipsBase::GetRandomTip(System.String)
extern "C"  String_t* UIGameTipsBase_GetRandomTip_m3991067757 (UIGameTipsBase_t3527044721 * __this, String_t* ___tipsString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.TipBase GSN.Skill.Games.Common.Client.UIGameTipsBase::LoadGameTip(System.String,System.String)
extern "C"  TipBase_t2957623898 * UIGameTipsBase_LoadGameTip_m2792463792 (UIGameTipsBase_t3527044721 * __this, String_t* ___bundleName0, String_t* ___tipResourceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
