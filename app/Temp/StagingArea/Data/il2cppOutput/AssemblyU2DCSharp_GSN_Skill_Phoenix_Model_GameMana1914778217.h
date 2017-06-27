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
// GSN.Skill.Phoenix.Model.MainModel
struct MainModel_t781558146;
// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper
struct WebGameObjectWrapper_t3716051462;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Phoenix.Model.GameManager/DisconnectHandler
struct DisconnectHandler_t3071104101;
// GSN.Skill.Phoenix.TournamentSignupSuccessEvent
struct TournamentSignupSuccessEvent_t1669876612;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh1841060090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.GameManager
struct  GameManager_t1914778217  : public SingletonMonoBehaviour_1_t1841060090
{
public:
	// GSN.Skill.Phoenix.Model.MainModel GSN.Skill.Phoenix.Model.GameManager::_model
	MainModel_t781558146 * ____model_6;
	// GSN.Skill.Phoenix.Model.SceneManager GSN.Skill.Phoenix.Model.GameManager::_sceneManager
	SceneManager_t2219221181 * ____sceneManager_7;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.GameManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_8;
	// GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper GSN.Skill.Phoenix.Model.GameManager::_webGame
	WebGameObjectWrapper_t3716051462 * ____webGame_9;
	// GSN.Skill.Events.IEvent GSN.Skill.Phoenix.Model.GameManager::_returningEvent
	Il2CppObject * ____returningEvent_10;
	// GSN.Skill.Phoenix.Model.GameManager/DisconnectHandler GSN.Skill.Phoenix.Model.GameManager::_disconnectHandler
	DisconnectHandler_t3071104101 * ____disconnectHandler_11;
	// GSN.Skill.Phoenix.TournamentSignupSuccessEvent GSN.Skill.Phoenix.Model.GameManager::currentTournament
	TournamentSignupSuccessEvent_t1669876612 * ___currentTournament_12;

public:
	inline static int32_t get_offset_of__model_6() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ____model_6)); }
	inline MainModel_t781558146 * get__model_6() const { return ____model_6; }
	inline MainModel_t781558146 ** get_address_of__model_6() { return &____model_6; }
	inline void set__model_6(MainModel_t781558146 * value)
	{
		____model_6 = value;
		Il2CppCodeGenWriteBarrier(&____model_6, value);
	}

	inline static int32_t get_offset_of__sceneManager_7() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ____sceneManager_7)); }
	inline SceneManager_t2219221181 * get__sceneManager_7() const { return ____sceneManager_7; }
	inline SceneManager_t2219221181 ** get_address_of__sceneManager_7() { return &____sceneManager_7; }
	inline void set__sceneManager_7(SceneManager_t2219221181 * value)
	{
		____sceneManager_7 = value;
		Il2CppCodeGenWriteBarrier(&____sceneManager_7, value);
	}

	inline static int32_t get_offset_of__currentUser_8() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ____currentUser_8)); }
	inline CurrentUser_t3910039426 * get__currentUser_8() const { return ____currentUser_8; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_8() { return &____currentUser_8; }
	inline void set__currentUser_8(CurrentUser_t3910039426 * value)
	{
		____currentUser_8 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_8, value);
	}

	inline static int32_t get_offset_of__webGame_9() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ____webGame_9)); }
	inline WebGameObjectWrapper_t3716051462 * get__webGame_9() const { return ____webGame_9; }
	inline WebGameObjectWrapper_t3716051462 ** get_address_of__webGame_9() { return &____webGame_9; }
	inline void set__webGame_9(WebGameObjectWrapper_t3716051462 * value)
	{
		____webGame_9 = value;
		Il2CppCodeGenWriteBarrier(&____webGame_9, value);
	}

	inline static int32_t get_offset_of__returningEvent_10() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ____returningEvent_10)); }
	inline Il2CppObject * get__returningEvent_10() const { return ____returningEvent_10; }
	inline Il2CppObject ** get_address_of__returningEvent_10() { return &____returningEvent_10; }
	inline void set__returningEvent_10(Il2CppObject * value)
	{
		____returningEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&____returningEvent_10, value);
	}

	inline static int32_t get_offset_of__disconnectHandler_11() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ____disconnectHandler_11)); }
	inline DisconnectHandler_t3071104101 * get__disconnectHandler_11() const { return ____disconnectHandler_11; }
	inline DisconnectHandler_t3071104101 ** get_address_of__disconnectHandler_11() { return &____disconnectHandler_11; }
	inline void set__disconnectHandler_11(DisconnectHandler_t3071104101 * value)
	{
		____disconnectHandler_11 = value;
		Il2CppCodeGenWriteBarrier(&____disconnectHandler_11, value);
	}

	inline static int32_t get_offset_of_currentTournament_12() { return static_cast<int32_t>(offsetof(GameManager_t1914778217, ___currentTournament_12)); }
	inline TournamentSignupSuccessEvent_t1669876612 * get_currentTournament_12() const { return ___currentTournament_12; }
	inline TournamentSignupSuccessEvent_t1669876612 ** get_address_of_currentTournament_12() { return &___currentTournament_12; }
	inline void set_currentTournament_12(TournamentSignupSuccessEvent_t1669876612 * value)
	{
		___currentTournament_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentTournament_12, value);
	}
};

struct GameManager_t1914778217_StaticFields
{
public:
	// System.Action GSN.Skill.Phoenix.Model.GameManager::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(GameManager_t1914778217_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
