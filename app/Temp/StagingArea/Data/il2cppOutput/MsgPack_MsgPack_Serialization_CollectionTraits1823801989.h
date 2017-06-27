#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_CollectionDetailedKi2859259456.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.CollectionTraits
struct  CollectionTraits_t1823801989  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionTraits::GetEnumeratorMethod
	MethodInfo_t * ___GetEnumeratorMethod_2;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionTraits::AddMethod
	MethodInfo_t * ___AddMethod_3;
	// System.Reflection.MethodInfo MsgPack.Serialization.CollectionTraits::CountPropertyGetter
	MethodInfo_t * ___CountPropertyGetter_4;
	// System.Type MsgPack.Serialization.CollectionTraits::ElementType
	Type_t * ___ElementType_5;
	// MsgPack.Serialization.CollectionDetailedKind MsgPack.Serialization.CollectionTraits::DetailedCollectionType
	int32_t ___DetailedCollectionType_6;

public:
	inline static int32_t get_offset_of_GetEnumeratorMethod_2() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989, ___GetEnumeratorMethod_2)); }
	inline MethodInfo_t * get_GetEnumeratorMethod_2() const { return ___GetEnumeratorMethod_2; }
	inline MethodInfo_t ** get_address_of_GetEnumeratorMethod_2() { return &___GetEnumeratorMethod_2; }
	inline void set_GetEnumeratorMethod_2(MethodInfo_t * value)
	{
		___GetEnumeratorMethod_2 = value;
		Il2CppCodeGenWriteBarrier(&___GetEnumeratorMethod_2, value);
	}

	inline static int32_t get_offset_of_AddMethod_3() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989, ___AddMethod_3)); }
	inline MethodInfo_t * get_AddMethod_3() const { return ___AddMethod_3; }
	inline MethodInfo_t ** get_address_of_AddMethod_3() { return &___AddMethod_3; }
	inline void set_AddMethod_3(MethodInfo_t * value)
	{
		___AddMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___AddMethod_3, value);
	}

	inline static int32_t get_offset_of_CountPropertyGetter_4() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989, ___CountPropertyGetter_4)); }
	inline MethodInfo_t * get_CountPropertyGetter_4() const { return ___CountPropertyGetter_4; }
	inline MethodInfo_t ** get_address_of_CountPropertyGetter_4() { return &___CountPropertyGetter_4; }
	inline void set_CountPropertyGetter_4(MethodInfo_t * value)
	{
		___CountPropertyGetter_4 = value;
		Il2CppCodeGenWriteBarrier(&___CountPropertyGetter_4, value);
	}

	inline static int32_t get_offset_of_ElementType_5() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989, ___ElementType_5)); }
	inline Type_t * get_ElementType_5() const { return ___ElementType_5; }
	inline Type_t ** get_address_of_ElementType_5() { return &___ElementType_5; }
	inline void set_ElementType_5(Type_t * value)
	{
		___ElementType_5 = value;
		Il2CppCodeGenWriteBarrier(&___ElementType_5, value);
	}

	inline static int32_t get_offset_of_DetailedCollectionType_6() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989, ___DetailedCollectionType_6)); }
	inline int32_t get_DetailedCollectionType_6() const { return ___DetailedCollectionType_6; }
	inline int32_t* get_address_of_DetailedCollectionType_6() { return &___DetailedCollectionType_6; }
	inline void set_DetailedCollectionType_6(int32_t value)
	{
		___DetailedCollectionType_6 = value;
	}
};

struct CollectionTraits_t1823801989_StaticFields
{
public:
	// MsgPack.Serialization.CollectionTraits MsgPack.Serialization.CollectionTraits::NotCollection
	CollectionTraits_t1823801989 * ___NotCollection_0;
	// MsgPack.Serialization.CollectionTraits MsgPack.Serialization.CollectionTraits::Unserializable
	CollectionTraits_t1823801989 * ___Unserializable_1;

public:
	inline static int32_t get_offset_of_NotCollection_0() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989_StaticFields, ___NotCollection_0)); }
	inline CollectionTraits_t1823801989 * get_NotCollection_0() const { return ___NotCollection_0; }
	inline CollectionTraits_t1823801989 ** get_address_of_NotCollection_0() { return &___NotCollection_0; }
	inline void set_NotCollection_0(CollectionTraits_t1823801989 * value)
	{
		___NotCollection_0 = value;
		Il2CppCodeGenWriteBarrier(&___NotCollection_0, value);
	}

	inline static int32_t get_offset_of_Unserializable_1() { return static_cast<int32_t>(offsetof(CollectionTraits_t1823801989_StaticFields, ___Unserializable_1)); }
	inline CollectionTraits_t1823801989 * get_Unserializable_1() const { return ___Unserializable_1; }
	inline CollectionTraits_t1823801989 ** get_address_of_Unserializable_1() { return &___Unserializable_1; }
	inline void set_Unserializable_1(CollectionTraits_t1823801989 * value)
	{
		___Unserializable_1 = value;
		Il2CppCodeGenWriteBarrier(&___Unserializable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
