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

// UnityTest.DTOFormatter
struct DTOFormatter_t1172541681;
// UnityTest.ResultDTO
struct ResultDTO_t2310469256;
// UnityTest.DTOFormatter/ITransferInterface
struct ITransferInterface_t2474813198;
// System.IO.Stream
struct Stream_t3255436806;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO2310469256.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void UnityTest.DTOFormatter::.ctor()
extern "C"  void DTOFormatter__ctor_m102404995 (DTOFormatter_t1172541681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Transfer(UnityTest.ResultDTO,UnityTest.DTOFormatter/ITransferInterface)
extern "C"  void DTOFormatter_Transfer_m695235245 (DTOFormatter_t1172541681 * __this, ResultDTO_t2310469256 * ___dto0, Il2CppObject * ___transfer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Serialize(System.IO.Stream,UnityTest.ResultDTO)
extern "C"  void DTOFormatter_Serialize_m1124781319 (DTOFormatter_t1172541681 * __this, Stream_t3255436806 * ___stream0, ResultDTO_t2310469256 * ___dto1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.DTOFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * DTOFormatter_Deserialize_m3175911010 (DTOFormatter_t1172541681 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
