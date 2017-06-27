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
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t101093588;
// System.Func`2<System.Type,System.String>
struct Func_2_t215605592;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.WrapperMethodBuilder
struct  WrapperMethodBuilder_t3115916723  : public Il2CppObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.WrapperMethodBuilder::_realObjectType
	Type_t * ____realObjectType_0;
	// System.Reflection.Emit.TypeBuilder Newtonsoft.Json.Utilities.WrapperMethodBuilder::_wrapperBuilder
	TypeBuilder_t3308873219 * ____wrapperBuilder_1;

public:
	inline static int32_t get_offset_of__realObjectType_0() { return static_cast<int32_t>(offsetof(WrapperMethodBuilder_t3115916723, ____realObjectType_0)); }
	inline Type_t * get__realObjectType_0() const { return ____realObjectType_0; }
	inline Type_t ** get_address_of__realObjectType_0() { return &____realObjectType_0; }
	inline void set__realObjectType_0(Type_t * value)
	{
		____realObjectType_0 = value;
		Il2CppCodeGenWriteBarrier(&____realObjectType_0, value);
	}

	inline static int32_t get_offset_of__wrapperBuilder_1() { return static_cast<int32_t>(offsetof(WrapperMethodBuilder_t3115916723, ____wrapperBuilder_1)); }
	inline TypeBuilder_t3308873219 * get__wrapperBuilder_1() const { return ____wrapperBuilder_1; }
	inline TypeBuilder_t3308873219 ** get_address_of__wrapperBuilder_1() { return &____wrapperBuilder_1; }
	inline void set__wrapperBuilder_1(TypeBuilder_t3308873219 * value)
	{
		____wrapperBuilder_1 = value;
		Il2CppCodeGenWriteBarrier(&____wrapperBuilder_1, value);
	}
};

struct WrapperMethodBuilder_t3115916723_StaticFields
{
public:
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.WrapperMethodBuilder::<>f__am$cache0
	Func_2_t101093588 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`2<System.Type,System.String> Newtonsoft.Json.Utilities.WrapperMethodBuilder::<>f__am$cache1
	Func_2_t215605592 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(WrapperMethodBuilder_t3115916723_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t101093588 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t101093588 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t101093588 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(WrapperMethodBuilder_t3115916723_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Func_2_t215605592 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Func_2_t215605592 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Func_2_t215605592 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
