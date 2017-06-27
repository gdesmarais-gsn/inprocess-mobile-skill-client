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

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData
struct TriPeaksNotaryRequestData_t3358746133;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Sec3302567905.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game3649477548.h"

// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::.ctor()
extern "C"  void TriPeaksNotaryRequestData__ctor_m3031864000 (TriPeaksNotaryRequestData_t3358746133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::get_secureHunk()
extern "C"  SecureHunk_t3302567905 * TriPeaksNotaryRequestData_get_secureHunk_m2328891468 (TriPeaksNotaryRequestData_t3358746133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::set_secureHunk(GSN.Skill.Games.Common.Utils.SecureHunk)
extern "C"  void TriPeaksNotaryRequestData_set_secureHunk_m2787972591 (TriPeaksNotaryRequestData_t3358746133 * __this, SecureHunk_t3302567905 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::get_Response()
extern "C"  TriPeaksNotaryData_t3649477548  TriPeaksNotaryRequestData_get_Response_m4080865211 (TriPeaksNotaryRequestData_t3358746133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::set_Response(GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData)
extern "C"  void TriPeaksNotaryRequestData_set_Response_m3172592338 (TriPeaksNotaryRequestData_t3358746133 * __this, TriPeaksNotaryData_t3649477548  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::setResponse(GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData)
extern "C"  void TriPeaksNotaryRequestData_setResponse_m359916763 (TriPeaksNotaryRequestData_t3358746133 * __this, TriPeaksNotaryData_t3649477548  ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::SetTriPeaksNotaryData(GSN.Skill.Games.Common.Utils.SecureHunk)
extern "C"  void TriPeaksNotaryRequestData_SetTriPeaksNotaryData_m735453711 (TriPeaksNotaryRequestData_t3358746133 * __this, SecureHunk_t3302567905 * ___hunk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * TriPeaksNotaryRequestData_get_RequestBody_m4284827409 (TriPeaksNotaryRequestData_t3358746133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::get_RawBody()
extern "C"  ByteU5BU5D_t3397334013* TriPeaksNotaryRequestData_get_RawBody_m1386577041 (TriPeaksNotaryRequestData_t3358746133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::unpackMessagePack(System.Byte[])
extern "C"  bool TriPeaksNotaryRequestData_unpackMessagePack_m1958958435 (TriPeaksNotaryRequestData_t3358746133 * __this, ByteU5BU5D_t3397334013* ___packedBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::.cctor()
extern "C"  void TriPeaksNotaryRequestData__cctor_m2995964563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
