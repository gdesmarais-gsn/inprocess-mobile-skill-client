#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Reporter
struct Reporter_t3561640551;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReporterGUI
struct  ReporterGUI_t402918452  : public MonoBehaviour_t1158329972
{
public:
	// Reporter ReporterGUI::reporter
	Reporter_t3561640551 * ___reporter_2;

public:
	inline static int32_t get_offset_of_reporter_2() { return static_cast<int32_t>(offsetof(ReporterGUI_t402918452, ___reporter_2)); }
	inline Reporter_t3561640551 * get_reporter_2() const { return ___reporter_2; }
	inline Reporter_t3561640551 ** get_address_of_reporter_2() { return &___reporter_2; }
	inline void set_reporter_2(Reporter_t3561640551 * value)
	{
		___reporter_2 = value;
		Il2CppCodeGenWriteBarrier(&___reporter_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
