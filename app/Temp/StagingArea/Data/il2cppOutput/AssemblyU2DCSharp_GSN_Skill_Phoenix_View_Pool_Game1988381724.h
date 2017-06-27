#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.View.Pool.GameObjectPool
struct GameObjectPool_t2519041363;
// System.String
struct String_t;
// GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager
struct GameObjectPoolManager_t3946188246;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0
struct  U3CAddPoolAsyncU3Ec__Iterator0_t1988381724  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.View.Pool.GameObjectPool GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::<gameObjPool>__0
	GameObjectPool_t2519041363 * ___U3CgameObjPoolU3E__0_0;
	// System.String GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::resourceName
	String_t* ___resourceName_1;
	// System.Int32 GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::initialSize
	int32_t ___initialSize_2;
	// GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::$this
	GameObjectPoolManager_t3946188246 * ___U24this_3;
	// System.Object GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager/<AddPoolAsync>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CgameObjPoolU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___U3CgameObjPoolU3E__0_0)); }
	inline GameObjectPool_t2519041363 * get_U3CgameObjPoolU3E__0_0() const { return ___U3CgameObjPoolU3E__0_0; }
	inline GameObjectPool_t2519041363 ** get_address_of_U3CgameObjPoolU3E__0_0() { return &___U3CgameObjPoolU3E__0_0; }
	inline void set_U3CgameObjPoolU3E__0_0(GameObjectPool_t2519041363 * value)
	{
		___U3CgameObjPoolU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameObjPoolU3E__0_0, value);
	}

	inline static int32_t get_offset_of_resourceName_1() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___resourceName_1)); }
	inline String_t* get_resourceName_1() const { return ___resourceName_1; }
	inline String_t** get_address_of_resourceName_1() { return &___resourceName_1; }
	inline void set_resourceName_1(String_t* value)
	{
		___resourceName_1 = value;
		Il2CppCodeGenWriteBarrier(&___resourceName_1, value);
	}

	inline static int32_t get_offset_of_initialSize_2() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___initialSize_2)); }
	inline int32_t get_initialSize_2() const { return ___initialSize_2; }
	inline int32_t* get_address_of_initialSize_2() { return &___initialSize_2; }
	inline void set_initialSize_2(int32_t value)
	{
		___initialSize_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___U24this_3)); }
	inline GameObjectPoolManager_t3946188246 * get_U24this_3() const { return ___U24this_3; }
	inline GameObjectPoolManager_t3946188246 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameObjectPoolManager_t3946188246 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CAddPoolAsyncU3Ec__Iterator0_t1988381724, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
