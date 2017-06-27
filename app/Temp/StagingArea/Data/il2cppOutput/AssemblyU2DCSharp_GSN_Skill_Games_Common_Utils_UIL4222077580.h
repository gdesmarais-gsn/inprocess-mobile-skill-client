#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ILoadingData>
struct List_1_t2813394365;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.UILoadData/LoadCompleteHandler
struct LoadCompleteHandler_t1319707260;
// GSN.Skill.Games.Common.Utils.PercentLoading
struct PercentLoading_t2067839291;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si2402529769.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.UILoadData
struct  UILoadData_t4222077580  : public Singleton_1_t2402529769
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ILoadingData> GSN.Skill.Games.Common.Utils.UILoadData::loadingData
	List_1_t2813394365 * ___loadingData_1;
	// System.String GSN.Skill.Games.Common.Utils.UILoadData::NextSceneName
	String_t* ___NextSceneName_2;
	// GSN.Skill.Games.Common.Utils.UILoadData/LoadCompleteHandler GSN.Skill.Games.Common.Utils.UILoadData::OnLoadingComplete
	LoadCompleteHandler_t1319707260 * ___OnLoadingComplete_3;
	// System.Boolean GSN.Skill.Games.Common.Utils.UILoadData::oldLogic
	bool ___oldLogic_4;
	// GSN.Skill.Games.Common.Utils.PercentLoading GSN.Skill.Games.Common.Utils.UILoadData::_prefabLoadProgress
	PercentLoading_t2067839291 * ____prefabLoadProgress_5;
	// GSN.Skill.Games.Common.Utils.PercentLoading GSN.Skill.Games.Common.Utils.UILoadData::_sceneProgress
	PercentLoading_t2067839291 * ____sceneProgress_6;
	// GSN.Skill.Games.Common.Utils.PercentLoading GSN.Skill.Games.Common.Utils.UILoadData::_preloaderProgress
	PercentLoading_t2067839291 * ____preloaderProgress_7;

public:
	inline static int32_t get_offset_of_loadingData_1() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ___loadingData_1)); }
	inline List_1_t2813394365 * get_loadingData_1() const { return ___loadingData_1; }
	inline List_1_t2813394365 ** get_address_of_loadingData_1() { return &___loadingData_1; }
	inline void set_loadingData_1(List_1_t2813394365 * value)
	{
		___loadingData_1 = value;
		Il2CppCodeGenWriteBarrier(&___loadingData_1, value);
	}

	inline static int32_t get_offset_of_NextSceneName_2() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ___NextSceneName_2)); }
	inline String_t* get_NextSceneName_2() const { return ___NextSceneName_2; }
	inline String_t** get_address_of_NextSceneName_2() { return &___NextSceneName_2; }
	inline void set_NextSceneName_2(String_t* value)
	{
		___NextSceneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___NextSceneName_2, value);
	}

	inline static int32_t get_offset_of_OnLoadingComplete_3() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ___OnLoadingComplete_3)); }
	inline LoadCompleteHandler_t1319707260 * get_OnLoadingComplete_3() const { return ___OnLoadingComplete_3; }
	inline LoadCompleteHandler_t1319707260 ** get_address_of_OnLoadingComplete_3() { return &___OnLoadingComplete_3; }
	inline void set_OnLoadingComplete_3(LoadCompleteHandler_t1319707260 * value)
	{
		___OnLoadingComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadingComplete_3, value);
	}

	inline static int32_t get_offset_of_oldLogic_4() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ___oldLogic_4)); }
	inline bool get_oldLogic_4() const { return ___oldLogic_4; }
	inline bool* get_address_of_oldLogic_4() { return &___oldLogic_4; }
	inline void set_oldLogic_4(bool value)
	{
		___oldLogic_4 = value;
	}

	inline static int32_t get_offset_of__prefabLoadProgress_5() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ____prefabLoadProgress_5)); }
	inline PercentLoading_t2067839291 * get__prefabLoadProgress_5() const { return ____prefabLoadProgress_5; }
	inline PercentLoading_t2067839291 ** get_address_of__prefabLoadProgress_5() { return &____prefabLoadProgress_5; }
	inline void set__prefabLoadProgress_5(PercentLoading_t2067839291 * value)
	{
		____prefabLoadProgress_5 = value;
		Il2CppCodeGenWriteBarrier(&____prefabLoadProgress_5, value);
	}

	inline static int32_t get_offset_of__sceneProgress_6() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ____sceneProgress_6)); }
	inline PercentLoading_t2067839291 * get__sceneProgress_6() const { return ____sceneProgress_6; }
	inline PercentLoading_t2067839291 ** get_address_of__sceneProgress_6() { return &____sceneProgress_6; }
	inline void set__sceneProgress_6(PercentLoading_t2067839291 * value)
	{
		____sceneProgress_6 = value;
		Il2CppCodeGenWriteBarrier(&____sceneProgress_6, value);
	}

	inline static int32_t get_offset_of__preloaderProgress_7() { return static_cast<int32_t>(offsetof(UILoadData_t4222077580, ____preloaderProgress_7)); }
	inline PercentLoading_t2067839291 * get__preloaderProgress_7() const { return ____preloaderProgress_7; }
	inline PercentLoading_t2067839291 ** get_address_of__preloaderProgress_7() { return &____preloaderProgress_7; }
	inline void set__preloaderProgress_7(PercentLoading_t2067839291 * value)
	{
		____preloaderProgress_7 = value;
		Il2CppCodeGenWriteBarrier(&____preloaderProgress_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
