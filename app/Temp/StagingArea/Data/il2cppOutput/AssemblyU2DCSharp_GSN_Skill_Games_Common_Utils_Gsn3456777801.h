#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.GsnRenderer
struct GsnRenderer_t3456777801;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.IGsnRenderable>
struct List_1_t1612270757;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GsnRenderer
struct  GsnRenderer_t3456777801  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.IGsnRenderable> GSN.Skill.Games.Common.Utils.GsnRenderer::_renderables
	List_1_t1612270757 * ____renderables_1;

public:
	inline static int32_t get_offset_of__renderables_1() { return static_cast<int32_t>(offsetof(GsnRenderer_t3456777801, ____renderables_1)); }
	inline List_1_t1612270757 * get__renderables_1() const { return ____renderables_1; }
	inline List_1_t1612270757 ** get_address_of__renderables_1() { return &____renderables_1; }
	inline void set__renderables_1(List_1_t1612270757 * value)
	{
		____renderables_1 = value;
		Il2CppCodeGenWriteBarrier(&____renderables_1, value);
	}
};

struct GsnRenderer_t3456777801_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.GsnRenderer GSN.Skill.Games.Common.Utils.GsnRenderer::_instance
	GsnRenderer_t3456777801 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(GsnRenderer_t3456777801_StaticFields, ____instance_0)); }
	inline GsnRenderer_t3456777801 * get__instance_0() const { return ____instance_0; }
	inline GsnRenderer_t3456777801 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(GsnRenderer_t3456777801 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
