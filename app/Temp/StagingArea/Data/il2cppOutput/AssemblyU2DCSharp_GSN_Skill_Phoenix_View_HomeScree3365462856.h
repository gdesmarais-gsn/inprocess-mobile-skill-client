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
// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Scrollabl2826640284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.HomeScreenView
struct  HomeScreenView_t3365462856  : public ScrollableScreenView_t2826640284
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.HomeScreenView::_gameListParent
	Transform_t3275118058 * ____gameListParent_10;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.HomeScreenView::_promoBanner
	Image_t2042527209 * ____promoBanner_11;

public:
	inline static int32_t get_offset_of__gameListParent_10() { return static_cast<int32_t>(offsetof(HomeScreenView_t3365462856, ____gameListParent_10)); }
	inline Transform_t3275118058 * get__gameListParent_10() const { return ____gameListParent_10; }
	inline Transform_t3275118058 ** get_address_of__gameListParent_10() { return &____gameListParent_10; }
	inline void set__gameListParent_10(Transform_t3275118058 * value)
	{
		____gameListParent_10 = value;
		Il2CppCodeGenWriteBarrier(&____gameListParent_10, value);
	}

	inline static int32_t get_offset_of__promoBanner_11() { return static_cast<int32_t>(offsetof(HomeScreenView_t3365462856, ____promoBanner_11)); }
	inline Image_t2042527209 * get__promoBanner_11() const { return ____promoBanner_11; }
	inline Image_t2042527209 ** get_address_of__promoBanner_11() { return &____promoBanner_11; }
	inline void set__promoBanner_11(Image_t2042527209 * value)
	{
		____promoBanner_11 = value;
		Il2CppCodeGenWriteBarrier(&____promoBanner_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
