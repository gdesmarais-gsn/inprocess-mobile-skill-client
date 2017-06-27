#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Games.Common.Utils.IGsnPooledObject[]
struct IGsnPooledObjectU5BU5D_t3216640892;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Gsn3353525049.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.MonoBehaviourPool
struct  MonoBehaviourPool_t4145220098  : public GsnObjectPool_t3353525049
{
public:
	// UnityEngine.Transform GSN.Skill.Games.Common.Client.MonoBehaviourPool::_parent
	Transform_t3275118058 * ____parent_3;
	// UnityEngine.GameObject GSN.Skill.Games.Common.Client.MonoBehaviourPool::_templateObject
	GameObject_t1756533147 * ____templateObject_4;

public:
	inline static int32_t get_offset_of__parent_3() { return static_cast<int32_t>(offsetof(MonoBehaviourPool_t4145220098, ____parent_3)); }
	inline Transform_t3275118058 * get__parent_3() const { return ____parent_3; }
	inline Transform_t3275118058 ** get_address_of__parent_3() { return &____parent_3; }
	inline void set__parent_3(Transform_t3275118058 * value)
	{
		____parent_3 = value;
		Il2CppCodeGenWriteBarrier(&____parent_3, value);
	}

	inline static int32_t get_offset_of__templateObject_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPool_t4145220098, ____templateObject_4)); }
	inline GameObject_t1756533147 * get__templateObject_4() const { return ____templateObject_4; }
	inline GameObject_t1756533147 ** get_address_of__templateObject_4() { return &____templateObject_4; }
	inline void set__templateObject_4(GameObject_t1756533147 * value)
	{
		____templateObject_4 = value;
		Il2CppCodeGenWriteBarrier(&____templateObject_4, value);
	}
};

struct MonoBehaviourPool_t4145220098_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.IGsnPooledObject[] GSN.Skill.Games.Common.Client.MonoBehaviourPool::_scratchArray
	IGsnPooledObjectU5BU5D_t3216640892* ____scratchArray_5;

public:
	inline static int32_t get_offset_of__scratchArray_5() { return static_cast<int32_t>(offsetof(MonoBehaviourPool_t4145220098_StaticFields, ____scratchArray_5)); }
	inline IGsnPooledObjectU5BU5D_t3216640892* get__scratchArray_5() const { return ____scratchArray_5; }
	inline IGsnPooledObjectU5BU5D_t3216640892** get_address_of__scratchArray_5() { return &____scratchArray_5; }
	inline void set__scratchArray_5(IGsnPooledObjectU5BU5D_t3216640892* value)
	{
		____scratchArray_5 = value;
		Il2CppCodeGenWriteBarrier(&____scratchArray_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
