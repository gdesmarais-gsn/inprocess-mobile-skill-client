#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.LocationLegalityData/Result
struct  Result_t802675009 
{
public:
	// System.Boolean GSN.Skill.Phoenix.Requests.Account.LocationLegalityData/Result::legal_location
	bool ___legal_location_0;
	// System.String[] GSN.Skill.Phoenix.Requests.Account.LocationLegalityData/Result::allowed_tourn_types
	StringU5BU5D_t1642385972* ___allowed_tourn_types_1;
	// System.String[] GSN.Skill.Phoenix.Requests.Account.LocationLegalityData/Result::games_blocked
	StringU5BU5D_t1642385972* ___games_blocked_2;

public:
	inline static int32_t get_offset_of_legal_location_0() { return static_cast<int32_t>(offsetof(Result_t802675009, ___legal_location_0)); }
	inline bool get_legal_location_0() const { return ___legal_location_0; }
	inline bool* get_address_of_legal_location_0() { return &___legal_location_0; }
	inline void set_legal_location_0(bool value)
	{
		___legal_location_0 = value;
	}

	inline static int32_t get_offset_of_allowed_tourn_types_1() { return static_cast<int32_t>(offsetof(Result_t802675009, ___allowed_tourn_types_1)); }
	inline StringU5BU5D_t1642385972* get_allowed_tourn_types_1() const { return ___allowed_tourn_types_1; }
	inline StringU5BU5D_t1642385972** get_address_of_allowed_tourn_types_1() { return &___allowed_tourn_types_1; }
	inline void set_allowed_tourn_types_1(StringU5BU5D_t1642385972* value)
	{
		___allowed_tourn_types_1 = value;
		Il2CppCodeGenWriteBarrier(&___allowed_tourn_types_1, value);
	}

	inline static int32_t get_offset_of_games_blocked_2() { return static_cast<int32_t>(offsetof(Result_t802675009, ___games_blocked_2)); }
	inline StringU5BU5D_t1642385972* get_games_blocked_2() const { return ___games_blocked_2; }
	inline StringU5BU5D_t1642385972** get_address_of_games_blocked_2() { return &___games_blocked_2; }
	inline void set_games_blocked_2(StringU5BU5D_t1642385972* value)
	{
		___games_blocked_2 = value;
		Il2CppCodeGenWriteBarrier(&___games_blocked_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.LocationLegalityData/Result
struct Result_t802675009_marshaled_pinvoke
{
	int32_t ___legal_location_0;
	char** ___allowed_tourn_types_1;
	char** ___games_blocked_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.LocationLegalityData/Result
struct Result_t802675009_marshaled_com
{
	int32_t ___legal_location_0;
	Il2CppChar** ___allowed_tourn_types_1;
	Il2CppChar** ___games_blocked_2;
};
