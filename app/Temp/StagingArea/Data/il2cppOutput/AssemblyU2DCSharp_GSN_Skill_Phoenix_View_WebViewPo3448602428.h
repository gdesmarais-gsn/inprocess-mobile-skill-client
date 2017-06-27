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
// UnityEngine.UI.Button
struct Button_t2872111280;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t2574720772;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.WebViewPopupView
struct  WebViewPopupView_t3448602428  : public PopupView_t1248909057
{
public:
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.WebViewPopupView::_webViewObject
	GameObject_t1756533147 * ____webViewObject_11;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.WebViewPopupView::_header
	GameObject_t1756533147 * ____header_12;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.WebViewPopupView::_closeButton
	Button_t2872111280 * ____closeButton_13;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.WebViewPopupView::_headerText
	TextMeshProUGUI_t934157183 * ____headerText_14;
	// System.Int32 GSN.Skill.Phoenix.View.WebViewPopupView::_headerHeight
	int32_t ____headerHeight_15;
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.View.WebViewPopupView::webObj
	WebObjectWrapper_t631940280 * ___webObj_17;
	// UnityEngine.UI.CanvasScaler GSN.Skill.Phoenix.View.WebViewPopupView::_canvasScaler
	CanvasScaler_t2574720772 * ____canvasScaler_18;

public:
	inline static int32_t get_offset_of__webViewObject_11() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ____webViewObject_11)); }
	inline GameObject_t1756533147 * get__webViewObject_11() const { return ____webViewObject_11; }
	inline GameObject_t1756533147 ** get_address_of__webViewObject_11() { return &____webViewObject_11; }
	inline void set__webViewObject_11(GameObject_t1756533147 * value)
	{
		____webViewObject_11 = value;
		Il2CppCodeGenWriteBarrier(&____webViewObject_11, value);
	}

	inline static int32_t get_offset_of__header_12() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ____header_12)); }
	inline GameObject_t1756533147 * get__header_12() const { return ____header_12; }
	inline GameObject_t1756533147 ** get_address_of__header_12() { return &____header_12; }
	inline void set__header_12(GameObject_t1756533147 * value)
	{
		____header_12 = value;
		Il2CppCodeGenWriteBarrier(&____header_12, value);
	}

	inline static int32_t get_offset_of__closeButton_13() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ____closeButton_13)); }
	inline Button_t2872111280 * get__closeButton_13() const { return ____closeButton_13; }
	inline Button_t2872111280 ** get_address_of__closeButton_13() { return &____closeButton_13; }
	inline void set__closeButton_13(Button_t2872111280 * value)
	{
		____closeButton_13 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_13, value);
	}

	inline static int32_t get_offset_of__headerText_14() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ____headerText_14)); }
	inline TextMeshProUGUI_t934157183 * get__headerText_14() const { return ____headerText_14; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__headerText_14() { return &____headerText_14; }
	inline void set__headerText_14(TextMeshProUGUI_t934157183 * value)
	{
		____headerText_14 = value;
		Il2CppCodeGenWriteBarrier(&____headerText_14, value);
	}

	inline static int32_t get_offset_of__headerHeight_15() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ____headerHeight_15)); }
	inline int32_t get__headerHeight_15() const { return ____headerHeight_15; }
	inline int32_t* get_address_of__headerHeight_15() { return &____headerHeight_15; }
	inline void set__headerHeight_15(int32_t value)
	{
		____headerHeight_15 = value;
	}

	inline static int32_t get_offset_of_webObj_17() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ___webObj_17)); }
	inline WebObjectWrapper_t631940280 * get_webObj_17() const { return ___webObj_17; }
	inline WebObjectWrapper_t631940280 ** get_address_of_webObj_17() { return &___webObj_17; }
	inline void set_webObj_17(WebObjectWrapper_t631940280 * value)
	{
		___webObj_17 = value;
		Il2CppCodeGenWriteBarrier(&___webObj_17, value);
	}

	inline static int32_t get_offset_of__canvasScaler_18() { return static_cast<int32_t>(offsetof(WebViewPopupView_t3448602428, ____canvasScaler_18)); }
	inline CanvasScaler_t2574720772 * get__canvasScaler_18() const { return ____canvasScaler_18; }
	inline CanvasScaler_t2574720772 ** get_address_of__canvasScaler_18() { return &____canvasScaler_18; }
	inline void set__canvasScaler_18(CanvasScaler_t2574720772 * value)
	{
		____canvasScaler_18 = value;
		Il2CppCodeGenWriteBarrier(&____canvasScaler_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
