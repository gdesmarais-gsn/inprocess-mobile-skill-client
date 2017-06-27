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
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t3883897865;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSNPicker
struct  GSNPicker_t2311934918  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSNPicker::_parentName
	String_t* ____parentName_3;
	// TMPro.TMP_InputField/SelectionEvent GSNPicker::m_OnDeselect
	SelectionEvent_t3883897865 * ___m_OnDeselect_4;

public:
	inline static int32_t get_offset_of__parentName_3() { return static_cast<int32_t>(offsetof(GSNPicker_t2311934918, ____parentName_3)); }
	inline String_t* get__parentName_3() const { return ____parentName_3; }
	inline String_t** get_address_of__parentName_3() { return &____parentName_3; }
	inline void set__parentName_3(String_t* value)
	{
		____parentName_3 = value;
		Il2CppCodeGenWriteBarrier(&____parentName_3, value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_4() { return static_cast<int32_t>(offsetof(GSNPicker_t2311934918, ___m_OnDeselect_4)); }
	inline SelectionEvent_t3883897865 * get_m_OnDeselect_4() const { return ___m_OnDeselect_4; }
	inline SelectionEvent_t3883897865 ** get_address_of_m_OnDeselect_4() { return &___m_OnDeselect_4; }
	inline void set_m_OnDeselect_4(SelectionEvent_t3883897865 * value)
	{
		___m_OnDeselect_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnDeselect_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
