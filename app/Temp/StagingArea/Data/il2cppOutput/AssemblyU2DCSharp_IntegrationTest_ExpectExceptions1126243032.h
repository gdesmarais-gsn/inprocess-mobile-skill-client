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
// System.Func`2<System.Type,System.String>
struct Func_2_t215605592;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntegrationTest/ExpectExceptions
struct  ExpectExceptions_t1126243032  : public Attribute_t542643598
{
public:
	// System.String[] IntegrationTest/ExpectExceptions::exceptionTypeNames
	StringU5BU5D_t1642385972* ___exceptionTypeNames_0;
	// System.Boolean IntegrationTest/ExpectExceptions::succeedOnException
	bool ___succeedOnException_1;

public:
	inline static int32_t get_offset_of_exceptionTypeNames_0() { return static_cast<int32_t>(offsetof(ExpectExceptions_t1126243032, ___exceptionTypeNames_0)); }
	inline StringU5BU5D_t1642385972* get_exceptionTypeNames_0() const { return ___exceptionTypeNames_0; }
	inline StringU5BU5D_t1642385972** get_address_of_exceptionTypeNames_0() { return &___exceptionTypeNames_0; }
	inline void set_exceptionTypeNames_0(StringU5BU5D_t1642385972* value)
	{
		___exceptionTypeNames_0 = value;
		Il2CppCodeGenWriteBarrier(&___exceptionTypeNames_0, value);
	}

	inline static int32_t get_offset_of_succeedOnException_1() { return static_cast<int32_t>(offsetof(ExpectExceptions_t1126243032, ___succeedOnException_1)); }
	inline bool get_succeedOnException_1() const { return ___succeedOnException_1; }
	inline bool* get_address_of_succeedOnException_1() { return &___succeedOnException_1; }
	inline void set_succeedOnException_1(bool value)
	{
		___succeedOnException_1 = value;
	}
};

struct ExpectExceptions_t1126243032_StaticFields
{
public:
	// System.Func`2<System.Type,System.String> IntegrationTest/ExpectExceptions::<>f__am$cache0
	Func_2_t215605592 * ___U3CU3Ef__amU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(ExpectExceptions_t1126243032_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t215605592 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t215605592 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t215605592 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
