﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t3386977826;
// TMPro.ColorTween
struct ColorTween_t1637921736;
struct ColorTween_t1637921736_marshaled_pinvoke;
struct ColorTween_t1637921736_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_ColorTween1637921736.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_TMPro_ColorTween_ColorTweenMode903336102.h"

// UnityEngine.Color TMPro.ColorTween::get_startColor()
extern "C"  Color_t2020392075  ColorTween_get_startColor_m3958827632 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::set_startColor(UnityEngine.Color)
extern "C"  void ColorTween_set_startColor_m1095093955 (ColorTween_t1637921736 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TMPro.ColorTween::get_targetColor()
extern "C"  Color_t2020392075  ColorTween_get_targetColor_m516101425 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::set_targetColor(UnityEngine.Color)
extern "C"  void ColorTween_set_targetColor_m3219846618 (ColorTween_t1637921736 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.ColorTween/ColorTweenMode TMPro.ColorTween::get_tweenMode()
extern "C"  int32_t ColorTween_get_tweenMode_m63057819 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::set_tweenMode(TMPro.ColorTween/ColorTweenMode)
extern "C"  void ColorTween_set_tweenMode_m4136783310 (ColorTween_t1637921736 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.ColorTween::get_duration()
extern "C"  float ColorTween_get_duration_m2041923942 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::set_duration(System.Single)
extern "C"  void ColorTween_set_duration_m2818495483 (ColorTween_t1637921736 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.ColorTween::get_ignoreTimeScale()
extern "C"  bool ColorTween_get_ignoreTimeScale_m3808471193 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::set_ignoreTimeScale(System.Boolean)
extern "C"  void ColorTween_set_ignoreTimeScale_m4204212932 (ColorTween_t1637921736 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::TweenValue(System.Single)
extern "C"  void ColorTween_TweenValue_m2565879270 (ColorTween_t1637921736 * __this, float ___floatPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ColorTween::AddOnChangedCallback(UnityEngine.Events.UnityAction`1<UnityEngine.Color>)
extern "C"  void ColorTween_AddOnChangedCallback_m3462152114 (ColorTween_t1637921736 * __this, UnityAction_1_t3386977826 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.ColorTween::GetIgnoreTimescale()
extern "C"  bool ColorTween_GetIgnoreTimescale_m3644615936 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.ColorTween::GetDuration()
extern "C"  float ColorTween_GetDuration_m2674682419 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.ColorTween::ValidTarget()
extern "C"  bool ColorTween_ValidTarget_m2298454404 (ColorTween_t1637921736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ColorTween_t1637921736;
struct ColorTween_t1637921736_marshaled_pinvoke;

extern "C" void ColorTween_t1637921736_marshal_pinvoke(const ColorTween_t1637921736& unmarshaled, ColorTween_t1637921736_marshaled_pinvoke& marshaled);
extern "C" void ColorTween_t1637921736_marshal_pinvoke_back(const ColorTween_t1637921736_marshaled_pinvoke& marshaled, ColorTween_t1637921736& unmarshaled);
extern "C" void ColorTween_t1637921736_marshal_pinvoke_cleanup(ColorTween_t1637921736_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ColorTween_t1637921736;
struct ColorTween_t1637921736_marshaled_com;

extern "C" void ColorTween_t1637921736_marshal_com(const ColorTween_t1637921736& unmarshaled, ColorTween_t1637921736_marshaled_com& marshaled);
extern "C" void ColorTween_t1637921736_marshal_com_back(const ColorTween_t1637921736_marshaled_com& marshaled, ColorTween_t1637921736& unmarshaled);
extern "C" void ColorTween_t1637921736_marshal_com_cleanup(ColorTween_t1637921736_marshaled_com& marshaled);
