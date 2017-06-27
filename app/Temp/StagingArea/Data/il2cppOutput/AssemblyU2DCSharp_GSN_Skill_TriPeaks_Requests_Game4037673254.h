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

#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game3358746133.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game2586446969.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData
struct  TriPeaksStageRequestData_t4037673254  : public TriPeaksNotaryRequestData_t3358746133
{
public:
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData::ParamName
	String_t* ___ParamName_19;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData::_stageJSON
	String_t* ____stageJSON_20;
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData/Stage GSN.Skill.TriPeaks.Requests.Game.TriPeaksStageRequestData::_stage
	int32_t ____stage_21;

public:
	inline static int32_t get_offset_of_ParamName_19() { return static_cast<int32_t>(offsetof(TriPeaksStageRequestData_t4037673254, ___ParamName_19)); }
	inline String_t* get_ParamName_19() const { return ___ParamName_19; }
	inline String_t** get_address_of_ParamName_19() { return &___ParamName_19; }
	inline void set_ParamName_19(String_t* value)
	{
		___ParamName_19 = value;
		Il2CppCodeGenWriteBarrier(&___ParamName_19, value);
	}

	inline static int32_t get_offset_of__stageJSON_20() { return static_cast<int32_t>(offsetof(TriPeaksStageRequestData_t4037673254, ____stageJSON_20)); }
	inline String_t* get__stageJSON_20() const { return ____stageJSON_20; }
	inline String_t** get_address_of__stageJSON_20() { return &____stageJSON_20; }
	inline void set__stageJSON_20(String_t* value)
	{
		____stageJSON_20 = value;
		Il2CppCodeGenWriteBarrier(&____stageJSON_20, value);
	}

	inline static int32_t get_offset_of__stage_21() { return static_cast<int32_t>(offsetof(TriPeaksStageRequestData_t4037673254, ____stage_21)); }
	inline int32_t get__stage_21() const { return ____stage_21; }
	inline int32_t* get_address_of__stage_21() { return &____stage_21; }
	inline void set__stage_21(int32_t value)
	{
		____stage_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
