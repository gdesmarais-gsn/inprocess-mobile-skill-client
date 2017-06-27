#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AnimQuadKeyFrame2d[]
struct AnimQuadKeyFrame2dU5BU5D_t841820753;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimQuadKeyFrames2d
struct  AnimQuadKeyFrames2d_t2399420571  : public Il2CppObject
{
public:
	// AnimQuadKeyFrame2d[] AnimQuadKeyFrames2d::keyFrames
	AnimQuadKeyFrame2dU5BU5D_t841820753* ___keyFrames_0;

public:
	inline static int32_t get_offset_of_keyFrames_0() { return static_cast<int32_t>(offsetof(AnimQuadKeyFrames2d_t2399420571, ___keyFrames_0)); }
	inline AnimQuadKeyFrame2dU5BU5D_t841820753* get_keyFrames_0() const { return ___keyFrames_0; }
	inline AnimQuadKeyFrame2dU5BU5D_t841820753** get_address_of_keyFrames_0() { return &___keyFrames_0; }
	inline void set_keyFrames_0(AnimQuadKeyFrame2dU5BU5D_t841820753* value)
	{
		___keyFrames_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyFrames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
