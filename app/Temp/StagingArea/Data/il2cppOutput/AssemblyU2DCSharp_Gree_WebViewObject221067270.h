#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gree.WebViewObject
struct  WebViewObject_t221067270  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<System.String> Gree.WebViewObject::onJS
	Action_1_t1831019615 * ___onJS_2;
	// System.Action`1<System.String> Gree.WebViewObject::onError
	Action_1_t1831019615 * ___onError_3;
	// System.Action`1<System.String> Gree.WebViewObject::onLoaded
	Action_1_t1831019615 * ___onLoaded_4;
	// System.Boolean Gree.WebViewObject::visibility
	bool ___visibility_5;
	// System.IntPtr Gree.WebViewObject::webView
	IntPtr_t ___webView_6;

public:
	inline static int32_t get_offset_of_onJS_2() { return static_cast<int32_t>(offsetof(WebViewObject_t221067270, ___onJS_2)); }
	inline Action_1_t1831019615 * get_onJS_2() const { return ___onJS_2; }
	inline Action_1_t1831019615 ** get_address_of_onJS_2() { return &___onJS_2; }
	inline void set_onJS_2(Action_1_t1831019615 * value)
	{
		___onJS_2 = value;
		Il2CppCodeGenWriteBarrier(&___onJS_2, value);
	}

	inline static int32_t get_offset_of_onError_3() { return static_cast<int32_t>(offsetof(WebViewObject_t221067270, ___onError_3)); }
	inline Action_1_t1831019615 * get_onError_3() const { return ___onError_3; }
	inline Action_1_t1831019615 ** get_address_of_onError_3() { return &___onError_3; }
	inline void set_onError_3(Action_1_t1831019615 * value)
	{
		___onError_3 = value;
		Il2CppCodeGenWriteBarrier(&___onError_3, value);
	}

	inline static int32_t get_offset_of_onLoaded_4() { return static_cast<int32_t>(offsetof(WebViewObject_t221067270, ___onLoaded_4)); }
	inline Action_1_t1831019615 * get_onLoaded_4() const { return ___onLoaded_4; }
	inline Action_1_t1831019615 ** get_address_of_onLoaded_4() { return &___onLoaded_4; }
	inline void set_onLoaded_4(Action_1_t1831019615 * value)
	{
		___onLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___onLoaded_4, value);
	}

	inline static int32_t get_offset_of_visibility_5() { return static_cast<int32_t>(offsetof(WebViewObject_t221067270, ___visibility_5)); }
	inline bool get_visibility_5() const { return ___visibility_5; }
	inline bool* get_address_of_visibility_5() { return &___visibility_5; }
	inline void set_visibility_5(bool value)
	{
		___visibility_5 = value;
	}

	inline static int32_t get_offset_of_webView_6() { return static_cast<int32_t>(offsetof(WebViewObject_t221067270, ___webView_6)); }
	inline IntPtr_t get_webView_6() const { return ___webView_6; }
	inline IntPtr_t* get_address_of_webView_6() { return &___webView_6; }
	inline void set_webView_6(IntPtr_t value)
	{
		___webView_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
