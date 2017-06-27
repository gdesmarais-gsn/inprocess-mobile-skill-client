#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.MessagePackObject/ValueTypeCode
struct ValueTypeCode_t533787052;
// System.Object
struct Il2CppObject;
// System.Func`3<System.Int32,MsgPack.MessagePackObject,System.Int32>
struct Func_3_t3316372229;
// System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32>
struct Func_3_t3976942739;

#include "mscorlib_System_ValueType3507792607.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackObject
struct  MessagePackObject_t2038085051 
{
public:
	// System.Object MsgPack.MessagePackObject::_handleOrTypeCode
	Il2CppObject * ____handleOrTypeCode_12;
	// System.UInt64 MsgPack.MessagePackObject::_value
	uint64_t ____value_13;

public:
	inline static int32_t get_offset_of__handleOrTypeCode_12() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051, ____handleOrTypeCode_12)); }
	inline Il2CppObject * get__handleOrTypeCode_12() const { return ____handleOrTypeCode_12; }
	inline Il2CppObject ** get_address_of__handleOrTypeCode_12() { return &____handleOrTypeCode_12; }
	inline void set__handleOrTypeCode_12(Il2CppObject * value)
	{
		____handleOrTypeCode_12 = value;
		Il2CppCodeGenWriteBarrier(&____handleOrTypeCode_12, value);
	}

	inline static int32_t get_offset_of__value_13() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051, ____value_13)); }
	inline uint64_t get__value_13() const { return ____value_13; }
	inline uint64_t* get_address_of__value_13() { return &____value_13; }
	inline void set__value_13(uint64_t value)
	{
		____value_13 = value;
	}
};

