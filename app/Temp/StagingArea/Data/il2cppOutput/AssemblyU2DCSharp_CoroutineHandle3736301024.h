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
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// CoroutineHandle
struct CoroutineHandle_t3736301024;

#include "UnityEngine_UnityEngine_YieldInstruction3462875981.h"
#include "AssemblyU2DCSharp_SequenceType4084443865.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoroutineHandle
struct  CoroutineHandle_t3736301024  : public YieldInstruction_t3462875981
{
public:
	// UnityEngine.GameObject CoroutineHandle::mTarget
	GameObject_t1756533147 * ___mTarget_0;
	// System.Boolean CoroutineHandle::mHasTarget
	bool ___mHasTarget_1;
	// System.Collections.IEnumerator CoroutineHandle::mFunction
	Il2CppObject * ___mFunction_2;
	// CoroutineHandle CoroutineHandle::mWaitSequence
	CoroutineHandle_t3736301024 * ___mWaitSequence_3;
	// System.Single CoroutineHandle::mWaitTime
	float ___mWaitTime_4;
	// System.Boolean CoroutineHandle::mWaiting
	bool ___mWaiting_5;
	// System.Boolean CoroutineHandle::mWaitingForTime
	bool ___mWaitingForTime_6;
	// System.Boolean CoroutineHandle::mWaitingForSequence
	bool ___mWaitingForSequence_7;
	// SequenceType CoroutineHandle::mType
	int32_t ___mType_8;
	// System.Boolean CoroutineHandle::mStopped
	bool ___mStopped_9;
	// System.Boolean CoroutineHandle::mFinished
	bool ___mFinished_10;
	// System.Boolean CoroutineHandle::mPaused
	bool ___mPaused_11;
	// System.Boolean CoroutineHandle::mPretendDone
	bool ___mPretendDone_12;
	// System.Boolean CoroutineHandle::mSkipNextMove
	bool ___mSkipNextMove_13;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mTarget_0)); }
	inline GameObject_t1756533147 * get_mTarget_0() const { return ___mTarget_0; }
	inline GameObject_t1756533147 ** get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(GameObject_t1756533147 * value)
	{
		___mTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTarget_0, value);
	}

	inline static int32_t get_offset_of_mHasTarget_1() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mHasTarget_1)); }
	inline bool get_mHasTarget_1() const { return ___mHasTarget_1; }
	inline bool* get_address_of_mHasTarget_1() { return &___mHasTarget_1; }
	inline void set_mHasTarget_1(bool value)
	{
		___mHasTarget_1 = value;
	}

	inline static int32_t get_offset_of_mFunction_2() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mFunction_2)); }
	inline Il2CppObject * get_mFunction_2() const { return ___mFunction_2; }
	inline Il2CppObject ** get_address_of_mFunction_2() { return &___mFunction_2; }
	inline void set_mFunction_2(Il2CppObject * value)
	{
		___mFunction_2 = value;
		Il2CppCodeGenWriteBarrier(&___mFunction_2, value);
	}

	inline static int32_t get_offset_of_mWaitSequence_3() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mWaitSequence_3)); }
	inline CoroutineHandle_t3736301024 * get_mWaitSequence_3() const { return ___mWaitSequence_3; }
	inline CoroutineHandle_t3736301024 ** get_address_of_mWaitSequence_3() { return &___mWaitSequence_3; }
	inline void set_mWaitSequence_3(CoroutineHandle_t3736301024 * value)
	{
		___mWaitSequence_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWaitSequence_3, value);
	}

	inline static int32_t get_offset_of_mWaitTime_4() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mWaitTime_4)); }
	inline float get_mWaitTime_4() const { return ___mWaitTime_4; }
	inline float* get_address_of_mWaitTime_4() { return &___mWaitTime_4; }
	inline void set_mWaitTime_4(float value)
	{
		___mWaitTime_4 = value;
	}

	inline static int32_t get_offset_of_mWaiting_5() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mWaiting_5)); }
	inline bool get_mWaiting_5() const { return ___mWaiting_5; }
	inline bool* get_address_of_mWaiting_5() { return &___mWaiting_5; }
	inline void set_mWaiting_5(bool value)
	{
		___mWaiting_5 = value;
	}

	inline static int32_t get_offset_of_mWaitingForTime_6() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mWaitingForTime_6)); }
	inline bool get_mWaitingForTime_6() const { return ___mWaitingForTime_6; }
	inline bool* get_address_of_mWaitingForTime_6() { return &___mWaitingForTime_6; }
	inline void set_mWaitingForTime_6(bool value)
	{
		___mWaitingForTime_6 = value;
	}

	inline static int32_t get_offset_of_mWaitingForSequence_7() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mWaitingForSequence_7)); }
	inline bool get_mWaitingForSequence_7() const { return ___mWaitingForSequence_7; }
	inline bool* get_address_of_mWaitingForSequence_7() { return &___mWaitingForSequence_7; }
	inline void set_mWaitingForSequence_7(bool value)
	{
		___mWaitingForSequence_7 = value;
	}

	inline static int32_t get_offset_of_mType_8() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mType_8)); }
	inline int32_t get_mType_8() const { return ___mType_8; }
	inline int32_t* get_address_of_mType_8() { return &___mType_8; }
	inline void set_mType_8(int32_t value)
	{
		___mType_8 = value;
	}

	inline static int32_t get_offset_of_mStopped_9() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mStopped_9)); }
	inline bool get_mStopped_9() const { return ___mStopped_9; }
	inline bool* get_address_of_mStopped_9() { return &___mStopped_9; }
	inline void set_mStopped_9(bool value)
	{
		___mStopped_9 = value;
	}

	inline static int32_t get_offset_of_mFinished_10() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mFinished_10)); }
	inline bool get_mFinished_10() const { return ___mFinished_10; }
	inline bool* get_address_of_mFinished_10() { return &___mFinished_10; }
	inline void set_mFinished_10(bool value)
	{
		___mFinished_10 = value;
	}

	inline static int32_t get_offset_of_mPaused_11() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mPaused_11)); }
	inline bool get_mPaused_11() const { return ___mPaused_11; }
	inline bool* get_address_of_mPaused_11() { return &___mPaused_11; }
	inline void set_mPaused_11(bool value)
	{
		___mPaused_11 = value;
	}

	inline static int32_t get_offset_of_mPretendDone_12() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mPretendDone_12)); }
	inline bool get_mPretendDone_12() const { return ___mPretendDone_12; }
	inline bool* get_address_of_mPretendDone_12() { return &___mPretendDone_12; }
	inline void set_mPretendDone_12(bool value)
	{
		___mPretendDone_12 = value;
	}

	inline static int32_t get_offset_of_mSkipNextMove_13() { return static_cast<int32_t>(offsetof(CoroutineHandle_t3736301024, ___mSkipNextMove_13)); }
	inline bool get_mSkipNextMove_13() const { return ___mSkipNextMove_13; }
	inline bool* get_address_of_mSkipNextMove_13() { return &___mSkipNextMove_13; }
	inline void set_mSkipNextMove_13(bool value)
	{
		___mSkipNextMove_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
