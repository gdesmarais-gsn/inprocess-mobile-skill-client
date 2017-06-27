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

// GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator
struct DataSafePluginCreator_t1885769099;
// System.Object
struct Il2CppObject;
// GSN.Skill.Games.Common.Model.IDataSafePlugin
struct IDataSafePlugin_t3786836483;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator::.ctor(System.Object,System.IntPtr)
extern "C"  void DataSafePluginCreator__ctor_m2994622046 (DataSafePluginCreator_t1885769099 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Model.IDataSafePlugin GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * DataSafePluginCreator_Invoke_m459942164 (DataSafePluginCreator_t1885769099 * __this, Dictionary_2_t3943999495 * ___joinBody0, Dictionary_2_t3943999495 * ___joinRecord1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataSafePluginCreator_BeginInvoke_m2593682637 (DataSafePluginCreator_t1885769099 * __this, Dictionary_2_t3943999495 * ___joinBody0, Dictionary_2_t3943999495 * ___joinRecord1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Model.IDataSafePlugin GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * DataSafePluginCreator_EndInvoke_m987297236 (DataSafePluginCreator_t1885769099 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
