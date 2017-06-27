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
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents
struct AnalyticsEvents_t2028915351;
// GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler
struct FabricSessionHandler_t663885285;
// GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData
struct FabricEventTokenRequestData_t931304283;
// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceRequestData
struct FabricEventServiceRequestData_t2543051127;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Model.AnalyticsAttributes>
struct List_1_t3093426729;
// System.Collections.Generic.Queue`1<GSN.Skill.Phoenix.Model.AnalyticsAttributes>
struct Queue_1_t3543962432;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeha222671446.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.AnalyticsManager
struct  AnalyticsManager_t296389573  : public SingletonMonoBehaviour_1_t222671446
{
public:
	// UnityEngine.WaitForSeconds GSN.Skill.Phoenix.Model.AnalyticsManager::ANALYTICS_SEND_INTERVAL
	WaitForSeconds_t3839502067 * ___ANALYTICS_SEND_INTERVAL_5;
	// System.Boolean GSN.Skill.Phoenix.Model.AnalyticsManager::_periodicSendEnabled
	bool ____periodicSendEnabled_6;
	// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents GSN.Skill.Phoenix.Model.AnalyticsManager::_analyticsEvents
	AnalyticsEvents_t2028915351 * ____analyticsEvents_8;
	// GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler GSN.Skill.Phoenix.Model.AnalyticsManager::_fabricSessionHandler
	FabricSessionHandler_t663885285 * ____fabricSessionHandler_9;
	// GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData GSN.Skill.Phoenix.Model.AnalyticsManager::_fabricEventToken
	FabricEventTokenRequestData_t931304283 * ____fabricEventToken_10;
	// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceRequestData GSN.Skill.Phoenix.Model.AnalyticsManager::_fabricEventService
	FabricEventServiceRequestData_t2543051127 * ____fabricEventService_11;
	// System.Boolean GSN.Skill.Phoenix.Model.AnalyticsManager::_sendingAnaltyicsEvents
	bool ____sendingAnaltyicsEvents_12;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Model.AnalyticsAttributes> GSN.Skill.Phoenix.Model.AnalyticsManager::_mainEventQueue
	List_1_t3093426729 * ____mainEventQueue_13;
	// System.Collections.Generic.Queue`1<GSN.Skill.Phoenix.Model.AnalyticsAttributes> GSN.Skill.Phoenix.Model.AnalyticsManager::_postSendEventQueue
	Queue_1_t3543962432 * ____postSendEventQueue_14;

public:
	inline static int32_t get_offset_of_ANALYTICS_SEND_INTERVAL_5() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ___ANALYTICS_SEND_INTERVAL_5)); }
	inline WaitForSeconds_t3839502067 * get_ANALYTICS_SEND_INTERVAL_5() const { return ___ANALYTICS_SEND_INTERVAL_5; }
	inline WaitForSeconds_t3839502067 ** get_address_of_ANALYTICS_SEND_INTERVAL_5() { return &___ANALYTICS_SEND_INTERVAL_5; }
	inline void set_ANALYTICS_SEND_INTERVAL_5(WaitForSeconds_t3839502067 * value)
	{
		___ANALYTICS_SEND_INTERVAL_5 = value;
		Il2CppCodeGenWriteBarrier(&___ANALYTICS_SEND_INTERVAL_5, value);
	}

	inline static int32_t get_offset_of__periodicSendEnabled_6() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____periodicSendEnabled_6)); }
	inline bool get__periodicSendEnabled_6() const { return ____periodicSendEnabled_6; }
	inline bool* get_address_of__periodicSendEnabled_6() { return &____periodicSendEnabled_6; }
	inline void set__periodicSendEnabled_6(bool value)
	{
		____periodicSendEnabled_6 = value;
	}

	inline static int32_t get_offset_of__analyticsEvents_8() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____analyticsEvents_8)); }
	inline AnalyticsEvents_t2028915351 * get__analyticsEvents_8() const { return ____analyticsEvents_8; }
	inline AnalyticsEvents_t2028915351 ** get_address_of__analyticsEvents_8() { return &____analyticsEvents_8; }
	inline void set__analyticsEvents_8(AnalyticsEvents_t2028915351 * value)
	{
		____analyticsEvents_8 = value;
		Il2CppCodeGenWriteBarrier(&____analyticsEvents_8, value);
	}

	inline static int32_t get_offset_of__fabricSessionHandler_9() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____fabricSessionHandler_9)); }
	inline FabricSessionHandler_t663885285 * get__fabricSessionHandler_9() const { return ____fabricSessionHandler_9; }
	inline FabricSessionHandler_t663885285 ** get_address_of__fabricSessionHandler_9() { return &____fabricSessionHandler_9; }
	inline void set__fabricSessionHandler_9(FabricSessionHandler_t663885285 * value)
	{
		____fabricSessionHandler_9 = value;
		Il2CppCodeGenWriteBarrier(&____fabricSessionHandler_9, value);
	}

	inline static int32_t get_offset_of__fabricEventToken_10() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____fabricEventToken_10)); }
	inline FabricEventTokenRequestData_t931304283 * get__fabricEventToken_10() const { return ____fabricEventToken_10; }
	inline FabricEventTokenRequestData_t931304283 ** get_address_of__fabricEventToken_10() { return &____fabricEventToken_10; }
	inline void set__fabricEventToken_10(FabricEventTokenRequestData_t931304283 * value)
	{
		____fabricEventToken_10 = value;
		Il2CppCodeGenWriteBarrier(&____fabricEventToken_10, value);
	}

	inline static int32_t get_offset_of__fabricEventService_11() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____fabricEventService_11)); }
	inline FabricEventServiceRequestData_t2543051127 * get__fabricEventService_11() const { return ____fabricEventService_11; }
	inline FabricEventServiceRequestData_t2543051127 ** get_address_of__fabricEventService_11() { return &____fabricEventService_11; }
	inline void set__fabricEventService_11(FabricEventServiceRequestData_t2543051127 * value)
	{
		____fabricEventService_11 = value;
		Il2CppCodeGenWriteBarrier(&____fabricEventService_11, value);
	}

	inline static int32_t get_offset_of__sendingAnaltyicsEvents_12() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____sendingAnaltyicsEvents_12)); }
	inline bool get__sendingAnaltyicsEvents_12() const { return ____sendingAnaltyicsEvents_12; }
	inline bool* get_address_of__sendingAnaltyicsEvents_12() { return &____sendingAnaltyicsEvents_12; }
	inline void set__sendingAnaltyicsEvents_12(bool value)
	{
		____sendingAnaltyicsEvents_12 = value;
	}

	inline static int32_t get_offset_of__mainEventQueue_13() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____mainEventQueue_13)); }
	inline List_1_t3093426729 * get__mainEventQueue_13() const { return ____mainEventQueue_13; }
	inline List_1_t3093426729 ** get_address_of__mainEventQueue_13() { return &____mainEventQueue_13; }
	inline void set__mainEventQueue_13(List_1_t3093426729 * value)
	{
		____mainEventQueue_13 = value;
		Il2CppCodeGenWriteBarrier(&____mainEventQueue_13, value);
	}

	inline static int32_t get_offset_of__postSendEventQueue_14() { return static_cast<int32_t>(offsetof(AnalyticsManager_t296389573, ____postSendEventQueue_14)); }
	inline Queue_1_t3543962432 * get__postSendEventQueue_14() const { return ____postSendEventQueue_14; }
	inline Queue_1_t3543962432 ** get_address_of__postSendEventQueue_14() { return &____postSendEventQueue_14; }
	inline void set__postSendEventQueue_14(Queue_1_t3543962432 * value)
	{
		____postSendEventQueue_14 = value;
		Il2CppCodeGenWriteBarrier(&____postSendEventQueue_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
