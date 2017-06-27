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

// UnityTest.DTOFormatter/Reader
struct Reader_t3361724802;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType2559459879.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState1620411406.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityTest.DTOFormatter/Reader::.ctor(System.IO.Stream)
extern "C"  void Reader__ctor_m3812585930 (Reader_t3361724802 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityTest.DTOFormatter/Reader::ReadConvertedNumber(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Reader_ReadConvertedNumber_m2595987559 (Reader_t3361724802 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.ResultDTO/MessageType&)
extern "C"  void Reader_Transfer_m1365540329 (Reader_t3361724802 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.TestResultState&)
extern "C"  void Reader_Transfer_m3809807411 (Reader_t3361724802 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Byte&)
extern "C"  void Reader_Transfer_m2580025117 (Reader_t3361724802 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Boolean&)
extern "C"  void Reader_Transfer_m1142812007 (Reader_t3361724802 * __this, bool* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Int32&)
extern "C"  void Reader_Transfer_m2736290465 (Reader_t3361724802 * __this, int32_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Single&)
extern "C"  void Reader_Transfer_m1950859821 (Reader_t3361724802 * __this, float* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Double&)
extern "C"  void Reader_Transfer_m1645577760 (Reader_t3361724802 * __this, double* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.String&)
extern "C"  void Reader_Transfer_m2422691704 (Reader_t3361724802 * __this, String_t** ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
