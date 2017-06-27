#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Func`2<System.Object,System.Object>[]
struct Func_2U5BU5D_t3764038616;
// System.Action`2<System.Object,System.Object>[]
struct Action_2U5BU5D_t1510349216;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// MsgPack.Serialization.DataMemberContract[]
struct DataMemberContractU5BU5D_t2356511687;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// MsgPack.Serialization.IMessagePackSerializer[]
struct IMessagePackSerializerU5BU5D_t3829684320;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// System.Func`3<MsgPack.Serialization.DataMemberContract,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Func_3_t31062850;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean>
struct Func_2_t3095700435;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.String>
struct Func_2_t1299345950;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Int32>
struct Func_2_t1342003165;
// System.Func`2<System.Reflection.ParameterInfo,System.Object>
struct Func_2_t1486739657;

#include "MsgPack_MsgPack_Serialization_MessagePackSerialize3321018372.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1<System.Boolean>
struct  ReflectionObjectMessagePackSerializer_1_t3432746652  : public MessagePackSerializer_1_t3321018372
{
public:
	// System.Func`2<System.Object,System.Object>[] MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_getters
	Func_2U5BU5D_t3764038616* ____getters_5;
	// System.Action`2<System.Object,System.Object>[] MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_setters
	Action_2U5BU5D_t1510349216* ____setters_6;
	// System.Reflection.MemberInfo[] MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_memberInfos
	MemberInfoU5BU5D_t4238939941* ____memberInfos_7;
	// MsgPack.Serialization.DataMemberContract[] MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_contracts
	DataMemberContractU5BU5D_t2356511687* ____contracts_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_memberIndexes
	Dictionary_2_t3986656710 * ____memberIndexes_9;
	// MsgPack.Serialization.IMessagePackSerializer[] MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_serializers
	IMessagePackSerializerU5BU5D_t3829684320* ____serializers_10;
	// System.Reflection.ParameterInfo[] MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_constructorParameters
	ParameterInfoU5BU5D_t2275869610* ____constructorParameters_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::_constructorArgumentIndexes
	Dictionary_2_t1079703083 * ____constructorArgumentIndexes_12;

public:
	inline static int32_t get_offset_of__getters_5() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____getters_5)); }
	inline Func_2U5BU5D_t3764038616* get__getters_5() const { return ____getters_5; }
	inline Func_2U5BU5D_t3764038616** get_address_of__getters_5() { return &____getters_5; }
	inline void set__getters_5(Func_2U5BU5D_t3764038616* value)
	{
		____getters_5 = value;
		Il2CppCodeGenWriteBarrier(&____getters_5, value);
	}

	inline static int32_t get_offset_of__setters_6() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____setters_6)); }
	inline Action_2U5BU5D_t1510349216* get__setters_6() const { return ____setters_6; }
	inline Action_2U5BU5D_t1510349216** get_address_of__setters_6() { return &____setters_6; }
	inline void set__setters_6(Action_2U5BU5D_t1510349216* value)
	{
		____setters_6 = value;
		Il2CppCodeGenWriteBarrier(&____setters_6, value);
	}

	inline static int32_t get_offset_of__memberInfos_7() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____memberInfos_7)); }
	inline MemberInfoU5BU5D_t4238939941* get__memberInfos_7() const { return ____memberInfos_7; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of__memberInfos_7() { return &____memberInfos_7; }
	inline void set__memberInfos_7(MemberInfoU5BU5D_t4238939941* value)
	{
		____memberInfos_7 = value;
		Il2CppCodeGenWriteBarrier(&____memberInfos_7, value);
	}

	inline static int32_t get_offset_of__contracts_8() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____contracts_8)); }
	inline DataMemberContractU5BU5D_t2356511687* get__contracts_8() const { return ____contracts_8; }
	inline DataMemberContractU5BU5D_t2356511687** get_address_of__contracts_8() { return &____contracts_8; }
	inline void set__contracts_8(DataMemberContractU5BU5D_t2356511687* value)
	{
		____contracts_8 = value;
		Il2CppCodeGenWriteBarrier(&____contracts_8, value);
	}

	inline static int32_t get_offset_of__memberIndexes_9() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____memberIndexes_9)); }
	inline Dictionary_2_t3986656710 * get__memberIndexes_9() const { return ____memberIndexes_9; }
	inline Dictionary_2_t3986656710 ** get_address_of__memberIndexes_9() { return &____memberIndexes_9; }
	inline void set__memberIndexes_9(Dictionary_2_t3986656710 * value)
	{
		____memberIndexes_9 = value;
		Il2CppCodeGenWriteBarrier(&____memberIndexes_9, value);
	}

	inline static int32_t get_offset_of__serializers_10() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____serializers_10)); }
	inline IMessagePackSerializerU5BU5D_t3829684320* get__serializers_10() const { return ____serializers_10; }
	inline IMessagePackSerializerU5BU5D_t3829684320** get_address_of__serializers_10() { return &____serializers_10; }
	inline void set__serializers_10(IMessagePackSerializerU5BU5D_t3829684320* value)
	{
		____serializers_10 = value;
		Il2CppCodeGenWriteBarrier(&____serializers_10, value);
	}

	inline static int32_t get_offset_of__constructorParameters_11() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____constructorParameters_11)); }
	inline ParameterInfoU5BU5D_t2275869610* get__constructorParameters_11() const { return ____constructorParameters_11; }
	inline ParameterInfoU5BU5D_t2275869610** get_address_of__constructorParameters_11() { return &____constructorParameters_11; }
	inline void set__constructorParameters_11(ParameterInfoU5BU5D_t2275869610* value)
	{
		____constructorParameters_11 = value;
		Il2CppCodeGenWriteBarrier(&____constructorParameters_11, value);
	}

	inline static int32_t get_offset_of__constructorArgumentIndexes_12() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652, ____constructorArgumentIndexes_12)); }
	inline Dictionary_2_t1079703083 * get__constructorArgumentIndexes_12() const { return ____constructorArgumentIndexes_12; }
	inline Dictionary_2_t1079703083 ** get_address_of__constructorArgumentIndexes_12() { return &____constructorArgumentIndexes_12; }
	inline void set__constructorArgumentIndexes_12(Dictionary_2_t1079703083 * value)
	{
		____constructorArgumentIndexes_12 = value;
		Il2CppCodeGenWriteBarrier(&____constructorArgumentIndexes_12, value);
	}
};

