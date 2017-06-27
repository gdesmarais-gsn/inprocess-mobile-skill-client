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

// LeanTween
struct LeanTween_t4120592429;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// LTRect
struct LTRect_t2720449186;
// LTDescr
struct LTDescr_t1981209097;
// LTDescr[]
struct LTDescrU5BU5D_t1682978740;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// LTBezierPath
struct LTBezierPath_t292484408;
// LTSpline
struct LTSpline_t3159710915;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`2<System.Single,System.Single>
struct Action_2_t3216573049;
// System.Action`1<UnityEngine.Color>
struct Action_1_t1822191457;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t3924735457;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2045506962;
// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Action`1<LTEvent>
struct Action_1_t4121904138;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "AssemblyU2DCSharp_LTRect2720449186.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LTDescr1981209097.h"
#include "UnityEngine_UnityEngine_CanvasGroup3296560743.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_LTBezierPath292484408.h"
#include "AssemblyU2DCSharp_LTSpline3159710915.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void LeanTween::.ctor()
extern "C"  void LeanTween__ctor_m2889399570 (LeanTween_t4120592429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::init()
extern "C"  void LeanTween_init_m489893922 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_maxSearch()
extern "C"  int32_t LeanTween_get_maxSearch_m99700737 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_maxSimulataneousTweens()
extern "C"  int32_t LeanTween_get_maxSimulataneousTweens_m477135925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_tweensRunning()
extern "C"  int32_t LeanTween_get_tweensRunning_m3469395508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::init(System.Int32)
extern "C"  void LeanTween_init_m1135713807 (Il2CppObject * __this /* static, unused */, int32_t ___maxSimultaneousTweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::reset()
extern "C"  void LeanTween_reset_m327691085 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::Update()
extern "C"  void LeanTween_Update_m659730485 (LeanTween_t4120592429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::onLevelWasLoaded54(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void LeanTween_onLevelWasLoaded54_m3268673457 (Il2CppObject * __this /* static, unused */, Scene_t1684909666  ___scene0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::internalOnLevelWasLoaded(System.Int32)
extern "C"  void LeanTween_internalOnLevelWasLoaded_m1753013847 (Il2CppObject * __this /* static, unused */, int32_t ___lvl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::update()
extern "C"  void LeanTween_update_m3354285653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::removeTween(System.Int32,System.Int32)
extern "C"  void LeanTween_removeTween_m253948859 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::removeTween(System.Int32)
extern "C"  void LeanTween_removeTween_m4101064448 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] LeanTween::add(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t1172311765* LeanTween_add_m848354251 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t1172311765* ___a0, Vector3_t2243707580  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::closestRot(System.Single,System.Single)
extern "C"  float LeanTween_closestRot_m1765941336 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancelAll()
extern "C"  void LeanTween_cancelAll_m1203625151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancelAll(System.Boolean)
extern "C"  void LeanTween_cancelAll_m463834654 (Il2CppObject * __this /* static, unused */, bool ___callComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject)
extern "C"  void LeanTween_cancel_m4284425168 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject,System.Boolean)
extern "C"  void LeanTween_cancel_m1820925201 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, bool ___callOnComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.RectTransform)
extern "C"  void LeanTween_cancel_m107147549 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject,System.Int32,System.Boolean)
extern "C"  void LeanTween_cancel_m426527534 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, int32_t ___uniqueId1, bool ___callOnComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(LTRect,System.Int32)
extern "C"  void LeanTween_cancel_m3268693243 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(System.Int32)
extern "C"  void LeanTween_cancel_m979156803 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(System.Int32,System.Boolean)
extern "C"  void LeanTween_cancel_m1121219238 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, bool ___callOnComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::descr(System.Int32)
extern "C"  LTDescr_t1981209097 * LeanTween_descr_m1018019508 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::description(System.Int32)
extern "C"  LTDescr_t1981209097 * LeanTween_description_m2359545459 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr[] LeanTween::descriptions(UnityEngine.GameObject)
extern "C"  LTDescrU5BU5D_t1682978740* LeanTween_descriptions_m2410517511 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_pause_m2688260363 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(System.Int32)
extern "C"  void LeanTween_pause_m2982551895 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(UnityEngine.GameObject)
extern "C"  void LeanTween_pause_m2983157574 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pauseAll()
extern "C"  void LeanTween_pauseAll_m2083626579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resumeAll()
extern "C"  void LeanTween_resumeAll_m2090708416 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_resume_m4167487480 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(System.Int32)
extern "C"  void LeanTween_resume_m4048163578 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(UnityEngine.GameObject)
extern "C"  void LeanTween_resume_m3721173461 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(UnityEngine.GameObject)
extern "C"  bool LeanTween_isTweening_m1994590991 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(UnityEngine.RectTransform)
extern "C"  bool LeanTween_isTweening_m82383486 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(System.Int32)
extern "C"  bool LeanTween_isTweening_m918134366 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(LTRect)
extern "C"  bool LeanTween_isTweening_m2619502795 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::drawBezierPath(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Transform)
extern "C"  void LeanTween_drawBezierPath_m3629245224 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, Vector3_t2243707580  ___c2, Vector3_t2243707580  ___d3, float ___arrowSize4, Transform_t3275118058 * ___arrowTransform5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LeanTween::logError(System.String)
extern "C"  Il2CppObject * LeanTween_logError_m2808925903 (Il2CppObject * __this /* static, unused */, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::options(LTDescr)
extern "C"  LTDescr_t1981209097 * LeanTween_options_m802257811 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::options()
extern "C"  LTDescr_t1981209097 * LeanTween_options_m1230129870 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LeanTween::get_tweenEmpty()
extern "C"  GameObject_t1756533147 * LeanTween_get_tweenEmpty_m3236408066 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::pushNewTween(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,LTDescr)
extern "C"  LTDescr_t1981209097 * LeanTween_pushNewTween_m2649250314 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, LTDescr_t1981209097 * ___tween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::play(UnityEngine.RectTransform,UnityEngine.Sprite[])
extern "C"  LTDescr_t1981209097 * LeanTween_play_m3828434631 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, SpriteU5BU5D_t3359083662* ___sprites1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alpha_m3458851166 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(LTRect,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alpha_m2566742166 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::textAlpha(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_textAlpha_m523869828 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaText(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alphaText_m540318014 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaCanvas(UnityEngine.CanvasGroup,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alphaCanvas_m672284004 (Il2CppObject * __this /* static, unused */, CanvasGroup_t3296560743 * ___canvasGroup0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaVertex(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alphaVertex_m2256428880 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::color(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_color_m1415090820 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::textColor(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_textColor_m2625996476 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::colorText(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_colorText_m380456562 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTransform0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(System.Single,System.Action)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m1787928842 (Il2CppObject * __this /* static, unused */, float ___delayTime0, Action_t3226471752 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(System.Single,System.Action`1<System.Object>)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m2102341991 (Il2CppObject * __this /* static, unused */, float ___delayTime0, Action_1_t2491248677 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m1469573970 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___delayTime1, Action_t3226471752 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action`1<System.Object>)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedCall_m1941998363 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___delayTime1, Action_1_t2491248677 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::destroyAfter(LTRect,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_destroyAfter_m4184381387 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___rect0, float ___delayTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m3863927325 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m2690541592 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m810492099 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,LTBezierPath,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m700593886 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, LTBezierPath_t292484408 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,LTSpline,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m2371334685 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, LTSpline_t3159710915 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSpline(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveSpline_m323437604 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSpline(UnityEngine.GameObject,LTSpline,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveSpline_m1052948806 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, LTSpline_t3159710915 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSplineLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveSplineLocal_m4184088095 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m4006401304 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveMargin(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveMargin_m1089801126 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveX_m1759128777 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveY_m1320281966 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveZ_m1109116307 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocal_m681322558 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocal_m3556818190 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3U5BU5D_t1172311765* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocalX_m3805737080 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocalY_m2556365497 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocalZ_m1194677878 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,LTBezierPath,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocal_m154821719 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, LTBezierPath_t292484408 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,LTSpline,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveLocal_m3557285772 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, LTSpline_t3159710915 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Transform,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m3624432547 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Transform_t3275118058 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m3914145105 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(LTRect,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m2410035321 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateLocal_m2369892048 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateX_m251668837 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateY_m4250597568 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateZ_m4122441775 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAround(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAround_m1971043147 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___axis1, float ___add2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAroundLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAroundLocal_m1457246268 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___axis1, float ___add2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scale_m2758506592 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scale_m1950732257 (Il2CppObject * __this /* static, unused */, LTRect_t2720449186 * ___ltRect0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scaleX_m2307358310 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scaleY_m2982338597 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scaleZ_m2220268136 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3364698516 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, float ___from1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m239343102 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m1892919860 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector2_t2243707579  ___from1, Vector2_t2243707579  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m1671009716 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___from1, Vector3_t2243707580  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3914171124 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Color_t2020392075  ___from1, Color_t2020392075  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<System.Single>,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3927842245 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t1878309314 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`2<System.Single,System.Single>,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m1112635999 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_2_t3216573049 * ___callOnUpdateRatio1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Color>,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m1974079308 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t1822191457 * ___callOnUpdate1, Color_t2020392075  ___from2, Color_t2020392075  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`2<UnityEngine.Color,System.Object>,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m3473765299 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_2_t3924735457 * ___callOnUpdate1, Color_t2020392075  ___from2, Color_t2020392075  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector2>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m2139599044 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t2045506961 * ___callOnUpdate1, Vector2_t2243707579  ___from2, Vector2_t2243707579  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector3>,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m1254204485 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t2045506962 * ___callOnUpdate1, Vector3_t2243707580  ___from2, Vector3_t2243707580  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`2<System.Single,System.Object>,System.Single,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_value_m4244885072 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_2_t3829512412 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedSound(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedSound_m3946562760 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audio0, Vector3_t2243707580  ___pos1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedSound(UnityEngine.GameObject,UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_delayedSound_m1508943150 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, AudioClip_t1932558630 * ___audio1, Vector3_t2243707580  ___pos2, float ___volume3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_move_m2433563970 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveX(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveX_m741680054 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveY(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveY_m2969051067 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveZ(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_moveZ_m939006912 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m2191758708 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotate_m2649564640 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAround(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAround_m1144497628 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___axis1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAroundLocal(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_rotateAroundLocal_m3577895249 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___axis1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_scale_m869460451 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::size(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_size_m1621154871 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Vector2_t2243707579  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_alpha_m2047549007 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::color(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  LTDescr_t1981209097 * LeanTween_color_m4058218785 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___rectTrans0, Color_t2020392075  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::tweenOnCurve(LTDescr,System.Single)
extern "C"  float LeanTween_tweenOnCurve_m3288691171 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___tweenDescr0, float ___ratioPassed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LeanTween::tweenOnCurveVector(LTDescr,System.Single)
extern "C"  Vector3_t2243707580  LeanTween_tweenOnCurveVector_m3210312622 (Il2CppObject * __this /* static, unused */, LTDescr_t1981209097 * ___tweenDescr0, float ___ratioPassed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuadOpt_m543644397 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuadOpt_m3265300468 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuadOpt_m4012701028 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LeanTween::easeInOutQuadOpt(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  LeanTween_easeInOutQuadOpt_m3770922536 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::linear(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_linear_m3191142728 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::clerp(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_clerp_m3128155071 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::spring(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_spring_m3370413388 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuad_m168379719 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuad_m3392072818 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuad_m2451324765 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuadOpt2(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuadOpt2_m3383413709 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diffBy21, float ___val2, float ___val23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInCubic_m2908264686 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutCubic_m3958175973 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutCubic_m2166899154 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuart_m1476874877 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuart_m1770808416 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuart_m671381603 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuint_m565586873 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuint_m427826748 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuint_m3784547327 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInSine_m1145668955 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutSine_m3402399104 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutSine_m1814649369 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInExpo_m3487643672 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutExpo_m3068734305 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutExpo_m2304418052 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInCirc_m4184511321 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutCirc_m1863422694 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutCirc_m1913410423 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInBounce_m3614583984 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutBounce_m4006165087 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutBounce_m2904298712 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInBack(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInBack_m1820326330 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutBack(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutBack_m3170475969 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutBack(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutBack_m2069004794 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInElastic(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInElastic_m2157488943 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutElastic(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutElastic_m3718542468 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutElastic(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutElastic_m1606966753 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::addListener(System.Int32,System.Action`1<LTEvent>)
extern "C"  void LeanTween_addListener_m717322956 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Action_1_t4121904138 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::addListener(UnityEngine.GameObject,System.Int32,System.Action`1<LTEvent>)
extern "C"  void LeanTween_addListener_m2327038410 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___caller0, int32_t ___eventId1, Action_1_t4121904138 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::removeListener(System.Int32,System.Action`1<LTEvent>)
extern "C"  bool LeanTween_removeListener_m3564595759 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Action_1_t4121904138 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::removeListener(UnityEngine.GameObject,System.Int32,System.Action`1<LTEvent>)
extern "C"  bool LeanTween_removeListener_m2570449755 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___caller0, int32_t ___eventId1, Action_1_t4121904138 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::dispatchEvent(System.Int32)
extern "C"  void LeanTween_dispatchEvent_m3812856265 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::dispatchEvent(System.Int32,System.Object)
extern "C"  void LeanTween_dispatchEvent_m4259194287 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::.cctor()
extern "C"  void LeanTween__cctor_m1029770743 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
