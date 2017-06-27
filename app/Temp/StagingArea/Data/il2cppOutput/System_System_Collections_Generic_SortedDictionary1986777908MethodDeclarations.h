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

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int64,System.Object>
struct NodeHelper_t1986777908;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t3158508455;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_Node2499136326.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int64,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void NodeHelper__ctor_m3753218886_gshared (NodeHelper_t1986777908 * __this, Il2CppObject* ___cmp0, const MethodInfo* method);
#define NodeHelper__ctor_m3753218886(__this, ___cmp0, method) ((  void (*) (NodeHelper_t1986777908 *, Il2CppObject*, const MethodInfo*))NodeHelper__ctor_m3753218886_gshared)(__this, ___cmp0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int64,System.Object>::.cctor()
extern "C"  void NodeHelper__cctor_m1038245722_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m1038245722(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m1038245722_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int64,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C"  int32_t NodeHelper_Compare_m1476462403_gshared (NodeHelper_t1986777908 * __this, int64_t ___key0, Node_t2499136326 * ___node1, const MethodInfo* method);
#define NodeHelper_Compare_m1476462403(__this, ___key0, ___node1, method) ((  int32_t (*) (NodeHelper_t1986777908 *, int64_t, Node_t2499136326 *, const MethodInfo*))NodeHelper_Compare_m1476462403_gshared)(__this, ___key0, ___node1, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int64,System.Object>::CreateNode(TKey)
extern "C"  Node_t2499136326 * NodeHelper_CreateNode_m4271843901_gshared (NodeHelper_t1986777908 * __this, int64_t ___key0, const MethodInfo* method);
#define NodeHelper_CreateNode_m4271843901(__this, ___key0, method) ((  Node_t2499136326 * (*) (NodeHelper_t1986777908 *, int64_t, const MethodInfo*))NodeHelper_CreateNode_m4271843901_gshared)(__this, ___key0, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int64,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  NodeHelper_t1986777908 * NodeHelper_GetHelper_m2060566218_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___cmp0, const MethodInfo* method);
#define NodeHelper_GetHelper_m2060566218(__this /* static, unused */, ___cmp0, method) ((  NodeHelper_t1986777908 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))NodeHelper_GetHelper_m2060566218_gshared)(__this /* static, unused */, ___cmp0, method)
