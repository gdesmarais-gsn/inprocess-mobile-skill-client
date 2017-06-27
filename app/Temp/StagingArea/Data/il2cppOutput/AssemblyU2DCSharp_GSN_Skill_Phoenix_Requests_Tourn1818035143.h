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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier
struct  RewardMultiplier_t1818035143 
{
public:
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier::expiration
	int32_t ___expiration_0;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier::start_date
	int32_t ___start_date_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier::multiplier
	String_t* ___multiplier_2;

public:
	inline static int32_t get_offset_of_expiration_0() { return static_cast<int32_t>(offsetof(RewardMultiplier_t1818035143, ___expiration_0)); }
	inline int32_t get_expiration_0() const { return ___expiration_0; }
	inline int32_t* get_address_of_expiration_0() { return &___expiration_0; }
	inline void set_expiration_0(int32_t value)
	{
		___expiration_0 = value;
	}

	inline static int32_t get_offset_of_start_date_1() { return static_cast<int32_t>(offsetof(RewardMultiplier_t1818035143, ___start_date_1)); }
	inline int32_t get_start_date_1() const { return ___start_date_1; }
	inline int32_t* get_address_of_start_date_1() { return &___start_date_1; }
	inline void set_start_date_1(int32_t value)
	{
		___start_date_1 = value;
	}

	inline static int32_t get_offset_of_multiplier_2() { return static_cast<int32_t>(offsetof(RewardMultiplier_t1818035143, ___multiplier_2)); }
	inline String_t* get_multiplier_2() const { return ___multiplier_2; }
	inline String_t** get_address_of_multiplier_2() { return &___multiplier_2; }
	inline void set_multiplier_2(String_t* value)
	{
		___multiplier_2 = value;
		Il2CppCodeGenWriteBarrier(&___multiplier_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier
struct RewardMultiplier_t1818035143_marshaled_pinvoke
{
	int32_t ___expiration_0;
	int32_t ___start_date_1;
	char* ___multiplier_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/RewardMultiplier
struct RewardMultiplier_t1818035143_marshaled_com
{
	int32_t ___expiration_0;
	int32_t ___start_date_1;
	Il2CppChar* ___multiplier_2;
};
