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

// GSN.Skill.Games.Common.Client.Session.GameSessionBase
struct GameSessionBase_t3185325067;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::.ctor()
extern "C"  void GameSessionBase__ctor_m1010305772 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_ValidationHost()
extern "C"  String_t* GameSessionBase_get_ValidationHost_m1627921217 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_ValidationHost(System.String)
extern "C"  void GameSessionBase_set_ValidationHost_m2022701600 (GameSessionBase_t3185325067 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_WorldWinnerHost()
extern "C"  String_t* GameSessionBase_get_WorldWinnerHost_m792657921 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_WorldWinnerHost(System.String)
extern "C"  void GameSessionBase_set_WorldWinnerHost_m3535913312 (GameSessionBase_t3185325067 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_APIStartGamePath()
extern "C"  String_t* GameSessionBase_get_APIStartGamePath_m3935053197 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_APIStartGamePath(System.String)
extern "C"  void GameSessionBase_set_APIStartGamePath_m2366451920 (GameSessionBase_t3185325067 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_NotarizeOutstanding()
extern "C"  int32_t GameSessionBase_get_NotarizeOutstanding_m995257423 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_AuthzToken()
extern "C"  String_t* GameSessionBase_get_AuthzToken_m3116048659 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_AuthzToken(System.String)
extern "C"  void GameSessionBase_set_AuthzToken_m2122942484 (GameSessionBase_t3185325067 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::WriteGameLogToFile(System.String,System.Boolean)
extern "C"  void GameSessionBase_WriteGameLogToFile_m1607213169 (GameSessionBase_t3185325067 * __this, String_t* ___fn0, bool ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_JoinBody()
extern "C"  Dictionary_2_t3943999495 * GameSessionBase_get_JoinBody_m20270609 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_JoinBody(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSessionBase_set_JoinBody_m2582829766 (GameSessionBase_t3185325067 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_StartBody()
extern "C"  Dictionary_2_t3943999495 * GameSessionBase_get_StartBody_m3094480439 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_StartBody(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSessionBase_set_StartBody_m2039130226 (GameSessionBase_t3185325067 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_JoinRecord()
extern "C"  Dictionary_2_t3943999495 * GameSessionBase_get_JoinRecord_m2826084156 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_JoinRecord(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSessionBase_set_JoinRecord_m1537074079 (GameSessionBase_t3185325067 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_StartRecord()
extern "C"  Dictionary_2_t3943999495 * GameSessionBase_get_StartRecord_m2048852184 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_StartRecord(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSessionBase_set_StartRecord_m1846811285 (GameSessionBase_t3185325067 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::get_Setup()
extern "C"  Dictionary_2_t3943999495 * GameSessionBase_get_Setup_m3252052160 (GameSessionBase_t3185325067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSessionBase::set_Setup(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSessionBase_set_Setup_m2926046747 (GameSessionBase_t3185325067 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
