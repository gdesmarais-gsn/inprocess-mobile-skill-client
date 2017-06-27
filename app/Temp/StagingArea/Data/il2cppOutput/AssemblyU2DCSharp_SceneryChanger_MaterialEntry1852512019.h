#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneryChanger/MaterialEntry
struct  MaterialEntry_t1852512019  : public Il2CppObject
{
public:
	// UnityEngine.Material SceneryChanger/MaterialEntry::fromMaterial
	Material_t193706927 * ___fromMaterial_0;
	// UnityEngine.Material SceneryChanger/MaterialEntry::toMaterial
	Material_t193706927 * ___toMaterial_1;

public:
	inline static int32_t get_offset_of_fromMaterial_0() { return static_cast<int32_t>(offsetof(MaterialEntry_t1852512019, ___fromMaterial_0)); }
	inline Material_t193706927 * get_fromMaterial_0() const { return ___fromMaterial_0; }
	inline Material_t193706927 ** get_address_of_fromMaterial_0() { return &___fromMaterial_0; }
	inline void set_fromMaterial_0(Material_t193706927 * value)
	{
		___fromMaterial_0 = value;
		Il2CppCodeGenWriteBarrier(&___fromMaterial_0, value);
	}

	inline static int32_t get_offset_of_toMaterial_1() { return static_cast<int32_t>(offsetof(MaterialEntry_t1852512019, ___toMaterial_1)); }
	inline Material_t193706927 * get_toMaterial_1() const { return ___toMaterial_1; }
	inline Material_t193706927 ** get_address_of_toMaterial_1() { return &___toMaterial_1; }
	inline void set_toMaterial_1(Material_t193706927 * value)
	{
		___toMaterial_1 = value;
		Il2CppCodeGenWriteBarrier(&___toMaterial_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
