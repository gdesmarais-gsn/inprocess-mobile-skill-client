#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.SerializerRepository
struct SerializerRepository_t73916898;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t331839896;
// MsgPack.Serialization.SerializationCompatibilityOptions
struct SerializationCompatibilityOptions_t2671060552;
// MsgPack.Serialization.DefaultConcreteTypeRepository
struct DefaultConcreteTypeRepository_t1959877892;
// System.EventHandler`1<MsgPack.Serialization.ResolveSerializerEventArgs>
struct EventHandler_1_t2821349425;
// MsgPack.Serialization.ExtTypeCodeMapping
struct ExtTypeCodeMapping_t2037435746;

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_EmitterFlavor3614510380.h"
#include "MsgPack_MsgPack_Serialization_SerializationMethod3549145087.h"
#include "MsgPack_MsgPack_Serialization_EnumSerializationMet2904312576.h"
#include "MsgPack_MsgPack_Serialization_DateTimeConversionMe3801997378.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.SerializationContext
struct  SerializationContext_t1484625559  : public Il2CppObject
{
public:
	// MsgPack.Serialization.SerializerRepository MsgPack.Serialization.SerializationContext::_serializers
	SerializerRepository_t73916898 * ____serializers_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> MsgPack.Serialization.SerializationContext::_typeLock
	Dictionary_2_t331839896 * ____typeLock_4;
	// System.Object MsgPack.Serialization.SerializationContext::_generationLock
	Il2CppObject * ____generationLock_5;
	// MsgPack.Serialization.EmitterFlavor MsgPack.Serialization.SerializationContext::_emitterFlavor
	int32_t ____emitterFlavor_6;
	// MsgPack.Serialization.SerializationCompatibilityOptions MsgPack.Serialization.SerializationContext::_compatibilityOptions
	SerializationCompatibilityOptions_t2671060552 * ____compatibilityOptions_7;
	// MsgPack.Serialization.SerializationMethod MsgPack.Serialization.SerializationContext::_serializationMethod
	int32_t ____serializationMethod_8;
	// MsgPack.Serialization.EnumSerializationMethod MsgPack.Serialization.SerializationContext::_enumSerializationMethod
	int32_t ____enumSerializationMethod_9;
	// MsgPack.Serialization.DefaultConcreteTypeRepository MsgPack.Serialization.SerializationContext::_defaultCollectionTypes
	DefaultConcreteTypeRepository_t1959877892 * ____defaultCollectionTypes_10;
	// System.Object MsgPack.Serialization.SerializationContext::_resolveSerializerSyncRoot
	Il2CppObject * ____resolveSerializerSyncRoot_11;
	// System.EventHandler`1<MsgPack.Serialization.ResolveSerializerEventArgs> MsgPack.Serialization.SerializationContext::_resolveSerializer
	EventHandler_1_t2821349425 * ____resolveSerializer_12;
	// MsgPack.Serialization.ExtTypeCodeMapping MsgPack.Serialization.SerializationContext::_extTypeCodes
	ExtTypeCodeMapping_t2037435746 * ____extTypeCodes_13;
	// MsgPack.Serialization.DateTimeConversionMethod MsgPack.Serialization.SerializationContext::<DefaultDateTimeConversionMethod>k__BackingField
	int32_t ___U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__serializers_3() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____serializers_3)); }
	inline SerializerRepository_t73916898 * get__serializers_3() const { return ____serializers_3; }
	inline SerializerRepository_t73916898 ** get_address_of__serializers_3() { return &____serializers_3; }
	inline void set__serializers_3(SerializerRepository_t73916898 * value)
	{
		____serializers_3 = value;
		Il2CppCodeGenWriteBarrier(&____serializers_3, value);
	}

	inline static int32_t get_offset_of__typeLock_4() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____typeLock_4)); }
	inline Dictionary_2_t331839896 * get__typeLock_4() const { return ____typeLock_4; }
	inline Dictionary_2_t331839896 ** get_address_of__typeLock_4() { return &____typeLock_4; }
	inline void set__typeLock_4(Dictionary_2_t331839896 * value)
	{
		____typeLock_4 = value;
		Il2CppCodeGenWriteBarrier(&____typeLock_4, value);
	}

	inline static int32_t get_offset_of__generationLock_5() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____generationLock_5)); }
	inline Il2CppObject * get__generationLock_5() const { return ____generationLock_5; }
	inline Il2CppObject ** get_address_of__generationLock_5() { return &____generationLock_5; }
	inline void set__generationLock_5(Il2CppObject * value)
	{
		____generationLock_5 = value;
		Il2CppCodeGenWriteBarrier(&____generationLock_5, value);
	}

	inline static int32_t get_offset_of__emitterFlavor_6() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____emitterFlavor_6)); }
	inline int32_t get__emitterFlavor_6() const { return ____emitterFlavor_6; }
	inline int32_t* get_address_of__emitterFlavor_6() { return &____emitterFlavor_6; }
	inline void set__emitterFlavor_6(int32_t value)
	{
		____emitterFlavor_6 = value;
	}

	inline static int32_t get_offset_of__compatibilityOptions_7() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____compatibilityOptions_7)); }
	inline SerializationCompatibilityOptions_t2671060552 * get__compatibilityOptions_7() const { return ____compatibilityOptions_7; }
	inline SerializationCompatibilityOptions_t2671060552 ** get_address_of__compatibilityOptions_7() { return &____compatibilityOptions_7; }
	inline void set__compatibilityOptions_7(SerializationCompatibilityOptions_t2671060552 * value)
	{
		____compatibilityOptions_7 = value;
		Il2CppCodeGenWriteBarrier(&____compatibilityOptions_7, value);
	}

	inline static int32_t get_offset_of__serializationMethod_8() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____serializationMethod_8)); }
	inline int32_t get__serializationMethod_8() const { return ____serializationMethod_8; }
	inline int32_t* get_address_of__serializationMethod_8() { return &____serializationMethod_8; }
	inline void set__serializationMethod_8(int32_t value)
	{
		____serializationMethod_8 = value;
	}

	inline static int32_t get_offset_of__enumSerializationMethod_9() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____enumSerializationMethod_9)); }
	inline int32_t get__enumSerializationMethod_9() const { return ____enumSerializationMethod_9; }
	inline int32_t* get_address_of__enumSerializationMethod_9() { return &____enumSerializationMethod_9; }
	inline void set__enumSerializationMethod_9(int32_t value)
	{
		____enumSerializationMethod_9 = value;
	}

	inline static int32_t get_offset_of__defaultCollectionTypes_10() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____defaultCollectionTypes_10)); }
	inline DefaultConcreteTypeRepository_t1959877892 * get__defaultCollectionTypes_10() const { return ____defaultCollectionTypes_10; }
	inline DefaultConcreteTypeRepository_t1959877892 ** get_address_of__defaultCollectionTypes_10() { return &____defaultCollectionTypes_10; }
	inline void set__defaultCollectionTypes_10(DefaultConcreteTypeRepository_t1959877892 * value)
	{
		____defaultCollectionTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&____defaultCollectionTypes_10, value);
	}

	inline static int32_t get_offset_of__resolveSerializerSyncRoot_11() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____resolveSerializerSyncRoot_11)); }
	inline Il2CppObject * get__resolveSerializerSyncRoot_11() const { return ____resolveSerializerSyncRoot_11; }
	inline Il2CppObject ** get_address_of__resolveSerializerSyncRoot_11() { return &____resolveSerializerSyncRoot_11; }
	inline void set__resolveSerializerSyncRoot_11(Il2CppObject * value)
	{
		____resolveSerializerSyncRoot_11 = value;
		Il2CppCodeGenWriteBarrier(&____resolveSerializerSyncRoot_11, value);
	}

	inline static int32_t get_offset_of__resolveSerializer_12() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____resolveSerializer_12)); }
	inline EventHandler_1_t2821349425 * get__resolveSerializer_12() const { return ____resolveSerializer_12; }
	inline EventHandler_1_t2821349425 ** get_address_of__resolveSerializer_12() { return &____resolveSerializer_12; }
	inline void set__resolveSerializer_12(EventHandler_1_t2821349425 * value)
	{
		____resolveSerializer_12 = value;
		Il2CppCodeGenWriteBarrier(&____resolveSerializer_12, value);
	}

	inline static int32_t get_offset_of__extTypeCodes_13() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ____extTypeCodes_13)); }
	inline ExtTypeCodeMapping_t2037435746 * get__extTypeCodes_13() const { return ____extTypeCodes_13; }
	inline ExtTypeCodeMapping_t2037435746 ** get_address_of__extTypeCodes_13() { return &____extTypeCodes_13; }
	inline void set__extTypeCodes_13(ExtTypeCodeMapping_t2037435746 * value)
	{
		____extTypeCodes_13 = value;
		Il2CppCodeGenWriteBarrier(&____extTypeCodes_13, value);
	}

	inline static int32_t get_offset_of_U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559, ___U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14)); }
	inline int32_t get_U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14() const { return ___U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14() { return &___U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14; }
	inline void set_U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14(int32_t value)
	{
		___U3CDefaultDateTimeConversionMethodU3Ek__BackingField_14 = value;
	}
};

