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
// GSN.Skill.Phoenix.Model.Data.DeviceData
struct DeviceData_t2224045298;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques1436796568.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn4192108229.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourna737209885.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData
struct  TournamentSignupRequestData_t1741431844  : public WebPOSTRequest_1_t1436796568
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::<flavorID>k__BackingField
	String_t* ___U3CflavorIDU3Ek__BackingField_18;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_token
	String_t* ____token_19;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_tournID
	String_t* ____tournID_20;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_unplayedGameID
	String_t* ____unplayedGameID_21;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_gameID
	int32_t ____gameID_22;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::<Response>k__BackingField
	TournamentSignupData_t4192108229  ___U3CResponseU3Ek__BackingField_23;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupType GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_signupType
	int32_t ____signupType_24;
	// GSN.Skill.Phoenix.Model.Data.DeviceData GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_deviceData
	DeviceData_t2224045298 * ____deviceData_25;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_client_id
	String_t* ____client_id_26;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::_currentUser
	CurrentUser_t3910039426 * ____currentUser_27;

public:
	inline static int32_t get_offset_of_U3CflavorIDU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ___U3CflavorIDU3Ek__BackingField_18)); }
	inline String_t* get_U3CflavorIDU3Ek__BackingField_18() const { return ___U3CflavorIDU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CflavorIDU3Ek__BackingField_18() { return &___U3CflavorIDU3Ek__BackingField_18; }
	inline void set_U3CflavorIDU3Ek__BackingField_18(String_t* value)
	{
		___U3CflavorIDU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CflavorIDU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of__token_19() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____token_19)); }
	inline String_t* get__token_19() const { return ____token_19; }
	inline String_t** get_address_of__token_19() { return &____token_19; }
	inline void set__token_19(String_t* value)
	{
		____token_19 = value;
		Il2CppCodeGenWriteBarrier(&____token_19, value);
	}

	inline static int32_t get_offset_of__tournID_20() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____tournID_20)); }
	inline String_t* get__tournID_20() const { return ____tournID_20; }
	inline String_t** get_address_of__tournID_20() { return &____tournID_20; }
	inline void set__tournID_20(String_t* value)
	{
		____tournID_20 = value;
		Il2CppCodeGenWriteBarrier(&____tournID_20, value);
	}

	inline static int32_t get_offset_of__unplayedGameID_21() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____unplayedGameID_21)); }
	inline String_t* get__unplayedGameID_21() const { return ____unplayedGameID_21; }
	inline String_t** get_address_of__unplayedGameID_21() { return &____unplayedGameID_21; }
	inline void set__unplayedGameID_21(String_t* value)
	{
		____unplayedGameID_21 = value;
		Il2CppCodeGenWriteBarrier(&____unplayedGameID_21, value);
	}

	inline static int32_t get_offset_of__gameID_22() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____gameID_22)); }
	inline int32_t get__gameID_22() const { return ____gameID_22; }
	inline int32_t* get_address_of__gameID_22() { return &____gameID_22; }
	inline void set__gameID_22(int32_t value)
	{
		____gameID_22 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ___U3CResponseU3Ek__BackingField_23)); }
	inline TournamentSignupData_t4192108229  get_U3CResponseU3Ek__BackingField_23() const { return ___U3CResponseU3Ek__BackingField_23; }
	inline TournamentSignupData_t4192108229 * get_address_of_U3CResponseU3Ek__BackingField_23() { return &___U3CResponseU3Ek__BackingField_23; }
	inline void set_U3CResponseU3Ek__BackingField_23(TournamentSignupData_t4192108229  value)
	{
		___U3CResponseU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of__signupType_24() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____signupType_24)); }
	inline int32_t get__signupType_24() const { return ____signupType_24; }
	inline int32_t* get_address_of__signupType_24() { return &____signupType_24; }
	inline void set__signupType_24(int32_t value)
	{
		____signupType_24 = value;
	}

	inline static int32_t get_offset_of__deviceData_25() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____deviceData_25)); }
	inline DeviceData_t2224045298 * get__deviceData_25() const { return ____deviceData_25; }
	inline DeviceData_t2224045298 ** get_address_of__deviceData_25() { return &____deviceData_25; }
	inline void set__deviceData_25(DeviceData_t2224045298 * value)
	{
		____deviceData_25 = value;
		Il2CppCodeGenWriteBarrier(&____deviceData_25, value);
	}

	inline static int32_t get_offset_of__client_id_26() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____client_id_26)); }
	inline String_t* get__client_id_26() const { return ____client_id_26; }
	inline String_t** get_address_of__client_id_26() { return &____client_id_26; }
	inline void set__client_id_26(String_t* value)
	{
		____client_id_26 = value;
		Il2CppCodeGenWriteBarrier(&____client_id_26, value);
	}

	inline static int32_t get_offset_of__currentUser_27() { return static_cast<int32_t>(offsetof(TournamentSignupRequestData_t1741431844, ____currentUser_27)); }
	inline CurrentUser_t3910039426 * get__currentUser_27() const { return ____currentUser_27; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_27() { return &____currentUser_27; }
	inline void set__currentUser_27(CurrentUser_t3910039426 * value)
	{
		____currentUser_27 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
