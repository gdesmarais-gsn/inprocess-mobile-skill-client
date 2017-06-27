#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UpdateMgr
struct UpdateMgr_t3548124311;
// UpdateMgr/Sequence[]
struct SequenceU5BU5D_t3237704598;
// Delegates/Action
struct Action_t1511407763;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateMgr
struct  UpdateMgr_t3548124311  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UpdateMgr::autoCreated
	bool ___autoCreated_3;
	// UpdateMgr/Sequence[] UpdateMgr::mSequences
	SequenceU5BU5D_t3237704598* ___mSequences_6;
	// System.Boolean UpdateMgr::initialized
	bool ___initialized_7;
	// Delegates/Action UpdateMgr::onDestroy
	Action_t1511407763 * ___onDestroy_8;

public:
	inline static int32_t get_offset_of_autoCreated_3() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311, ___autoCreated_3)); }
	inline bool get_autoCreated_3() const { return ___autoCreated_3; }
	inline bool* get_address_of_autoCreated_3() { return &___autoCreated_3; }
	inline void set_autoCreated_3(bool value)
	{
		___autoCreated_3 = value;
	}

	inline static int32_t get_offset_of_mSequences_6() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311, ___mSequences_6)); }
	inline SequenceU5BU5D_t3237704598* get_mSequences_6() const { return ___mSequences_6; }
	inline SequenceU5BU5D_t3237704598** get_address_of_mSequences_6() { return &___mSequences_6; }
	inline void set_mSequences_6(SequenceU5BU5D_t3237704598* value)
	{
		___mSequences_6 = value;
		Il2CppCodeGenWriteBarrier(&___mSequences_6, value);
	}

	inline static int32_t get_offset_of_initialized_7() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311, ___initialized_7)); }
	inline bool get_initialized_7() const { return ___initialized_7; }
	inline bool* get_address_of_initialized_7() { return &___initialized_7; }
	inline void set_initialized_7(bool value)
	{
		___initialized_7 = value;
	}

	inline static int32_t get_offset_of_onDestroy_8() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311, ___onDestroy_8)); }
	inline Action_t1511407763 * get_onDestroy_8() const { return ___onDestroy_8; }
	inline Action_t1511407763 ** get_address_of_onDestroy_8() { return &___onDestroy_8; }
	inline void set_onDestroy_8(Action_t1511407763 * value)
	{
		___onDestroy_8 = value;
		Il2CppCodeGenWriteBarrier(&___onDestroy_8, value);
	}
};

struct UpdateMgr_t3548124311_StaticFields
{
public:
	// UpdateMgr UpdateMgr::Inst
	UpdateMgr_t3548124311 * ___Inst_2;
	// System.Boolean UpdateMgr::isQuitting
	bool ___isQuitting_4;
	// System.Boolean UpdateMgr::isQuittingOrExitingLevel
	bool ___isQuittingOrExitingLevel_5;

public:
	inline static int32_t get_offset_of_Inst_2() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311_StaticFields, ___Inst_2)); }
	inline UpdateMgr_t3548124311 * get_Inst_2() const { return ___Inst_2; }
	inline UpdateMgr_t3548124311 ** get_address_of_Inst_2() { return &___Inst_2; }
	inline void set_Inst_2(UpdateMgr_t3548124311 * value)
	{
		___Inst_2 = value;
		Il2CppCodeGenWriteBarrier(&___Inst_2, value);
	}

	inline static int32_t get_offset_of_isQuitting_4() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311_StaticFields, ___isQuitting_4)); }
	inline bool get_isQuitting_4() const { return ___isQuitting_4; }
	inline bool* get_address_of_isQuitting_4() { return &___isQuitting_4; }
	inline void set_isQuitting_4(bool value)
	{
		___isQuitting_4 = value;
	}

	inline static int32_t get_offset_of_isQuittingOrExitingLevel_5() { return static_cast<int32_t>(offsetof(UpdateMgr_t3548124311_StaticFields, ___isQuittingOrExitingLevel_5)); }
	inline bool get_isQuittingOrExitingLevel_5() const { return ___isQuittingOrExitingLevel_5; }
	inline bool* get_address_of_isQuittingOrExitingLevel_5() { return &___isQuittingOrExitingLevel_5; }
	inline void set_isQuittingOrExitingLevel_5(bool value)
	{
		___isQuittingOrExitingLevel_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
