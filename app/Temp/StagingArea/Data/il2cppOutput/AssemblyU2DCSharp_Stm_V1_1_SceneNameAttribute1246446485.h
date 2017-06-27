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

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.SceneNameAttribute
struct  SceneNameAttribute_t1246446485  : public PropertyAttribute_t2606999759
{
public:
	// System.String Stm.V1_1.SceneNameAttribute::extraName
	String_t* ___extraName_0;
	// System.Boolean Stm.V1_1.SceneNameAttribute::showDisabledScenes
	bool ___showDisabledScenes_1;

public:
	inline static int32_t get_offset_of_extraName_0() { return static_cast<int32_t>(offsetof(SceneNameAttribute_t1246446485, ___extraName_0)); }
	inline String_t* get_extraName_0() const { return ___extraName_0; }
	inline String_t** get_address_of_extraName_0() { return &___extraName_0; }
	inline void set_extraName_0(String_t* value)
	{
		___extraName_0 = value;
		Il2CppCodeGenWriteBarrier(&___extraName_0, value);
	}

	inline static int32_t get_offset_of_showDisabledScenes_1() { return static_cast<int32_t>(offsetof(SceneNameAttribute_t1246446485, ___showDisabledScenes_1)); }
	inline bool get_showDisabledScenes_1() const { return ___showDisabledScenes_1; }
	inline bool* get_address_of_showDisabledScenes_1() { return &___showDisabledScenes_1; }
	inline void set_showDisabledScenes_1(bool value)
	{
		___showDisabledScenes_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
