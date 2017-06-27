#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t3361889291;

#include "System_System_Net_Mail_AttachmentBase3226558610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.AlternateView
struct  AlternateView_t1668264691  : public AttachmentBase_t3226558610
{
public:
	// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::linkedResources
	LinkedResourceCollection_t3361889291 * ___linkedResources_4;

public:
	inline static int32_t get_offset_of_linkedResources_4() { return static_cast<int32_t>(offsetof(AlternateView_t1668264691, ___linkedResources_4)); }
	inline LinkedResourceCollection_t3361889291 * get_linkedResources_4() const { return ___linkedResources_4; }
	inline LinkedResourceCollection_t3361889291 ** get_address_of_linkedResources_4() { return &___linkedResources_4; }
	inline void set_linkedResources_4(LinkedResourceCollection_t3361889291 * value)
	{
		___linkedResources_4 = value;
		Il2CppCodeGenWriteBarrier(&___linkedResources_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
