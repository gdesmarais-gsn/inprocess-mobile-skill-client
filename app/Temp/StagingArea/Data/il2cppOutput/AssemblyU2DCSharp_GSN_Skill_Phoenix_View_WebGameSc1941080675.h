#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.WebGameScreenView
struct  WebGameScreenView_t1941080675  : public ScreenView_t3652740853
{
public:
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.WebGameScreenView::webViewObject
	GameObject_t1756533147 * ___webViewObject_10;
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.View.WebGameScreenView::webObj
	WebObjectWrapper_t631940280 * ___webObj_11;

public:
	inline static int32_t get_offset_of_webViewObject_10() { return static_cast<int32_t>(offsetof(WebGameScreenView_t1941080675, ___webViewObject_10)); }
	inline GameObject_t1756533147 * get_webViewObject_10() const { return ___webViewObject_10; }
	inline GameObject_t1756533147 ** get_address_of_webViewObject_10() { return &___webViewObject_10; }
	inline void set_webViewObject_10(GameObject_t1756533147 * value)
	{
		___webViewObject_10 = value;
		Il2CppCodeGenWriteBarrier(&___webViewObject_10, value);
	}

	inline static int32_t get_offset_of_webObj_11() { return static_cast<int32_t>(offsetof(WebGameScreenView_t1941080675, ___webObj_11)); }
	inline WebObjectWrapper_t631940280 * get_webObj_11() const { return ___webObj_11; }
	inline WebObjectWrapper_t631940280 ** get_address_of_webObj_11() { return &___webObj_11; }
	inline void set_webObj_11(WebObjectWrapper_t631940280 * value)
	{
		___webObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___webObj_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
