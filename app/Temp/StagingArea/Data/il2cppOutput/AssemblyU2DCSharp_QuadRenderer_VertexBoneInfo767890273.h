#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FastList`1<QuadRenderer/VertexBoneInfo/Info>
struct FastList_1_t1706638420;
// QuadRenderer
struct QuadRenderer_t4156594076;
// System.Comparison`1<QuadRenderer/VertexBoneInfo/Info>
struct Comparison_1_t674046869;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuadRenderer/VertexBoneInfo
struct  VertexBoneInfo_t767890273  : public Il2CppObject
{
public:
	// FastList`1<QuadRenderer/VertexBoneInfo/Info> QuadRenderer/VertexBoneInfo::bones
	FastList_1_t1706638420 * ___bones_0;
	// QuadRenderer QuadRenderer/VertexBoneInfo::owner
	QuadRenderer_t4156594076 * ___owner_1;

public:
	inline static int32_t get_offset_of_bones_0() { return static_cast<int32_t>(offsetof(VertexBoneInfo_t767890273, ___bones_0)); }
	inline FastList_1_t1706638420 * get_bones_0() const { return ___bones_0; }
	inline FastList_1_t1706638420 ** get_address_of_bones_0() { return &___bones_0; }
	inline void set_bones_0(FastList_1_t1706638420 * value)
	{
		___bones_0 = value;
		Il2CppCodeGenWriteBarrier(&___bones_0, value);
	}

	inline static int32_t get_offset_of_owner_1() { return static_cast<int32_t>(offsetof(VertexBoneInfo_t767890273, ___owner_1)); }
	inline QuadRenderer_t4156594076 * get_owner_1() const { return ___owner_1; }
	inline QuadRenderer_t4156594076 ** get_address_of_owner_1() { return &___owner_1; }
	inline void set_owner_1(QuadRenderer_t4156594076 * value)
	{
		___owner_1 = value;
		Il2CppCodeGenWriteBarrier(&___owner_1, value);
	}
};

struct VertexBoneInfo_t767890273_StaticFields
{
public:
	// System.Comparison`1<QuadRenderer/VertexBoneInfo/Info> QuadRenderer/VertexBoneInfo::<>f__mg$cache0
	Comparison_1_t674046869 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(VertexBoneInfo_t767890273_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Comparison_1_t674046869 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Comparison_1_t674046869 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Comparison_1_t674046869 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
