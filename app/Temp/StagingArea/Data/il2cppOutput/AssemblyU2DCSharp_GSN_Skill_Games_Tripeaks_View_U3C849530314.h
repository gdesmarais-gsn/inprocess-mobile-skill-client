#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.View/<FreePoolObjectInTime>c__IteratorA
struct  U3CFreePoolObjectInTimeU3Ec__IteratorA_t849530314  : public Il2CppObject
{
public:
	// System.Single GSN.Skill.Games.Tripeaks.View/<FreePoolObjectInTime>c__IteratorA::killTime
	float ___killTime_0;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.View/<FreePoolObjectInTime>c__IteratorA::pooledGameObject
	GameObject_t1756533147 * ___pooledGameObject_1;
	// System.Object GSN.Skill.Games.Tripeaks.View/<FreePoolObjectInTime>c__IteratorA::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean GSN.Skill.Games.Tripeaks.View/<FreePoolObjectInTime>c__IteratorA::$disposing
	bool ___U24disposing_3;
	// System.Int32 GSN.Skill.Games.Tripeaks.View/<FreePoolObjectInTime>c__IteratorA::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_killTime_0() { return static_cast<int32_t>(offsetof(U3CFreePoolObjectInTimeU3Ec__IteratorA_t849530314, ___killTime_0)); }
	inline float get_killTime_0() const { return ___killTime_0; }
	inline float* get_address_of_killTime_0() { return &___killTime_0; }
	inline void set_killTime_0(float value)
	{
		___killTime_0 = value;
	}

	inline static int32_t get_offset_of_pooledGameObject_1() { return static_cast<int32_t>(offsetof(U3CFreePoolObjectInTimeU3Ec__IteratorA_t849530314, ___pooledGameObject_1)); }
	inline GameObject_t1756533147 * get_pooledGameObject_1() const { return ___pooledGameObject_1; }
	inline GameObject_t1756533147 ** get_address_of_pooledGameObject_1() { return &___pooledGameObject_1; }
	inline void set_pooledGameObject_1(GameObject_t1756533147 * value)
	{
		___pooledGameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___pooledGameObject_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFreePoolObjectInTimeU3Ec__IteratorA_t849530314, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFreePoolObjectInTimeU3Ec__IteratorA_t849530314, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFreePoolObjectInTimeU3Ec__IteratorA_t849530314, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
