#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.View.Pool.IGsnPooledObject[]
struct IGsnPooledObjectU5BU5D_t4080816576;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_GsnO2394837727.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.Pool.GameObjectPool
struct  GameObjectPool_t2519041363  : public GsnObjectPool_t2394837727
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.Pool.GameObjectPool::_parent
	Transform_t3275118058 * ____parent_4;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.Pool.GameObjectPool::_templateObject
	GameObject_t1756533147 * ____templateObject_5;

public:
	inline static int32_t get_offset_of__parent_4() { return static_cast<int32_t>(offsetof(GameObjectPool_t2519041363, ____parent_4)); }
	inline Transform_t3275118058 * get__parent_4() const { return ____parent_4; }
	inline Transform_t3275118058 ** get_address_of__parent_4() { return &____parent_4; }
	inline void set__parent_4(Transform_t3275118058 * value)
	{
		____parent_4 = value;
		Il2CppCodeGenWriteBarrier(&____parent_4, value);
	}

	inline static int32_t get_offset_of__templateObject_5() { return static_cast<int32_t>(offsetof(GameObjectPool_t2519041363, ____templateObject_5)); }
	inline GameObject_t1756533147 * get__templateObject_5() const { return ____templateObject_5; }
	inline GameObject_t1756533147 ** get_address_of__templateObject_5() { return &____templateObject_5; }
	inline void set__templateObject_5(GameObject_t1756533147 * value)
	{
		____templateObject_5 = value;
		Il2CppCodeGenWriteBarrier(&____templateObject_5, value);
	}
};

struct GameObjectPool_t2519041363_StaticFields
{
public:
	// GSN.Skill.Phoenix.View.Pool.IGsnPooledObject[] GSN.Skill.Phoenix.View.Pool.GameObjectPool::_scratchArray
	IGsnPooledObjectU5BU5D_t4080816576* ____scratchArray_3;
	// System.Boolean GSN.Skill.Phoenix.View.Pool.GameObjectPool::_appIsQuitting
	bool ____appIsQuitting_6;

public:
	inline static int32_t get_offset_of__scratchArray_3() { return static_cast<int32_t>(offsetof(GameObjectPool_t2519041363_StaticFields, ____scratchArray_3)); }
	inline IGsnPooledObjectU5BU5D_t4080816576* get__scratchArray_3() const { return ____scratchArray_3; }
	inline IGsnPooledObjectU5BU5D_t4080816576** get_address_of__scratchArray_3() { return &____scratchArray_3; }
	inline void set__scratchArray_3(IGsnPooledObjectU5BU5D_t4080816576* value)
	{
		____scratchArray_3 = value;
		Il2CppCodeGenWriteBarrier(&____scratchArray_3, value);
	}

	inline static int32_t get_offset_of__appIsQuitting_6() { return static_cast<int32_t>(offsetof(GameObjectPool_t2519041363_StaticFields, ____appIsQuitting_6)); }
	inline bool get__appIsQuitting_6() const { return ____appIsQuitting_6; }
	inline bool* get_address_of__appIsQuitting_6() { return &____appIsQuitting_6; }
	inline void set__appIsQuitting_6(bool value)
	{
		____appIsQuitting_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
