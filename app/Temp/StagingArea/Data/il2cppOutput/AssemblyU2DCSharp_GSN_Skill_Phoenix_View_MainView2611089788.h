#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.View.MainScrollSnap
struct MainScrollSnap_t3907163320;
// UnityEngine.Transform
struct Transform_t3275118058;
// GSN.Skill.Phoenix.View.TournamentScreenView
struct TournamentScreenView_t2885430318;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Phoenix.View.NavbarView
struct NavbarView_t1317769551;
// GSN.Skill.Phoenix.View.HomeScreenView
struct HomeScreenView_t3365462856;
// System.String
struct String_t;
// GSN.Skill.Phoenix.View.GameResource
struct GameResource_t1931330162;
// GSN.Skill.Phoenix.View.PoolResources
struct PoolResources_t291861097;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.MainView
struct  MainView_t2611089788  : public BaseView_t2538946938
{
public:
	// GSN.Skill.Phoenix.View.MainScrollSnap GSN.Skill.Phoenix.View.MainView::_mainScrollView
	MainScrollSnap_t3907163320 * ____mainScrollView_5;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.MainView::_popupAnchor
	Transform_t3275118058 * ____popupAnchor_6;
	// GSN.Skill.Phoenix.View.TournamentScreenView GSN.Skill.Phoenix.View.MainView::_tournamentScreen
	TournamentScreenView_t2885430318 * ____tournamentScreen_7;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.MainView::_hud
	GameObject_t1756533147 * ____hud_8;
	// GSN.Skill.Phoenix.View.NavbarView GSN.Skill.Phoenix.View.MainView::_navBar
	NavbarView_t1317769551 * ____navBar_9;
	// GSN.Skill.Phoenix.View.HomeScreenView GSN.Skill.Phoenix.View.MainView::_homeScreen
	HomeScreenView_t3365462856 * ____homeScreen_10;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.MainView::_welcomeScreen
	GameObject_t1756533147 * ____welcomeScreen_11;
	// GSN.Skill.Phoenix.View.GameResource GSN.Skill.Phoenix.View.MainView::_activeGame
	GameResource_t1931330162 * ____activeGame_23;
	// System.String GSN.Skill.Phoenix.View.MainView::_resultsGameResourceName
	String_t* ____resultsGameResourceName_24;
	// GSN.Skill.Phoenix.View.PoolResources GSN.Skill.Phoenix.View.MainView::_resourcePool
	PoolResources_t291861097 * ____resourcePool_27;

public:
	inline static int32_t get_offset_of__mainScrollView_5() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____mainScrollView_5)); }
	inline MainScrollSnap_t3907163320 * get__mainScrollView_5() const { return ____mainScrollView_5; }
	inline MainScrollSnap_t3907163320 ** get_address_of__mainScrollView_5() { return &____mainScrollView_5; }
	inline void set__mainScrollView_5(MainScrollSnap_t3907163320 * value)
	{
		____mainScrollView_5 = value;
		Il2CppCodeGenWriteBarrier(&____mainScrollView_5, value);
	}

	inline static int32_t get_offset_of__popupAnchor_6() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____popupAnchor_6)); }
	inline Transform_t3275118058 * get__popupAnchor_6() const { return ____popupAnchor_6; }
	inline Transform_t3275118058 ** get_address_of__popupAnchor_6() { return &____popupAnchor_6; }
	inline void set__popupAnchor_6(Transform_t3275118058 * value)
	{
		____popupAnchor_6 = value;
		Il2CppCodeGenWriteBarrier(&____popupAnchor_6, value);
	}

	inline static int32_t get_offset_of__tournamentScreen_7() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____tournamentScreen_7)); }
	inline TournamentScreenView_t2885430318 * get__tournamentScreen_7() const { return ____tournamentScreen_7; }
	inline TournamentScreenView_t2885430318 ** get_address_of__tournamentScreen_7() { return &____tournamentScreen_7; }
	inline void set__tournamentScreen_7(TournamentScreenView_t2885430318 * value)
	{
		____tournamentScreen_7 = value;
		Il2CppCodeGenWriteBarrier(&____tournamentScreen_7, value);
	}

	inline static int32_t get_offset_of__hud_8() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____hud_8)); }
	inline GameObject_t1756533147 * get__hud_8() const { return ____hud_8; }
	inline GameObject_t1756533147 ** get_address_of__hud_8() { return &____hud_8; }
	inline void set__hud_8(GameObject_t1756533147 * value)
	{
		____hud_8 = value;
		Il2CppCodeGenWriteBarrier(&____hud_8, value);
	}

	inline static int32_t get_offset_of__navBar_9() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____navBar_9)); }
	inline NavbarView_t1317769551 * get__navBar_9() const { return ____navBar_9; }
	inline NavbarView_t1317769551 ** get_address_of__navBar_9() { return &____navBar_9; }
	inline void set__navBar_9(NavbarView_t1317769551 * value)
	{
		____navBar_9 = value;
		Il2CppCodeGenWriteBarrier(&____navBar_9, value);
	}

	inline static int32_t get_offset_of__homeScreen_10() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____homeScreen_10)); }
	inline HomeScreenView_t3365462856 * get__homeScreen_10() const { return ____homeScreen_10; }
	inline HomeScreenView_t3365462856 ** get_address_of__homeScreen_10() { return &____homeScreen_10; }
	inline void set__homeScreen_10(HomeScreenView_t3365462856 * value)
	{
		____homeScreen_10 = value;
		Il2CppCodeGenWriteBarrier(&____homeScreen_10, value);
	}

	inline static int32_t get_offset_of__welcomeScreen_11() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____welcomeScreen_11)); }
	inline GameObject_t1756533147 * get__welcomeScreen_11() const { return ____welcomeScreen_11; }
	inline GameObject_t1756533147 ** get_address_of__welcomeScreen_11() { return &____welcomeScreen_11; }
	inline void set__welcomeScreen_11(GameObject_t1756533147 * value)
	{
		____welcomeScreen_11 = value;
		Il2CppCodeGenWriteBarrier(&____welcomeScreen_11, value);
	}

	inline static int32_t get_offset_of__activeGame_23() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____activeGame_23)); }
	inline GameResource_t1931330162 * get__activeGame_23() const { return ____activeGame_23; }
	inline GameResource_t1931330162 ** get_address_of__activeGame_23() { return &____activeGame_23; }
	inline void set__activeGame_23(GameResource_t1931330162 * value)
	{
		____activeGame_23 = value;
		Il2CppCodeGenWriteBarrier(&____activeGame_23, value);
	}

	inline static int32_t get_offset_of__resultsGameResourceName_24() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____resultsGameResourceName_24)); }
	inline String_t* get__resultsGameResourceName_24() const { return ____resultsGameResourceName_24; }
	inline String_t** get_address_of__resultsGameResourceName_24() { return &____resultsGameResourceName_24; }
	inline void set__resultsGameResourceName_24(String_t* value)
	{
		____resultsGameResourceName_24 = value;
		Il2CppCodeGenWriteBarrier(&____resultsGameResourceName_24, value);
	}

	inline static int32_t get_offset_of__resourcePool_27() { return static_cast<int32_t>(offsetof(MainView_t2611089788, ____resourcePool_27)); }
	inline PoolResources_t291861097 * get__resourcePool_27() const { return ____resourcePool_27; }
	inline PoolResources_t291861097 ** get_address_of__resourcePool_27() { return &____resourcePool_27; }
	inline void set__resourcePool_27(PoolResources_t291861097 * value)
	{
		____resourcePool_27 = value;
		Il2CppCodeGenWriteBarrier(&____resourcePool_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
