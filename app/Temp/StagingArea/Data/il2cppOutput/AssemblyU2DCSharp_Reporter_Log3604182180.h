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

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Reporter__LogType4109028099.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reporter/Log
struct  Log_t3604182180  : public Il2CppObject
{
public:
	// System.Int32 Reporter/Log::count
	int32_t ___count_0;
	// Reporter/_LogType Reporter/Log::logType
	int32_t ___logType_1;
	// System.String Reporter/Log::condition
	String_t* ___condition_2;
	// System.String Reporter/Log::stacktrace
	String_t* ___stacktrace_3;
	// System.Int32 Reporter/Log::sampleId
	int32_t ___sampleId_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Log_t3604182180, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_logType_1() { return static_cast<int32_t>(offsetof(Log_t3604182180, ___logType_1)); }
	inline int32_t get_logType_1() const { return ___logType_1; }
	inline int32_t* get_address_of_logType_1() { return &___logType_1; }
	inline void set_logType_1(int32_t value)
	{
		___logType_1 = value;
	}

	inline static int32_t get_offset_of_condition_2() { return static_cast<int32_t>(offsetof(Log_t3604182180, ___condition_2)); }
	inline String_t* get_condition_2() const { return ___condition_2; }
	inline String_t** get_address_of_condition_2() { return &___condition_2; }
	inline void set_condition_2(String_t* value)
	{
		___condition_2 = value;
		Il2CppCodeGenWriteBarrier(&___condition_2, value);
	}

	inline static int32_t get_offset_of_stacktrace_3() { return static_cast<int32_t>(offsetof(Log_t3604182180, ___stacktrace_3)); }
	inline String_t* get_stacktrace_3() const { return ___stacktrace_3; }
	inline String_t** get_address_of_stacktrace_3() { return &___stacktrace_3; }
	inline void set_stacktrace_3(String_t* value)
	{
		___stacktrace_3 = value;
		Il2CppCodeGenWriteBarrier(&___stacktrace_3, value);
	}

	inline static int32_t get_offset_of_sampleId_4() { return static_cast<int32_t>(offsetof(Log_t3604182180, ___sampleId_4)); }
	inline int32_t get_sampleId_4() const { return ___sampleId_4; }
	inline int32_t* get_address_of_sampleId_4() { return &___sampleId_4; }
	inline void set_sampleId_4(int32_t value)
	{
		___sampleId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
