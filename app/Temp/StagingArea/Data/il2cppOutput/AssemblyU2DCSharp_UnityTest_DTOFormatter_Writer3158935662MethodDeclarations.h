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

// UnityTest.DTOFormatter/Writer
struct Writer_t3158935662;
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

// System.Void UnityTest.DTOFormatter/Writer::.ctor(System.IO.Stream)
extern "C"  void Writer__ctor_m1482912658 (Writer_t3158935662 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::WriteConvertedNumber(System.Byte[])
extern "C"  void Writer_WriteConvertedNumber_m4268712202 (Writer_t3158935662 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.ResultDTO/MessageType&)
extern "C"  void Writer_Transfer_m1643212099 (Writer_t3158935662 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.TestResultState&)
extern "C"  void Writer_Transfer_m1200399445 (Writer_t3158935662 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Byte&)
extern "C"  void Writer_Transfer_m2150694651 (Writer_t3158935662 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Boolean&)
extern "C"  void Writer_Transfer_m2979153061 (Writer_t3158935662 * __this, bool* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Int32&)
extern "C"  void Writer_Transfer_m137388539 (Writer_t3158935662 * __this, int32_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Single&)
extern "C"  void Writer_Transfer_m3375187871 (Writer_t3158935662 * __this, float* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Double&)
extern "C"  void Writer_Transfer_m3438854956 (Writer_t3158935662 * __this, double* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.String&)
extern "C"  void Writer_Transfer_m784930944 (Writer_t3158935662 * __this, String_t** ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
