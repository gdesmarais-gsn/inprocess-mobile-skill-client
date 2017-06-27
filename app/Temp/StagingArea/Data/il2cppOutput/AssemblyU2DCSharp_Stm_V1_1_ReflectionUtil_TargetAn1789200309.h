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
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.ReflectionUtil/TargetAndMemberInfo
struct  TargetAndMemberInfo_t1789200309  : public Il2CppObject
{
public:
	// System.Object Stm.V1_1.ReflectionUtil/TargetAndMemberInfo::target
	Il2CppObject * ___target_0;
	// System.Reflection.MemberInfo Stm.V1_1.ReflectionUtil/TargetAndMemberInfo::member
	MemberInfo_t * ___member_1;
	// System.Object[] Stm.V1_1.ReflectionUtil/TargetAndMemberInfo::index
	ObjectU5BU5D_t3614634134* ___index_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(TargetAndMemberInfo_t1789200309, ___target_0)); }
	inline Il2CppObject * get_target_0() const { return ___target_0; }
	inline Il2CppObject ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Il2CppObject * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(TargetAndMemberInfo_t1789200309, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier(&___member_1, value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(TargetAndMemberInfo_t1789200309, ___index_2)); }
	inline ObjectU5BU5D_t3614634134* get_index_2() const { return ___index_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(ObjectU5BU5D_t3614634134* value)
	{
		___index_2 = value;
		Il2CppCodeGenWriteBarrier(&___index_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
