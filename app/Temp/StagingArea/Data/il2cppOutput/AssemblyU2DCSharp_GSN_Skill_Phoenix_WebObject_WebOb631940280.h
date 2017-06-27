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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Gree.WebViewObject
struct WebViewObject_t221067270;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct  WebObjectWrapper_t631940280  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.WebObject.WebObjectWrapper::url
	String_t* ___url_0;
	// UnityEngine.GameObject GSN.Skill.Phoenix.WebObject.WebObjectWrapper::unityObject
	GameObject_t1756533147 * ___unityObject_1;
	// Gree.WebViewObject GSN.Skill.Phoenix.WebObject.WebObjectWrapper::webViewObject
	WebViewObject_t221067270 * ___webViewObject_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.WebObject.WebObjectWrapper::_customHeaders
	Dictionary_2_t3943999495 * ____customHeaders_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(WebObjectWrapper_t631940280, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_unityObject_1() { return static_cast<int32_t>(offsetof(WebObjectWrapper_t631940280, ___unityObject_1)); }
	inline GameObject_t1756533147 * get_unityObject_1() const { return ___unityObject_1; }
	inline GameObject_t1756533147 ** get_address_of_unityObject_1() { return &___unityObject_1; }
	inline void set_unityObject_1(GameObject_t1756533147 * value)
	{
		___unityObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___unityObject_1, value);
	}

	inline static int32_t get_offset_of_webViewObject_2() { return static_cast<int32_t>(offsetof(WebObjectWrapper_t631940280, ___webViewObject_2)); }
	inline WebViewObject_t221067270 * get_webViewObject_2() const { return ___webViewObject_2; }
	inline WebViewObject_t221067270 ** get_address_of_webViewObject_2() { return &___webViewObject_2; }
	inline void set_webViewObject_2(WebViewObject_t221067270 * value)
	{
		___webViewObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___webViewObject_2, value);
	}

	inline static int32_t get_offset_of__customHeaders_3() { return static_cast<int32_t>(offsetof(WebObjectWrapper_t631940280, ____customHeaders_3)); }
	inline Dictionary_2_t3943999495 * get__customHeaders_3() const { return ____customHeaders_3; }
	inline Dictionary_2_t3943999495 ** get_address_of__customHeaders_3() { return &____customHeaders_3; }
	inline void set__customHeaders_3(Dictionary_2_t3943999495 * value)
	{
		____customHeaders_3 = value;
		Il2CppCodeGenWriteBarrier(&____customHeaders_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
