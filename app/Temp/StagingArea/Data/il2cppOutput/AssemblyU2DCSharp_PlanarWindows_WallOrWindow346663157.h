#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarWindows/WallOrWindow
struct  WallOrWindow_t346663157  : public Il2CppObject
{
public:
	// UnityEngine.Bounds PlanarWindows/WallOrWindow::bounds
	Bounds_t3033363703  ___bounds_0;
	// System.Boolean PlanarWindows/WallOrWindow::isWindow
	bool ___isWindow_1;

public:
	inline static int32_t get_offset_of_bounds_0() { return static_cast<int32_t>(offsetof(WallOrWindow_t346663157, ___bounds_0)); }
	inline Bounds_t3033363703  get_bounds_0() const { return ___bounds_0; }
	inline Bounds_t3033363703 * get_address_of_bounds_0() { return &___bounds_0; }
	inline void set_bounds_0(Bounds_t3033363703  value)
	{
		___bounds_0 = value;
	}

	inline static int32_t get_offset_of_isWindow_1() { return static_cast<int32_t>(offsetof(WallOrWindow_t346663157, ___isWindow_1)); }
	inline bool get_isWindow_1() const { return ___isWindow_1; }
	inline bool* get_address_of_isWindow_1() { return &___isWindow_1; }
	inline void set_isWindow_1(bool value)
	{
		___isWindow_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
