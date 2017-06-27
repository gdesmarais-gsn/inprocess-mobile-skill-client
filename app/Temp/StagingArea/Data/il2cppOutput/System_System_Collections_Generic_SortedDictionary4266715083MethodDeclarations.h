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

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Int32>
struct NodeHelper_t4266715083;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Collections_Generic_RBTree_Node2499136326.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Int32>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void NodeHelper__ctor_m1414916467_gshared (NodeHelper_t4266715083 * __this, Il2CppObject* ___cmp0, const MethodInfo* method);
#define NodeHelper__ctor_m1414916467(__this, ___cmp0, method) ((  void (*) (NodeHelper_t4266715083 *, Il2CppObject*, const MethodInfo*))NodeHelper__ctor_m1414916467_gshared)(__this, ___cmp0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Int32>::.cctor()
extern "C"  void NodeHelper__cctor_m809695691_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m809695691(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m809695691_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Int32>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C"  int32_t NodeHelper_Compare_m2531154170_gshared (NodeHelper_t4266715083 * __this, Il2CppObject * ___key0, Node_t2499136326 * ___node1, const MethodInfo* method);
#define NodeHelper_Compare_m2531154170(__this, ___key0, ___node1, method) ((  int32_t (*) (NodeHelper_t4266715083 *, Il2CppObject *, Node_t2499136326 *, const MethodInfo*))NodeHelper_Compare_m2531154170_gshared)(__this, ___key0, ___node1, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Int32>::CreateNode(TKey)
extern "C"  Node_t2499136326 * NodeHelper_CreateNode_m3990782844_gshared (NodeHelper_t4266715083 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define NodeHelper_CreateNode_m3990782844(__this, ___key0, method) ((  Node_t2499136326 * (*) (NodeHelper_t4266715083 *, Il2CppObject *, const MethodInfo*))NodeHelper_CreateNode_m3990782844_gshared)(__this, ___key0, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Int32>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  NodeHelper_t4266715083 * NodeHelper_GetHelper_m3317871285_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___cmp0, const MethodInfo* method);
#define NodeHelper_GetHelper_m3317871285(__this /* static, unused */, ___cmp0, method) ((  NodeHelper_t4266715083 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))NodeHelper_GetHelper_m3317871285_gshared)(__this /* static, unused */, ___cmp0, method)
