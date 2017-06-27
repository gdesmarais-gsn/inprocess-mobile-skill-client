#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t4230068110  : public Il2CppObject
{
public:
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_0;

public:
	inline static int32_t get_offset_of_cancel_pending_0() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___cancel_pending_0)); }
	inline bool get_cancel_pending_0() const { return ___cancel_pending_0; }
	inline bool* get_address_of_cancel_pending_0() { return &___cancel_pending_0; }
	inline void set_cancel_pending_0(bool value)
	{
		___cancel_pending_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
