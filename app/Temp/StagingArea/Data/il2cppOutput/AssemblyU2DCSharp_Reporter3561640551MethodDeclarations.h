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

// Reporter
struct Reporter_t3561640551;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

// System.Void Reporter::.ctor()
extern "C"  void Reporter__ctor_m3433681668 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::createReporterObject()
extern "C"  void Reporter_createReporterObject_m3100581552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::OnDisabled()
extern "C"  void Reporter_OnDisabled_m1730761011 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Reporter::get_TotalMemUsage()
extern "C"  float Reporter_get_TotalMemUsage_m3810698251 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::Awake()
extern "C"  void Reporter_Awake_m4065811815 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::OnEnable()
extern "C"  void Reporter_OnEnable_m598378472 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::OnDisable()
extern "C"  void Reporter_OnDisable_m1699607851 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::addSample()
extern "C"  void Reporter_addSample_m3472031149 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::Initialize()
extern "C"  void Reporter_Initialize_m1453816944 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::initializeStyle()
extern "C"  void Reporter_initializeStyle_m2401330193 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::Start()
extern "C"  void Reporter_Start_m1914347400 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::clear()
extern "C"  void Reporter_clear_m111556899 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::calculateCurrentLog()
extern "C"  void Reporter_calculateCurrentLog_m3739700131 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::DrawInfo()
extern "C"  void Reporter_DrawInfo_m555337188 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::DrawGSN()
extern "C"  void Reporter_DrawGSN_m3752269122 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::drawInfo_enableDisableToolBarButtons()
extern "C"  void Reporter_drawInfo_enableDisableToolBarButtons_m2844475394 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::DrawReport()
extern "C"  void Reporter_DrawReport_m2228467350 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::drawToolBar()
extern "C"  void Reporter_drawToolBar_m3707663243 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::DrawLogs()
extern "C"  void Reporter_DrawLogs_m3694156385 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::drawGraph()
extern "C"  void Reporter_drawGraph_m3764783054 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::drawStack()
extern "C"  void Reporter_drawStack_m3434168582 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::OnGUIDraw()
extern "C"  void Reporter_OnGUIDraw_m2535706546 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Reporter::isGestureDone()
extern "C"  bool Reporter_isGestureDone_m919998355 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Reporter::isDoubleClickDone()
extern "C"  bool Reporter_isDoubleClickDone_m57943479 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Reporter::getDownPos()
extern "C"  Vector2_t2243707579  Reporter_getDownPos_m2324165397 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Reporter::getDrag()
extern "C"  Vector2_t2243707579  Reporter_getDrag_m3722359947 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::calculateStartIndex()
extern "C"  void Reporter_calculateStartIndex_m319077884 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::doShow()
extern "C"  void Reporter_doShow_m1180301754 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::Update()
extern "C"  void Reporter_Update_m2684180747 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::CaptureLog(System.String,System.String,UnityEngine.LogType)
extern "C"  void Reporter_CaptureLog_m3696736221 (Reporter_t3561640551 * __this, String_t* ___condition0, String_t* ___stacktrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::AddLog(System.String,System.String,UnityEngine.LogType)
extern "C"  void Reporter_AddLog_m429555496 (Reporter_t3561640551 * __this, String_t* ___condition0, String_t* ___stacktrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::CaptureLogThread(System.String,System.String,UnityEngine.LogType)
extern "C"  void Reporter_CaptureLogThread_m1635226711 (Reporter_t3561640551 * __this, String_t* ___condition0, String_t* ___stacktrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::OnLevelWasLoaded()
extern "C"  void Reporter_OnLevelWasLoaded_m542075347 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::OnApplicationQuit()
extern "C"  void Reporter_OnApplicationQuit_m1195177954 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Reporter::readInfo()
extern "C"  Il2CppObject * Reporter_readInfo_m3456212910 (Reporter_t3561640551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Reporter::.cctor()
extern "C"  void Reporter__cctor_m4186032321 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
