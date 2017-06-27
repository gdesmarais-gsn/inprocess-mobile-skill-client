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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Build.BuildTimeValues
struct  BuildTimeValues_t2351613977  : public Il2CppObject
{
public:

public:
};

struct BuildTimeValues_t2351613977_StaticFields
{
public:
	// System.String GSN.Skill.Phoenix.Build.BuildTimeValues::CLIENT_BRANCH_NAME
	String_t* ___CLIENT_BRANCH_NAME_0;
	// System.String GSN.Skill.Phoenix.Build.BuildTimeValues::CLIENT_BUILD_NUMBER
	String_t* ___CLIENT_BUILD_NUMBER_1;
	// System.String GSN.Skill.Phoenix.Build.BuildTimeValues::ENVIRONMENT
	String_t* ___ENVIRONMENT_2;

public:
	inline static int32_t get_offset_of_CLIENT_BRANCH_NAME_0() { return static_cast<int32_t>(offsetof(BuildTimeValues_t2351613977_StaticFields, ___CLIENT_BRANCH_NAME_0)); }
	inline String_t* get_CLIENT_BRANCH_NAME_0() const { return ___CLIENT_BRANCH_NAME_0; }
	inline String_t** get_address_of_CLIENT_BRANCH_NAME_0() { return &___CLIENT_BRANCH_NAME_0; }
	inline void set_CLIENT_BRANCH_NAME_0(String_t* value)
	{
		___CLIENT_BRANCH_NAME_0 = value;
		Il2CppCodeGenWriteBarrier(&___CLIENT_BRANCH_NAME_0, value);
	}

	inline static int32_t get_offset_of_CLIENT_BUILD_NUMBER_1() { return static_cast<int32_t>(offsetof(BuildTimeValues_t2351613977_StaticFields, ___CLIENT_BUILD_NUMBER_1)); }
	inline String_t* get_CLIENT_BUILD_NUMBER_1() const { return ___CLIENT_BUILD_NUMBER_1; }
	inline String_t** get_address_of_CLIENT_BUILD_NUMBER_1() { return &___CLIENT_BUILD_NUMBER_1; }
	inline void set_CLIENT_BUILD_NUMBER_1(String_t* value)
	{
		___CLIENT_BUILD_NUMBER_1 = value;
		Il2CppCodeGenWriteBarrier(&___CLIENT_BUILD_NUMBER_1, value);
	}

	inline static int32_t get_offset_of_ENVIRONMENT_2() { return static_cast<int32_t>(offsetof(BuildTimeValues_t2351613977_StaticFields, ___ENVIRONMENT_2)); }
	inline String_t* get_ENVIRONMENT_2() const { return ___ENVIRONMENT_2; }
	inline String_t** get_address_of_ENVIRONMENT_2() { return &___ENVIRONMENT_2; }
	inline void set_ENVIRONMENT_2(String_t* value)
	{
		___ENVIRONMENT_2 = value;
		Il2CppCodeGenWriteBarrier(&___ENVIRONMENT_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
