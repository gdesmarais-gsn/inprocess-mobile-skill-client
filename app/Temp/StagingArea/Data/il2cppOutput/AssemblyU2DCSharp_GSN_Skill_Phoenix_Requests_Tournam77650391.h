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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebGETRequest1702979467.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn2070256410.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultRequestData
struct  TournamentResultRequestData_t77650391  : public WebGETRequest_1_t1702979467
{
public:
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData GSN.Skill.Phoenix.Requests.Tournament.TournamentResultRequestData::<Response>k__BackingField
	TournamentResultData_t2070256410  ___U3CResponseU3Ek__BackingField_8;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.TournamentResultRequestData::_tournament_id
	int32_t ____tournament_id_9;

public:
	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TournamentResultRequestData_t77650391, ___U3CResponseU3Ek__BackingField_8)); }
	inline TournamentResultData_t2070256410  get_U3CResponseU3Ek__BackingField_8() const { return ___U3CResponseU3Ek__BackingField_8; }
	inline TournamentResultData_t2070256410 * get_address_of_U3CResponseU3Ek__BackingField_8() { return &___U3CResponseU3Ek__BackingField_8; }
	inline void set_U3CResponseU3Ek__BackingField_8(TournamentResultData_t2070256410  value)
	{
		___U3CResponseU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of__tournament_id_9() { return static_cast<int32_t>(offsetof(TournamentResultRequestData_t77650391, ____tournament_id_9)); }
	inline int32_t get__tournament_id_9() const { return ____tournament_id_9; }
	inline int32_t* get_address_of__tournament_id_9() { return &____tournament_id_9; }
	inline void set__tournament_id_9(int32_t value)
	{
		____tournament_id_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
