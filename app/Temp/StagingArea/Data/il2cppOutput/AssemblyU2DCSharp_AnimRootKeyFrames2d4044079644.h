#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AnimRootKeyFrame2d[]
struct AnimRootKeyFrame2dU5BU5D_t3474469878;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimRootKeyFrames2d
struct  AnimRootKeyFrames2d_t4044079644  : public Il2CppObject
{
public:
	// AnimRootKeyFrame2d[] AnimRootKeyFrames2d::keyFrames
	AnimRootKeyFrame2dU5BU5D_t3474469878* ___keyFrames_0;

public:
	inline static int32_t get_offset_of_keyFrames_0() { return static_cast<int32_t>(offsetof(AnimRootKeyFrames2d_t4044079644, ___keyFrames_0)); }
	inline AnimRootKeyFrame2dU5BU5D_t3474469878* get_keyFrames_0() const { return ___keyFrames_0; }
	inline AnimRootKeyFrame2dU5BU5D_t3474469878** get_address_of_keyFrames_0() { return &___keyFrames_0; }
	inline void set_keyFrames_0(AnimRootKeyFrame2dU5BU5D_t3474469878* value)
	{
		___keyFrames_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyFrames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
