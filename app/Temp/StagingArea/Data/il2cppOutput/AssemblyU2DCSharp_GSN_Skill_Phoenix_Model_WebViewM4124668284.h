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
// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh4050950157.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.WebViewManager
struct  WebViewManager_t4124668284  : public SingletonMonoBehaviour_1_t4050950157
{
public:
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.Model.WebViewManager::_webObj
	WebObjectWrapper_t631940280 * ____webObj_5;

public:
	inline static int32_t get_offset_of__webObj_5() { return static_cast<int32_t>(offsetof(WebViewManager_t4124668284, ____webObj_5)); }
	inline WebObjectWrapper_t631940280 * get__webObj_5() const { return ____webObj_5; }
	inline WebObjectWrapper_t631940280 ** get_address_of__webObj_5() { return &____webObj_5; }
	inline void set__webObj_5(WebObjectWrapper_t631940280 * value)
	{
		____webObj_5 = value;
		Il2CppCodeGenWriteBarrier(&____webObj_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
