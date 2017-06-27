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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crittercism
struct  Crittercism_t1506202693  : public MonoBehaviour_t1158329972
{
public:
	// System.String Crittercism::CrittercismiOSAppID
	String_t* ___CrittercismiOSAppID_2;
	// System.String Crittercism::CrittercismAndroidAppID
	String_t* ___CrittercismAndroidAppID_3;

public:
	inline static int32_t get_offset_of_CrittercismiOSAppID_2() { return static_cast<int32_t>(offsetof(Crittercism_t1506202693, ___CrittercismiOSAppID_2)); }
	inline String_t* get_CrittercismiOSAppID_2() const { return ___CrittercismiOSAppID_2; }
	inline String_t** get_address_of_CrittercismiOSAppID_2() { return &___CrittercismiOSAppID_2; }
	inline void set_CrittercismiOSAppID_2(String_t* value)
	{
		___CrittercismiOSAppID_2 = value;
		Il2CppCodeGenWriteBarrier(&___CrittercismiOSAppID_2, value);
	}

	inline static int32_t get_offset_of_CrittercismAndroidAppID_3() { return static_cast<int32_t>(offsetof(Crittercism_t1506202693, ___CrittercismAndroidAppID_3)); }
	inline String_t* get_CrittercismAndroidAppID_3() const { return ___CrittercismAndroidAppID_3; }
	inline String_t** get_address_of_CrittercismAndroidAppID_3() { return &___CrittercismAndroidAppID_3; }
	inline void set_CrittercismAndroidAppID_3(String_t* value)
	{
		___CrittercismAndroidAppID_3 = value;
		Il2CppCodeGenWriteBarrier(&___CrittercismAndroidAppID_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
