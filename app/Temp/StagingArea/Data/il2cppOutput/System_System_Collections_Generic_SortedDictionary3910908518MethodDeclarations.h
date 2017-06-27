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

// System.Collections.Generic.SortedDictionary`2/Node<System.Int64,System.Object>
struct Node_t3910908518;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Collections_Generic_RBTree_Node2499136326.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21436312919.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int64,System.Object>::.ctor(TKey)
extern "C"  void Node__ctor_m2612571274_gshared (Node_t3910908518 * __this, int64_t ___key0, const MethodInfo* method);
#define Node__ctor_m2612571274(__this, ___key0, method) ((  void (*) (Node_t3910908518 *, int64_t, const MethodInfo*))Node__ctor_m2612571274_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int64,System.Object>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m2991234913_gshared (Node_t3910908518 * __this, int64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Node__ctor_m2991234913(__this, ___key0, ___value1, method) ((  void (*) (Node_t3910908518 *, int64_t, Il2CppObject *, const MethodInfo*))Node__ctor_m2991234913_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int64,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m1116673165_gshared (Node_t3910908518 * __this, Node_t2499136326 * ___other0, const MethodInfo* method);
#define Node_SwapValue_m1116673165(__this, ___other0, method) ((  void (*) (Node_t3910908518 *, Node_t2499136326 *, const MethodInfo*))Node_SwapValue_m1116673165_gshared)(__this, ___other0, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int64,System.Object>::AsKV()
extern "C"  KeyValuePair_2_t1436312919  Node_AsKV_m501276642_gshared (Node_t3910908518 * __this, const MethodInfo* method);
#define Node_AsKV_m501276642(__this, method) ((  KeyValuePair_2_t1436312919  (*) (Node_t3910908518 *, const MethodInfo*))Node_AsKV_m501276642_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int64,System.Object>::AsDE()
extern "C"  DictionaryEntry_t3048875398  Node_AsDE_m992934513_gshared (Node_t3910908518 * __this, const MethodInfo* method);
#define Node_AsDE_m992934513(__this, method) ((  DictionaryEntry_t3048875398  (*) (Node_t3910908518 *, const MethodInfo*))Node_AsDE_m992934513_gshared)(__this, method)
