#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.WebViewPopupModel
struct  WebViewPopupModel_t2457248234  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.Model.Popups.WebViewPopupModel::_webObj
	WebObjectWrapper_t631940280 * ____webObj_0;

public:
	inline static int32_t get_offset_of__webObj_0() { return static_cast<int32_t>(offsetof(WebViewPopupModel_t2457248234, ____webObj_0)); }
	inline WebObjectWrapper_t631940280 * get__webObj_0() const { return ____webObj_0; }
	inline WebObjectWrapper_t631940280 ** get_address_of__webObj_0() { return &____webObj_0; }
	inline void set__webObj_0(WebObjectWrapper_t631940280 * value)
	{
		____webObj_0 = value;
		Il2CppCodeGenWriteBarrier(&____webObj_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
