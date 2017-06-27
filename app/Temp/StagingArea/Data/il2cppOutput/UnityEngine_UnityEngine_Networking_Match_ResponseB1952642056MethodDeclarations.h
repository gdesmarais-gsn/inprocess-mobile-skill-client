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

// UnityEngine.Networking.Match.ResponseBase
struct ResponseBase_t1952642056;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C"  void ResponseBase__ctor_m4142943680 (ResponseBase_t1952642056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResponseBase_ParseJSONString_m2194226601 (ResponseBase_t1952642056 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t ResponseBase_ParseJSONInt32_m101020809 (ResponseBase_t1952642056 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint16_t ResponseBase_ParseJSONUInt16_m202817497 (ResponseBase_t1952642056 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint64_t ResponseBase_ParseJSONUInt64_m671637573 (ResponseBase_t1952642056 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResponseBase_ParseJSONBool_m3058921427 (ResponseBase_t1952642056 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
