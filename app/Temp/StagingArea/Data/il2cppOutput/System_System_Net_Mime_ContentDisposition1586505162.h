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
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mime.ContentDisposition
struct  ContentDisposition_t1586505162  : public Il2CppObject
{
public:
	// System.String System.Net.Mime.ContentDisposition::dispositionType
	String_t* ___dispositionType_0;
	// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentDisposition::parameters
	StringDictionary_t1070889667 * ___parameters_1;

public:
	inline static int32_t get_offset_of_dispositionType_0() { return static_cast<int32_t>(offsetof(ContentDisposition_t1586505162, ___dispositionType_0)); }
	inline String_t* get_dispositionType_0() const { return ___dispositionType_0; }
	inline String_t** get_address_of_dispositionType_0() { return &___dispositionType_0; }
	inline void set_dispositionType_0(String_t* value)
	{
		___dispositionType_0 = value;
		Il2CppCodeGenWriteBarrier(&___dispositionType_0, value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(ContentDisposition_t1586505162, ___parameters_1)); }
	inline StringDictionary_t1070889667 * get_parameters_1() const { return ___parameters_1; }
	inline StringDictionary_t1070889667 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(StringDictionary_t1070889667 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
