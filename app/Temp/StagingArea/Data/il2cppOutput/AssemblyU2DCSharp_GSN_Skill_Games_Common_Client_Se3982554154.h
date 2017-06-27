#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Session.MockGameSession
struct MockGameSession_t1302467586;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.MockGameSession/MockValidateJob
struct  MockValidateJob_t3982554154  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Client.Session.MockGameSession GSN.Skill.Games.Common.Client.Session.MockGameSession/MockValidateJob::mockGameSession
	MockGameSession_t1302467586 * ___mockGameSession_32;

public:
	inline static int32_t get_offset_of_mockGameSession_32() { return static_cast<int32_t>(offsetof(MockValidateJob_t3982554154, ___mockGameSession_32)); }
	inline MockGameSession_t1302467586 * get_mockGameSession_32() const { return ___mockGameSession_32; }
	inline MockGameSession_t1302467586 ** get_address_of_mockGameSession_32() { return &___mockGameSession_32; }
	inline void set_mockGameSession_32(MockGameSession_t1302467586 * value)
	{
		___mockGameSession_32 = value;
		Il2CppCodeGenWriteBarrier(&___mockGameSession_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
