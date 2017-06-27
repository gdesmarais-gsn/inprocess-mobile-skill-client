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

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData
struct TriPeaksValidateRequestData_t218182868;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game1699752733.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"

// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::.ctor()
extern "C"  void TriPeaksValidateRequestData__ctor_m980143253 (TriPeaksValidateRequestData_t218182868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::get_Response()
extern "C"  TriPeaksValidateData_t1699752733  TriPeaksValidateRequestData_get_Response_m1879720283 (TriPeaksValidateRequestData_t218182868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::set_Response(GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData)
extern "C"  void TriPeaksValidateRequestData_set_Response_m3326153548 (TriPeaksValidateRequestData_t218182868 * __this, TriPeaksValidateData_t1699752733  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::setResponse(GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateData)
extern "C"  void TriPeaksValidateRequestData_setResponse_m2300141435 (TriPeaksValidateRequestData_t218182868 * __this, TriPeaksValidateData_t1699752733  ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::SetTriPeaksValidateData(System.IO.MemoryStream)
extern "C"  void TriPeaksValidateRequestData_SetTriPeaksValidateData_m3357437712 (TriPeaksValidateRequestData_t218182868 * __this, MemoryStream_t743994179 * ___gameLog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * TriPeaksValidateRequestData_get_RequestBody_m2371589932 (TriPeaksValidateRequestData_t218182868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::get_RawBody()
extern "C"  ByteU5BU5D_t3397334013* TriPeaksValidateRequestData_get_RawBody_m1577485934 (TriPeaksValidateRequestData_t218182868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::unpackMessagePack(System.Byte[])
extern "C"  bool TriPeaksValidateRequestData_unpackMessagePack_m2630416680 (TriPeaksValidateRequestData_t218182868 * __this, ByteU5BU5D_t3397334013* ___packedBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksValidateRequestData::<TriPeaksValidateRequestData>m__0(GSN.Skill.Requests.IWebRequest)
extern "C"  void TriPeaksValidateRequestData_U3CTriPeaksValidateRequestDataU3Em__0_m384144533 (TriPeaksValidateRequestData_t218182868 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
