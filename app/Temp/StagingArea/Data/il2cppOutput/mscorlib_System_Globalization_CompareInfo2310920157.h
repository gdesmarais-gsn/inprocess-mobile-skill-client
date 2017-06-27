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
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4081201584;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CompareOptions2829943955.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t2310920157  : public Il2CppObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_3;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_4;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_5;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_6;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t4081201584 * ___collator_7;

public:
	inline static int32_t get_offset_of_culture_3() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___culture_3)); }
	inline int32_t get_culture_3() const { return ___culture_3; }
	inline int32_t* get_address_of_culture_3() { return &___culture_3; }
	inline void set_culture_3(int32_t value)
	{
		___culture_3 = value;
	}

	inline static int32_t get_offset_of_icu_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___icu_name_4)); }
	inline String_t* get_icu_name_4() const { return ___icu_name_4; }
	inline String_t** get_address_of_icu_name_4() { return &___icu_name_4; }
	inline void set_icu_name_4(String_t* value)
	{
		___icu_name_4 = value;
		Il2CppCodeGenWriteBarrier(&___icu_name_4, value);
	}

	inline static int32_t get_offset_of_win32LCID_5() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___win32LCID_5)); }
	inline int32_t get_win32LCID_5() const { return ___win32LCID_5; }
	inline int32_t* get_address_of_win32LCID_5() { return &___win32LCID_5; }
	inline void set_win32LCID_5(int32_t value)
	{
		___win32LCID_5 = value;
	}

	inline static int32_t get_offset_of_m_name_6() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___m_name_6)); }
	inline String_t* get_m_name_6() const { return ___m_name_6; }
	inline String_t** get_address_of_m_name_6() { return &___m_name_6; }
	inline void set_m_name_6(String_t* value)
	{
		___m_name_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_name_6, value);
	}

	inline static int32_t get_offset_of_collator_7() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___collator_7)); }
	inline SimpleCollator_t4081201584 * get_collator_7() const { return ___collator_7; }
	inline SimpleCollator_t4081201584 ** get_address_of_collator_7() { return &___collator_7; }
	inline void set_collator_7(SimpleCollator_t4081201584 * value)
	{
		___collator_7 = value;
		Il2CppCodeGenWriteBarrier(&___collator_7, value);
	}
};

struct CompareInfo_t2310920157_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_2;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t909839986 * ___collators_8;
	// System.Object System.Globalization.CompareInfo::monitor
	Il2CppObject * ___monitor_9;

public:
	inline static int32_t get_offset_of_useManagedCollation_2() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157_StaticFields, ___useManagedCollation_2)); }
	inline bool get_useManagedCollation_2() const { return ___useManagedCollation_2; }
	inline bool* get_address_of_useManagedCollation_2() { return &___useManagedCollation_2; }
	inline void set_useManagedCollation_2(bool value)
	{
		___useManagedCollation_2 = value;
	}

	inline static int32_t get_offset_of_collators_8() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157_StaticFields, ___collators_8)); }
	inline Hashtable_t909839986 * get_collators_8() const { return ___collators_8; }
	inline Hashtable_t909839986 ** get_address_of_collators_8() { return &___collators_8; }
	inline void set_collators_8(Hashtable_t909839986 * value)
	{
		___collators_8 = value;
		Il2CppCodeGenWriteBarrier(&___collators_8, value);
	}

	inline static int32_t get_offset_of_monitor_9() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157_StaticFields, ___monitor_9)); }
	inline Il2CppObject * get_monitor_9() const { return ___monitor_9; }
	inline Il2CppObject ** get_address_of_monitor_9() { return &___monitor_9; }
	inline void set_monitor_9(Il2CppObject * value)
	{
		___monitor_9 = value;
		Il2CppCodeGenWriteBarrier(&___monitor_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
