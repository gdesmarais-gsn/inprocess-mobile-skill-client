#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.DataMemberContract
struct DataMemberContract_t3068833586;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.SerializingMember
struct  SerializingMember_t909336757  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo MsgPack.Serialization.SerializingMember::Member
	MemberInfo_t * ___Member_0;
	// MsgPack.Serialization.DataMemberContract MsgPack.Serialization.SerializingMember::Contract
	DataMemberContract_t3068833586 * ___Contract_1;

public:
	inline static int32_t get_offset_of_Member_0() { return static_cast<int32_t>(offsetof(SerializingMember_t909336757, ___Member_0)); }
	inline MemberInfo_t * get_Member_0() const { return ___Member_0; }
	inline MemberInfo_t ** get_address_of_Member_0() { return &___Member_0; }
	inline void set_Member_0(MemberInfo_t * value)
	{
		___Member_0 = value;
		Il2CppCodeGenWriteBarrier(&___Member_0, value);
	}

	inline static int32_t get_offset_of_Contract_1() { return static_cast<int32_t>(offsetof(SerializingMember_t909336757, ___Contract_1)); }
	inline DataMemberContract_t3068833586 * get_Contract_1() const { return ___Contract_1; }
	inline DataMemberContract_t3068833586 ** get_address_of_Contract_1() { return &___Contract_1; }
	inline void set_Contract_1(DataMemberContract_t3068833586 * value)
	{
		___Contract_1 = value;
		Il2CppCodeGenWriteBarrier(&___Contract_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