struct ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields
{
public:
	// System.Reflection.PropertyInfo MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::DictionaryEntryKeyProperty
	PropertyInfo_t * ___DictionaryEntryKeyProperty_3;
	// System.Reflection.PropertyInfo MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::DictionaryEntryValueProperty
	PropertyInfo_t * ___DictionaryEntryValueProperty_4;
	// System.Func`3<MsgPack.Serialization.DataMemberContract,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate5
	Func_3_t31062850 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate6
	Func_2_t3095700435 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.String> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate7
	Func_2_t1299345950 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Int32> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate8
	Func_2_t1342003165 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16;
	// System.Func`2<System.Reflection.ParameterInfo,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionObjectMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegated
	Func_2_t1486739657 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_17;

public:
	inline static int32_t get_offset_of_DictionaryEntryKeyProperty_3() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___DictionaryEntryKeyProperty_3)); }
	inline PropertyInfo_t * get_DictionaryEntryKeyProperty_3() const { return ___DictionaryEntryKeyProperty_3; }
	inline PropertyInfo_t ** get_address_of_DictionaryEntryKeyProperty_3() { return &___DictionaryEntryKeyProperty_3; }
	inline void set_DictionaryEntryKeyProperty_3(PropertyInfo_t * value)
	{
		___DictionaryEntryKeyProperty_3 = value;
		Il2CppCodeGenWriteBarrier(&___DictionaryEntryKeyProperty_3, value);
	}

	inline static int32_t get_offset_of_DictionaryEntryValueProperty_4() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___DictionaryEntryValueProperty_4)); }
	inline PropertyInfo_t * get_DictionaryEntryValueProperty_4() const { return ___DictionaryEntryValueProperty_4; }
	inline PropertyInfo_t ** get_address_of_DictionaryEntryValueProperty_4() { return &___DictionaryEntryValueProperty_4; }
	inline void set_DictionaryEntryValueProperty_4(PropertyInfo_t * value)
	{
		___DictionaryEntryValueProperty_4 = value;
		Il2CppCodeGenWriteBarrier(&___DictionaryEntryValueProperty_4, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13)); }
	inline Func_3_t31062850 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13; }
	inline Func_3_t31062850 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13(Func_3_t31062850 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14)); }
	inline Func_2_t3095700435 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14; }
	inline Func_2_t3095700435 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14(Func_2_t3095700435 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_14, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15)); }
	inline Func_2_t1299345950 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15; }
	inline Func_2_t1299345950 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15(Func_2_t1299345950 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_15, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16)); }
	inline Func_2_t1342003165 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16; }
	inline Func_2_t1342003165 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16(Func_2_t1342003165 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_16, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegated_17() { return static_cast<int32_t>(offsetof(ReflectionObjectMessagePackSerializer_1_t3432746652_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_17)); }
	inline Func_2_t1486739657 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegated_17() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_17; }
	inline Func_2_t1486739657 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegated_17() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegated_17; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegated_17(Func_2_t1486739657 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegated_17 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegated_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
