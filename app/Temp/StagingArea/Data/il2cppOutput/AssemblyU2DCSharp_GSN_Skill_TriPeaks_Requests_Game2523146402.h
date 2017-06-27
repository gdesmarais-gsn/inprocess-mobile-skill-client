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

#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game3667343821.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game1272356965.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData
struct  TriPeaksStartGameRequestData_t2523146402  : public TriPeaksRequestData_1_t3667343821
{
public:
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::_txSession_id
	String_t* ____txSession_id_14;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::_client_id
	String_t* ____client_id_15;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::_user_id
	String_t* ____user_id_16;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::_game_id
	String_t* ____game_id_17;
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::_tournament_id
	String_t* ____tournament_id_18;
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::<Response>k__BackingField
	TriPeaksStartGameData_t1272356965  ___U3CResponseU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of__txSession_id_14() { return static_cast<int32_t>(offsetof(TriPeaksStartGameRequestData_t2523146402, ____txSession_id_14)); }
	inline String_t* get__txSession_id_14() const { return ____txSession_id_14; }
	inline String_t** get_address_of__txSession_id_14() { return &____txSession_id_14; }
	inline void set__txSession_id_14(String_t* value)
	{
		____txSession_id_14 = value;
		Il2CppCodeGenWriteBarrier(&____txSession_id_14, value);
	}

	inline static int32_t get_offset_of__client_id_15() { return static_cast<int32_t>(offsetof(TriPeaksStartGameRequestData_t2523146402, ____client_id_15)); }
	inline String_t* get__client_id_15() const { return ____client_id_15; }
	inline String_t** get_address_of__client_id_15() { return &____client_id_15; }
	inline void set__client_id_15(String_t* value)
	{
		____client_id_15 = value;
		Il2CppCodeGenWriteBarrier(&____client_id_15, value);
	}

	inline static int32_t get_offset_of__user_id_16() { return static_cast<int32_t>(offsetof(TriPeaksStartGameRequestData_t2523146402, ____user_id_16)); }
	inline String_t* get__user_id_16() const { return ____user_id_16; }
	inline String_t** get_address_of__user_id_16() { return &____user_id_16; }
	inline void set__user_id_16(String_t* value)
	{
		____user_id_16 = value;
		Il2CppCodeGenWriteBarrier(&____user_id_16, value);
	}

	inline static int32_t get_offset_of__game_id_17() { return static_cast<int32_t>(offsetof(TriPeaksStartGameRequestData_t2523146402, ____game_id_17)); }
	inline String_t* get__game_id_17() const { return ____game_id_17; }
	inline String_t** get_address_of__game_id_17() { return &____game_id_17; }
	inline void set__game_id_17(String_t* value)
	{
		____game_id_17 = value;
		Il2CppCodeGenWriteBarrier(&____game_id_17, value);
	}

	inline static int32_t get_offset_of__tournament_id_18() { return static_cast<int32_t>(offsetof(TriPeaksStartGameRequestData_t2523146402, ____tournament_id_18)); }
	inline String_t* get__tournament_id_18() const { return ____tournament_id_18; }
	inline String_t** get_address_of__tournament_id_18() { return &____tournament_id_18; }
	inline void set__tournament_id_18(String_t* value)
	{
		____tournament_id_18 = value;
		Il2CppCodeGenWriteBarrier(&____tournament_id_18, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(TriPeaksStartGameRequestData_t2523146402, ___U3CResponseU3Ek__BackingField_19)); }
	inline TriPeaksStartGameData_t1272356965  get_U3CResponseU3Ek__BackingField_19() const { return ___U3CResponseU3Ek__BackingField_19; }
	inline TriPeaksStartGameData_t1272356965 * get_address_of_U3CResponseU3Ek__BackingField_19() { return &___U3CResponseU3Ek__BackingField_19; }
	inline void set_U3CResponseU3Ek__BackingField_19(TriPeaksStartGameData_t1272356965  value)
	{
		___U3CResponseU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
