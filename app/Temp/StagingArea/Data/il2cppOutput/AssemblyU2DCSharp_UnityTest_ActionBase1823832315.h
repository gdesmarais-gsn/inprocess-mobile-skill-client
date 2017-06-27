#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// UnityTest.MemberResolver
struct MemberResolver_t2688551152;
// System.String
struct String_t;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t472048993;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.ActionBase
struct  ActionBase_t1823832315  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.GameObject UnityTest.ActionBase::go
	GameObject_t1756533147 * ___go_2;
	// System.Object UnityTest.ActionBase::m_ObjVal
	Il2CppObject * ___m_ObjVal_3;
	// UnityTest.MemberResolver UnityTest.ActionBase::m_MemberResolver
	MemberResolver_t2688551152 * ___m_MemberResolver_4;
	// System.String UnityTest.ActionBase::thisPropertyPath
	String_t* ___thisPropertyPath_5;

public:
	inline static int32_t get_offset_of_go_2() { return static_cast<int32_t>(offsetof(ActionBase_t1823832315, ___go_2)); }
	inline GameObject_t1756533147 * get_go_2() const { return ___go_2; }
	inline GameObject_t1756533147 ** get_address_of_go_2() { return &___go_2; }
	inline void set_go_2(GameObject_t1756533147 * value)
	{
		___go_2 = value;
		Il2CppCodeGenWriteBarrier(&___go_2, value);
	}

	inline static int32_t get_offset_of_m_ObjVal_3() { return static_cast<int32_t>(offsetof(ActionBase_t1823832315, ___m_ObjVal_3)); }
	inline Il2CppObject * get_m_ObjVal_3() const { return ___m_ObjVal_3; }
	inline Il2CppObject ** get_address_of_m_ObjVal_3() { return &___m_ObjVal_3; }
	inline void set_m_ObjVal_3(Il2CppObject * value)
	{
		___m_ObjVal_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ObjVal_3, value);
	}

	inline static int32_t get_offset_of_m_MemberResolver_4() { return static_cast<int32_t>(offsetof(ActionBase_t1823832315, ___m_MemberResolver_4)); }
	inline MemberResolver_t2688551152 * get_m_MemberResolver_4() const { return ___m_MemberResolver_4; }
	inline MemberResolver_t2688551152 ** get_address_of_m_MemberResolver_4() { return &___m_MemberResolver_4; }
	inline void set_m_MemberResolver_4(MemberResolver_t2688551152 * value)
	{
		___m_MemberResolver_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MemberResolver_4, value);
	}

	inline static int32_t get_offset_of_thisPropertyPath_5() { return static_cast<int32_t>(offsetof(ActionBase_t1823832315, ___thisPropertyPath_5)); }
	inline String_t* get_thisPropertyPath_5() const { return ___thisPropertyPath_5; }
	inline String_t** get_address_of_thisPropertyPath_5() { return &___thisPropertyPath_5; }
	inline void set_thisPropertyPath_5(String_t* value)
	{
		___thisPropertyPath_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisPropertyPath_5, value);
	}
};

struct ActionBase_t1823832315_StaticFields
{
public:
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> UnityTest.ActionBase::<>f__am$cache0
	Func_2_t472048993 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(ActionBase_t1823832315_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t472048993 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t472048993 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t472048993 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
