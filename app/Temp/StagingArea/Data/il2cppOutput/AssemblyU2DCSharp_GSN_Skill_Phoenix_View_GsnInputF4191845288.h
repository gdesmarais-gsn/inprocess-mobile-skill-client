#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TMP_InputField
struct TMP_InputField_t1778301588;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseValida514734584.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.GsnInputField
struct  GsnInputField_t4191845288  : public BaseValidatableField_t514734584
{
public:
	// TMPro.TMP_InputField GSN.Skill.Phoenix.View.GsnInputField::_inputField
	TMP_InputField_t1778301588 * ____inputField_14;
	// System.Int32 GSN.Skill.Phoenix.View.GsnInputField::_selectedFrame
	int32_t ____selectedFrame_15;

public:
	inline static int32_t get_offset_of__inputField_14() { return static_cast<int32_t>(offsetof(GsnInputField_t4191845288, ____inputField_14)); }
	inline TMP_InputField_t1778301588 * get__inputField_14() const { return ____inputField_14; }
	inline TMP_InputField_t1778301588 ** get_address_of__inputField_14() { return &____inputField_14; }
	inline void set__inputField_14(TMP_InputField_t1778301588 * value)
	{
		____inputField_14 = value;
		Il2CppCodeGenWriteBarrier(&____inputField_14, value);
	}

	inline static int32_t get_offset_of__selectedFrame_15() { return static_cast<int32_t>(offsetof(GsnInputField_t4191845288, ____selectedFrame_15)); }
	inline int32_t get__selectedFrame_15() const { return ____selectedFrame_15; }
	inline int32_t* get_address_of__selectedFrame_15() { return &____selectedFrame_15; }
	inline void set__selectedFrame_15(int32_t value)
	{
		____selectedFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
