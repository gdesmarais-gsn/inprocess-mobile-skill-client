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

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.ProfilePopupReadyEvent
struct  ProfilePopupReadyEvent_t2420204026  : public Il2CppObject
{
public:
	// System.Decimal GSN.Skill.Phoenix.ProfilePopupReadyEvent::cashBalance
	Decimal_t724701077  ___cashBalance_0;
	// System.Decimal GSN.Skill.Phoenix.ProfilePopupReadyEvent::gameCreditBalance
	Decimal_t724701077  ___gameCreditBalance_1;
	// System.String GSN.Skill.Phoenix.ProfilePopupReadyEvent::username
	String_t* ___username_2;
	// System.Boolean GSN.Skill.Phoenix.ProfilePopupReadyEvent::isCashPlayer
	bool ___isCashPlayer_3;
	// System.String GSN.Skill.Phoenix.ProfilePopupReadyEvent::appVersion
	String_t* ___appVersion_4;

public:
	inline static int32_t get_offset_of_cashBalance_0() { return static_cast<int32_t>(offsetof(ProfilePopupReadyEvent_t2420204026, ___cashBalance_0)); }
	inline Decimal_t724701077  get_cashBalance_0() const { return ___cashBalance_0; }
	inline Decimal_t724701077 * get_address_of_cashBalance_0() { return &___cashBalance_0; }
	inline void set_cashBalance_0(Decimal_t724701077  value)
	{
		___cashBalance_0 = value;
	}

	inline static int32_t get_offset_of_gameCreditBalance_1() { return static_cast<int32_t>(offsetof(ProfilePopupReadyEvent_t2420204026, ___gameCreditBalance_1)); }
	inline Decimal_t724701077  get_gameCreditBalance_1() const { return ___gameCreditBalance_1; }
	inline Decimal_t724701077 * get_address_of_gameCreditBalance_1() { return &___gameCreditBalance_1; }
	inline void set_gameCreditBalance_1(Decimal_t724701077  value)
	{
		___gameCreditBalance_1 = value;
	}

	inline static int32_t get_offset_of_username_2() { return static_cast<int32_t>(offsetof(ProfilePopupReadyEvent_t2420204026, ___username_2)); }
	inline String_t* get_username_2() const { return ___username_2; }
	inline String_t** get_address_of_username_2() { return &___username_2; }
	inline void set_username_2(String_t* value)
	{
		___username_2 = value;
		Il2CppCodeGenWriteBarrier(&___username_2, value);
	}

	inline static int32_t get_offset_of_isCashPlayer_3() { return static_cast<int32_t>(offsetof(ProfilePopupReadyEvent_t2420204026, ___isCashPlayer_3)); }
	inline bool get_isCashPlayer_3() const { return ___isCashPlayer_3; }
	inline bool* get_address_of_isCashPlayer_3() { return &___isCashPlayer_3; }
	inline void set_isCashPlayer_3(bool value)
	{
		___isCashPlayer_3 = value;
	}

	inline static int32_t get_offset_of_appVersion_4() { return static_cast<int32_t>(offsetof(ProfilePopupReadyEvent_t2420204026, ___appVersion_4)); }
	inline String_t* get_appVersion_4() const { return ___appVersion_4; }
	inline String_t** get_address_of_appVersion_4() { return &___appVersion_4; }
	inline void set_appVersion_4(String_t* value)
	{
		___appVersion_4 = value;
		Il2CppCodeGenWriteBarrier(&___appVersion_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
