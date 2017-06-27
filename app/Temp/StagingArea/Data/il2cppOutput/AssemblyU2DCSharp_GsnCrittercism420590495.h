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

#include "AssemblyU2DCSharp_Crittercism1506202693.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GsnCrittercism
struct  GsnCrittercism_t420590495  : public Crittercism_t1506202693
{
public:
	// System.Boolean GsnCrittercism::UseProductionKeys
	bool ___UseProductionKeys_4;
	// System.String GsnCrittercism::ProductionCrittercismiOSAppID
	String_t* ___ProductionCrittercismiOSAppID_5;
	// System.String GsnCrittercism::ProductionCrittercismAndroidAppID
	String_t* ___ProductionCrittercismAndroidAppID_6;

public:
	inline static int32_t get_offset_of_UseProductionKeys_4() { return static_cast<int32_t>(offsetof(GsnCrittercism_t420590495, ___UseProductionKeys_4)); }
	inline bool get_UseProductionKeys_4() const { return ___UseProductionKeys_4; }
	inline bool* get_address_of_UseProductionKeys_4() { return &___UseProductionKeys_4; }
	inline void set_UseProductionKeys_4(bool value)
	{
		___UseProductionKeys_4 = value;
	}

	inline static int32_t get_offset_of_ProductionCrittercismiOSAppID_5() { return static_cast<int32_t>(offsetof(GsnCrittercism_t420590495, ___ProductionCrittercismiOSAppID_5)); }
	inline String_t* get_ProductionCrittercismiOSAppID_5() const { return ___ProductionCrittercismiOSAppID_5; }
	inline String_t** get_address_of_ProductionCrittercismiOSAppID_5() { return &___ProductionCrittercismiOSAppID_5; }
	inline void set_ProductionCrittercismiOSAppID_5(String_t* value)
	{
		___ProductionCrittercismiOSAppID_5 = value;
		Il2CppCodeGenWriteBarrier(&___ProductionCrittercismiOSAppID_5, value);
	}

	inline static int32_t get_offset_of_ProductionCrittercismAndroidAppID_6() { return static_cast<int32_t>(offsetof(GsnCrittercism_t420590495, ___ProductionCrittercismAndroidAppID_6)); }
	inline String_t* get_ProductionCrittercismAndroidAppID_6() const { return ___ProductionCrittercismAndroidAppID_6; }
	inline String_t** get_address_of_ProductionCrittercismAndroidAppID_6() { return &___ProductionCrittercismAndroidAppID_6; }
	inline void set_ProductionCrittercismAndroidAppID_6(String_t* value)
	{
		___ProductionCrittercismAndroidAppID_6 = value;
		Il2CppCodeGenWriteBarrier(&___ProductionCrittercismAndroidAppID_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
