#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/InterThreadState
struct  InterThreadState_t3895092952  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Games.Common.Utils.WebRequestDispatcher/InterThreadState::doneAction
	Action_t3226471752 * ___doneAction_0;
	// System.Byte[] GSN.Skill.Games.Common.Utils.WebRequestDispatcher/InterThreadState::postBytes
	ByteU5BU5D_t3397334013* ___postBytes_1;
	// System.IO.Stream GSN.Skill.Games.Common.Utils.WebRequestDispatcher/InterThreadState::postStream
	Stream_t3255436806 * ___postStream_2;

public:
	inline static int32_t get_offset_of_doneAction_0() { return static_cast<int32_t>(offsetof(InterThreadState_t3895092952, ___doneAction_0)); }
	inline Action_t3226471752 * get_doneAction_0() const { return ___doneAction_0; }
	inline Action_t3226471752 ** get_address_of_doneAction_0() { return &___doneAction_0; }
	inline void set_doneAction_0(Action_t3226471752 * value)
	{
		___doneAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_0, value);
	}

	inline static int32_t get_offset_of_postBytes_1() { return static_cast<int32_t>(offsetof(InterThreadState_t3895092952, ___postBytes_1)); }
	inline ByteU5BU5D_t3397334013* get_postBytes_1() const { return ___postBytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_postBytes_1() { return &___postBytes_1; }
	inline void set_postBytes_1(ByteU5BU5D_t3397334013* value)
	{
		___postBytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___postBytes_1, value);
	}

	inline static int32_t get_offset_of_postStream_2() { return static_cast<int32_t>(offsetof(InterThreadState_t3895092952, ___postStream_2)); }
	inline Stream_t3255436806 * get_postStream_2() const { return ___postStream_2; }
	inline Stream_t3255436806 ** get_address_of_postStream_2() { return &___postStream_2; }
	inline void set_postStream_2(Stream_t3255436806 * value)
	{
		___postStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___postStream_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
