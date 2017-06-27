#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Utilities.WrapperDictionary
struct WrapperDictionary_t2630318991;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DynamicWrapper
struct  DynamicWrapper_t3868266740  : public Il2CppObject
{
public:

public:
};

struct DynamicWrapper_t3868266740_StaticFields
{
public:
	// System.Object Newtonsoft.Json.Utilities.DynamicWrapper::_lock
	Il2CppObject * ____lock_0;
	// Newtonsoft.Json.Utilities.WrapperDictionary Newtonsoft.Json.Utilities.DynamicWrapper::_wrapperDictionary
	WrapperDictionary_t2630318991 * ____wrapperDictionary_1;
	// System.Reflection.Emit.ModuleBuilder Newtonsoft.Json.Utilities.DynamicWrapper::_moduleBuilder
	ModuleBuilder_t4156028127 * ____moduleBuilder_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(DynamicWrapper_t3868266740_StaticFields, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__wrapperDictionary_1() { return static_cast<int32_t>(offsetof(DynamicWrapper_t3868266740_StaticFields, ____wrapperDictionary_1)); }
	inline WrapperDictionary_t2630318991 * get__wrapperDictionary_1() const { return ____wrapperDictionary_1; }
	inline WrapperDictionary_t2630318991 ** get_address_of__wrapperDictionary_1() { return &____wrapperDictionary_1; }
	inline void set__wrapperDictionary_1(WrapperDictionary_t2630318991 * value)
	{
		____wrapperDictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&____wrapperDictionary_1, value);
	}

	inline static int32_t get_offset_of__moduleBuilder_2() { return static_cast<int32_t>(offsetof(DynamicWrapper_t3868266740_StaticFields, ____moduleBuilder_2)); }
	inline ModuleBuilder_t4156028127 * get__moduleBuilder_2() const { return ____moduleBuilder_2; }
	inline ModuleBuilder_t4156028127 ** get_address_of__moduleBuilder_2() { return &____moduleBuilder_2; }
	inline void set__moduleBuilder_2(ModuleBuilder_t4156028127 * value)
	{
		____moduleBuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&____moduleBuilder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
