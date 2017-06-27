#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.DataMemberContract
struct DataMemberContract_t3068833586;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_NilImplication418432652.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DataMemberContract
struct  DataMemberContract_t3068833586  : public Il2CppObject
{
public:
	// System.String MsgPack.Serialization.DataMemberContract::_name
	String_t* ____name_1;
	// System.Int32 MsgPack.Serialization.DataMemberContract::_id
	int32_t ____id_2;
	// MsgPack.Serialization.NilImplication MsgPack.Serialization.DataMemberContract::_nilImplication
	int32_t ____nilImplication_3;

public:
	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(DataMemberContract_t3068833586, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(DataMemberContract_t3068833586, ____id_2)); }
	inline int32_t get__id_2() const { return ____id_2; }
	inline int32_t* get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(int32_t value)
	{
		____id_2 = value;
	}

	inline static int32_t get_offset_of__nilImplication_3() { return static_cast<int32_t>(offsetof(DataMemberContract_t3068833586, ____nilImplication_3)); }
	inline int32_t get__nilImplication_3() const { return ____nilImplication_3; }
	inline int32_t* get_address_of__nilImplication_3() { return &____nilImplication_3; }
	inline void set__nilImplication_3(int32_t value)
	{
		____nilImplication_3 = value;
	}
};

struct DataMemberContract_t3068833586_StaticFields
{
public:
	// MsgPack.Serialization.DataMemberContract MsgPack.Serialization.DataMemberContract::Null
	DataMemberContract_t3068833586 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(DataMemberContract_t3068833586_StaticFields, ___Null_0)); }
	inline DataMemberContract_t3068833586 * get_Null_0() const { return ___Null_0; }
	inline DataMemberContract_t3068833586 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(DataMemberContract_t3068833586 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier(&___Null_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
