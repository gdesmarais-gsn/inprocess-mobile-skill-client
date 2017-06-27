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

// GSN.Skill.Games.Common.Utils.Notarizer
struct Notarizer_t1554491764;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.SecureHunk>
struct List_1_t2671689037;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.IO.MemoryStream
struct MemoryStream_t743994179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req2087322079.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Sec3302567905.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"

// System.Void GSN.Skill.Games.Common.Utils.Notarizer::.ctor(System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.SecureHunk>,System.String,GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer,System.Boolean)
extern "C"  void Notarizer__ctor_m3895700982 (Notarizer_t1554491764 * __this, List_1_t2671689037 * ___outHunks_0, String_t* ___url1, requestCustomizer_t2087322079 * ___customizeWrapper_2, bool ___mocking_3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.Notarizer::get_NotarizeOutstanding()
extern "C"  int32_t Notarizer_get_NotarizeOutstanding_m1491503756 (Notarizer_t1554491764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.Notarizer::UnixTimeStamp()
extern "C"  String_t* Notarizer_UnixTimeStamp_m1839419316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Notarizer::AddHunk(GSN.Skill.Games.Common.Utils.SecureHunk,System.Action`1<System.Boolean>)
extern "C"  void Notarizer_AddHunk_m1579760922 (Notarizer_t1554491764 * __this, SecureHunk_t3302567905 * ___hunk0, Action_1_t3627374100 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Notarizer::processHunksSync(System.Action`1<System.Boolean>)
extern "C"  void Notarizer_processHunksSync_m3749697005 (Notarizer_t1554491764 * __this, Action_1_t3627374100 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Notarizer::GetUnnotarizedHunks(System.IO.MemoryStream)
extern "C"  void Notarizer_GetUnnotarizedHunks_m1635824447 (Notarizer_t1554491764 * __this, MemoryStream_t743994179 * ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.Notarizer::.cctor()
extern "C"  void Notarizer__cctor_m122599956 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
