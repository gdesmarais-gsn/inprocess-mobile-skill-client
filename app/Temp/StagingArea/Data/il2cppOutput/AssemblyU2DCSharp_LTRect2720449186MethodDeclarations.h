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

// LTRect
struct LTRect_t2720449186;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LTRect::.ctor()
extern "C"  void LTRect__ctor_m1352266431 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(UnityEngine.Rect)
extern "C"  void LTRect__ctor_m3081369702 (LTRect_t2720449186 * __this, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m1123800351 (LTRect_t2720449186 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m1550924526 (LTRect_t2720449186 * __this, float ___x0, float ___y1, float ___width2, float ___height3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m1015247231 (LTRect_t2720449186 * __this, float ___x0, float ___y1, float ___width2, float ___height3, float ___alpha4, float ___rotation5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTRect::get_hasInitiliazed()
extern "C"  bool LTRect_get_hasInitiliazed_m3218073862 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTRect::get_id()
extern "C"  int32_t LTRect_get_id_m2023610557 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::setId(System.Int32,System.Int32)
extern "C"  void LTRect_setId_m1668573432 (LTRect_t2720449186 * __this, int32_t ___id0, int32_t ___counter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::reset()
extern "C"  void LTRect_reset_m3315692382 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::resetForRotation()
extern "C"  void LTRect_resetForRotation_m3445584945 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_x()
extern "C"  float LTRect_get_x_m2959784484 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_x(System.Single)
extern "C"  void LTRect_set_x_m1607409255 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_y()
extern "C"  float LTRect_get_y_m2959784389 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_y(System.Single)
extern "C"  void LTRect_set_y_m226675398 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_width()
extern "C"  float LTRect_get_width_m1157879000 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_width(System.Single)
extern "C"  void LTRect_set_width_m1552259569 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_height()
extern "C"  float LTRect_get_height_m1510621063 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_height(System.Single)
extern "C"  void LTRect_set_height_m1090112840 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect LTRect::get_rect()
extern "C"  Rect_t3681755626  LTRect_get_rect_m3193594146 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_rect(UnityEngine.Rect)
extern "C"  void LTRect_set_rect_m1281360409 (LTRect_t2720449186 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setStyle(UnityEngine.GUIStyle)
extern "C"  LTRect_t2720449186 * LTRect_setStyle_m2443516776 (LTRect_t2720449186 * __this, GUIStyle_t1799908754 * ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setFontScaleToFit(System.Boolean)
extern "C"  LTRect_t2720449186 * LTRect_setFontScaleToFit_m3171341384 (LTRect_t2720449186 * __this, bool ___fontScaleToFit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setColor(UnityEngine.Color)
extern "C"  LTRect_t2720449186 * LTRect_setColor_m2991896641 (LTRect_t2720449186 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setAlpha(System.Single)
extern "C"  LTRect_t2720449186 * LTRect_setAlpha_m3687903831 (LTRect_t2720449186 * __this, float ___alpha0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setLabel(System.String)
extern "C"  LTRect_t2720449186 * LTRect_setLabel_m1811759540 (LTRect_t2720449186 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setUseSimpleScale(System.Boolean,UnityEngine.Rect)
extern "C"  LTRect_t2720449186 * LTRect_setUseSimpleScale_m4021894915 (LTRect_t2720449186 * __this, bool ___useSimpleScale0, Rect_t3681755626  ___relativeRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setUseSimpleScale(System.Boolean)
extern "C"  LTRect_t2720449186 * LTRect_setUseSimpleScale_m3651061142 (LTRect_t2720449186 * __this, bool ___useSimpleScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setSizeByHeight(System.Boolean)
extern "C"  LTRect_t2720449186 * LTRect_setSizeByHeight_m723340620 (LTRect_t2720449186 * __this, bool ___sizeByHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LTRect::ToString()
extern "C"  String_t* LTRect_ToString_m44095796 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
