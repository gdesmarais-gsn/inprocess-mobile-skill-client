#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.NullJob
struct NullJob_t805222378;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob/NullActivityIndicator
struct  NullActivityIndicator_t153536745  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.NullJob GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob/NullActivityIndicator::permissionJob
	NullJob_t805222378 * ___permissionJob_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob/NullActivityIndicator::activeCount
	int32_t ___activeCount_1;

public:
	inline static int32_t get_offset_of_permissionJob_0() { return static_cast<int32_t>(offsetof(NullActivityIndicator_t153536745, ___permissionJob_0)); }
	inline NullJob_t805222378 * get_permissionJob_0() const { return ___permissionJob_0; }
	inline NullJob_t805222378 ** get_address_of_permissionJob_0() { return &___permissionJob_0; }
	inline void set_permissionJob_0(NullJob_t805222378 * value)
	{
		___permissionJob_0 = value;
		Il2CppCodeGenWriteBarrier(&___permissionJob_0, value);
	}

	inline static int32_t get_offset_of_activeCount_1() { return static_cast<int32_t>(offsetof(NullActivityIndicator_t153536745, ___activeCount_1)); }
	inline int32_t get_activeCount_1() const { return ___activeCount_1; }
	inline int32_t* get_address_of_activeCount_1() { return &___activeCount_1; }
	inline void set_activeCount_1(int32_t value)
	{
		___activeCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
