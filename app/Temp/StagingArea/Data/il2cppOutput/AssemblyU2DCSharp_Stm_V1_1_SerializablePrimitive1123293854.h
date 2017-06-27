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
// Stm.V1_1.ObjectByPath
struct ObjectByPath_t404202521;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Stm_V1_1_SerializablePrimitive_Ty244059048.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.SerializablePrimitive
struct  SerializablePrimitive_t1123293854  : public Il2CppObject
{
public:
	// Stm.V1_1.SerializablePrimitive/Type Stm.V1_1.SerializablePrimitive::type
	int32_t ___type_0;
	// System.Int32 Stm.V1_1.SerializablePrimitive::i
	int32_t ___i_1;
	// System.String Stm.V1_1.SerializablePrimitive::s
	String_t* ___s_2;
	// Stm.V1_1.ObjectByPath Stm.V1_1.SerializablePrimitive::o
	ObjectByPath_t404202521 * ___o_3;
	// UnityEngine.Vector4 Stm.V1_1.SerializablePrimitive::v
	Vector4_t2243707581  ___v_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(SerializablePrimitive_t1123293854, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_i_1() { return static_cast<int32_t>(offsetof(SerializablePrimitive_t1123293854, ___i_1)); }
	inline int32_t get_i_1() const { return ___i_1; }
	inline int32_t* get_address_of_i_1() { return &___i_1; }
	inline void set_i_1(int32_t value)
	{
		___i_1 = value;
	}

	inline static int32_t get_offset_of_s_2() { return static_cast<int32_t>(offsetof(SerializablePrimitive_t1123293854, ___s_2)); }
	inline String_t* get_s_2() const { return ___s_2; }
	inline String_t** get_address_of_s_2() { return &___s_2; }
	inline void set_s_2(String_t* value)
	{
		___s_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_2, value);
	}

	inline static int32_t get_offset_of_o_3() { return static_cast<int32_t>(offsetof(SerializablePrimitive_t1123293854, ___o_3)); }
	inline ObjectByPath_t404202521 * get_o_3() const { return ___o_3; }
	inline ObjectByPath_t404202521 ** get_address_of_o_3() { return &___o_3; }
	inline void set_o_3(ObjectByPath_t404202521 * value)
	{
		___o_3 = value;
		Il2CppCodeGenWriteBarrier(&___o_3, value);
	}

	inline static int32_t get_offset_of_v_4() { return static_cast<int32_t>(offsetof(SerializablePrimitive_t1123293854, ___v_4)); }
	inline Vector4_t2243707581  get_v_4() const { return ___v_4; }
	inline Vector4_t2243707581 * get_address_of_v_4() { return &___v_4; }
	inline void set_v_4(Vector4_t2243707581  value)
	{
		___v_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
