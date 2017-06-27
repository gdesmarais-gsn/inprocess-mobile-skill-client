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

// MsgPack.MessagePackObjectDictionary/KeyCollection
struct KeyCollection_t782415617;
// System.Object
struct Il2CppObject;
// MsgPack.MessagePackObjectDictionary
struct MessagePackObjectDictionary_t4175726983;
// MsgPack.MessagePackObject[]
struct MessagePackObjectU5BU5D_t2140654842;
// System.Array
struct Il2CppArray;
// System.Collections.Generic.IEnumerator`1<MsgPack.MessagePackObject>
struct IEnumerator_1_t3808576174;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary4175726983.h"
#include "mscorlib_System_Array3829468939.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_MessagePackObjectDictionary_KeyColl159588354.h"

// System.Int32 MsgPack.MessagePackObjectDictionary/KeyCollection::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m4160870084 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_get_IsReadOnly_m3845737718 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1062105256 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * KeyCollection_System_Collections_ICollection_get_SyncRoot_m3439356620 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection::.ctor(MsgPack.MessagePackObjectDictionary)
extern "C"  void KeyCollection__ctor_m160106841 (KeyCollection_t782415617 * __this, MessagePackObjectDictionary_t4175726983 * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection::CopyTo(MsgPack.MessagePackObject[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m3679977954 (KeyCollection_t782415617 * __this, MessagePackObjectU5BU5D_t2140654842* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m1450116930 (KeyCollection_t782415617 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Contains(MsgPack.MessagePackObject)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Contains_m1642132183 (KeyCollection_t782415617 * __this, MessagePackObject_t2038085051  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Add(MsgPack.MessagePackObject)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Add_m1331198737 (KeyCollection_t782415617 * __this, MessagePackObject_t2038085051  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Clear_m2250712786 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Remove(MsgPack.MessagePackObject)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Remove_m2492015044 (KeyCollection_t782415617 * __this, MessagePackObject_t2038085051  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObjectDictionary/KeyCollection/Enumerator MsgPack.MessagePackObjectDictionary/KeyCollection::GetEnumerator()
extern "C"  Enumerator_t159588354  KeyCollection_GetEnumerator_m2273743805 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.Generic.IEnumerable<MsgPack.MessagePackObject>.GetEnumerator()
extern "C"  Il2CppObject* KeyCollection_System_Collections_Generic_IEnumerableU3CMsgPack_MessagePackObjectU3E_GetEnumerator_m1267199630 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MsgPack.MessagePackObjectDictionary/KeyCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1868509929 (KeyCollection_t782415617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
