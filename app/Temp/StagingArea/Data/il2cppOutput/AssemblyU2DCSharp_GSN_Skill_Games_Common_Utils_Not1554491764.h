#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<GSN.Skill.Games.Common.Utils.SecureHunk>
struct Queue_1_t3122224740;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.SecureHunk>
struct List_1_t2671689037;
// GSN.Skill.Games.Common.Utils.OneHunkNotarizer
struct OneHunkNotarizer_t975174684;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.Notarizer
struct  Notarizer_t1554491764  : public Il2CppObject
{
public:
	// System.Collections.Generic.Queue`1<GSN.Skill.Games.Common.Utils.SecureHunk> GSN.Skill.Games.Common.Utils.Notarizer::inHunks
	Queue_1_t3122224740 * ___inHunks_0;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.SecureHunk> GSN.Skill.Games.Common.Utils.Notarizer::outHunks
	List_1_t2671689037 * ___outHunks_1;
	// GSN.Skill.Games.Common.Utils.OneHunkNotarizer GSN.Skill.Games.Common.Utils.Notarizer::oneHunkNotarizer
	OneHunkNotarizer_t975174684 * ___oneHunkNotarizer_2;
	// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.Notarizer::curHunk
	SecureHunk_t3302567905 * ___curHunk_3;
	// System.Boolean GSN.Skill.Games.Common.Utils.Notarizer::Failed
	bool ___Failed_4;
	// System.Int32 GSN.Skill.Games.Common.Utils.Notarizer::_notarizeOutstanding
	int32_t ____notarizeOutstanding_5;

public:
	inline static int32_t get_offset_of_inHunks_0() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764, ___inHunks_0)); }
	inline Queue_1_t3122224740 * get_inHunks_0() const { return ___inHunks_0; }
	inline Queue_1_t3122224740 ** get_address_of_inHunks_0() { return &___inHunks_0; }
	inline void set_inHunks_0(Queue_1_t3122224740 * value)
	{
		___inHunks_0 = value;
		Il2CppCodeGenWriteBarrier(&___inHunks_0, value);
	}

	inline static int32_t get_offset_of_outHunks_1() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764, ___outHunks_1)); }
	inline List_1_t2671689037 * get_outHunks_1() const { return ___outHunks_1; }
	inline List_1_t2671689037 ** get_address_of_outHunks_1() { return &___outHunks_1; }
	inline void set_outHunks_1(List_1_t2671689037 * value)
	{
		___outHunks_1 = value;
		Il2CppCodeGenWriteBarrier(&___outHunks_1, value);
	}

	inline static int32_t get_offset_of_oneHunkNotarizer_2() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764, ___oneHunkNotarizer_2)); }
	inline OneHunkNotarizer_t975174684 * get_oneHunkNotarizer_2() const { return ___oneHunkNotarizer_2; }
	inline OneHunkNotarizer_t975174684 ** get_address_of_oneHunkNotarizer_2() { return &___oneHunkNotarizer_2; }
	inline void set_oneHunkNotarizer_2(OneHunkNotarizer_t975174684 * value)
	{
		___oneHunkNotarizer_2 = value;
		Il2CppCodeGenWriteBarrier(&___oneHunkNotarizer_2, value);
	}

	inline static int32_t get_offset_of_curHunk_3() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764, ___curHunk_3)); }
	inline SecureHunk_t3302567905 * get_curHunk_3() const { return ___curHunk_3; }
	inline SecureHunk_t3302567905 ** get_address_of_curHunk_3() { return &___curHunk_3; }
	inline void set_curHunk_3(SecureHunk_t3302567905 * value)
	{
		___curHunk_3 = value;
		Il2CppCodeGenWriteBarrier(&___curHunk_3, value);
	}

	inline static int32_t get_offset_of_Failed_4() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764, ___Failed_4)); }
	inline bool get_Failed_4() const { return ___Failed_4; }
	inline bool* get_address_of_Failed_4() { return &___Failed_4; }
	inline void set_Failed_4(bool value)
	{
		___Failed_4 = value;
	}

	inline static int32_t get_offset_of__notarizeOutstanding_5() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764, ____notarizeOutstanding_5)); }
	inline int32_t get__notarizeOutstanding_5() const { return ____notarizeOutstanding_5; }
	inline int32_t* get_address_of__notarizeOutstanding_5() { return &____notarizeOutstanding_5; }
	inline void set__notarizeOutstanding_5(int32_t value)
	{
		____notarizeOutstanding_5 = value;
	}
};

struct Notarizer_t1554491764_StaticFields
{
public:
	// System.DateTime GSN.Skill.Games.Common.Utils.Notarizer::UnixStartTime
	DateTime_t693205669  ___UnixStartTime_6;

public:
	inline static int32_t get_offset_of_UnixStartTime_6() { return static_cast<int32_t>(offsetof(Notarizer_t1554491764_StaticFields, ___UnixStartTime_6)); }
	inline DateTime_t693205669  get_UnixStartTime_6() const { return ___UnixStartTime_6; }
	inline DateTime_t693205669 * get_address_of_UnixStartTime_6() { return &___UnixStartTime_6; }
	inline void set_UnixStartTime_6(DateTime_t693205669  value)
	{
		___UnixStartTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
