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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.Pool.PoolData
struct  PoolData_t2382083082 
{
public:
	// System.String GSN.Skill.Phoenix.View.Pool.PoolData::resourceName
	String_t* ___resourceName_0;
	// System.Int32 GSN.Skill.Phoenix.View.Pool.PoolData::poolSize
	int32_t ___poolSize_1;

public:
	inline static int32_t get_offset_of_resourceName_0() { return static_cast<int32_t>(offsetof(PoolData_t2382083082, ___resourceName_0)); }
	inline String_t* get_resourceName_0() const { return ___resourceName_0; }
	inline String_t** get_address_of_resourceName_0() { return &___resourceName_0; }
	inline void set_resourceName_0(String_t* value)
	{
		___resourceName_0 = value;
		Il2CppCodeGenWriteBarrier(&___resourceName_0, value);
	}

	inline static int32_t get_offset_of_poolSize_1() { return static_cast<int32_t>(offsetof(PoolData_t2382083082, ___poolSize_1)); }
	inline int32_t get_poolSize_1() const { return ___poolSize_1; }
	inline int32_t* get_address_of_poolSize_1() { return &___poolSize_1; }
	inline void set_poolSize_1(int32_t value)
	{
		___poolSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.View.Pool.PoolData
struct PoolData_t2382083082_marshaled_pinvoke
{
	char* ___resourceName_0;
	int32_t ___poolSize_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.View.Pool.PoolData
struct PoolData_t2382083082_marshaled_com
{
	Il2CppChar* ___resourceName_0;
	int32_t ___poolSize_1;
};
