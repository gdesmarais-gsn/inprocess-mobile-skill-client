#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AnimLayer2d[]
struct AnimLayer2dU5BU5D_t2435474137;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimLibrary2d
struct  AnimLibrary2d_t1737343866  : public ScriptableObject_t1975622470
{
public:
	// AnimLayer2d[] AnimLibrary2d::layers
	AnimLayer2dU5BU5D_t2435474137* ___layers_2;

public:
	inline static int32_t get_offset_of_layers_2() { return static_cast<int32_t>(offsetof(AnimLibrary2d_t1737343866, ___layers_2)); }
	inline AnimLayer2dU5BU5D_t2435474137* get_layers_2() const { return ___layers_2; }
	inline AnimLayer2dU5BU5D_t2435474137** get_address_of_layers_2() { return &___layers_2; }
	inline void set_layers_2(AnimLayer2dU5BU5D_t2435474137* value)
	{
		___layers_2 = value;
		Il2CppCodeGenWriteBarrier(&___layers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
