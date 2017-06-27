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

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Int32>
struct Node_t1895878397;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Collections_Generic_RBTree_Node2499136326.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23716250094.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Int32>::.ctor(TKey)
extern "C"  void Node__ctor_m3041234597_gshared (Node_t1895878397 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Node__ctor_m3041234597(__this, ___key0, method) ((  void (*) (Node_t1895878397 *, Il2CppObject *, const MethodInfo*))Node__ctor_m3041234597_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m3618786650_gshared (Node_t1895878397 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Node__ctor_m3618786650(__this, ___key0, ___value1, method) ((  void (*) (Node_t1895878397 *, Il2CppObject *, int32_t, const MethodInfo*))Node__ctor_m3618786650_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Int32>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m811598142_gshared (Node_t1895878397 * __this, Node_t2499136326 * ___other0, const MethodInfo* method);
#define Node_SwapValue_m811598142(__this, ___other0, method) ((  void (*) (Node_t1895878397 *, Node_t2499136326 *, const MethodInfo*))Node_SwapValue_m811598142_gshared)(__this, ___other0, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Int32>::AsKV()
extern "C"  KeyValuePair_2_t3716250094  Node_AsKV_m43275447_gshared (Node_t1895878397 * __this, const MethodInfo* method);
#define Node_AsKV_m43275447(__this, method) ((  KeyValuePair_2_t3716250094  (*) (Node_t1895878397 *, const MethodInfo*))Node_AsKV_m43275447_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Int32>::AsDE()
extern "C"  DictionaryEntry_t3048875398  Node_AsDE_m4078576732_gshared (Node_t1895878397 * __this, const MethodInfo* method);
#define Node_AsDE_m4078576732(__this, method) ((  DictionaryEntry_t3048875398  (*) (Node_t1895878397 *, const MethodInfo*))Node_AsDE_m4078576732_gshared)(__this, method)
