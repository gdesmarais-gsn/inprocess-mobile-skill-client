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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques3239408368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksRequestData`1<GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData>
struct  TriPeaksRequestData_1_t4094739589  : public WebPOSTRequest_1_t3239408368
{
public:
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksRequestData`1::_token
	String_t* ____token_6;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksRequestData`1::_host
	String_t* ____host_7;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksRequestData`1::_path
	String_t* ____path_8;

public:
	inline static int32_t get_offset_of__token_6() { return static_cast<int32_t>(offsetof(TriPeaksRequestData_1_t4094739589, ____token_6)); }
	inline String_t* get__token_6() const { return ____token_6; }
	inline String_t** get_address_of__token_6() { return &____token_6; }
	inline void set__token_6(String_t* value)
	{
		____token_6 = value;
		Il2CppCodeGenWriteBarrier(&____token_6, value);
	}

	inline static int32_t get_offset_of__host_7() { return static_cast<int32_t>(offsetof(TriPeaksRequestData_1_t4094739589, ____host_7)); }
	inline String_t* get__host_7() const { return ____host_7; }
	inline String_t** get_address_of__host_7() { return &____host_7; }
	inline void set__host_7(String_t* value)
	{
		____host_7 = value;
		Il2CppCodeGenWriteBarrier(&____host_7, value);
	}

	inline static int32_t get_offset_of__path_8() { return static_cast<int32_t>(offsetof(TriPeaksRequestData_1_t4094739589, ____path_8)); }
	inline String_t* get__path_8() const { return ____path_8; }
	inline String_t** get_address_of__path_8() { return &____path_8; }
	inline void set__path_8(String_t* value)
	{
		____path_8 = value;
		Il2CppCodeGenWriteBarrier(&____path_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
