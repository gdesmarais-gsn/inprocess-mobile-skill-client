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
// System.Type
struct Type_t;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.ReflectionUtil/TypeMemberCacheKey
struct  TypeMemberCacheKey_t940488630 
{
public:
	// System.String Stm.V1_1.ReflectionUtil/TypeMemberCacheKey::identifier
	String_t* ___identifier_0;
	// System.Type Stm.V1_1.ReflectionUtil/TypeMemberCacheKey::type
	Type_t * ___type_1;
	// System.Reflection.BindingFlags Stm.V1_1.ReflectionUtil/TypeMemberCacheKey::bindingFlags
	int32_t ___bindingFlags_2;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(TypeMemberCacheKey_t940488630, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier(&___identifier_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TypeMemberCacheKey_t940488630, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_bindingFlags_2() { return static_cast<int32_t>(offsetof(TypeMemberCacheKey_t940488630, ___bindingFlags_2)); }
	inline int32_t get_bindingFlags_2() const { return ___bindingFlags_2; }
	inline int32_t* get_address_of_bindingFlags_2() { return &___bindingFlags_2; }
	inline void set_bindingFlags_2(int32_t value)
	{
		___bindingFlags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Stm.V1_1.ReflectionUtil/TypeMemberCacheKey
struct TypeMemberCacheKey_t940488630_marshaled_pinvoke
{
	char* ___identifier_0;
	Type_t * ___type_1;
	int32_t ___bindingFlags_2;
};
// Native definition for COM marshalling of Stm.V1_1.ReflectionUtil/TypeMemberCacheKey
struct TypeMemberCacheKey_t940488630_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Type_t * ___type_1;
	int32_t ___bindingFlags_2;
};
