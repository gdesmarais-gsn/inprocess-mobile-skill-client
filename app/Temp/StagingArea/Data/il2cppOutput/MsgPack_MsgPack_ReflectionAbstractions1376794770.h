#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.ReflectionAbstractions
struct  ReflectionAbstractions_t1376794770  : public Il2CppObject
{
public:

public:
};

struct ReflectionAbstractions_t1376794770_StaticFields
{
public:
	// System.Char MsgPack.ReflectionAbstractions::TypeDelimiter
	Il2CppChar ___TypeDelimiter_0;
	// System.Type[] MsgPack.ReflectionAbstractions::EmptyTypes
	TypeU5BU5D_t1664964607* ___EmptyTypes_1;

public:
	inline static int32_t get_offset_of_TypeDelimiter_0() { return static_cast<int32_t>(offsetof(ReflectionAbstractions_t1376794770_StaticFields, ___TypeDelimiter_0)); }
	inline Il2CppChar get_TypeDelimiter_0() const { return ___TypeDelimiter_0; }
	inline Il2CppChar* get_address_of_TypeDelimiter_0() { return &___TypeDelimiter_0; }
	inline void set_TypeDelimiter_0(Il2CppChar value)
	{
		___TypeDelimiter_0 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_1() { return static_cast<int32_t>(offsetof(ReflectionAbstractions_t1376794770_StaticFields, ___EmptyTypes_1)); }
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_1() const { return ___EmptyTypes_1; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_1() { return &___EmptyTypes_1; }
	inline void set_EmptyTypes_1(TypeU5BU5D_t1664964607* value)
	{
		___EmptyTypes_1 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyTypes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
