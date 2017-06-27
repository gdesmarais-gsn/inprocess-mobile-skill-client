#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PopupTyp3448311560.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.PopupEvent
struct  PopupEvent_t4254617624  : public Il2CppObject
{
public:
	// System.Int64 GSN.Skill.Phoenix.PopupEvent::popupUID
	int64_t ___popupUID_0;
	// GSN.Skill.Phoenix.Model.PopupType GSN.Skill.Phoenix.PopupEvent::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_popupUID_0() { return static_cast<int32_t>(offsetof(PopupEvent_t4254617624, ___popupUID_0)); }
	inline int64_t get_popupUID_0() const { return ___popupUID_0; }
	inline int64_t* get_address_of_popupUID_0() { return &___popupUID_0; }
	inline void set_popupUID_0(int64_t value)
	{
		___popupUID_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(PopupEvent_t4254617624, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
