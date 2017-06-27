#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.UI.Image
struct Image_t2042527209;
// GSN.Skill.Phoenix.View.GameResource
struct GameResource_t1931330162;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Scrollabl2826640284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.TournamentScreenView
struct  TournamentScreenView_t2885430318  : public ScrollableScreenView_t2826640284
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.TournamentScreenView::_tournamentListParent
	Transform_t3275118058 * ____tournamentListParent_10;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.TournamentScreenView::_gameHeader
	Transform_t3275118058 * ____gameHeader_11;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentScreenView::_gameDescription
	TextMeshProUGUI_t934157183 * ____gameDescription_12;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.TournamentScreenView::_footerBackground
	Image_t2042527209 * ____footerBackground_13;
	// GSN.Skill.Phoenix.View.GameResource GSN.Skill.Phoenix.View.TournamentScreenView::_gameResource
	GameResource_t1931330162 * ____gameResource_14;

public:
	inline static int32_t get_offset_of__tournamentListParent_10() { return static_cast<int32_t>(offsetof(TournamentScreenView_t2885430318, ____tournamentListParent_10)); }
	inline Transform_t3275118058 * get__tournamentListParent_10() const { return ____tournamentListParent_10; }
	inline Transform_t3275118058 ** get_address_of__tournamentListParent_10() { return &____tournamentListParent_10; }
	inline void set__tournamentListParent_10(Transform_t3275118058 * value)
	{
		____tournamentListParent_10 = value;
		Il2CppCodeGenWriteBarrier(&____tournamentListParent_10, value);
	}

	inline static int32_t get_offset_of__gameHeader_11() { return static_cast<int32_t>(offsetof(TournamentScreenView_t2885430318, ____gameHeader_11)); }
	inline Transform_t3275118058 * get__gameHeader_11() const { return ____gameHeader_11; }
	inline Transform_t3275118058 ** get_address_of__gameHeader_11() { return &____gameHeader_11; }
	inline void set__gameHeader_11(Transform_t3275118058 * value)
	{
		____gameHeader_11 = value;
		Il2CppCodeGenWriteBarrier(&____gameHeader_11, value);
	}

	inline static int32_t get_offset_of__gameDescription_12() { return static_cast<int32_t>(offsetof(TournamentScreenView_t2885430318, ____gameDescription_12)); }
	inline TextMeshProUGUI_t934157183 * get__gameDescription_12() const { return ____gameDescription_12; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__gameDescription_12() { return &____gameDescription_12; }
	inline void set__gameDescription_12(TextMeshProUGUI_t934157183 * value)
	{
		____gameDescription_12 = value;
		Il2CppCodeGenWriteBarrier(&____gameDescription_12, value);
	}

	inline static int32_t get_offset_of__footerBackground_13() { return static_cast<int32_t>(offsetof(TournamentScreenView_t2885430318, ____footerBackground_13)); }
	inline Image_t2042527209 * get__footerBackground_13() const { return ____footerBackground_13; }
	inline Image_t2042527209 ** get_address_of__footerBackground_13() { return &____footerBackground_13; }
	inline void set__footerBackground_13(Image_t2042527209 * value)
	{
		____footerBackground_13 = value;
		Il2CppCodeGenWriteBarrier(&____footerBackground_13, value);
	}

	inline static int32_t get_offset_of__gameResource_14() { return static_cast<int32_t>(offsetof(TournamentScreenView_t2885430318, ____gameResource_14)); }
	inline GameResource_t1931330162 * get__gameResource_14() const { return ____gameResource_14; }
	inline GameResource_t1931330162 ** get_address_of__gameResource_14() { return &____gameResource_14; }
	inline void set__gameResource_14(GameResource_t1931330162 * value)
	{
		____gameResource_14 = value;
		Il2CppCodeGenWriteBarrier(&____gameResource_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
