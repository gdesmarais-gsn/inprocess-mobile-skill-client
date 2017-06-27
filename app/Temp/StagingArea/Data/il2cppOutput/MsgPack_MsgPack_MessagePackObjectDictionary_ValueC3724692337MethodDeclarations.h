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

// MsgPack.MessagePackObjectDictionary/ValueCollection
struct ValueCollection_t3724692337;
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
#include "MsgPack_MsgPack_MessagePackObjectDictionary_ValueCo100058436.h"

// System.Int32 MsgPack.MessagePackObjectDictionary/ValueCollection::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m2540831734 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_get_IsReadOnly_m261249076 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m3965309466 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m2177797830 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/ValueCollection::.ctor(MsgPack.MessagePackObjectDictionary)
extern "C"  void ValueCollection__ctor_m3308930649 (ValueCollection_t3724692337 * __this, MessagePackObjectDictionary_t4175726983 * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/ValueCollection::CopyTo(MsgPack.MessagePackObject[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m4139700760 (ValueCollection_t3724692337 * __this, MessagePackObjectU5BU5D_t2140654842* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m1512453536 (ValueCollection_t3724692337 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Contains(MsgPack.MessagePackObject)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Contains_m751183775 (ValueCollection_t3724692337 * __this, MessagePackObject_t2038085051  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Add(MsgPack.MessagePackObject)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Add_m2291403769 (ValueCollection_t3724692337 * __this, MessagePackObject_t2038085051  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Clear_m3516562624 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.Generic.ICollection<MsgPack.MessagePackObject>.Remove(MsgPack.MessagePackObject)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CMsgPack_MessagePackObjectU3E_Remove_m3403383890 (ValueCollection_t3724692337 * __this, MessagePackObject_t2038085051  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObjectDictionary/ValueCollection/Enumerator MsgPack.MessagePackObjectDictionary/ValueCollection::GetEnumerator()
extern "C"  Enumerator_t100058436  ValueCollection_GetEnumerator_m2115030125 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.Generic.IEnumerable<MsgPack.MessagePackObject>.GetEnumerator()
extern "C"  Il2CppObject* ValueCollection_System_Collections_Generic_IEnumerableU3CMsgPack_MessagePackObjectU3E_GetEnumerator_m3657689668 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MsgPack.MessagePackObjectDictionary/ValueCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2266966233 (ValueCollection_t3724692337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
