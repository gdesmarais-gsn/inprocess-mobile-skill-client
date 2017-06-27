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

// GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler
struct  FabricSessionHandler_t663885285  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::<retryCount>k__BackingField
	int32_t ___U3CretryCountU3Ek__BackingField_1;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::AuthorizationToken
	String_t* ___AuthorizationToken_2;

public:
	inline static int32_t get_offset_of_U3CretryCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FabricSessionHandler_t663885285, ___U3CretryCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CretryCountU3Ek__BackingField_1() const { return ___U3CretryCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CretryCountU3Ek__BackingField_1() { return &___U3CretryCountU3Ek__BackingField_1; }
	inline void set_U3CretryCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CretryCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_AuthorizationToken_2() { return static_cast<int32_t>(offsetof(FabricSessionHandler_t663885285, ___AuthorizationToken_2)); }
	inline String_t* get_AuthorizationToken_2() const { return ___AuthorizationToken_2; }
	inline String_t** get_address_of_AuthorizationToken_2() { return &___AuthorizationToken_2; }
	inline void set_AuthorizationToken_2(String_t* value)
	{
		___AuthorizationToken_2 = value;
		Il2CppCodeGenWriteBarrier(&___AuthorizationToken_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
