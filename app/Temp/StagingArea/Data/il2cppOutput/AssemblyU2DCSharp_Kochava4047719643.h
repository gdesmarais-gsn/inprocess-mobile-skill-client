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
#include "AssemblyU2DCSharp_Kochava_DebugLogLevel4155426655.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kochava
struct  Kochava_t4047719643  : public MonoBehaviour_t1158329972
{
public:
	// System.String Kochava::kochavaAppGUID_iOS
	String_t* ___kochavaAppGUID_iOS_2;
	// System.String Kochava::kochavaAppGUID_Android
	String_t* ___kochavaAppGUID_Android_3;
	// System.String Kochava::kochavaAppGUID_Kindle
	String_t* ___kochavaAppGUID_Kindle_4;
	// System.Boolean Kochava::requestAttributionCallback
	bool ___requestAttributionCallback_5;
	// System.Boolean Kochava::appAdLimitTracking
	bool ___appAdLimitTracking_6;
	// Kochava/DebugLogLevel Kochava::logLevel
	int32_t ___logLevel_7;
	// System.String Kochava::kochavaAppId
	String_t* ___kochavaAppId_8;

public:
	inline static int32_t get_offset_of_kochavaAppGUID_iOS_2() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___kochavaAppGUID_iOS_2)); }
	inline String_t* get_kochavaAppGUID_iOS_2() const { return ___kochavaAppGUID_iOS_2; }
	inline String_t** get_address_of_kochavaAppGUID_iOS_2() { return &___kochavaAppGUID_iOS_2; }
	inline void set_kochavaAppGUID_iOS_2(String_t* value)
	{
		___kochavaAppGUID_iOS_2 = value;
		Il2CppCodeGenWriteBarrier(&___kochavaAppGUID_iOS_2, value);
	}

	inline static int32_t get_offset_of_kochavaAppGUID_Android_3() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___kochavaAppGUID_Android_3)); }
	inline String_t* get_kochavaAppGUID_Android_3() const { return ___kochavaAppGUID_Android_3; }
	inline String_t** get_address_of_kochavaAppGUID_Android_3() { return &___kochavaAppGUID_Android_3; }
	inline void set_kochavaAppGUID_Android_3(String_t* value)
	{
		___kochavaAppGUID_Android_3 = value;
		Il2CppCodeGenWriteBarrier(&___kochavaAppGUID_Android_3, value);
	}

	inline static int32_t get_offset_of_kochavaAppGUID_Kindle_4() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___kochavaAppGUID_Kindle_4)); }
	inline String_t* get_kochavaAppGUID_Kindle_4() const { return ___kochavaAppGUID_Kindle_4; }
	inline String_t** get_address_of_kochavaAppGUID_Kindle_4() { return &___kochavaAppGUID_Kindle_4; }
	inline void set_kochavaAppGUID_Kindle_4(String_t* value)
	{
		___kochavaAppGUID_Kindle_4 = value;
		Il2CppCodeGenWriteBarrier(&___kochavaAppGUID_Kindle_4, value);
	}

	inline static int32_t get_offset_of_requestAttributionCallback_5() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___requestAttributionCallback_5)); }
	inline bool get_requestAttributionCallback_5() const { return ___requestAttributionCallback_5; }
	inline bool* get_address_of_requestAttributionCallback_5() { return &___requestAttributionCallback_5; }
	inline void set_requestAttributionCallback_5(bool value)
	{
		___requestAttributionCallback_5 = value;
	}

	inline static int32_t get_offset_of_appAdLimitTracking_6() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___appAdLimitTracking_6)); }
	inline bool get_appAdLimitTracking_6() const { return ___appAdLimitTracking_6; }
	inline bool* get_address_of_appAdLimitTracking_6() { return &___appAdLimitTracking_6; }
	inline void set_appAdLimitTracking_6(bool value)
	{
		___appAdLimitTracking_6 = value;
	}

	inline static int32_t get_offset_of_logLevel_7() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___logLevel_7)); }
	inline int32_t get_logLevel_7() const { return ___logLevel_7; }
	inline int32_t* get_address_of_logLevel_7() { return &___logLevel_7; }
	inline void set_logLevel_7(int32_t value)
	{
		___logLevel_7 = value;
	}

	inline static int32_t get_offset_of_kochavaAppId_8() { return static_cast<int32_t>(offsetof(Kochava_t4047719643, ___kochavaAppId_8)); }
	inline String_t* get_kochavaAppId_8() const { return ___kochavaAppId_8; }
	inline String_t** get_address_of_kochavaAppId_8() { return &___kochavaAppId_8; }
	inline void set_kochavaAppId_8(String_t* value)
	{
		___kochavaAppId_8 = value;
		Il2CppCodeGenWriteBarrier(&___kochavaAppId_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
