#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.WebRequestErrorData/Error[]
struct ErrorU5BU5D_t1838875882;
struct Error_t3008710795_marshaled_pinvoke;
struct Error_t3008710795_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequestErr3680241163.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequestErrorData
struct  WebRequestErrorData_t2176960341 
{
public:
	// GSN.Skill.Requests.WebRequestErrorData/ErrorType GSN.Skill.Requests.WebRequestErrorData::type
	int32_t ___type_0;
	// GSN.Skill.Requests.WebRequestErrorData/Error[] GSN.Skill.Requests.WebRequestErrorData::errors
	ErrorU5BU5D_t1838875882* ___errors_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(WebRequestErrorData_t2176960341, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_errors_1() { return static_cast<int32_t>(offsetof(WebRequestErrorData_t2176960341, ___errors_1)); }
	inline ErrorU5BU5D_t1838875882* get_errors_1() const { return ___errors_1; }
	inline ErrorU5BU5D_t1838875882** get_address_of_errors_1() { return &___errors_1; }
	inline void set_errors_1(ErrorU5BU5D_t1838875882* value)
	{
		___errors_1 = value;
		Il2CppCodeGenWriteBarrier(&___errors_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.WebRequestErrorData
struct WebRequestErrorData_t2176960341_marshaled_pinvoke
{
	int32_t ___type_0;
	Error_t3008710795_marshaled_pinvoke* ___errors_1;
};
// Native definition for COM marshalling of GSN.Skill.Requests.WebRequestErrorData
struct WebRequestErrorData_t2176960341_marshaled_com
{
	int32_t ___type_0;
	Error_t3008710795_marshaled_com* ___errors_1;
};
