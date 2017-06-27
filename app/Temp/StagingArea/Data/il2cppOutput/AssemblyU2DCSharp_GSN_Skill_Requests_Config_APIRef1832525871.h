#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.Config.APIInfoRequestData
struct APIInfoRequestData_t936324779;
// System.Collections.Generic.Dictionary`2<GSN.Skill.Requests.Config.APIReference/Category,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t2708779813;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_Singleton_1_gen573538600.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.Config.APIReference
struct  APIReference_t1832525871  : public Singleton_1_t573538600
{
public:
	// System.Boolean GSN.Skill.Requests.Config.APIReference::<HasData>k__BackingField
	bool ___U3CHasDataU3Ek__BackingField_1;
	// GSN.Skill.Requests.Config.APIInfoRequestData GSN.Skill.Requests.Config.APIReference::<apiInfo>k__BackingField
	APIInfoRequestData_t936324779 * ___U3CapiInfoU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<GSN.Skill.Requests.Config.APIReference/Category,System.Collections.Generic.Dictionary`2<System.String,System.String>> GSN.Skill.Requests.Config.APIReference::_apiList
	Dictionary_2_t2708779813 * ____apiList_3;

public:
	inline static int32_t get_offset_of_U3CHasDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(APIReference_t1832525871, ___U3CHasDataU3Ek__BackingField_1)); }
	inline bool get_U3CHasDataU3Ek__BackingField_1() const { return ___U3CHasDataU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CHasDataU3Ek__BackingField_1() { return &___U3CHasDataU3Ek__BackingField_1; }
	inline void set_U3CHasDataU3Ek__BackingField_1(bool value)
	{
		___U3CHasDataU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CapiInfoU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(APIReference_t1832525871, ___U3CapiInfoU3Ek__BackingField_2)); }
	inline APIInfoRequestData_t936324779 * get_U3CapiInfoU3Ek__BackingField_2() const { return ___U3CapiInfoU3Ek__BackingField_2; }
	inline APIInfoRequestData_t936324779 ** get_address_of_U3CapiInfoU3Ek__BackingField_2() { return &___U3CapiInfoU3Ek__BackingField_2; }
	inline void set_U3CapiInfoU3Ek__BackingField_2(APIInfoRequestData_t936324779 * value)
	{
		___U3CapiInfoU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CapiInfoU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of__apiList_3() { return static_cast<int32_t>(offsetof(APIReference_t1832525871, ____apiList_3)); }
	inline Dictionary_2_t2708779813 * get__apiList_3() const { return ____apiList_3; }
	inline Dictionary_2_t2708779813 ** get_address_of__apiList_3() { return &____apiList_3; }
	inline void set__apiList_3(Dictionary_2_t2708779813 * value)
	{
		____apiList_3 = value;
		Il2CppCodeGenWriteBarrier(&____apiList_3, value);
	}
};

struct APIReference_t1832525871_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GSN.Skill.Requests.Config.APIReference::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_4() { return static_cast<int32_t>(offsetof(APIReference_t1832525871_StaticFields, ___U3CU3Ef__switchU24map0_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_4() const { return ___U3CU3Ef__switchU24map0_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_4() { return &___U3CU3Ef__switchU24map0_4; }
	inline void set_U3CU3Ef__switchU24map0_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
