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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Strings.StringBind
struct  StringBind_t1313723072  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSN.Skill.Phoenix.Strings.StringBind::_id
	String_t* ____id_2;
	// System.String GSN.Skill.Phoenix.Strings.StringBind::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(StringBind_t1313723072, ____id_2)); }
	inline String_t* get__id_2() const { return ____id_2; }
	inline String_t** get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(String_t* value)
	{
		____id_2 = value;
		Il2CppCodeGenWriteBarrier(&____id_2, value);
	}

	inline static int32_t get_offset_of_U3CtextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(StringBind_t1313723072, ___U3CtextU3Ek__BackingField_3)); }
	inline String_t* get_U3CtextU3Ek__BackingField_3() const { return ___U3CtextU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtextU3Ek__BackingField_3() { return &___U3CtextU3Ek__BackingField_3; }
	inline void set_U3CtextU3Ek__BackingField_3(String_t* value)
	{
		___U3CtextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
