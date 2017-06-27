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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus
struct  EventStatus_t1107460037 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus::statusCode
	String_t* ___statusCode_0;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus::message
	String_t* ___message_1;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus::exception
	String_t* ___exception_2;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus::retryable
	String_t* ___retryable_3;

public:
	inline static int32_t get_offset_of_statusCode_0() { return static_cast<int32_t>(offsetof(EventStatus_t1107460037, ___statusCode_0)); }
	inline String_t* get_statusCode_0() const { return ___statusCode_0; }
	inline String_t** get_address_of_statusCode_0() { return &___statusCode_0; }
	inline void set_statusCode_0(String_t* value)
	{
		___statusCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___statusCode_0, value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(EventStatus_t1107460037, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_exception_2() { return static_cast<int32_t>(offsetof(EventStatus_t1107460037, ___exception_2)); }
	inline String_t* get_exception_2() const { return ___exception_2; }
	inline String_t** get_address_of_exception_2() { return &___exception_2; }
	inline void set_exception_2(String_t* value)
	{
		___exception_2 = value;
		Il2CppCodeGenWriteBarrier(&___exception_2, value);
	}

	inline static int32_t get_offset_of_retryable_3() { return static_cast<int32_t>(offsetof(EventStatus_t1107460037, ___retryable_3)); }
	inline String_t* get_retryable_3() const { return ___retryable_3; }
	inline String_t** get_address_of_retryable_3() { return &___retryable_3; }
	inline void set_retryable_3(String_t* value)
	{
		___retryable_3 = value;
		Il2CppCodeGenWriteBarrier(&___retryable_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus
struct EventStatus_t1107460037_marshaled_pinvoke
{
	char* ___statusCode_0;
	char* ___message_1;
	char* ___exception_2;
	char* ___retryable_3;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus
struct EventStatus_t1107460037_marshaled_com
{
	Il2CppChar* ___statusCode_0;
	Il2CppChar* ___message_1;
	Il2CppChar* ___exception_2;
	Il2CppChar* ___retryable_3;
};
