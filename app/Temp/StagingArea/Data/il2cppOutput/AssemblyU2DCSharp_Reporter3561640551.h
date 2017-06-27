#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<Reporter/Sample>
struct List_1_t2554553608;
// System.Collections.Generic.List`1<Reporter/Log>
struct List_1_t2973303312;
// MultiKeyDictionary`3<System.String,System.String,Reporter/Log>
struct MultiKeyDictionary_3_t2062580724;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// Images
struct Images_t563431294;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String[]
struct StringU5BU5D_t1642385972;
// Reporter/Log
struct Log_t3604182180;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Reporter_ReportView608488827.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reporter
struct  Reporter_t3561640551  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<Reporter/Sample> Reporter::samples
	List_1_t2554553608 * ___samples_3;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::logs
	List_1_t2973303312 * ___logs_4;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::collapsedLogs
	List_1_t2973303312 * ___collapsedLogs_5;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::currentLog
	List_1_t2973303312 * ___currentLog_6;
	// MultiKeyDictionary`3<System.String,System.String,Reporter/Log> Reporter::logsDic
	MultiKeyDictionary_3_t2062580724 * ___logsDic_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Reporter::cachedString
	Dictionary_2_t3943999495 * ___cachedString_8;
	// System.Boolean Reporter::show
	bool ___show_9;
	// System.Boolean Reporter::collapse
	bool ___collapse_10;
	// System.Boolean Reporter::clearOnNewSceneLoaded
	bool ___clearOnNewSceneLoaded_11;
	// System.Boolean Reporter::showTime
	bool ___showTime_12;
	// System.Boolean Reporter::showScene
	bool ___showScene_13;
	// System.Boolean Reporter::showMemory
	bool ___showMemory_14;
	// System.Boolean Reporter::showFps
	bool ___showFps_15;
	// System.Boolean Reporter::showGraph
	bool ___showGraph_16;
	// System.Boolean Reporter::showLog
	bool ___showLog_17;
	// System.Boolean Reporter::showWarning
	bool ___showWarning_18;
	// System.Boolean Reporter::showError
	bool ___showError_19;
	// System.Int32 Reporter::numOfLogs
	int32_t ___numOfLogs_20;
	// System.Int32 Reporter::numOfLogsWarning
	int32_t ___numOfLogsWarning_21;
	// System.Int32 Reporter::numOfLogsError
	int32_t ___numOfLogsError_22;
	// System.Int32 Reporter::numOfCollapsedLogs
	int32_t ___numOfCollapsedLogs_23;
	// System.Int32 Reporter::numOfCollapsedLogsWarning
	int32_t ___numOfCollapsedLogsWarning_24;
	// System.Int32 Reporter::numOfCollapsedLogsError
	int32_t ___numOfCollapsedLogsError_25;
	// System.Boolean Reporter::showClearOnNewSceneLoadedButton
	bool ___showClearOnNewSceneLoadedButton_26;
	// System.Boolean Reporter::showTimeButton
	bool ___showTimeButton_27;
	// System.Boolean Reporter::showSceneButton
	bool ___showSceneButton_28;
	// System.Boolean Reporter::showMemButton
	bool ___showMemButton_29;
	// System.Boolean Reporter::showFpsButton
	bool ___showFpsButton_30;
	// System.Boolean Reporter::showSearchText
	bool ___showSearchText_31;
	// System.String Reporter::buildDate
	String_t* ___buildDate_32;
	// System.String Reporter::logDate
	String_t* ___logDate_33;
	// System.Single Reporter::logsMemUsage
	float ___logsMemUsage_34;
	// System.Single Reporter::graphMemUsage
	float ___graphMemUsage_35;
	// System.Single Reporter::gcTotalMemory
	float ___gcTotalMemory_36;
	// System.String Reporter::UserData
	String_t* ___UserData_37;
	// System.Single Reporter::fps
	float ___fps_38;
	// System.String Reporter::fpsText
	String_t* ___fpsText_39;
	// Reporter/ReportView Reporter::currentView
	int32_t ___currentView_40;
	// Images Reporter::images
	Images_t563431294 * ___images_42;
	// UnityEngine.GUIContent Reporter::clearContent
	GUIContent_t4210063000 * ___clearContent_43;
	// UnityEngine.GUIContent Reporter::collapseContent
	GUIContent_t4210063000 * ___collapseContent_44;
	// UnityEngine.GUIContent Reporter::clearOnNewSceneContent
	GUIContent_t4210063000 * ___clearOnNewSceneContent_45;
	// UnityEngine.GUIContent Reporter::showTimeContent
	GUIContent_t4210063000 * ___showTimeContent_46;
	// UnityEngine.GUIContent Reporter::showSceneContent
	GUIContent_t4210063000 * ___showSceneContent_47;
	// UnityEngine.GUIContent Reporter::userContent
	GUIContent_t4210063000 * ___userContent_48;
	// UnityEngine.GUIContent Reporter::showMemoryContent
	GUIContent_t4210063000 * ___showMemoryContent_49;
	// UnityEngine.GUIContent Reporter::softwareContent
	GUIContent_t4210063000 * ___softwareContent_50;
	// UnityEngine.GUIContent Reporter::dateContent
	GUIContent_t4210063000 * ___dateContent_51;
	// UnityEngine.GUIContent Reporter::showFpsContent
	GUIContent_t4210063000 * ___showFpsContent_52;
	// UnityEngine.GUIContent Reporter::graphContent
	GUIContent_t4210063000 * ___graphContent_53;
	// UnityEngine.GUIContent Reporter::infoContent
	GUIContent_t4210063000 * ___infoContent_54;
	// UnityEngine.GUIContent Reporter::searchContent
	GUIContent_t4210063000 * ___searchContent_55;
	// UnityEngine.GUIContent Reporter::closeContent
	GUIContent_t4210063000 * ___closeContent_56;
	// UnityEngine.GUIContent Reporter::saveContent
	GUIContent_t4210063000 * ___saveContent_57;
	// UnityEngine.GUIContent Reporter::phoenixContent
	GUIContent_t4210063000 * ___phoenixContent_58;
	// UnityEngine.GUIContent Reporter::buildFromContent
	GUIContent_t4210063000 * ___buildFromContent_59;
	// UnityEngine.GUIContent Reporter::systemInfoContent
	GUIContent_t4210063000 * ___systemInfoContent_60;
	// UnityEngine.GUIContent Reporter::graphicsInfoContent
	GUIContent_t4210063000 * ___graphicsInfoContent_61;
	// UnityEngine.GUIContent Reporter::backContent
	GUIContent_t4210063000 * ___backContent_62;
	// UnityEngine.GUIContent Reporter::cameraContent
	GUIContent_t4210063000 * ___cameraContent_63;
	// UnityEngine.GUIContent Reporter::logContent
	GUIContent_t4210063000 * ___logContent_64;
	// UnityEngine.GUIContent Reporter::warningContent
	GUIContent_t4210063000 * ___warningContent_65;
	// UnityEngine.GUIContent Reporter::errorContent
	GUIContent_t4210063000 * ___errorContent_66;
	// UnityEngine.GUIStyle Reporter::barStyle
	GUIStyle_t1799908754 * ___barStyle_67;
	// UnityEngine.GUIStyle Reporter::buttonActiveStyle
	GUIStyle_t1799908754 * ___buttonActiveStyle_68;
	// UnityEngine.GUIStyle Reporter::nonStyle
	GUIStyle_t1799908754 * ___nonStyle_69;
	// UnityEngine.GUIStyle Reporter::lowerLeftFontStyle
	GUIStyle_t1799908754 * ___lowerLeftFontStyle_70;
	// UnityEngine.GUIStyle Reporter::backStyle
	GUIStyle_t1799908754 * ___backStyle_71;
	// UnityEngine.GUIStyle Reporter::evenLogStyle
	GUIStyle_t1799908754 * ___evenLogStyle_72;
	// UnityEngine.GUIStyle Reporter::oddLogStyle
	GUIStyle_t1799908754 * ___oddLogStyle_73;
	// UnityEngine.GUIStyle Reporter::logButtonStyle
	GUIStyle_t1799908754 * ___logButtonStyle_74;
	// UnityEngine.GUIStyle Reporter::selectedLogStyle
	GUIStyle_t1799908754 * ___selectedLogStyle_75;
	// UnityEngine.GUIStyle Reporter::selectedLogFontStyle
	GUIStyle_t1799908754 * ___selectedLogFontStyle_76;
	// UnityEngine.GUIStyle Reporter::stackLabelStyle
	GUIStyle_t1799908754 * ___stackLabelStyle_77;
	// UnityEngine.GUIStyle Reporter::scrollerStyle
	GUIStyle_t1799908754 * ___scrollerStyle_78;
	// UnityEngine.GUIStyle Reporter::searchStyle
	GUIStyle_t1799908754 * ___searchStyle_79;
	// UnityEngine.GUIStyle Reporter::sliderBackStyle
	GUIStyle_t1799908754 * ___sliderBackStyle_80;
	// UnityEngine.GUIStyle Reporter::sliderThumbStyle
	GUIStyle_t1799908754 * ___sliderThumbStyle_81;
	// UnityEngine.GUISkin Reporter::toolbarScrollerSkin
	GUISkin_t1436893342 * ___toolbarScrollerSkin_82;
	// UnityEngine.GUISkin Reporter::logScrollerSkin
	GUISkin_t1436893342 * ___logScrollerSkin_83;
	// UnityEngine.GUISkin Reporter::graphScrollerSkin
	GUISkin_t1436893342 * ___graphScrollerSkin_84;
	// UnityEngine.Vector2 Reporter::size
	Vector2_t2243707579  ___size_85;
	// System.Single Reporter::maxSize
	float ___maxSize_86;
	// System.Int32 Reporter::numOfCircleToShow
	int32_t ___numOfCircleToShow_87;
	// System.String[] Reporter::scenes
	StringU5BU5D_t1642385972* ___scenes_88;
	// System.String Reporter::currentScene
	String_t* ___currentScene_89;
	// System.String Reporter::filterText
	String_t* ___filterText_90;
	// System.String Reporter::deviceModel
	String_t* ___deviceModel_91;
	// System.String Reporter::deviceType
	String_t* ___deviceType_92;
	// System.String Reporter::deviceName
	String_t* ___deviceName_93;
	// System.String Reporter::graphicsMemorySize
	String_t* ___graphicsMemorySize_94;
	// System.String Reporter::maxTextureSize
	String_t* ___maxTextureSize_95;
	// System.String Reporter::systemMemorySize
	String_t* ___systemMemorySize_96;
	// System.Boolean Reporter::Initialized
	bool ___Initialized_97;
	// UnityEngine.Rect Reporter::screenRect
	Rect_t3681755626  ___screenRect_98;
	// UnityEngine.Rect Reporter::toolBarRect
	Rect_t3681755626  ___toolBarRect_99;
	// UnityEngine.Rect Reporter::logsRect
	Rect_t3681755626  ___logsRect_100;
	// UnityEngine.Rect Reporter::stackRect
	Rect_t3681755626  ___stackRect_101;
	// UnityEngine.Rect Reporter::graphRect
	Rect_t3681755626  ___graphRect_102;
	// UnityEngine.Rect Reporter::graphMinRect
	Rect_t3681755626  ___graphMinRect_103;
	// UnityEngine.Rect Reporter::graphMaxRect
	Rect_t3681755626  ___graphMaxRect_104;
	// UnityEngine.Rect Reporter::buttomRect
	Rect_t3681755626  ___buttomRect_105;
	// UnityEngine.Vector2 Reporter::stackRectTopLeft
	Vector2_t2243707579  ___stackRectTopLeft_106;
	// UnityEngine.Rect Reporter::detailRect
	Rect_t3681755626  ___detailRect_107;
	// UnityEngine.Vector2 Reporter::scrollPosition
	Vector2_t2243707579  ___scrollPosition_108;
	// UnityEngine.Vector2 Reporter::scrollPosition2
	Vector2_t2243707579  ___scrollPosition2_109;
	// UnityEngine.Vector2 Reporter::toolbarScrollPosition
	Vector2_t2243707579  ___toolbarScrollPosition_110;
	// Reporter/Log Reporter::selectedLog
	Log_t3604182180 * ___selectedLog_111;
	// System.Single Reporter::toolbarOldDrag
	float ___toolbarOldDrag_112;
	// System.Single Reporter::oldDrag
	float ___oldDrag_113;
	// System.Single Reporter::oldDrag2
	float ___oldDrag2_114;
	// System.Single Reporter::oldDrag3
	float ___oldDrag3_115;
	// System.Int32 Reporter::startIndex
	int32_t ___startIndex_116;
	// UnityEngine.Rect Reporter::countRect
	Rect_t3681755626  ___countRect_117;
	// UnityEngine.Rect Reporter::timeRect
	Rect_t3681755626  ___timeRect_118;
	// UnityEngine.Rect Reporter::timeLabelRect
	Rect_t3681755626  ___timeLabelRect_119;
	// UnityEngine.Rect Reporter::sceneRect
	Rect_t3681755626  ___sceneRect_120;
	// UnityEngine.Rect Reporter::sceneLabelRect
	Rect_t3681755626  ___sceneLabelRect_121;
	// UnityEngine.Rect Reporter::memoryRect
	Rect_t3681755626  ___memoryRect_122;
	// UnityEngine.Rect Reporter::memoryLabelRect
	Rect_t3681755626  ___memoryLabelRect_123;
	// UnityEngine.Rect Reporter::fpsRect
	Rect_t3681755626  ___fpsRect_124;
	// UnityEngine.Rect Reporter::fpsLabelRect
	Rect_t3681755626  ___fpsLabelRect_125;
	// UnityEngine.GUIContent Reporter::tempContent
	GUIContent_t4210063000 * ___tempContent_126;
	// UnityEngine.Vector2 Reporter::infoScrollPosition
	Vector2_t2243707579  ___infoScrollPosition_127;
	// UnityEngine.Vector2 Reporter::oldInfoDrag
	Vector2_t2243707579  ___oldInfoDrag_128;
	// UnityEngine.Rect Reporter::tempRect
	Rect_t3681755626  ___tempRect_129;
	// System.Single Reporter::graphSize
	float ___graphSize_130;
	// System.Int32 Reporter::startFrame
	int32_t ___startFrame_131;
	// System.Int32 Reporter::currentFrame
	int32_t ___currentFrame_132;
	// UnityEngine.Vector3 Reporter::tempVector1
	Vector3_t2243707580  ___tempVector1_133;
	// UnityEngine.Vector3 Reporter::tempVector2
	Vector3_t2243707580  ___tempVector2_134;
	// UnityEngine.Vector2 Reporter::graphScrollerPos
	Vector2_t2243707579  ___graphScrollerPos_135;
	// System.Single Reporter::maxFpsValue
	float ___maxFpsValue_136;
	// System.Single Reporter::minFpsValue
	float ___minFpsValue_137;
	// System.Single Reporter::maxMemoryValue
	float ___maxMemoryValue_138;
	// System.Single Reporter::minMemoryValue
	float ___minMemoryValue_139;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Reporter::gestureDetector
	List_1_t1612828711 * ___gestureDetector_140;
	// UnityEngine.Vector2 Reporter::gestureSum
	Vector2_t2243707579  ___gestureSum_141;
	// System.Single Reporter::gestureLength
	float ___gestureLength_142;
	// System.Int32 Reporter::gestureCount
	int32_t ___gestureCount_143;
	// System.Single Reporter::lastClickTime
	float ___lastClickTime_144;
	// UnityEngine.Vector2 Reporter::startPos
	Vector2_t2243707579  ___startPos_145;
	// UnityEngine.Vector2 Reporter::downPos
	Vector2_t2243707579  ___downPos_146;
	// UnityEngine.Vector2 Reporter::mousePosition
	Vector2_t2243707579  ___mousePosition_147;
	// System.Single Reporter::lastUpdate
	float ___lastUpdate_148;
	// System.Single Reporter::lastUpdate2
	float ___lastUpdate2_149;
	// UnityEngine.Rect Reporter::temp
	Rect_t3681755626  ___temp_150;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::threadedLogs
	List_1_t2973303312 * ___threadedLogs_151;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___samples_3)); }
	inline List_1_t2554553608 * get_samples_3() const { return ___samples_3; }
	inline List_1_t2554553608 ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(List_1_t2554553608 * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier(&___samples_3, value);
	}

	inline static int32_t get_offset_of_logs_4() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logs_4)); }
	inline List_1_t2973303312 * get_logs_4() const { return ___logs_4; }
	inline List_1_t2973303312 ** get_address_of_logs_4() { return &___logs_4; }
	inline void set_logs_4(List_1_t2973303312 * value)
	{
		___logs_4 = value;
		Il2CppCodeGenWriteBarrier(&___logs_4, value);
	}

	inline static int32_t get_offset_of_collapsedLogs_5() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___collapsedLogs_5)); }
	inline List_1_t2973303312 * get_collapsedLogs_5() const { return ___collapsedLogs_5; }
	inline List_1_t2973303312 ** get_address_of_collapsedLogs_5() { return &___collapsedLogs_5; }
	inline void set_collapsedLogs_5(List_1_t2973303312 * value)
	{
		___collapsedLogs_5 = value;
		Il2CppCodeGenWriteBarrier(&___collapsedLogs_5, value);
	}

	inline static int32_t get_offset_of_currentLog_6() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentLog_6)); }
	inline List_1_t2973303312 * get_currentLog_6() const { return ___currentLog_6; }
	inline List_1_t2973303312 ** get_address_of_currentLog_6() { return &___currentLog_6; }
	inline void set_currentLog_6(List_1_t2973303312 * value)
	{
		___currentLog_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentLog_6, value);
	}

	inline static int32_t get_offset_of_logsDic_7() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logsDic_7)); }
	inline MultiKeyDictionary_3_t2062580724 * get_logsDic_7() const { return ___logsDic_7; }
	inline MultiKeyDictionary_3_t2062580724 ** get_address_of_logsDic_7() { return &___logsDic_7; }
	inline void set_logsDic_7(MultiKeyDictionary_3_t2062580724 * value)
	{
		___logsDic_7 = value;
		Il2CppCodeGenWriteBarrier(&___logsDic_7, value);
	}

	inline static int32_t get_offset_of_cachedString_8() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___cachedString_8)); }
	inline Dictionary_2_t3943999495 * get_cachedString_8() const { return ___cachedString_8; }
	inline Dictionary_2_t3943999495 ** get_address_of_cachedString_8() { return &___cachedString_8; }
	inline void set_cachedString_8(Dictionary_2_t3943999495 * value)
	{
		___cachedString_8 = value;
		Il2CppCodeGenWriteBarrier(&___cachedString_8, value);
	}

	inline static int32_t get_offset_of_show_9() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___show_9)); }
	inline bool get_show_9() const { return ___show_9; }
	inline bool* get_address_of_show_9() { return &___show_9; }
	inline void set_show_9(bool value)
	{
		___show_9 = value;
	}

	inline static int32_t get_offset_of_collapse_10() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___collapse_10)); }
	inline bool get_collapse_10() const { return ___collapse_10; }
	inline bool* get_address_of_collapse_10() { return &___collapse_10; }
	inline void set_collapse_10(bool value)
	{
		___collapse_10 = value;
	}

	inline static int32_t get_offset_of_clearOnNewSceneLoaded_11() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___clearOnNewSceneLoaded_11)); }
	inline bool get_clearOnNewSceneLoaded_11() const { return ___clearOnNewSceneLoaded_11; }
	inline bool* get_address_of_clearOnNewSceneLoaded_11() { return &___clearOnNewSceneLoaded_11; }
	inline void set_clearOnNewSceneLoaded_11(bool value)
	{
		___clearOnNewSceneLoaded_11 = value;
	}

	inline static int32_t get_offset_of_showTime_12() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showTime_12)); }
	inline bool get_showTime_12() const { return ___showTime_12; }
	inline bool* get_address_of_showTime_12() { return &___showTime_12; }
	inline void set_showTime_12(bool value)
	{
		___showTime_12 = value;
	}

	inline static int32_t get_offset_of_showScene_13() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showScene_13)); }
	inline bool get_showScene_13() const { return ___showScene_13; }
	inline bool* get_address_of_showScene_13() { return &___showScene_13; }
	inline void set_showScene_13(bool value)
	{
		___showScene_13 = value;
	}

	inline static int32_t get_offset_of_showMemory_14() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showMemory_14)); }
	inline bool get_showMemory_14() const { return ___showMemory_14; }
	inline bool* get_address_of_showMemory_14() { return &___showMemory_14; }
	inline void set_showMemory_14(bool value)
	{
		___showMemory_14 = value;
	}

	inline static int32_t get_offset_of_showFps_15() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showFps_15)); }
	inline bool get_showFps_15() const { return ___showFps_15; }
	inline bool* get_address_of_showFps_15() { return &___showFps_15; }
	inline void set_showFps_15(bool value)
	{
		___showFps_15 = value;
	}

	inline static int32_t get_offset_of_showGraph_16() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showGraph_16)); }
	inline bool get_showGraph_16() const { return ___showGraph_16; }
	inline bool* get_address_of_showGraph_16() { return &___showGraph_16; }
	inline void set_showGraph_16(bool value)
	{
		___showGraph_16 = value;
	}

	inline static int32_t get_offset_of_showLog_17() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showLog_17)); }
	inline bool get_showLog_17() const { return ___showLog_17; }
	inline bool* get_address_of_showLog_17() { return &___showLog_17; }
	inline void set_showLog_17(bool value)
	{
		___showLog_17 = value;
	}

	inline static int32_t get_offset_of_showWarning_18() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showWarning_18)); }
	inline bool get_showWarning_18() const { return ___showWarning_18; }
	inline bool* get_address_of_showWarning_18() { return &___showWarning_18; }
	inline void set_showWarning_18(bool value)
	{
		___showWarning_18 = value;
	}

	inline static int32_t get_offset_of_showError_19() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showError_19)); }
	inline bool get_showError_19() const { return ___showError_19; }
	inline bool* get_address_of_showError_19() { return &___showError_19; }
	inline void set_showError_19(bool value)
	{
		___showError_19 = value;
	}

	inline static int32_t get_offset_of_numOfLogs_20() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfLogs_20)); }
	inline int32_t get_numOfLogs_20() const { return ___numOfLogs_20; }
	inline int32_t* get_address_of_numOfLogs_20() { return &___numOfLogs_20; }
	inline void set_numOfLogs_20(int32_t value)
	{
		___numOfLogs_20 = value;
	}

	inline static int32_t get_offset_of_numOfLogsWarning_21() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfLogsWarning_21)); }
	inline int32_t get_numOfLogsWarning_21() const { return ___numOfLogsWarning_21; }
	inline int32_t* get_address_of_numOfLogsWarning_21() { return &___numOfLogsWarning_21; }
	inline void set_numOfLogsWarning_21(int32_t value)
	{
		___numOfLogsWarning_21 = value;
	}

	inline static int32_t get_offset_of_numOfLogsError_22() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfLogsError_22)); }
	inline int32_t get_numOfLogsError_22() const { return ___numOfLogsError_22; }
	inline int32_t* get_address_of_numOfLogsError_22() { return &___numOfLogsError_22; }
	inline void set_numOfLogsError_22(int32_t value)
	{
		___numOfLogsError_22 = value;
	}

	inline static int32_t get_offset_of_numOfCollapsedLogs_23() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCollapsedLogs_23)); }
	inline int32_t get_numOfCollapsedLogs_23() const { return ___numOfCollapsedLogs_23; }
	inline int32_t* get_address_of_numOfCollapsedLogs_23() { return &___numOfCollapsedLogs_23; }
	inline void set_numOfCollapsedLogs_23(int32_t value)
	{
		___numOfCollapsedLogs_23 = value;
	}

	inline static int32_t get_offset_of_numOfCollapsedLogsWarning_24() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCollapsedLogsWarning_24)); }
	inline int32_t get_numOfCollapsedLogsWarning_24() const { return ___numOfCollapsedLogsWarning_24; }
	inline int32_t* get_address_of_numOfCollapsedLogsWarning_24() { return &___numOfCollapsedLogsWarning_24; }
	inline void set_numOfCollapsedLogsWarning_24(int32_t value)
	{
		___numOfCollapsedLogsWarning_24 = value;
	}

	inline static int32_t get_offset_of_numOfCollapsedLogsError_25() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCollapsedLogsError_25)); }
	inline int32_t get_numOfCollapsedLogsError_25() const { return ___numOfCollapsedLogsError_25; }
	inline int32_t* get_address_of_numOfCollapsedLogsError_25() { return &___numOfCollapsedLogsError_25; }
	inline void set_numOfCollapsedLogsError_25(int32_t value)
	{
		___numOfCollapsedLogsError_25 = value;
	}

	inline static int32_t get_offset_of_showClearOnNewSceneLoadedButton_26() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showClearOnNewSceneLoadedButton_26)); }
	inline bool get_showClearOnNewSceneLoadedButton_26() const { return ___showClearOnNewSceneLoadedButton_26; }
	inline bool* get_address_of_showClearOnNewSceneLoadedButton_26() { return &___showClearOnNewSceneLoadedButton_26; }
	inline void set_showClearOnNewSceneLoadedButton_26(bool value)
	{
		___showClearOnNewSceneLoadedButton_26 = value;
	}

	inline static int32_t get_offset_of_showTimeButton_27() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showTimeButton_27)); }
	inline bool get_showTimeButton_27() const { return ___showTimeButton_27; }
	inline bool* get_address_of_showTimeButton_27() { return &___showTimeButton_27; }
	inline void set_showTimeButton_27(bool value)
	{
		___showTimeButton_27 = value;
	}

	inline static int32_t get_offset_of_showSceneButton_28() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showSceneButton_28)); }
	inline bool get_showSceneButton_28() const { return ___showSceneButton_28; }
	inline bool* get_address_of_showSceneButton_28() { return &___showSceneButton_28; }
	inline void set_showSceneButton_28(bool value)
	{
		___showSceneButton_28 = value;
	}

	inline static int32_t get_offset_of_showMemButton_29() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showMemButton_29)); }
	inline bool get_showMemButton_29() const { return ___showMemButton_29; }
	inline bool* get_address_of_showMemButton_29() { return &___showMemButton_29; }
	inline void set_showMemButton_29(bool value)
	{
		___showMemButton_29 = value;
	}

	inline static int32_t get_offset_of_showFpsButton_30() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showFpsButton_30)); }
	inline bool get_showFpsButton_30() const { return ___showFpsButton_30; }
	inline bool* get_address_of_showFpsButton_30() { return &___showFpsButton_30; }
	inline void set_showFpsButton_30(bool value)
	{
		___showFpsButton_30 = value;
	}

	inline static int32_t get_offset_of_showSearchText_31() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showSearchText_31)); }
	inline bool get_showSearchText_31() const { return ___showSearchText_31; }
	inline bool* get_address_of_showSearchText_31() { return &___showSearchText_31; }
	inline void set_showSearchText_31(bool value)
	{
		___showSearchText_31 = value;
	}

	inline static int32_t get_offset_of_buildDate_32() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buildDate_32)); }
	inline String_t* get_buildDate_32() const { return ___buildDate_32; }
	inline String_t** get_address_of_buildDate_32() { return &___buildDate_32; }
	inline void set_buildDate_32(String_t* value)
	{
		___buildDate_32 = value;
		Il2CppCodeGenWriteBarrier(&___buildDate_32, value);
	}

	inline static int32_t get_offset_of_logDate_33() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logDate_33)); }
	inline String_t* get_logDate_33() const { return ___logDate_33; }
	inline String_t** get_address_of_logDate_33() { return &___logDate_33; }
	inline void set_logDate_33(String_t* value)
	{
		___logDate_33 = value;
		Il2CppCodeGenWriteBarrier(&___logDate_33, value);
	}

	inline static int32_t get_offset_of_logsMemUsage_34() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logsMemUsage_34)); }
	inline float get_logsMemUsage_34() const { return ___logsMemUsage_34; }
	inline float* get_address_of_logsMemUsage_34() { return &___logsMemUsage_34; }
	inline void set_logsMemUsage_34(float value)
	{
		___logsMemUsage_34 = value;
	}

	inline static int32_t get_offset_of_graphMemUsage_35() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphMemUsage_35)); }
	inline float get_graphMemUsage_35() const { return ___graphMemUsage_35; }
	inline float* get_address_of_graphMemUsage_35() { return &___graphMemUsage_35; }
	inline void set_graphMemUsage_35(float value)
	{
		___graphMemUsage_35 = value;
	}

	inline static int32_t get_offset_of_gcTotalMemory_36() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gcTotalMemory_36)); }
	inline float get_gcTotalMemory_36() const { return ___gcTotalMemory_36; }
	inline float* get_address_of_gcTotalMemory_36() { return &___gcTotalMemory_36; }
	inline void set_gcTotalMemory_36(float value)
	{
		___gcTotalMemory_36 = value;
	}

	inline static int32_t get_offset_of_UserData_37() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___UserData_37)); }
	inline String_t* get_UserData_37() const { return ___UserData_37; }
	inline String_t** get_address_of_UserData_37() { return &___UserData_37; }
	inline void set_UserData_37(String_t* value)
	{
		___UserData_37 = value;
		Il2CppCodeGenWriteBarrier(&___UserData_37, value);
	}

	inline static int32_t get_offset_of_fps_38() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fps_38)); }
	inline float get_fps_38() const { return ___fps_38; }
	inline float* get_address_of_fps_38() { return &___fps_38; }
	inline void set_fps_38(float value)
	{
		___fps_38 = value;
	}

	inline static int32_t get_offset_of_fpsText_39() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fpsText_39)); }
	inline String_t* get_fpsText_39() const { return ___fpsText_39; }
	inline String_t** get_address_of_fpsText_39() { return &___fpsText_39; }
	inline void set_fpsText_39(String_t* value)
	{
		___fpsText_39 = value;
		Il2CppCodeGenWriteBarrier(&___fpsText_39, value);
	}

	inline static int32_t get_offset_of_currentView_40() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentView_40)); }
	inline int32_t get_currentView_40() const { return ___currentView_40; }
	inline int32_t* get_address_of_currentView_40() { return &___currentView_40; }
	inline void set_currentView_40(int32_t value)
	{
		___currentView_40 = value;
	}

	inline static int32_t get_offset_of_images_42() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___images_42)); }
	inline Images_t563431294 * get_images_42() const { return ___images_42; }
	inline Images_t563431294 ** get_address_of_images_42() { return &___images_42; }
	inline void set_images_42(Images_t563431294 * value)
	{
		___images_42 = value;
		Il2CppCodeGenWriteBarrier(&___images_42, value);
	}

	inline static int32_t get_offset_of_clearContent_43() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___clearContent_43)); }
	inline GUIContent_t4210063000 * get_clearContent_43() const { return ___clearContent_43; }
	inline GUIContent_t4210063000 ** get_address_of_clearContent_43() { return &___clearContent_43; }
	inline void set_clearContent_43(GUIContent_t4210063000 * value)
	{
		___clearContent_43 = value;
		Il2CppCodeGenWriteBarrier(&___clearContent_43, value);
	}

	inline static int32_t get_offset_of_collapseContent_44() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___collapseContent_44)); }
	inline GUIContent_t4210063000 * get_collapseContent_44() const { return ___collapseContent_44; }
	inline GUIContent_t4210063000 ** get_address_of_collapseContent_44() { return &___collapseContent_44; }
	inline void set_collapseContent_44(GUIContent_t4210063000 * value)
	{
		___collapseContent_44 = value;
		Il2CppCodeGenWriteBarrier(&___collapseContent_44, value);
	}

	inline static int32_t get_offset_of_clearOnNewSceneContent_45() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___clearOnNewSceneContent_45)); }
	inline GUIContent_t4210063000 * get_clearOnNewSceneContent_45() const { return ___clearOnNewSceneContent_45; }
	inline GUIContent_t4210063000 ** get_address_of_clearOnNewSceneContent_45() { return &___clearOnNewSceneContent_45; }
	inline void set_clearOnNewSceneContent_45(GUIContent_t4210063000 * value)
	{
		___clearOnNewSceneContent_45 = value;
		Il2CppCodeGenWriteBarrier(&___clearOnNewSceneContent_45, value);
	}

	inline static int32_t get_offset_of_showTimeContent_46() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showTimeContent_46)); }
	inline GUIContent_t4210063000 * get_showTimeContent_46() const { return ___showTimeContent_46; }
	inline GUIContent_t4210063000 ** get_address_of_showTimeContent_46() { return &___showTimeContent_46; }
	inline void set_showTimeContent_46(GUIContent_t4210063000 * value)
	{
		___showTimeContent_46 = value;
		Il2CppCodeGenWriteBarrier(&___showTimeContent_46, value);
	}

	inline static int32_t get_offset_of_showSceneContent_47() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showSceneContent_47)); }
	inline GUIContent_t4210063000 * get_showSceneContent_47() const { return ___showSceneContent_47; }
	inline GUIContent_t4210063000 ** get_address_of_showSceneContent_47() { return &___showSceneContent_47; }
	inline void set_showSceneContent_47(GUIContent_t4210063000 * value)
	{
		___showSceneContent_47 = value;
		Il2CppCodeGenWriteBarrier(&___showSceneContent_47, value);
	}

	inline static int32_t get_offset_of_userContent_48() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___userContent_48)); }
	inline GUIContent_t4210063000 * get_userContent_48() const { return ___userContent_48; }
	inline GUIContent_t4210063000 ** get_address_of_userContent_48() { return &___userContent_48; }
	inline void set_userContent_48(GUIContent_t4210063000 * value)
	{
		___userContent_48 = value;
		Il2CppCodeGenWriteBarrier(&___userContent_48, value);
	}

	inline static int32_t get_offset_of_showMemoryContent_49() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showMemoryContent_49)); }
	inline GUIContent_t4210063000 * get_showMemoryContent_49() const { return ___showMemoryContent_49; }
	inline GUIContent_t4210063000 ** get_address_of_showMemoryContent_49() { return &___showMemoryContent_49; }
	inline void set_showMemoryContent_49(GUIContent_t4210063000 * value)
	{
		___showMemoryContent_49 = value;
		Il2CppCodeGenWriteBarrier(&___showMemoryContent_49, value);
	}

	inline static int32_t get_offset_of_softwareContent_50() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___softwareContent_50)); }
	inline GUIContent_t4210063000 * get_softwareContent_50() const { return ___softwareContent_50; }
	inline GUIContent_t4210063000 ** get_address_of_softwareContent_50() { return &___softwareContent_50; }
	inline void set_softwareContent_50(GUIContent_t4210063000 * value)
	{
		___softwareContent_50 = value;
		Il2CppCodeGenWriteBarrier(&___softwareContent_50, value);
	}

	inline static int32_t get_offset_of_dateContent_51() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___dateContent_51)); }
	inline GUIContent_t4210063000 * get_dateContent_51() const { return ___dateContent_51; }
	inline GUIContent_t4210063000 ** get_address_of_dateContent_51() { return &___dateContent_51; }
	inline void set_dateContent_51(GUIContent_t4210063000 * value)
	{
		___dateContent_51 = value;
		Il2CppCodeGenWriteBarrier(&___dateContent_51, value);
	}

	inline static int32_t get_offset_of_showFpsContent_52() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showFpsContent_52)); }
	inline GUIContent_t4210063000 * get_showFpsContent_52() const { return ___showFpsContent_52; }
	inline GUIContent_t4210063000 ** get_address_of_showFpsContent_52() { return &___showFpsContent_52; }
	inline void set_showFpsContent_52(GUIContent_t4210063000 * value)
	{
		___showFpsContent_52 = value;
		Il2CppCodeGenWriteBarrier(&___showFpsContent_52, value);
	}

	inline static int32_t get_offset_of_graphContent_53() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphContent_53)); }
	inline GUIContent_t4210063000 * get_graphContent_53() const { return ___graphContent_53; }
	inline GUIContent_t4210063000 ** get_address_of_graphContent_53() { return &___graphContent_53; }
	inline void set_graphContent_53(GUIContent_t4210063000 * value)
	{
		___graphContent_53 = value;
		Il2CppCodeGenWriteBarrier(&___graphContent_53, value);
	}

	inline static int32_t get_offset_of_infoContent_54() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___infoContent_54)); }
	inline GUIContent_t4210063000 * get_infoContent_54() const { return ___infoContent_54; }
	inline GUIContent_t4210063000 ** get_address_of_infoContent_54() { return &___infoContent_54; }
	inline void set_infoContent_54(GUIContent_t4210063000 * value)
	{
		___infoContent_54 = value;
		Il2CppCodeGenWriteBarrier(&___infoContent_54, value);
	}

	inline static int32_t get_offset_of_searchContent_55() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___searchContent_55)); }
	inline GUIContent_t4210063000 * get_searchContent_55() const { return ___searchContent_55; }
	inline GUIContent_t4210063000 ** get_address_of_searchContent_55() { return &___searchContent_55; }
	inline void set_searchContent_55(GUIContent_t4210063000 * value)
	{
		___searchContent_55 = value;
		Il2CppCodeGenWriteBarrier(&___searchContent_55, value);
	}

	inline static int32_t get_offset_of_closeContent_56() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___closeContent_56)); }
	inline GUIContent_t4210063000 * get_closeContent_56() const { return ___closeContent_56; }
	inline GUIContent_t4210063000 ** get_address_of_closeContent_56() { return &___closeContent_56; }
	inline void set_closeContent_56(GUIContent_t4210063000 * value)
	{
		___closeContent_56 = value;
		Il2CppCodeGenWriteBarrier(&___closeContent_56, value);
	}

	inline static int32_t get_offset_of_saveContent_57() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___saveContent_57)); }
	inline GUIContent_t4210063000 * get_saveContent_57() const { return ___saveContent_57; }
	inline GUIContent_t4210063000 ** get_address_of_saveContent_57() { return &___saveContent_57; }
	inline void set_saveContent_57(GUIContent_t4210063000 * value)
	{
		___saveContent_57 = value;
		Il2CppCodeGenWriteBarrier(&___saveContent_57, value);
	}

	inline static int32_t get_offset_of_phoenixContent_58() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___phoenixContent_58)); }
	inline GUIContent_t4210063000 * get_phoenixContent_58() const { return ___phoenixContent_58; }
	inline GUIContent_t4210063000 ** get_address_of_phoenixContent_58() { return &___phoenixContent_58; }
	inline void set_phoenixContent_58(GUIContent_t4210063000 * value)
	{
		___phoenixContent_58 = value;
		Il2CppCodeGenWriteBarrier(&___phoenixContent_58, value);
	}

	inline static int32_t get_offset_of_buildFromContent_59() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buildFromContent_59)); }
	inline GUIContent_t4210063000 * get_buildFromContent_59() const { return ___buildFromContent_59; }
	inline GUIContent_t4210063000 ** get_address_of_buildFromContent_59() { return &___buildFromContent_59; }
	inline void set_buildFromContent_59(GUIContent_t4210063000 * value)
	{
		___buildFromContent_59 = value;
		Il2CppCodeGenWriteBarrier(&___buildFromContent_59, value);
	}

	inline static int32_t get_offset_of_systemInfoContent_60() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___systemInfoContent_60)); }
	inline GUIContent_t4210063000 * get_systemInfoContent_60() const { return ___systemInfoContent_60; }
	inline GUIContent_t4210063000 ** get_address_of_systemInfoContent_60() { return &___systemInfoContent_60; }
	inline void set_systemInfoContent_60(GUIContent_t4210063000 * value)
	{
		___systemInfoContent_60 = value;
		Il2CppCodeGenWriteBarrier(&___systemInfoContent_60, value);
	}

	inline static int32_t get_offset_of_graphicsInfoContent_61() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphicsInfoContent_61)); }
	inline GUIContent_t4210063000 * get_graphicsInfoContent_61() const { return ___graphicsInfoContent_61; }
	inline GUIContent_t4210063000 ** get_address_of_graphicsInfoContent_61() { return &___graphicsInfoContent_61; }
	inline void set_graphicsInfoContent_61(GUIContent_t4210063000 * value)
	{
		___graphicsInfoContent_61 = value;
		Il2CppCodeGenWriteBarrier(&___graphicsInfoContent_61, value);
	}

	inline static int32_t get_offset_of_backContent_62() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___backContent_62)); }
	inline GUIContent_t4210063000 * get_backContent_62() const { return ___backContent_62; }
	inline GUIContent_t4210063000 ** get_address_of_backContent_62() { return &___backContent_62; }
	inline void set_backContent_62(GUIContent_t4210063000 * value)
	{
		___backContent_62 = value;
		Il2CppCodeGenWriteBarrier(&___backContent_62, value);
	}

	inline static int32_t get_offset_of_cameraContent_63() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___cameraContent_63)); }
	inline GUIContent_t4210063000 * get_cameraContent_63() const { return ___cameraContent_63; }
	inline GUIContent_t4210063000 ** get_address_of_cameraContent_63() { return &___cameraContent_63; }
	inline void set_cameraContent_63(GUIContent_t4210063000 * value)
	{
		___cameraContent_63 = value;
		Il2CppCodeGenWriteBarrier(&___cameraContent_63, value);
	}

	inline static int32_t get_offset_of_logContent_64() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logContent_64)); }
	inline GUIContent_t4210063000 * get_logContent_64() const { return ___logContent_64; }
	inline GUIContent_t4210063000 ** get_address_of_logContent_64() { return &___logContent_64; }
	inline void set_logContent_64(GUIContent_t4210063000 * value)
	{
		___logContent_64 = value;
		Il2CppCodeGenWriteBarrier(&___logContent_64, value);
	}

	inline static int32_t get_offset_of_warningContent_65() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___warningContent_65)); }
	inline GUIContent_t4210063000 * get_warningContent_65() const { return ___warningContent_65; }
	inline GUIContent_t4210063000 ** get_address_of_warningContent_65() { return &___warningContent_65; }
	inline void set_warningContent_65(GUIContent_t4210063000 * value)
	{
		___warningContent_65 = value;
		Il2CppCodeGenWriteBarrier(&___warningContent_65, value);
	}

	inline static int32_t get_offset_of_errorContent_66() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___errorContent_66)); }
	inline GUIContent_t4210063000 * get_errorContent_66() const { return ___errorContent_66; }
	inline GUIContent_t4210063000 ** get_address_of_errorContent_66() { return &___errorContent_66; }
	inline void set_errorContent_66(GUIContent_t4210063000 * value)
	{
		___errorContent_66 = value;
		Il2CppCodeGenWriteBarrier(&___errorContent_66, value);
	}

	inline static int32_t get_offset_of_barStyle_67() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___barStyle_67)); }
	inline GUIStyle_t1799908754 * get_barStyle_67() const { return ___barStyle_67; }
	inline GUIStyle_t1799908754 ** get_address_of_barStyle_67() { return &___barStyle_67; }
	inline void set_barStyle_67(GUIStyle_t1799908754 * value)
	{
		___barStyle_67 = value;
		Il2CppCodeGenWriteBarrier(&___barStyle_67, value);
	}

	inline static int32_t get_offset_of_buttonActiveStyle_68() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buttonActiveStyle_68)); }
	inline GUIStyle_t1799908754 * get_buttonActiveStyle_68() const { return ___buttonActiveStyle_68; }
	inline GUIStyle_t1799908754 ** get_address_of_buttonActiveStyle_68() { return &___buttonActiveStyle_68; }
	inline void set_buttonActiveStyle_68(GUIStyle_t1799908754 * value)
	{
		___buttonActiveStyle_68 = value;
		Il2CppCodeGenWriteBarrier(&___buttonActiveStyle_68, value);
	}

	inline static int32_t get_offset_of_nonStyle_69() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___nonStyle_69)); }
	inline GUIStyle_t1799908754 * get_nonStyle_69() const { return ___nonStyle_69; }
	inline GUIStyle_t1799908754 ** get_address_of_nonStyle_69() { return &___nonStyle_69; }
	inline void set_nonStyle_69(GUIStyle_t1799908754 * value)
	{
		___nonStyle_69 = value;
		Il2CppCodeGenWriteBarrier(&___nonStyle_69, value);
	}

	inline static int32_t get_offset_of_lowerLeftFontStyle_70() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lowerLeftFontStyle_70)); }
	inline GUIStyle_t1799908754 * get_lowerLeftFontStyle_70() const { return ___lowerLeftFontStyle_70; }
	inline GUIStyle_t1799908754 ** get_address_of_lowerLeftFontStyle_70() { return &___lowerLeftFontStyle_70; }
	inline void set_lowerLeftFontStyle_70(GUIStyle_t1799908754 * value)
	{
		___lowerLeftFontStyle_70 = value;
		Il2CppCodeGenWriteBarrier(&___lowerLeftFontStyle_70, value);
	}

	inline static int32_t get_offset_of_backStyle_71() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___backStyle_71)); }
	inline GUIStyle_t1799908754 * get_backStyle_71() const { return ___backStyle_71; }
	inline GUIStyle_t1799908754 ** get_address_of_backStyle_71() { return &___backStyle_71; }
	inline void set_backStyle_71(GUIStyle_t1799908754 * value)
	{
		___backStyle_71 = value;
		Il2CppCodeGenWriteBarrier(&___backStyle_71, value);
	}

	inline static int32_t get_offset_of_evenLogStyle_72() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___evenLogStyle_72)); }
	inline GUIStyle_t1799908754 * get_evenLogStyle_72() const { return ___evenLogStyle_72; }
	inline GUIStyle_t1799908754 ** get_address_of_evenLogStyle_72() { return &___evenLogStyle_72; }
	inline void set_evenLogStyle_72(GUIStyle_t1799908754 * value)
	{
		___evenLogStyle_72 = value;
		Il2CppCodeGenWriteBarrier(&___evenLogStyle_72, value);
	}

	inline static int32_t get_offset_of_oddLogStyle_73() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oddLogStyle_73)); }
	inline GUIStyle_t1799908754 * get_oddLogStyle_73() const { return ___oddLogStyle_73; }
	inline GUIStyle_t1799908754 ** get_address_of_oddLogStyle_73() { return &___oddLogStyle_73; }
	inline void set_oddLogStyle_73(GUIStyle_t1799908754 * value)
	{
		___oddLogStyle_73 = value;
		Il2CppCodeGenWriteBarrier(&___oddLogStyle_73, value);
	}

	inline static int32_t get_offset_of_logButtonStyle_74() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logButtonStyle_74)); }
	inline GUIStyle_t1799908754 * get_logButtonStyle_74() const { return ___logButtonStyle_74; }
	inline GUIStyle_t1799908754 ** get_address_of_logButtonStyle_74() { return &___logButtonStyle_74; }
	inline void set_logButtonStyle_74(GUIStyle_t1799908754 * value)
	{
		___logButtonStyle_74 = value;
		Il2CppCodeGenWriteBarrier(&___logButtonStyle_74, value);
	}

	inline static int32_t get_offset_of_selectedLogStyle_75() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___selectedLogStyle_75)); }
	inline GUIStyle_t1799908754 * get_selectedLogStyle_75() const { return ___selectedLogStyle_75; }
	inline GUIStyle_t1799908754 ** get_address_of_selectedLogStyle_75() { return &___selectedLogStyle_75; }
	inline void set_selectedLogStyle_75(GUIStyle_t1799908754 * value)
	{
		___selectedLogStyle_75 = value;
		Il2CppCodeGenWriteBarrier(&___selectedLogStyle_75, value);
	}

	inline static int32_t get_offset_of_selectedLogFontStyle_76() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___selectedLogFontStyle_76)); }
	inline GUIStyle_t1799908754 * get_selectedLogFontStyle_76() const { return ___selectedLogFontStyle_76; }
	inline GUIStyle_t1799908754 ** get_address_of_selectedLogFontStyle_76() { return &___selectedLogFontStyle_76; }
	inline void set_selectedLogFontStyle_76(GUIStyle_t1799908754 * value)
	{
		___selectedLogFontStyle_76 = value;
		Il2CppCodeGenWriteBarrier(&___selectedLogFontStyle_76, value);
	}

	inline static int32_t get_offset_of_stackLabelStyle_77() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___stackLabelStyle_77)); }
	inline GUIStyle_t1799908754 * get_stackLabelStyle_77() const { return ___stackLabelStyle_77; }
	inline GUIStyle_t1799908754 ** get_address_of_stackLabelStyle_77() { return &___stackLabelStyle_77; }
	inline void set_stackLabelStyle_77(GUIStyle_t1799908754 * value)
	{
		___stackLabelStyle_77 = value;
		Il2CppCodeGenWriteBarrier(&___stackLabelStyle_77, value);
	}

	inline static int32_t get_offset_of_scrollerStyle_78() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scrollerStyle_78)); }
	inline GUIStyle_t1799908754 * get_scrollerStyle_78() const { return ___scrollerStyle_78; }
	inline GUIStyle_t1799908754 ** get_address_of_scrollerStyle_78() { return &___scrollerStyle_78; }
	inline void set_scrollerStyle_78(GUIStyle_t1799908754 * value)
	{
		___scrollerStyle_78 = value;
		Il2CppCodeGenWriteBarrier(&___scrollerStyle_78, value);
	}

	inline static int32_t get_offset_of_searchStyle_79() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___searchStyle_79)); }
	inline GUIStyle_t1799908754 * get_searchStyle_79() const { return ___searchStyle_79; }
	inline GUIStyle_t1799908754 ** get_address_of_searchStyle_79() { return &___searchStyle_79; }
	inline void set_searchStyle_79(GUIStyle_t1799908754 * value)
	{
		___searchStyle_79 = value;
		Il2CppCodeGenWriteBarrier(&___searchStyle_79, value);
	}

	inline static int32_t get_offset_of_sliderBackStyle_80() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sliderBackStyle_80)); }
	inline GUIStyle_t1799908754 * get_sliderBackStyle_80() const { return ___sliderBackStyle_80; }
	inline GUIStyle_t1799908754 ** get_address_of_sliderBackStyle_80() { return &___sliderBackStyle_80; }
	inline void set_sliderBackStyle_80(GUIStyle_t1799908754 * value)
	{
		___sliderBackStyle_80 = value;
		Il2CppCodeGenWriteBarrier(&___sliderBackStyle_80, value);
	}

	inline static int32_t get_offset_of_sliderThumbStyle_81() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sliderThumbStyle_81)); }
	inline GUIStyle_t1799908754 * get_sliderThumbStyle_81() const { return ___sliderThumbStyle_81; }
	inline GUIStyle_t1799908754 ** get_address_of_sliderThumbStyle_81() { return &___sliderThumbStyle_81; }
	inline void set_sliderThumbStyle_81(GUIStyle_t1799908754 * value)
	{
		___sliderThumbStyle_81 = value;
		Il2CppCodeGenWriteBarrier(&___sliderThumbStyle_81, value);
	}

	inline static int32_t get_offset_of_toolbarScrollerSkin_82() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolbarScrollerSkin_82)); }
	inline GUISkin_t1436893342 * get_toolbarScrollerSkin_82() const { return ___toolbarScrollerSkin_82; }
	inline GUISkin_t1436893342 ** get_address_of_toolbarScrollerSkin_82() { return &___toolbarScrollerSkin_82; }
	inline void set_toolbarScrollerSkin_82(GUISkin_t1436893342 * value)
	{
		___toolbarScrollerSkin_82 = value;
		Il2CppCodeGenWriteBarrier(&___toolbarScrollerSkin_82, value);
	}

	inline static int32_t get_offset_of_logScrollerSkin_83() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logScrollerSkin_83)); }
	inline GUISkin_t1436893342 * get_logScrollerSkin_83() const { return ___logScrollerSkin_83; }
	inline GUISkin_t1436893342 ** get_address_of_logScrollerSkin_83() { return &___logScrollerSkin_83; }
	inline void set_logScrollerSkin_83(GUISkin_t1436893342 * value)
	{
		___logScrollerSkin_83 = value;
		Il2CppCodeGenWriteBarrier(&___logScrollerSkin_83, value);
	}

	inline static int32_t get_offset_of_graphScrollerSkin_84() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphScrollerSkin_84)); }
	inline GUISkin_t1436893342 * get_graphScrollerSkin_84() const { return ___graphScrollerSkin_84; }
	inline GUISkin_t1436893342 ** get_address_of_graphScrollerSkin_84() { return &___graphScrollerSkin_84; }
	inline void set_graphScrollerSkin_84(GUISkin_t1436893342 * value)
	{
		___graphScrollerSkin_84 = value;
		Il2CppCodeGenWriteBarrier(&___graphScrollerSkin_84, value);
	}

	inline static int32_t get_offset_of_size_85() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___size_85)); }
	inline Vector2_t2243707579  get_size_85() const { return ___size_85; }
	inline Vector2_t2243707579 * get_address_of_size_85() { return &___size_85; }
	inline void set_size_85(Vector2_t2243707579  value)
	{
		___size_85 = value;
	}

	inline static int32_t get_offset_of_maxSize_86() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxSize_86)); }
	inline float get_maxSize_86() const { return ___maxSize_86; }
	inline float* get_address_of_maxSize_86() { return &___maxSize_86; }
	inline void set_maxSize_86(float value)
	{
		___maxSize_86 = value;
	}

	inline static int32_t get_offset_of_numOfCircleToShow_87() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCircleToShow_87)); }
	inline int32_t get_numOfCircleToShow_87() const { return ___numOfCircleToShow_87; }
	inline int32_t* get_address_of_numOfCircleToShow_87() { return &___numOfCircleToShow_87; }
	inline void set_numOfCircleToShow_87(int32_t value)
	{
		___numOfCircleToShow_87 = value;
	}

	inline static int32_t get_offset_of_scenes_88() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scenes_88)); }
	inline StringU5BU5D_t1642385972* get_scenes_88() const { return ___scenes_88; }
	inline StringU5BU5D_t1642385972** get_address_of_scenes_88() { return &___scenes_88; }
	inline void set_scenes_88(StringU5BU5D_t1642385972* value)
	{
		___scenes_88 = value;
		Il2CppCodeGenWriteBarrier(&___scenes_88, value);
	}

	inline static int32_t get_offset_of_currentScene_89() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentScene_89)); }
	inline String_t* get_currentScene_89() const { return ___currentScene_89; }
	inline String_t** get_address_of_currentScene_89() { return &___currentScene_89; }
	inline void set_currentScene_89(String_t* value)
	{
		___currentScene_89 = value;
		Il2CppCodeGenWriteBarrier(&___currentScene_89, value);
	}

	inline static int32_t get_offset_of_filterText_90() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___filterText_90)); }
	inline String_t* get_filterText_90() const { return ___filterText_90; }
	inline String_t** get_address_of_filterText_90() { return &___filterText_90; }
	inline void set_filterText_90(String_t* value)
	{
		___filterText_90 = value;
		Il2CppCodeGenWriteBarrier(&___filterText_90, value);
	}

	inline static int32_t get_offset_of_deviceModel_91() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___deviceModel_91)); }
	inline String_t* get_deviceModel_91() const { return ___deviceModel_91; }
	inline String_t** get_address_of_deviceModel_91() { return &___deviceModel_91; }
	inline void set_deviceModel_91(String_t* value)
	{
		___deviceModel_91 = value;
		Il2CppCodeGenWriteBarrier(&___deviceModel_91, value);
	}

	inline static int32_t get_offset_of_deviceType_92() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___deviceType_92)); }
	inline String_t* get_deviceType_92() const { return ___deviceType_92; }
	inline String_t** get_address_of_deviceType_92() { return &___deviceType_92; }
	inline void set_deviceType_92(String_t* value)
	{
		___deviceType_92 = value;
		Il2CppCodeGenWriteBarrier(&___deviceType_92, value);
	}

	inline static int32_t get_offset_of_deviceName_93() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___deviceName_93)); }
	inline String_t* get_deviceName_93() const { return ___deviceName_93; }
	inline String_t** get_address_of_deviceName_93() { return &___deviceName_93; }
	inline void set_deviceName_93(String_t* value)
	{
		___deviceName_93 = value;
		Il2CppCodeGenWriteBarrier(&___deviceName_93, value);
	}

	inline static int32_t get_offset_of_graphicsMemorySize_94() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphicsMemorySize_94)); }
	inline String_t* get_graphicsMemorySize_94() const { return ___graphicsMemorySize_94; }
	inline String_t** get_address_of_graphicsMemorySize_94() { return &___graphicsMemorySize_94; }
	inline void set_graphicsMemorySize_94(String_t* value)
	{
		___graphicsMemorySize_94 = value;
		Il2CppCodeGenWriteBarrier(&___graphicsMemorySize_94, value);
	}

	inline static int32_t get_offset_of_maxTextureSize_95() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxTextureSize_95)); }
	inline String_t* get_maxTextureSize_95() const { return ___maxTextureSize_95; }
	inline String_t** get_address_of_maxTextureSize_95() { return &___maxTextureSize_95; }
	inline void set_maxTextureSize_95(String_t* value)
	{
		___maxTextureSize_95 = value;
		Il2CppCodeGenWriteBarrier(&___maxTextureSize_95, value);
	}

	inline static int32_t get_offset_of_systemMemorySize_96() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___systemMemorySize_96)); }
	inline String_t* get_systemMemorySize_96() const { return ___systemMemorySize_96; }
	inline String_t** get_address_of_systemMemorySize_96() { return &___systemMemorySize_96; }
	inline void set_systemMemorySize_96(String_t* value)
	{
		___systemMemorySize_96 = value;
		Il2CppCodeGenWriteBarrier(&___systemMemorySize_96, value);
	}

	inline static int32_t get_offset_of_Initialized_97() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___Initialized_97)); }
	inline bool get_Initialized_97() const { return ___Initialized_97; }
	inline bool* get_address_of_Initialized_97() { return &___Initialized_97; }
	inline void set_Initialized_97(bool value)
	{
		___Initialized_97 = value;
	}

	inline static int32_t get_offset_of_screenRect_98() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___screenRect_98)); }
	inline Rect_t3681755626  get_screenRect_98() const { return ___screenRect_98; }
	inline Rect_t3681755626 * get_address_of_screenRect_98() { return &___screenRect_98; }
	inline void set_screenRect_98(Rect_t3681755626  value)
	{
		___screenRect_98 = value;
	}

	inline static int32_t get_offset_of_toolBarRect_99() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolBarRect_99)); }
	inline Rect_t3681755626  get_toolBarRect_99() const { return ___toolBarRect_99; }
	inline Rect_t3681755626 * get_address_of_toolBarRect_99() { return &___toolBarRect_99; }
	inline void set_toolBarRect_99(Rect_t3681755626  value)
	{
		___toolBarRect_99 = value;
	}

	inline static int32_t get_offset_of_logsRect_100() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logsRect_100)); }
	inline Rect_t3681755626  get_logsRect_100() const { return ___logsRect_100; }
	inline Rect_t3681755626 * get_address_of_logsRect_100() { return &___logsRect_100; }
	inline void set_logsRect_100(Rect_t3681755626  value)
	{
		___logsRect_100 = value;
	}

	inline static int32_t get_offset_of_stackRect_101() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___stackRect_101)); }
	inline Rect_t3681755626  get_stackRect_101() const { return ___stackRect_101; }
	inline Rect_t3681755626 * get_address_of_stackRect_101() { return &___stackRect_101; }
	inline void set_stackRect_101(Rect_t3681755626  value)
	{
		___stackRect_101 = value;
	}

	inline static int32_t get_offset_of_graphRect_102() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphRect_102)); }
	inline Rect_t3681755626  get_graphRect_102() const { return ___graphRect_102; }
	inline Rect_t3681755626 * get_address_of_graphRect_102() { return &___graphRect_102; }
	inline void set_graphRect_102(Rect_t3681755626  value)
	{
		___graphRect_102 = value;
	}

	inline static int32_t get_offset_of_graphMinRect_103() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphMinRect_103)); }
	inline Rect_t3681755626  get_graphMinRect_103() const { return ___graphMinRect_103; }
	inline Rect_t3681755626 * get_address_of_graphMinRect_103() { return &___graphMinRect_103; }
	inline void set_graphMinRect_103(Rect_t3681755626  value)
	{
		___graphMinRect_103 = value;
	}

	inline static int32_t get_offset_of_graphMaxRect_104() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphMaxRect_104)); }
	inline Rect_t3681755626  get_graphMaxRect_104() const { return ___graphMaxRect_104; }
	inline Rect_t3681755626 * get_address_of_graphMaxRect_104() { return &___graphMaxRect_104; }
	inline void set_graphMaxRect_104(Rect_t3681755626  value)
	{
		___graphMaxRect_104 = value;
	}

	inline static int32_t get_offset_of_buttomRect_105() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buttomRect_105)); }
	inline Rect_t3681755626  get_buttomRect_105() const { return ___buttomRect_105; }
	inline Rect_t3681755626 * get_address_of_buttomRect_105() { return &___buttomRect_105; }
	inline void set_buttomRect_105(Rect_t3681755626  value)
	{
		___buttomRect_105 = value;
	}

	inline static int32_t get_offset_of_stackRectTopLeft_106() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___stackRectTopLeft_106)); }
	inline Vector2_t2243707579  get_stackRectTopLeft_106() const { return ___stackRectTopLeft_106; }
	inline Vector2_t2243707579 * get_address_of_stackRectTopLeft_106() { return &___stackRectTopLeft_106; }
	inline void set_stackRectTopLeft_106(Vector2_t2243707579  value)
	{
		___stackRectTopLeft_106 = value;
	}

	inline static int32_t get_offset_of_detailRect_107() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___detailRect_107)); }
	inline Rect_t3681755626  get_detailRect_107() const { return ___detailRect_107; }
	inline Rect_t3681755626 * get_address_of_detailRect_107() { return &___detailRect_107; }
	inline void set_detailRect_107(Rect_t3681755626  value)
	{
		___detailRect_107 = value;
	}

	inline static int32_t get_offset_of_scrollPosition_108() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scrollPosition_108)); }
	inline Vector2_t2243707579  get_scrollPosition_108() const { return ___scrollPosition_108; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition_108() { return &___scrollPosition_108; }
	inline void set_scrollPosition_108(Vector2_t2243707579  value)
	{
		___scrollPosition_108 = value;
	}

	inline static int32_t get_offset_of_scrollPosition2_109() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scrollPosition2_109)); }
	inline Vector2_t2243707579  get_scrollPosition2_109() const { return ___scrollPosition2_109; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition2_109() { return &___scrollPosition2_109; }
	inline void set_scrollPosition2_109(Vector2_t2243707579  value)
	{
		___scrollPosition2_109 = value;
	}

	inline static int32_t get_offset_of_toolbarScrollPosition_110() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolbarScrollPosition_110)); }
	inline Vector2_t2243707579  get_toolbarScrollPosition_110() const { return ___toolbarScrollPosition_110; }
	inline Vector2_t2243707579 * get_address_of_toolbarScrollPosition_110() { return &___toolbarScrollPosition_110; }
	inline void set_toolbarScrollPosition_110(Vector2_t2243707579  value)
	{
		___toolbarScrollPosition_110 = value;
	}

	inline static int32_t get_offset_of_selectedLog_111() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___selectedLog_111)); }
	inline Log_t3604182180 * get_selectedLog_111() const { return ___selectedLog_111; }
	inline Log_t3604182180 ** get_address_of_selectedLog_111() { return &___selectedLog_111; }
	inline void set_selectedLog_111(Log_t3604182180 * value)
	{
		___selectedLog_111 = value;
		Il2CppCodeGenWriteBarrier(&___selectedLog_111, value);
	}

	inline static int32_t get_offset_of_toolbarOldDrag_112() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolbarOldDrag_112)); }
	inline float get_toolbarOldDrag_112() const { return ___toolbarOldDrag_112; }
	inline float* get_address_of_toolbarOldDrag_112() { return &___toolbarOldDrag_112; }
	inline void set_toolbarOldDrag_112(float value)
	{
		___toolbarOldDrag_112 = value;
	}

	inline static int32_t get_offset_of_oldDrag_113() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldDrag_113)); }
	inline float get_oldDrag_113() const { return ___oldDrag_113; }
	inline float* get_address_of_oldDrag_113() { return &___oldDrag_113; }
	inline void set_oldDrag_113(float value)
	{
		___oldDrag_113 = value;
	}

	inline static int32_t get_offset_of_oldDrag2_114() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldDrag2_114)); }
	inline float get_oldDrag2_114() const { return ___oldDrag2_114; }
	inline float* get_address_of_oldDrag2_114() { return &___oldDrag2_114; }
	inline void set_oldDrag2_114(float value)
	{
		___oldDrag2_114 = value;
	}

	inline static int32_t get_offset_of_oldDrag3_115() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldDrag3_115)); }
	inline float get_oldDrag3_115() const { return ___oldDrag3_115; }
	inline float* get_address_of_oldDrag3_115() { return &___oldDrag3_115; }
	inline void set_oldDrag3_115(float value)
	{
		___oldDrag3_115 = value;
	}

	inline static int32_t get_offset_of_startIndex_116() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___startIndex_116)); }
	inline int32_t get_startIndex_116() const { return ___startIndex_116; }
	inline int32_t* get_address_of_startIndex_116() { return &___startIndex_116; }
	inline void set_startIndex_116(int32_t value)
	{
		___startIndex_116 = value;
	}

	inline static int32_t get_offset_of_countRect_117() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___countRect_117)); }
	inline Rect_t3681755626  get_countRect_117() const { return ___countRect_117; }
	inline Rect_t3681755626 * get_address_of_countRect_117() { return &___countRect_117; }
	inline void set_countRect_117(Rect_t3681755626  value)
	{
		___countRect_117 = value;
	}

	inline static int32_t get_offset_of_timeRect_118() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___timeRect_118)); }
	inline Rect_t3681755626  get_timeRect_118() const { return ___timeRect_118; }
	inline Rect_t3681755626 * get_address_of_timeRect_118() { return &___timeRect_118; }
	inline void set_timeRect_118(Rect_t3681755626  value)
	{
		___timeRect_118 = value;
	}

	inline static int32_t get_offset_of_timeLabelRect_119() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___timeLabelRect_119)); }
	inline Rect_t3681755626  get_timeLabelRect_119() const { return ___timeLabelRect_119; }
	inline Rect_t3681755626 * get_address_of_timeLabelRect_119() { return &___timeLabelRect_119; }
	inline void set_timeLabelRect_119(Rect_t3681755626  value)
	{
		___timeLabelRect_119 = value;
	}

	inline static int32_t get_offset_of_sceneRect_120() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sceneRect_120)); }
	inline Rect_t3681755626  get_sceneRect_120() const { return ___sceneRect_120; }
	inline Rect_t3681755626 * get_address_of_sceneRect_120() { return &___sceneRect_120; }
	inline void set_sceneRect_120(Rect_t3681755626  value)
	{
		___sceneRect_120 = value;
	}

	inline static int32_t get_offset_of_sceneLabelRect_121() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sceneLabelRect_121)); }
	inline Rect_t3681755626  get_sceneLabelRect_121() const { return ___sceneLabelRect_121; }
	inline Rect_t3681755626 * get_address_of_sceneLabelRect_121() { return &___sceneLabelRect_121; }
	inline void set_sceneLabelRect_121(Rect_t3681755626  value)
	{
		___sceneLabelRect_121 = value;
	}

	inline static int32_t get_offset_of_memoryRect_122() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___memoryRect_122)); }
	inline Rect_t3681755626  get_memoryRect_122() const { return ___memoryRect_122; }
	inline Rect_t3681755626 * get_address_of_memoryRect_122() { return &___memoryRect_122; }
	inline void set_memoryRect_122(Rect_t3681755626  value)
	{
		___memoryRect_122 = value;
	}

	inline static int32_t get_offset_of_memoryLabelRect_123() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___memoryLabelRect_123)); }
	inline Rect_t3681755626  get_memoryLabelRect_123() const { return ___memoryLabelRect_123; }
	inline Rect_t3681755626 * get_address_of_memoryLabelRect_123() { return &___memoryLabelRect_123; }
	inline void set_memoryLabelRect_123(Rect_t3681755626  value)
	{
		___memoryLabelRect_123 = value;
	}

	inline static int32_t get_offset_of_fpsRect_124() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fpsRect_124)); }
	inline Rect_t3681755626  get_fpsRect_124() const { return ___fpsRect_124; }
	inline Rect_t3681755626 * get_address_of_fpsRect_124() { return &___fpsRect_124; }
	inline void set_fpsRect_124(Rect_t3681755626  value)
	{
		___fpsRect_124 = value;
	}

	inline static int32_t get_offset_of_fpsLabelRect_125() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fpsLabelRect_125)); }
	inline Rect_t3681755626  get_fpsLabelRect_125() const { return ___fpsLabelRect_125; }
	inline Rect_t3681755626 * get_address_of_fpsLabelRect_125() { return &___fpsLabelRect_125; }
	inline void set_fpsLabelRect_125(Rect_t3681755626  value)
	{
		___fpsLabelRect_125 = value;
	}

	inline static int32_t get_offset_of_tempContent_126() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempContent_126)); }
	inline GUIContent_t4210063000 * get_tempContent_126() const { return ___tempContent_126; }
	inline GUIContent_t4210063000 ** get_address_of_tempContent_126() { return &___tempContent_126; }
	inline void set_tempContent_126(GUIContent_t4210063000 * value)
	{
		___tempContent_126 = value;
		Il2CppCodeGenWriteBarrier(&___tempContent_126, value);
	}

	inline static int32_t get_offset_of_infoScrollPosition_127() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___infoScrollPosition_127)); }
	inline Vector2_t2243707579  get_infoScrollPosition_127() const { return ___infoScrollPosition_127; }
	inline Vector2_t2243707579 * get_address_of_infoScrollPosition_127() { return &___infoScrollPosition_127; }
	inline void set_infoScrollPosition_127(Vector2_t2243707579  value)
	{
		___infoScrollPosition_127 = value;
	}

	inline static int32_t get_offset_of_oldInfoDrag_128() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldInfoDrag_128)); }
	inline Vector2_t2243707579  get_oldInfoDrag_128() const { return ___oldInfoDrag_128; }
	inline Vector2_t2243707579 * get_address_of_oldInfoDrag_128() { return &___oldInfoDrag_128; }
	inline void set_oldInfoDrag_128(Vector2_t2243707579  value)
	{
		___oldInfoDrag_128 = value;
	}

	inline static int32_t get_offset_of_tempRect_129() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempRect_129)); }
	inline Rect_t3681755626  get_tempRect_129() const { return ___tempRect_129; }
	inline Rect_t3681755626 * get_address_of_tempRect_129() { return &___tempRect_129; }
	inline void set_tempRect_129(Rect_t3681755626  value)
	{
		___tempRect_129 = value;
	}

	inline static int32_t get_offset_of_graphSize_130() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphSize_130)); }
	inline float get_graphSize_130() const { return ___graphSize_130; }
	inline float* get_address_of_graphSize_130() { return &___graphSize_130; }
	inline void set_graphSize_130(float value)
	{
		___graphSize_130 = value;
	}

	inline static int32_t get_offset_of_startFrame_131() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___startFrame_131)); }
	inline int32_t get_startFrame_131() const { return ___startFrame_131; }
	inline int32_t* get_address_of_startFrame_131() { return &___startFrame_131; }
	inline void set_startFrame_131(int32_t value)
	{
		___startFrame_131 = value;
	}

	inline static int32_t get_offset_of_currentFrame_132() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentFrame_132)); }
	inline int32_t get_currentFrame_132() const { return ___currentFrame_132; }
	inline int32_t* get_address_of_currentFrame_132() { return &___currentFrame_132; }
	inline void set_currentFrame_132(int32_t value)
	{
		___currentFrame_132 = value;
	}

	inline static int32_t get_offset_of_tempVector1_133() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempVector1_133)); }
	inline Vector3_t2243707580  get_tempVector1_133() const { return ___tempVector1_133; }
	inline Vector3_t2243707580 * get_address_of_tempVector1_133() { return &___tempVector1_133; }
	inline void set_tempVector1_133(Vector3_t2243707580  value)
	{
		___tempVector1_133 = value;
	}

	inline static int32_t get_offset_of_tempVector2_134() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempVector2_134)); }
	inline Vector3_t2243707580  get_tempVector2_134() const { return ___tempVector2_134; }
	inline Vector3_t2243707580 * get_address_of_tempVector2_134() { return &___tempVector2_134; }
	inline void set_tempVector2_134(Vector3_t2243707580  value)
	{
		___tempVector2_134 = value;
	}

	inline static int32_t get_offset_of_graphScrollerPos_135() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphScrollerPos_135)); }
	inline Vector2_t2243707579  get_graphScrollerPos_135() const { return ___graphScrollerPos_135; }
	inline Vector2_t2243707579 * get_address_of_graphScrollerPos_135() { return &___graphScrollerPos_135; }
	inline void set_graphScrollerPos_135(Vector2_t2243707579  value)
	{
		___graphScrollerPos_135 = value;
	}

	inline static int32_t get_offset_of_maxFpsValue_136() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxFpsValue_136)); }
	inline float get_maxFpsValue_136() const { return ___maxFpsValue_136; }
	inline float* get_address_of_maxFpsValue_136() { return &___maxFpsValue_136; }
	inline void set_maxFpsValue_136(float value)
	{
		___maxFpsValue_136 = value;
	}

	inline static int32_t get_offset_of_minFpsValue_137() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___minFpsValue_137)); }
	inline float get_minFpsValue_137() const { return ___minFpsValue_137; }
	inline float* get_address_of_minFpsValue_137() { return &___minFpsValue_137; }
	inline void set_minFpsValue_137(float value)
	{
		___minFpsValue_137 = value;
	}

	inline static int32_t get_offset_of_maxMemoryValue_138() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxMemoryValue_138)); }
	inline float get_maxMemoryValue_138() const { return ___maxMemoryValue_138; }
	inline float* get_address_of_maxMemoryValue_138() { return &___maxMemoryValue_138; }
	inline void set_maxMemoryValue_138(float value)
	{
		___maxMemoryValue_138 = value;
	}

	inline static int32_t get_offset_of_minMemoryValue_139() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___minMemoryValue_139)); }
	inline float get_minMemoryValue_139() const { return ___minMemoryValue_139; }
	inline float* get_address_of_minMemoryValue_139() { return &___minMemoryValue_139; }
	inline void set_minMemoryValue_139(float value)
	{
		___minMemoryValue_139 = value;
	}

	inline static int32_t get_offset_of_gestureDetector_140() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureDetector_140)); }
	inline List_1_t1612828711 * get_gestureDetector_140() const { return ___gestureDetector_140; }
	inline List_1_t1612828711 ** get_address_of_gestureDetector_140() { return &___gestureDetector_140; }
	inline void set_gestureDetector_140(List_1_t1612828711 * value)
	{
		___gestureDetector_140 = value;
		Il2CppCodeGenWriteBarrier(&___gestureDetector_140, value);
	}

	inline static int32_t get_offset_of_gestureSum_141() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureSum_141)); }
	inline Vector2_t2243707579  get_gestureSum_141() const { return ___gestureSum_141; }
	inline Vector2_t2243707579 * get_address_of_gestureSum_141() { return &___gestureSum_141; }
	inline void set_gestureSum_141(Vector2_t2243707579  value)
	{
		___gestureSum_141 = value;
	}

	inline static int32_t get_offset_of_gestureLength_142() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureLength_142)); }
	inline float get_gestureLength_142() const { return ___gestureLength_142; }
	inline float* get_address_of_gestureLength_142() { return &___gestureLength_142; }
	inline void set_gestureLength_142(float value)
	{
		___gestureLength_142 = value;
	}

	inline static int32_t get_offset_of_gestureCount_143() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureCount_143)); }
	inline int32_t get_gestureCount_143() const { return ___gestureCount_143; }
	inline int32_t* get_address_of_gestureCount_143() { return &___gestureCount_143; }
	inline void set_gestureCount_143(int32_t value)
	{
		___gestureCount_143 = value;
	}

	inline static int32_t get_offset_of_lastClickTime_144() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lastClickTime_144)); }
	inline float get_lastClickTime_144() const { return ___lastClickTime_144; }
	inline float* get_address_of_lastClickTime_144() { return &___lastClickTime_144; }
	inline void set_lastClickTime_144(float value)
	{
		___lastClickTime_144 = value;
	}

	inline static int32_t get_offset_of_startPos_145() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___startPos_145)); }
	inline Vector2_t2243707579  get_startPos_145() const { return ___startPos_145; }
	inline Vector2_t2243707579 * get_address_of_startPos_145() { return &___startPos_145; }
	inline void set_startPos_145(Vector2_t2243707579  value)
	{
		___startPos_145 = value;
	}

	inline static int32_t get_offset_of_downPos_146() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___downPos_146)); }
	inline Vector2_t2243707579  get_downPos_146() const { return ___downPos_146; }
	inline Vector2_t2243707579 * get_address_of_downPos_146() { return &___downPos_146; }
	inline void set_downPos_146(Vector2_t2243707579  value)
	{
		___downPos_146 = value;
	}

	inline static int32_t get_offset_of_mousePosition_147() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___mousePosition_147)); }
	inline Vector2_t2243707579  get_mousePosition_147() const { return ___mousePosition_147; }
	inline Vector2_t2243707579 * get_address_of_mousePosition_147() { return &___mousePosition_147; }
	inline void set_mousePosition_147(Vector2_t2243707579  value)
	{
		___mousePosition_147 = value;
	}

	inline static int32_t get_offset_of_lastUpdate_148() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lastUpdate_148)); }
	inline float get_lastUpdate_148() const { return ___lastUpdate_148; }
	inline float* get_address_of_lastUpdate_148() { return &___lastUpdate_148; }
	inline void set_lastUpdate_148(float value)
	{
		___lastUpdate_148 = value;
	}

	inline static int32_t get_offset_of_lastUpdate2_149() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lastUpdate2_149)); }
	inline float get_lastUpdate2_149() const { return ___lastUpdate2_149; }
	inline float* get_address_of_lastUpdate2_149() { return &___lastUpdate2_149; }
	inline void set_lastUpdate2_149(float value)
	{
		___lastUpdate2_149 = value;
	}

	inline static int32_t get_offset_of_temp_150() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___temp_150)); }
	inline Rect_t3681755626  get_temp_150() const { return ___temp_150; }
	inline Rect_t3681755626 * get_address_of_temp_150() { return &___temp_150; }
	inline void set_temp_150(Rect_t3681755626  value)
	{
		___temp_150 = value;
	}

	inline static int32_t get_offset_of_threadedLogs_151() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___threadedLogs_151)); }
	inline List_1_t2973303312 * get_threadedLogs_151() const { return ___threadedLogs_151; }
	inline List_1_t2973303312 ** get_address_of_threadedLogs_151() { return &___threadedLogs_151; }
	inline void set_threadedLogs_151(List_1_t2973303312 * value)
	{
		___threadedLogs_151 = value;
		Il2CppCodeGenWriteBarrier(&___threadedLogs_151, value);
	}
};

struct Reporter_t3561640551_StaticFields
{
public:
	// System.Boolean Reporter::created
	bool ___created_41;

public:
	inline static int32_t get_offset_of_created_41() { return static_cast<int32_t>(offsetof(Reporter_t3561640551_StaticFields, ___created_41)); }
	inline bool get_created_41() const { return ___created_41; }
	inline bool* get_address_of_created_41() { return &___created_41; }
	inline void set_created_41(bool value)
	{
		___created_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
