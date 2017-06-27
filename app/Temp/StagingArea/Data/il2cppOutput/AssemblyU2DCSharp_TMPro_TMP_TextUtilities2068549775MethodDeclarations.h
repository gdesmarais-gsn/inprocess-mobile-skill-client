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

// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Text1920000777.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_TMPro_CaretPosition420625986.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_TMPro_TMP_TextUtilities_LineSegm2997084511.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 TMPro.TMP_TextUtilities::GetCursorIndexFromPosition(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  int32_t TMP_TextUtilities_GetCursorIndexFromPosition_m4080282109 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___textComponent0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::GetCursorIndexFromPosition(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera,TMPro.CaretPosition&)
extern "C"  int32_t TMP_TextUtilities_GetCursorIndexFromPosition_m954066001 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___textComponent0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, int32_t* ___cursor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindNearestLine(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  int32_t TMP_TextUtilities_FindNearestLine_m731970705 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindNearestCharacterOnLine(TMPro.TMP_Text,UnityEngine.Vector3,System.Int32,UnityEngine.Camera,System.Boolean)
extern "C"  int32_t TMP_TextUtilities_FindNearestCharacterOnLine_m3528024515 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, int32_t ___line2, Camera_t189460977 * ___camera3, bool ___visibleOnly4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_TextUtilities::IsIntersectingRectTransform(UnityEngine.RectTransform,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  bool TMP_TextUtilities_IsIntersectingRectTransform_m998033399 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingCharacter(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera,System.Boolean)
extern "C"  int32_t TMP_TextUtilities_FindIntersectingCharacter_m1498162306 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, bool ___visibleOnly3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindNearestCharacter(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera,System.Boolean)
extern "C"  int32_t TMP_TextUtilities_FindNearestCharacter_m213361365 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, bool ___visibleOnly3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingWord(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  int32_t TMP_TextUtilities_FindIntersectingWord_m1501400140 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindNearestWord(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  int32_t TMP_TextUtilities_FindNearestWord_m2405365401 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingLink(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  int32_t TMP_TextUtilities_FindIntersectingLink_m1265926348 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::FindNearestLink(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  int32_t TMP_TextUtilities_FindNearestLink_m736578255 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___text0, Vector3_t2243707580  ___position1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_TextUtilities::PointIntersectRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool TMP_TextUtilities_PointIntersectRectangle_m2475938117 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___m0, Vector3_t2243707580  ___a1, Vector3_t2243707580  ___b2, Vector3_t2243707580  ___c3, Vector3_t2243707580  ___d4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_TextUtilities::ScreenPointToWorldPointInRectangle(UnityEngine.Transform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C"  bool TMP_TextUtilities_ScreenPointToWorldPointInRectangle_m1796998785 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, Vector2_t2243707579  ___screenPoint1, Camera_t189460977 * ___cam2, Vector3_t2243707580 * ___worldPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_TextUtilities::IntersectLinePlane(TMPro.TMP_TextUtilities/LineSegment,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&)
extern "C"  bool TMP_TextUtilities_IntersectLinePlane_m2949436607 (Il2CppObject * __this /* static, unused */, LineSegment_t2997084511  ___line0, Vector3_t2243707580  ___point1, Vector3_t2243707580  ___normal2, Vector3_t2243707580 * ___intersectingPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TMP_TextUtilities::DistanceToLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float TMP_TextUtilities_DistanceToLine_m3659627733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char TMPro.TMP_TextUtilities::ToLowerFast(System.Char)
extern "C"  Il2CppChar TMP_TextUtilities_ToLowerFast_m2960974963 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char TMPro.TMP_TextUtilities::ToUpperFast(System.Char)
extern "C"  Il2CppChar TMP_TextUtilities_ToUpperFast_m589526050 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::GetSimpleHashCode(System.String)
extern "C"  int32_t TMP_TextUtilities_GetSimpleHashCode_m2154805259 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 TMPro.TMP_TextUtilities::GetSimpleHashCodeLowercase(System.String)
extern "C"  uint32_t TMP_TextUtilities_GetSimpleHashCodeLowercase_m4001350405 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::HexToInt(System.Char)
extern "C"  int32_t TMP_TextUtilities_HexToInt_m2096528380 (Il2CppObject * __this /* static, unused */, Il2CppChar ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_TextUtilities::StringToInt(System.String)
extern "C"  int32_t TMP_TextUtilities_StringToInt_m3735844177 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_TextUtilities::.cctor()
extern "C"  void TMP_TextUtilities__cctor_m737397347 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;