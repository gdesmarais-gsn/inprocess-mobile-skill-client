#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.MemoryStream
struct MemoryStream_t743994179;

#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game4094739589.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game1699752733.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData
struct  TriPeaksValidateRequestData_t218182868  : public TriPeaksRequestData_1_t4094739589
{
public:
	// System.IO.MemoryStream GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::_game_log
	MemoryStream_t743994179 * ____game_log_11;
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::_response
	TriPeaksValidateData_t1699752733  ____response_12;

public:
	inline static int32_t get_offset_of__game_log_11() { return static_cast<int32_t>(offsetof(TriPeaksValidateRequestData_t218182868, ____game_log_11)); }
	inline MemoryStream_t743994179 * get__game_log_11() const { return ____game_log_11; }
	inline MemoryStream_t743994179 ** get_address_of__game_log_11() { return &____game_log_11; }
	inline void set__game_log_11(MemoryStream_t743994179 * value)
	{
		____game_log_11 = value;
		Il2CppCodeGenWriteBarrier(&____game_log_11, value);
	}

	inline static int32_t get_offset_of__response_12() { return static_cast<int32_t>(offsetof(TriPeaksValidateRequestData_t218182868, ____response_12)); }
	inline TriPeaksValidateData_t1699752733  get__response_12() const { return ____response_12; }
	inline TriPeaksValidateData_t1699752733 * get_address_of__response_12() { return &____response_12; }
	inline void set__response_12(TriPeaksValidateData_t1699752733  value)
	{
		____response_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
