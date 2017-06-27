#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData
struct TournamentSignupRequestData_t1741431844;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn4192108229.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"

// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::.ctor()
extern "C"  void TournamentSignupRequestData__ctor_m726400792 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_flavorID()
extern "C"  String_t* TournamentSignupRequestData_get_flavorID_m3338380155 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::set_flavorID(System.String)
extern "C"  void TournamentSignupRequestData_set_flavorID_m1868000584 (TournamentSignupRequestData_t1741431844 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_gameID()
extern "C"  int32_t TournamentSignupRequestData_get_gameID_m3325888794 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_Response()
extern "C"  TournamentSignupData_t4192108229  TournamentSignupRequestData_get_Response_m2579858043 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::set_Response(GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupData)
extern "C"  void TournamentSignupRequestData_set_Response_m2877935980 (TournamentSignupRequestData_t1741431844 * __this, TournamentSignupData_t4192108229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::SetCurrentUser(GSN.Skill.Phoenix.Model.Data.CurrentUser)
extern "C"  void TournamentSignupRequestData_SetCurrentUser_m2802258863 (TournamentSignupRequestData_t1741431844 * __this, CurrentUser_t3910039426 * ___currentUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::SetSignupForTournamentData(System.String,System.String,System.String,System.Int32)
extern "C"  void TournamentSignupRequestData_SetSignupForTournamentData_m2432321271 (TournamentSignupRequestData_t1741431844 * __this, String_t* ___flavor_id0, String_t* ___token1, String_t* ___client_id2, int32_t ___game_id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::SetReEnterTournamentData(System.String,System.String,System.String,System.String,System.Int32)
extern "C"  void TournamentSignupRequestData_SetReEnterTournamentData_m1220176907 (TournamentSignupRequestData_t1741431844 * __this, String_t* ___flavor_id0, String_t* ___token1, String_t* ___tourn_id2, String_t* ___client_id3, int32_t ___game_id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::SetSignupForUnplayedTournamentData(System.String,System.String,System.String,System.String,System.String,System.Int32)
extern "C"  void TournamentSignupRequestData_SetSignupForUnplayedTournamentData_m1857919729 (TournamentSignupRequestData_t1741431844 * __this, String_t* ___flavor_id0, String_t* ___token1, String_t* ___tourn_id2, String_t* ___unplayed_game_id3, String_t* ___client_id4, int32_t ___game_id5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_Url()
extern "C"  String_t* TournamentSignupRequestData_get_Url_m389969597 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_userData()
extern "C"  User_t1577144177 * TournamentSignupRequestData_get_userData_m448993743 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_CookieSessionIDKey()
extern "C"  String_t* TournamentSignupRequestData_get_CookieSessionIDKey_m2688672454 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * TournamentSignupRequestData_get_RequestBody_m3133767499 (TournamentSignupRequestData_t1741431844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
