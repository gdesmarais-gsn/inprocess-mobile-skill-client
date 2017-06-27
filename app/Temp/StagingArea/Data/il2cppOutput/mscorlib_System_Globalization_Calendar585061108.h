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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Calendar
struct  Calendar_t585061108  : public Il2CppObject
{
public:
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_2;
	// System.Int32 System.Globalization.Calendar::M_MaxYearValue
	int32_t ___M_MaxYearValue_3;
	// System.String[] System.Globalization.Calendar::M_AbbrEraNames
	StringU5BU5D_t1642385972* ___M_AbbrEraNames_4;
	// System.String[] System.Globalization.Calendar::M_EraNames
	StringU5BU5D_t1642385972* ___M_EraNames_5;
	// System.Int32 System.Globalization.Calendar::m_currentEraValue
	int32_t ___m_currentEraValue_6;

public:
	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(Calendar_t585061108, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_twoDigitYearMax_2() { return static_cast<int32_t>(offsetof(Calendar_t585061108, ___twoDigitYearMax_2)); }
	inline int32_t get_twoDigitYearMax_2() const { return ___twoDigitYearMax_2; }
	inline int32_t* get_address_of_twoDigitYearMax_2() { return &___twoDigitYearMax_2; }
	inline void set_twoDigitYearMax_2(int32_t value)
	{
		___twoDigitYearMax_2 = value;
	}

	inline static int32_t get_offset_of_M_MaxYearValue_3() { return static_cast<int32_t>(offsetof(Calendar_t585061108, ___M_MaxYearValue_3)); }
	inline int32_t get_M_MaxYearValue_3() const { return ___M_MaxYearValue_3; }
	inline int32_t* get_address_of_M_MaxYearValue_3() { return &___M_MaxYearValue_3; }
	inline void set_M_MaxYearValue_3(int32_t value)
	{
		___M_MaxYearValue_3 = value;
	}

	inline static int32_t get_offset_of_M_AbbrEraNames_4() { return static_cast<int32_t>(offsetof(Calendar_t585061108, ___M_AbbrEraNames_4)); }
	inline StringU5BU5D_t1642385972* get_M_AbbrEraNames_4() const { return ___M_AbbrEraNames_4; }
	inline StringU5BU5D_t1642385972** get_address_of_M_AbbrEraNames_4() { return &___M_AbbrEraNames_4; }
	inline void set_M_AbbrEraNames_4(StringU5BU5D_t1642385972* value)
	{
		___M_AbbrEraNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___M_AbbrEraNames_4, value);
	}

	inline static int32_t get_offset_of_M_EraNames_5() { return static_cast<int32_t>(offsetof(Calendar_t585061108, ___M_EraNames_5)); }
	inline StringU5BU5D_t1642385972* get_M_EraNames_5() const { return ___M_EraNames_5; }
	inline StringU5BU5D_t1642385972** get_address_of_M_EraNames_5() { return &___M_EraNames_5; }
	inline void set_M_EraNames_5(StringU5BU5D_t1642385972* value)
	{
		___M_EraNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___M_EraNames_5, value);
	}

	inline static int32_t get_offset_of_m_currentEraValue_6() { return static_cast<int32_t>(offsetof(Calendar_t585061108, ___m_currentEraValue_6)); }
	inline int32_t get_m_currentEraValue_6() const { return ___m_currentEraValue_6; }
	inline int32_t* get_address_of_m_currentEraValue_6() { return &___m_currentEraValue_6; }
	inline void set_m_currentEraValue_6(int32_t value)
	{
		___m_currentEraValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
