#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.OneHunkNotarizer
struct  OneHunkNotarizer_t975174684  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Games.Common.Utils.OneHunkNotarizer::Failed
	bool ___Failed_0;
	// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.OneHunkNotarizer::hunk
	SecureHunk_t3302567905 * ___hunk_1;
	// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Utils.OneHunkNotarizer::customizeWrapper
	requestCustomizer_t2087322079 * ___customizeWrapper_2;

public:
	inline static int32_t get_offset_of_Failed_0() { return static_cast<int32_t>(offsetof(OneHunkNotarizer_t975174684, ___Failed_0)); }
	inline bool get_Failed_0() const { return ___Failed_0; }
	inline bool* get_address_of_Failed_0() { return &___Failed_0; }
	inline void set_Failed_0(bool value)
	{
		___Failed_0 = value;
	}

	inline static int32_t get_offset_of_hunk_1() { return static_cast<int32_t>(offsetof(OneHunkNotarizer_t975174684, ___hunk_1)); }
	inline SecureHunk_t3302567905 * get_hunk_1() const { return ___hunk_1; }
	inline SecureHunk_t3302567905 ** get_address_of_hunk_1() { return &___hunk_1; }
	inline void set_hunk_1(SecureHunk_t3302567905 * value)
	{
		___hunk_1 = value;
		Il2CppCodeGenWriteBarrier(&___hunk_1, value);
	}

	inline static int32_t get_offset_of_customizeWrapper_2() { return static_cast<int32_t>(offsetof(OneHunkNotarizer_t975174684, ___customizeWrapper_2)); }
	inline requestCustomizer_t2087322079 * get_customizeWrapper_2() const { return ___customizeWrapper_2; }
	inline requestCustomizer_t2087322079 ** get_address_of_customizeWrapper_2() { return &___customizeWrapper_2; }
	inline void set_customizeWrapper_2(requestCustomizer_t2087322079 * value)
	{
		___customizeWrapper_2 = value;
		Il2CppCodeGenWriteBarrier(&___customizeWrapper_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
