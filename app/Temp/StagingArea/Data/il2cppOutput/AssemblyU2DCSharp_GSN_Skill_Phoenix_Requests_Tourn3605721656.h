#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor[]
struct FlavorU5BU5D_t3252306038;
struct Flavor_t1431012079_marshaled_pinvoke;
struct Flavor_t1431012079_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Nullable_1_gen81101458.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn2980424852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result
struct  Result_t3605721656 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result::p1_flavor_id
	String_t* ___p1_flavor_id_0;
	// System.Nullable`1<GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier> GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result::rewardMultiplier
	Nullable_1_t81101458  ___rewardMultiplier_1;
	// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/UserPlayData GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result::userPlayData
	UserPlayData_t2980424852  ___userPlayData_2;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result::stateBanned
	String_t* ___stateBanned_3;
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result::user
	User_t1577144177 * ___user_4;
	// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor[] GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result::flavors
	FlavorU5BU5D_t3252306038* ___flavors_5;

public:
	inline static int32_t get_offset_of_p1_flavor_id_0() { return static_cast<int32_t>(offsetof(Result_t3605721656, ___p1_flavor_id_0)); }
	inline String_t* get_p1_flavor_id_0() const { return ___p1_flavor_id_0; }
	inline String_t** get_address_of_p1_flavor_id_0() { return &___p1_flavor_id_0; }
	inline void set_p1_flavor_id_0(String_t* value)
	{
		___p1_flavor_id_0 = value;
		Il2CppCodeGenWriteBarrier(&___p1_flavor_id_0, value);
	}

	inline static int32_t get_offset_of_rewardMultiplier_1() { return static_cast<int32_t>(offsetof(Result_t3605721656, ___rewardMultiplier_1)); }
	inline Nullable_1_t81101458  get_rewardMultiplier_1() const { return ___rewardMultiplier_1; }
	inline Nullable_1_t81101458 * get_address_of_rewardMultiplier_1() { return &___rewardMultiplier_1; }
	inline void set_rewardMultiplier_1(Nullable_1_t81101458  value)
	{
		___rewardMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_userPlayData_2() { return static_cast<int32_t>(offsetof(Result_t3605721656, ___userPlayData_2)); }
	inline UserPlayData_t2980424852  get_userPlayData_2() const { return ___userPlayData_2; }
	inline UserPlayData_t2980424852 * get_address_of_userPlayData_2() { return &___userPlayData_2; }
	inline void set_userPlayData_2(UserPlayData_t2980424852  value)
	{
		___userPlayData_2 = value;
	}

	inline static int32_t get_offset_of_stateBanned_3() { return static_cast<int32_t>(offsetof(Result_t3605721656, ___stateBanned_3)); }
	inline String_t* get_stateBanned_3() const { return ___stateBanned_3; }
	inline String_t** get_address_of_stateBanned_3() { return &___stateBanned_3; }
	inline void set_stateBanned_3(String_t* value)
	{
		___stateBanned_3 = value;
		Il2CppCodeGenWriteBarrier(&___stateBanned_3, value);
	}

	inline static int32_t get_offset_of_user_4() { return static_cast<int32_t>(offsetof(Result_t3605721656, ___user_4)); }
	inline User_t1577144177 * get_user_4() const { return ___user_4; }
	inline User_t1577144177 ** get_address_of_user_4() { return &___user_4; }
	inline void set_user_4(User_t1577144177 * value)
	{
		___user_4 = value;
		Il2CppCodeGenWriteBarrier(&___user_4, value);
	}

	inline static int32_t get_offset_of_flavors_5() { return static_cast<int32_t>(offsetof(Result_t3605721656, ___flavors_5)); }
	inline FlavorU5BU5D_t3252306038* get_flavors_5() const { return ___flavors_5; }
	inline FlavorU5BU5D_t3252306038** get_address_of_flavors_5() { return &___flavors_5; }
	inline void set_flavors_5(FlavorU5BU5D_t3252306038* value)
	{
		___flavors_5 = value;
		Il2CppCodeGenWriteBarrier(&___flavors_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result
struct Result_t3605721656_marshaled_pinvoke
{
	char* ___p1_flavor_id_0;
	Nullable_1_t81101458  ___rewardMultiplier_1;
	UserPlayData_t2980424852  ___userPlayData_2;
	char* ___stateBanned_3;
	User_t1577144177 * ___user_4;
	Flavor_t1431012079_marshaled_pinvoke* ___flavors_5;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Result
struct Result_t3605721656_marshaled_com
{
	Il2CppChar* ___p1_flavor_id_0;
	Nullable_1_t81101458  ___rewardMultiplier_1;
	UserPlayData_t2980424852  ___userPlayData_2;
	Il2CppChar* ___stateBanned_3;
	User_t1577144177 * ___user_4;
	Flavor_t1431012079_marshaled_com* ___flavors_5;
};
