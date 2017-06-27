#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Client.IDestroyable>
struct List_1_t854981509;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si2272038403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.SingletonManager
struct  SingletonManager_t313169018  : public SingletonMonoBehaviour_1_t2272038403
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Client.IDestroyable> GSN.Skill.Games.Common.Client.SingletonManager::_singletons
	List_1_t854981509 * ____singletons_3;

public:
	inline static int32_t get_offset_of__singletons_3() { return static_cast<int32_t>(offsetof(SingletonManager_t313169018, ____singletons_3)); }
	inline List_1_t854981509 * get__singletons_3() const { return ____singletons_3; }
	inline List_1_t854981509 ** get_address_of__singletons_3() { return &____singletons_3; }
	inline void set__singletons_3(List_1_t854981509 * value)
	{
		____singletons_3 = value;
		Il2CppCodeGenWriteBarrier(&____singletons_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
