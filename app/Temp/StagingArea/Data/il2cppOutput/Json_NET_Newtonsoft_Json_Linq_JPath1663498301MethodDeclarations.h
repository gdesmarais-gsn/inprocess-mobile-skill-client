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

// Newtonsoft.Json.Linq.JPath
struct JPath_t1663498301;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Void Newtonsoft.Json.Linq.JPath::.ctor(System.String)
extern "C"  void JPath__ctor_m4282549178 (JPath_t1663498301 * __this, String_t* ___expression0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Newtonsoft.Json.Linq.JPath::get_Parts()
extern "C"  List_1_t2058570427 * JPath_get_Parts_m3892954872 (JPath_t1663498301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPath::set_Parts(System.Collections.Generic.List`1<System.Object>)
extern "C"  void JPath_set_Parts_m3806837759 (JPath_t1663498301 * __this, List_1_t2058570427 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPath::ParseMain()
extern "C"  void JPath_ParseMain_m198388934 (JPath_t1663498301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPath::ParseIndexer(System.Char)
extern "C"  void JPath_ParseIndexer_m2953723693 (JPath_t1663498301 * __this, Il2CppChar ___indexerOpenChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JPath::Evaluate(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  JToken_t2552644013 * JPath_Evaluate_m4186199717 (JPath_t1663498301 * __this, JToken_t2552644013 * ___root0, bool ___errorWhenNoMatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
