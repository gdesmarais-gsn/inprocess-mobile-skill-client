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

// GSN.Skill.Games.Common.Events.InputMessageConverter
struct InputMessageConverter_t1013852753;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// GSN.Skill.Games.Common.Events.IInputMessage
struct IInputMessage_t3660278550;
// System.Type
struct Type_t;
// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "Json_NET_Newtonsoft_Json_Linq_JObject278519297.h"

// System.Void GSN.Skill.Games.Common.Events.InputMessageConverter::.ctor(System.Type[])
extern "C"  void InputMessageConverter__ctor_m942824101 (InputMessageConverter_t1013852753 * __this, TypeU5BU5D_t1664964607* ___msgTypeEnums0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.InputMessageConverter::Initialize_MSG_TYPE_LOOKUP()
extern "C"  void InputMessageConverter_Initialize_MSG_TYPE_LOOKUP_m15433504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Events.IInputMessage GSN.Skill.Games.Common.Events.InputMessageConverter::Create(System.Type,Newtonsoft.Json.Linq.JObject)
extern "C"  Il2CppObject * InputMessageConverter_Create_m1129657632 (InputMessageConverter_t1013852753 * __this, Type_t * ___objectType0, JObject_t278519297 * ___jObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Events.InputMessageConverter::.cctor()
extern "C"  void InputMessageConverter__cctor_m3092730699 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Events.InputMessageConverter::<Initialize_MSG_TYPE_LOOKUP>m__0(System.Type)
extern "C"  bool InputMessageConverter_U3CInitialize_MSG_TYPE_LOOKUPU3Em__0_m2205066876 (Il2CppObject * __this /* static, unused */, Type_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Events.InputMessageConverter::<Initialize_MSG_TYPE_LOOKUP>m__1(System.Type)
extern "C"  bool InputMessageConverter_U3CInitialize_MSG_TYPE_LOOKUPU3Em__1_m3304403681 (Il2CppObject * __this /* static, unused */, Type_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
