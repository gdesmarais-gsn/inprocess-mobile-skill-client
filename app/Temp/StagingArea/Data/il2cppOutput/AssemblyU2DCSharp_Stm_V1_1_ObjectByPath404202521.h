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
// UnityEngine.Object
struct Object_t1021602117;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.ObjectByPath
struct  ObjectByPath_t404202521  : public Il2CppObject
{
public:
	// System.String Stm.V1_1.ObjectByPath::gameObjectPath
	String_t* ___gameObjectPath_0;
	// System.String Stm.V1_1.ObjectByPath::componentName
	String_t* ___componentName_1;
	// UnityEngine.Object Stm.V1_1.ObjectByPath::obj
	Object_t1021602117 * ___obj_2;

public:
	inline static int32_t get_offset_of_gameObjectPath_0() { return static_cast<int32_t>(offsetof(ObjectByPath_t404202521, ___gameObjectPath_0)); }
	inline String_t* get_gameObjectPath_0() const { return ___gameObjectPath_0; }
	inline String_t** get_address_of_gameObjectPath_0() { return &___gameObjectPath_0; }
	inline void set_gameObjectPath_0(String_t* value)
	{
		___gameObjectPath_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectPath_0, value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(ObjectByPath_t404202521, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier(&___componentName_1, value);
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(ObjectByPath_t404202521, ___obj_2)); }
	inline Object_t1021602117 * get_obj_2() const { return ___obj_2; }
	inline Object_t1021602117 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(Object_t1021602117 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
