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

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t2043888884;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.JsonReaderException::.ctor()
extern "C"  void JsonReaderException__ctor_m3069876819 (JsonReaderException_t2043888884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String)
extern "C"  void JsonReaderException__ctor_m312501101 (JsonReaderException_t2043888884 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception)
extern "C"  void JsonReaderException__ctor_m2014250157 (JsonReaderException_t2043888884 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception,System.String,System.Int32,System.Int32)
extern "C"  void JsonReaderException__ctor_m1666309167 (JsonReaderException_t2043888884 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, String_t* ___path2, int32_t ___lineNumber3, int32_t ___linePosition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void JsonReaderException__ctor_m3446567137 (JsonReaderException_t2043888884 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, int32_t ___lineNumber2, int32_t ___linePosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReaderException::get_LineNumber()
extern "C"  int32_t JsonReaderException_get_LineNumber_m2202493185 (JsonReaderException_t2043888884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_LineNumber(System.Int32)
extern "C"  void JsonReaderException_set_LineNumber_m1803432822 (JsonReaderException_t2043888884 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReaderException::get_LinePosition()
extern "C"  int32_t JsonReaderException_get_LinePosition_m745915567 (JsonReaderException_t2043888884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_LinePosition(System.Int32)
extern "C"  void JsonReaderException_set_LinePosition_m857453408 (JsonReaderException_t2043888884 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReaderException::get_Path()
extern "C"  String_t* JsonReaderException_get_Path_m2953706696 (JsonReaderException_t2043888884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_Path(System.String)
extern "C"  void JsonReaderException_set_Path_m3054321017 (JsonReaderException_t2043888884 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
extern "C"  JsonReaderException_t2043888884 * JsonReaderException_Create_m3011623825 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
extern "C"  JsonReaderException_t2043888884 * JsonReaderException_Create_m1160606857 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String,System.Exception)
extern "C"  JsonReaderException_t2043888884 * JsonReaderException_Create_m3028105763 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, Exception_t1927440687 * ___ex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
