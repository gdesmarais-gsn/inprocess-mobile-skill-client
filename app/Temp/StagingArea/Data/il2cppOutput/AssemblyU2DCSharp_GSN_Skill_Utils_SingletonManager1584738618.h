#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Utils.IDestroyable>
struct List_1_t1232768029;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh1511020491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Utils.SingletonManager
struct  SingletonManager_t1584738618  : public SingletonMonoBehaviour_1_t1511020491
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Utils.IDestroyable> GSN.Skill.Utils.SingletonManager::_singletons
	List_1_t1232768029 * ____singletons_3;

public:
	inline static int32_t get_offset_of__singletons_3() { return static_cast<int32_t>(offsetof(SingletonManager_t1584738618, ____singletons_3)); }
	inline List_1_t1232768029 * get__singletons_3() const { return ____singletons_3; }
	inline List_1_t1232768029 ** get_address_of__singletons_3() { return &____singletons_3; }
	inline void set__singletons_3(List_1_t1232768029 * value)
	{
		____singletons_3 = value;
		Il2CppCodeGenWriteBarrier(&____singletons_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
