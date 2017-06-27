#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GSN.Skill.Games.Common.Utils.GsnRenderer
struct GsnRenderer_t3456777801;
// GSN.Skill.Games.Common.Utils.IGsnRenderable
struct IGsnRenderable_t2243149625;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Games.Common.Utils.GsnRenderer::.ctor()
extern "C"  void GsnRenderer__ctor_m1321477170 (GsnRenderer_t3456777801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GsnRenderer GSN.Skill.Games.Common.Utils.GsnRenderer::get_instance()
extern "C"  GsnRenderer_t3456777801 * GsnRenderer_get_instance_m96920892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRenderer::reconstruct()
extern "C"  void GsnRenderer_reconstruct_m2186351428 (GsnRenderer_t3456777801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRenderer::add(GSN.Skill.Games.Common.Utils.IGsnRenderable)
extern "C"  void GsnRenderer_add_m3496542606 (GsnRenderer_t3456777801 * __this, Il2CppObject * ___renderable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRenderer::remove(GSN.Skill.Games.Common.Utils.IGsnRenderable)
extern "C"  void GsnRenderer_remove_m476683413 (GsnRenderer_t3456777801 * __this, Il2CppObject * ___renderable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRenderer::render(System.Int32)
extern "C"  void GsnRenderer_render_m1138586101 (GsnRenderer_t3456777801 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