struct SerializationContext_t1484625559_StaticFields
{
public:
	// System.Object MsgPack.Serialization.SerializationContext::DefaultContextSyncRoot
	Il2CppObject * ___DefaultContextSyncRoot_0;
	// System.Reflection.MethodInfo MsgPack.Serialization.SerializationContext::GetSerializer1Method
	MethodInfo_t * ___GetSerializer1Method_1;
	// MsgPack.Serialization.SerializationContext MsgPack.Serialization.SerializationContext::_default
	SerializationContext_t1484625559 * ____default_2;

public:
	inline static int32_t get_offset_of_DefaultContextSyncRoot_0() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559_StaticFields, ___DefaultContextSyncRoot_0)); }
	inline Il2CppObject * get_DefaultContextSyncRoot_0() const { return ___DefaultContextSyncRoot_0; }
	inline Il2CppObject ** get_address_of_DefaultContextSyncRoot_0() { return &___DefaultContextSyncRoot_0; }
	inline void set_DefaultContextSyncRoot_0(Il2CppObject * value)
	{
		___DefaultContextSyncRoot_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultContextSyncRoot_0, value);
	}

	inline static int32_t get_offset_of_GetSerializer1Method_1() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559_StaticFields, ___GetSerializer1Method_1)); }
	inline MethodInfo_t * get_GetSerializer1Method_1() const { return ___GetSerializer1Method_1; }
	inline MethodInfo_t ** get_address_of_GetSerializer1Method_1() { return &___GetSerializer1Method_1; }
	inline void set_GetSerializer1Method_1(MethodInfo_t * value)
	{
		___GetSerializer1Method_1 = value;
		Il2CppCodeGenWriteBarrier(&___GetSerializer1Method_1, value);
	}

	inline static int32_t get_offset_of__default_2() { return static_cast<int32_t>(offsetof(SerializationContext_t1484625559_StaticFields, ____default_2)); }
	inline SerializationContext_t1484625559 * get__default_2() const { return ____default_2; }
	inline SerializationContext_t1484625559 ** get_address_of__default_2() { return &____default_2; }
	inline void set__default_2(SerializationContext_t1484625559 * value)
	{
		____default_2 = value;
		Il2CppCodeGenWriteBarrier(&____default_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
