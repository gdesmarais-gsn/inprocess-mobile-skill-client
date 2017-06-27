#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.Reflection.GenericTypeExtensions/<>c__DisplayClass2
struct  U3CU3Ec__DisplayClass2_t2216732530  : public Il2CppObject
{
public:
	// System.Type MsgPack.Serialization.Reflection.GenericTypeExtensions/<>c__DisplayClass2::source
	Type_t * ___source_0;
	// System.Type MsgPack.Serialization.Reflection.GenericTypeExtensions/<>c__DisplayClass2::genericType
	Type_t * ___genericType_1;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t2216732530, ___source_0)); }
	inline Type_t * get_source_0() const { return ___source_0; }
	inline Type_t ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(Type_t * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}

	inline static int32_t get_offset_of_genericType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t2216732530, ___genericType_1)); }
	inline Type_t * get_genericType_1() const { return ___genericType_1; }
	inline Type_t ** get_address_of_genericType_1() { return &___genericType_1; }
	inline void set_genericType_1(Type_t * value)
	{
		___genericType_1 = value;
		Il2CppCodeGenWriteBarrier(&___genericType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
