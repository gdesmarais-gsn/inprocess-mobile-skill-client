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

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.HideUnlessAttribute
struct  HideUnlessAttribute_t3680834112  : public Attribute_t542643598
{
public:
	// System.String Stm.V1_1.HideUnlessAttribute::fieldName
	String_t* ___fieldName_0;
	// System.Int32 Stm.V1_1.HideUnlessAttribute::parentDepth
	int32_t ___parentDepth_1;

public:
	inline static int32_t get_offset_of_fieldName_0() { return static_cast<int32_t>(offsetof(HideUnlessAttribute_t3680834112, ___fieldName_0)); }
	inline String_t* get_fieldName_0() const { return ___fieldName_0; }
	inline String_t** get_address_of_fieldName_0() { return &___fieldName_0; }
	inline void set_fieldName_0(String_t* value)
	{
		___fieldName_0 = value;
		Il2CppCodeGenWriteBarrier(&___fieldName_0, value);
	}

	inline static int32_t get_offset_of_parentDepth_1() { return static_cast<int32_t>(offsetof(HideUnlessAttribute_t3680834112, ___parentDepth_1)); }
	inline int32_t get_parentDepth_1() const { return ___parentDepth_1; }
	inline int32_t* get_address_of_parentDepth_1() { return &___parentDepth_1; }
	inline void set_parentDepth_1(int32_t value)
	{
		___parentDepth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
