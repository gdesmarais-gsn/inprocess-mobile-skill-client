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

// LTGUI
struct LTGUI_t1089343333;
// LTRect
struct LTRect_t2720449186;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LTRect2720449186.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void LTGUI::.ctor()
extern "C"  void LTGUI__ctor_m3375749914 (LTGUI_t1089343333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::init()
extern "C"  void LTGUI_init_m1268732154 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::initRectCheck()
extern "C"  void LTGUI_initRectCheck_m238825170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::reset()
extern "C"  void LTGUI_reset_m993398949 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::update(System.Int32)
extern "C"  void LTGUI_update_m2205458132 (Il2CppObject * __this /* static, unused */, int32_t ___updateLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::checkOnScreen(UnityEngine.Rect)
extern "C"  bool LTGUI_checkOnScreen_m1758308278 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::destroy(System.Int32)
extern "C"  void LTGUI_destroy_m2639184871 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::destroyAll(System.Int32)
extern "C"  void LTGUI_destroyAll_m1877336256 (Il2CppObject * __this /* static, unused */, int32_t ___depth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::label(UnityEngine.Rect,System.String,System.Int32)
extern "C"  LTRect_t2720449186 * LTGUI_label_m2984448549 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, String_t* ___label1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::label(LTRect,System.String,System.Int32)
extern "C"  LTRect_t2720449186 * LTGUI_label_m2444148054 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___rect0, String_t* ___label1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::texture(UnityEngine.Rect,UnityEngine.Texture,System.Int32)
extern "C"  LTRect_t2720449186 * LTGUI_texture_m481303644 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, Texture_t2243626319 * ___texture1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::texture(LTRect,UnityEngine.Texture,System.Int32)
extern "C"  LTRect_t2720449186 * LTGUI_texture_m726463145 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___rect0, Texture_t2243626319 * ___texture1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::element(LTRect,System.Int32)
extern "C"  LTRect_t2720449186 * LTGUI_element_m4071952980 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___rect0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::hasNoOverlap(UnityEngine.Rect,System.Int32)
extern "C"  bool LTGUI_hasNoOverlap_m2867287394 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::pressedWithinRect(UnityEngine.Rect)
extern "C"  bool LTGUI_pressedWithinRect_m397360540 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::checkWithinRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  bool LTGUI_checkWithinRect_m288543492 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___vec20, Rect_t3681755626  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 LTGUI::firstTouch()
extern "C"  Vector2_t2243707579  LTGUI_firstTouch_m715760804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::.cctor()
extern "C"  void LTGUI__cctor_m376968751 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
