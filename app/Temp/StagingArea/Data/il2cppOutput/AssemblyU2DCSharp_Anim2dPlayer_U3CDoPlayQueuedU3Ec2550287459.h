#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Anim2dPlayState
struct Anim2dPlayState_t1160144854;
// Anim2dPlayer
struct Anim2dPlayer_t3053267886;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anim2dPlayer/<DoPlayQueued>c__Iterator1
struct  U3CDoPlayQueuedU3Ec__Iterator1_t2550287459  : public Il2CppObject
{
public:
	// System.Int32 Anim2dPlayer/<DoPlayQueued>c__Iterator1::<lastIndex>__0
	int32_t ___U3ClastIndexU3E__0_0;
	// Anim2dPlayState Anim2dPlayer/<DoPlayQueued>c__Iterator1::<state>__1
	Anim2dPlayState_t1160144854 * ___U3CstateU3E__1_1;
	// Anim2dPlayer Anim2dPlayer/<DoPlayQueued>c__Iterator1::$this
	Anim2dPlayer_t3053267886 * ___U24this_2;
	// System.Object Anim2dPlayer/<DoPlayQueued>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean Anim2dPlayer/<DoPlayQueued>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Anim2dPlayer/<DoPlayQueued>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3ClastIndexU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDoPlayQueuedU3Ec__Iterator1_t2550287459, ___U3ClastIndexU3E__0_0)); }
	inline int32_t get_U3ClastIndexU3E__0_0() const { return ___U3ClastIndexU3E__0_0; }
	inline int32_t* get_address_of_U3ClastIndexU3E__0_0() { return &___U3ClastIndexU3E__0_0; }
	inline void set_U3ClastIndexU3E__0_0(int32_t value)
	{
		___U3ClastIndexU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CstateU3E__1_1() { return static_cast<int32_t>(offsetof(U3CDoPlayQueuedU3Ec__Iterator1_t2550287459, ___U3CstateU3E__1_1)); }
	inline Anim2dPlayState_t1160144854 * get_U3CstateU3E__1_1() const { return ___U3CstateU3E__1_1; }
	inline Anim2dPlayState_t1160144854 ** get_address_of_U3CstateU3E__1_1() { return &___U3CstateU3E__1_1; }
	inline void set_U3CstateU3E__1_1(Anim2dPlayState_t1160144854 * value)
	{
		___U3CstateU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstateU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CDoPlayQueuedU3Ec__Iterator1_t2550287459, ___U24this_2)); }
	inline Anim2dPlayer_t3053267886 * get_U24this_2() const { return ___U24this_2; }
	inline Anim2dPlayer_t3053267886 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Anim2dPlayer_t3053267886 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDoPlayQueuedU3Ec__Iterator1_t2550287459, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDoPlayQueuedU3Ec__Iterator1_t2550287459, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDoPlayQueuedU3Ec__Iterator1_t2550287459, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