struct MessagePackObject_t2038085051_StaticFields
{
public:
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_sbyteTypeCode
	ValueTypeCode_t533787052 * ____sbyteTypeCode_0;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_byteTypeCode
	ValueTypeCode_t533787052 * ____byteTypeCode_1;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_int16TypeCode
	ValueTypeCode_t533787052 * ____int16TypeCode_2;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_uint16TypeCode
	ValueTypeCode_t533787052 * ____uint16TypeCode_3;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_int32TypeCode
	ValueTypeCode_t533787052 * ____int32TypeCode_4;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_uint32TypeCode
	ValueTypeCode_t533787052 * ____uint32TypeCode_5;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_int64TypeCode
	ValueTypeCode_t533787052 * ____int64TypeCode_6;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_uint64TypeCode
	ValueTypeCode_t533787052 * ____uint64TypeCode_7;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_singleTypeCode
	ValueTypeCode_t533787052 * ____singleTypeCode_8;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_doubleTypeCode
	ValueTypeCode_t533787052 * ____doubleTypeCode_9;
	// MsgPack.MessagePackObject/ValueTypeCode MsgPack.MessagePackObject::_booleanTypeCode
	ValueTypeCode_t533787052 * ____booleanTypeCode_10;
	// MsgPack.MessagePackObject MsgPack.MessagePackObject::Nil
	MessagePackObject_t2038085051  ___Nil_11;
	// System.Func`3<System.Int32,MsgPack.MessagePackObject,System.Int32> MsgPack.MessagePackObject::CS$<>9__CachedAnonymousMethodDelegate2
	Func_3_t3316372229 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14;
	// System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32> MsgPack.MessagePackObject::CS$<>9__CachedAnonymousMethodDelegate3
	Func_3_t3976942739 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15;

public:
	inline static int32_t get_offset_of__sbyteTypeCode_0() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____sbyteTypeCode_0)); }
	inline ValueTypeCode_t533787052 * get__sbyteTypeCode_0() const { return ____sbyteTypeCode_0; }
	inline ValueTypeCode_t533787052 ** get_address_of__sbyteTypeCode_0() { return &____sbyteTypeCode_0; }
	inline void set__sbyteTypeCode_0(ValueTypeCode_t533787052 * value)
	{
		____sbyteTypeCode_0 = value;
		Il2CppCodeGenWriteBarrier(&____sbyteTypeCode_0, value);
	}

	inline static int32_t get_offset_of__byteTypeCode_1() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____byteTypeCode_1)); }
	inline ValueTypeCode_t533787052 * get__byteTypeCode_1() const { return ____byteTypeCode_1; }
	inline ValueTypeCode_t533787052 ** get_address_of__byteTypeCode_1() { return &____byteTypeCode_1; }
	inline void set__byteTypeCode_1(ValueTypeCode_t533787052 * value)
	{
		____byteTypeCode_1 = value;
		Il2CppCodeGenWriteBarrier(&____byteTypeCode_1, value);
	}

	inline static int32_t get_offset_of__int16TypeCode_2() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____int16TypeCode_2)); }
	inline ValueTypeCode_t533787052 * get__int16TypeCode_2() const { return ____int16TypeCode_2; }
	inline ValueTypeCode_t533787052 ** get_address_of__int16TypeCode_2() { return &____int16TypeCode_2; }
	inline void set__int16TypeCode_2(ValueTypeCode_t533787052 * value)
	{
		____int16TypeCode_2 = value;
		Il2CppCodeGenWriteBarrier(&____int16TypeCode_2, value);
	}

	inline static int32_t get_offset_of__uint16TypeCode_3() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____uint16TypeCode_3)); }
	inline ValueTypeCode_t533787052 * get__uint16TypeCode_3() const { return ____uint16TypeCode_3; }
	inline ValueTypeCode_t533787052 ** get_address_of__uint16TypeCode_3() { return &____uint16TypeCode_3; }
	inline void set__uint16TypeCode_3(ValueTypeCode_t533787052 * value)
	{
		____uint16TypeCode_3 = value;
		Il2CppCodeGenWriteBarrier(&____uint16TypeCode_3, value);
	}

	inline static int32_t get_offset_of__int32TypeCode_4() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____int32TypeCode_4)); }
	inline ValueTypeCode_t533787052 * get__int32TypeCode_4() const { return ____int32TypeCode_4; }
	inline ValueTypeCode_t533787052 ** get_address_of__int32TypeCode_4() { return &____int32TypeCode_4; }
	inline void set__int32TypeCode_4(ValueTypeCode_t533787052 * value)
	{
		____int32TypeCode_4 = value;
		Il2CppCodeGenWriteBarrier(&____int32TypeCode_4, value);
	}

	inline static int32_t get_offset_of__uint32TypeCode_5() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____uint32TypeCode_5)); }
	inline ValueTypeCode_t533787052 * get__uint32TypeCode_5() const { return ____uint32TypeCode_5; }
	inline ValueTypeCode_t533787052 ** get_address_of__uint32TypeCode_5() { return &____uint32TypeCode_5; }
	inline void set__uint32TypeCode_5(ValueTypeCode_t533787052 * value)
	{
		____uint32TypeCode_5 = value;
		Il2CppCodeGenWriteBarrier(&____uint32TypeCode_5, value);
	}

	inline static int32_t get_offset_of__int64TypeCode_6() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____int64TypeCode_6)); }
	inline ValueTypeCode_t533787052 * get__int64TypeCode_6() const { return ____int64TypeCode_6; }
	inline ValueTypeCode_t533787052 ** get_address_of__int64TypeCode_6() { return &____int64TypeCode_6; }
	inline void set__int64TypeCode_6(ValueTypeCode_t533787052 * value)
	{
		____int64TypeCode_6 = value;
		Il2CppCodeGenWriteBarrier(&____int64TypeCode_6, value);
	}

	inline static int32_t get_offset_of__uint64TypeCode_7() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____uint64TypeCode_7)); }
	inline ValueTypeCode_t533787052 * get__uint64TypeCode_7() const { return ____uint64TypeCode_7; }
	inline ValueTypeCode_t533787052 ** get_address_of__uint64TypeCode_7() { return &____uint64TypeCode_7; }
	inline void set__uint64TypeCode_7(ValueTypeCode_t533787052 * value)
	{
		____uint64TypeCode_7 = value;
		Il2CppCodeGenWriteBarrier(&____uint64TypeCode_7, value);
	}

	inline static int32_t get_offset_of__singleTypeCode_8() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____singleTypeCode_8)); }
	inline ValueTypeCode_t533787052 * get__singleTypeCode_8() const { return ____singleTypeCode_8; }
	inline ValueTypeCode_t533787052 ** get_address_of__singleTypeCode_8() { return &____singleTypeCode_8; }
	inline void set__singleTypeCode_8(ValueTypeCode_t533787052 * value)
	{
		____singleTypeCode_8 = value;
		Il2CppCodeGenWriteBarrier(&____singleTypeCode_8, value);
	}

	inline static int32_t get_offset_of__doubleTypeCode_9() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____doubleTypeCode_9)); }
	inline ValueTypeCode_t533787052 * get__doubleTypeCode_9() const { return ____doubleTypeCode_9; }
	inline ValueTypeCode_t533787052 ** get_address_of__doubleTypeCode_9() { return &____doubleTypeCode_9; }
	inline void set__doubleTypeCode_9(ValueTypeCode_t533787052 * value)
	{
		____doubleTypeCode_9 = value;
		Il2CppCodeGenWriteBarrier(&____doubleTypeCode_9, value);
	}

	inline static int32_t get_offset_of__booleanTypeCode_10() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ____booleanTypeCode_10)); }
	inline ValueTypeCode_t533787052 * get__booleanTypeCode_10() const { return ____booleanTypeCode_10; }
	inline ValueTypeCode_t533787052 ** get_address_of__booleanTypeCode_10() { return &____booleanTypeCode_10; }
	inline void set__booleanTypeCode_10(ValueTypeCode_t533787052 * value)
	{
		____booleanTypeCode_10 = value;
		Il2CppCodeGenWriteBarrier(&____booleanTypeCode_10, value);
	}

	inline static int32_t get_offset_of_Nil_11() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ___Nil_11)); }
	inline MessagePackObject_t2038085051  get_Nil_11() const { return ___Nil_11; }
	inline MessagePackObject_t2038085051 * get_address_of_Nil_11() { return &___Nil_11; }
	inline void set_Nil_11(MessagePackObject_t2038085051  value)
	{
		___Nil_11 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14)); }
	inline Func_3_t3316372229 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14; }
	inline Func_3_t3316372229 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14(Func_3_t3316372229 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_14, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15() { return static_cast<int32_t>(offsetof(MessagePackObject_t2038085051_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15)); }
	inline Func_3_t3976942739 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15; }
	inline Func_3_t3976942739 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15(Func_3_t3976942739 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
