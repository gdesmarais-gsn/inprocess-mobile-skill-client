#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Func`2<UnityEngine.RuntimePlatform,System.String>
struct Func_2_t185365015;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntegrationTest/ExcludePlatformAttribute
struct  ExcludePlatformAttribute_t4117182796  : public Attribute_t542643598
{
public:
	// System.String[] IntegrationTest/ExcludePlatformAttribute::platformsToExclude
	StringU5BU5D_t1642385972* ___platformsToExclude_0;

public:
	inline static int32_t get_offset_of_platformsToExclude_0() { return static_cast<int32_t>(offsetof(ExcludePlatformAttribute_t4117182796, ___platformsToExclude_0)); }
	inline StringU5BU5D_t1642385972* get_platformsToExclude_0() const { return ___platformsToExclude_0; }
	inline StringU5BU5D_t1642385972** get_address_of_platformsToExclude_0() { return &___platformsToExclude_0; }
	inline void set_platformsToExclude_0(StringU5BU5D_t1642385972* value)
	{
		___platformsToExclude_0 = value;
		Il2CppCodeGenWriteBarrier(&___platformsToExclude_0, value);
	}
};

struct ExcludePlatformAttribute_t4117182796_StaticFields
{
public:
	// System.Func`2<UnityEngine.RuntimePlatform,System.String> IntegrationTest/ExcludePlatformAttribute::<>f__am$cache0
	Func_2_t185365015 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(ExcludePlatformAttribute_t4117182796_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Func_2_t185365015 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Func_2_t185365015 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Func_2_t185365015 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
