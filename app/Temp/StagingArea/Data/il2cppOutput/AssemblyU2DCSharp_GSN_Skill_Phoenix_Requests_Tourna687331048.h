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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques1819106202.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourna279450567.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.WinItNowRequestData
struct  WinItNowRequestData_t687331048  : public WebPOSTRequest_1_t1819106202
{
public:
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.WinItNowRequestData::<tournID>k__BackingField
	int32_t ___U3CtournIDU3Ek__BackingField_12;
	// System.Boolean GSN.Skill.Phoenix.Requests.Tournament.WinItNowRequestData::<accept>k__BackingField
	bool ___U3CacceptU3Ek__BackingField_13;
	// GSN.Skill.Phoenix.Requests.Tournament.WinItNowData GSN.Skill.Phoenix.Requests.Tournament.WinItNowRequestData::<Response>k__BackingField
	WinItNowData_t279450567  ___U3CResponseU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtournIDU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WinItNowRequestData_t687331048, ___U3CtournIDU3Ek__BackingField_12)); }
	inline int32_t get_U3CtournIDU3Ek__BackingField_12() const { return ___U3CtournIDU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CtournIDU3Ek__BackingField_12() { return &___U3CtournIDU3Ek__BackingField_12; }
	inline void set_U3CtournIDU3Ek__BackingField_12(int32_t value)
	{
		___U3CtournIDU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CacceptU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WinItNowRequestData_t687331048, ___U3CacceptU3Ek__BackingField_13)); }
	inline bool get_U3CacceptU3Ek__BackingField_13() const { return ___U3CacceptU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CacceptU3Ek__BackingField_13() { return &___U3CacceptU3Ek__BackingField_13; }
	inline void set_U3CacceptU3Ek__BackingField_13(bool value)
	{
		___U3CacceptU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WinItNowRequestData_t687331048, ___U3CResponseU3Ek__BackingField_14)); }
	inline WinItNowData_t279450567  get_U3CResponseU3Ek__BackingField_14() const { return ___U3CResponseU3Ek__BackingField_14; }
	inline WinItNowData_t279450567 * get_address_of_U3CResponseU3Ek__BackingField_14() { return &___U3CResponseU3Ek__BackingField_14; }
	inline void set_U3CResponseU3Ek__BackingField_14(WinItNowData_t279450567  value)
	{
		___U3CResponseU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
