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

// System.Net.Mime.ContentType
struct ContentType_t2830199573;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Mime_ContentType2830199573.h"
#include "System_System_Net_Mime_TransferEncoding3662047104.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.Net.Mime.ContentType::.ctor()
extern "C"  void ContentType__ctor_m462656439 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.ctor(System.String)
extern "C"  void ContentType__ctor_m3953884833 (ContentType_t2830199573 * __this, String_t* ___contentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.cctor()
extern "C"  void ContentType__cctor_m2513991722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::Parse(System.String)
extern "C"  void ContentType_Parse_m442164814 (ContentType_t2830199573 * __this, String_t* ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::get_UTF8Unmarked()
extern "C"  Encoding_t663144255 * ContentType_get_UTF8Unmarked_m1698891528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Boundary(System.String)
extern "C"  void ContentType_set_Boundary_m526190626 (ContentType_t2830199573 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_CharSet()
extern "C"  String_t* ContentType_get_CharSet_m835302421 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_CharSet(System.String)
extern "C"  void ContentType_set_CharSet_m3320166494 (ContentType_t2830199573 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_MediaType()
extern "C"  String_t* ContentType_get_MediaType_m4231089171 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_MediaType(System.String)
extern "C"  void ContentType_set_MediaType_m1839276898 (ContentType_t2830199573 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_Name()
extern "C"  String_t* ContentType_get_Name_m2242854150 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Name(System.String)
extern "C"  void ContentType_set_Name_m4048777083 (ContentType_t2830199573 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentType::get_Parameters()
extern "C"  StringDictionary_t1070889667 * ContentType_get_Parameters_m2682586975 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Object)
extern "C"  bool ContentType_Equals_m3423026998 (ContentType_t2830199573 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Net.Mime.ContentType)
extern "C"  bool ContentType_Equals_m59068529 (ContentType_t2830199573 * __this, ContentType_t2830199573 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentType::GetHashCode()
extern "C"  int32_t ContentType_GetHashCode_m1278842886 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::ToString()
extern "C"  String_t* ContentType_ToString_m3855845548 (ContentType_t2830199573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::WrapIfEspecialsExist(System.String)
extern "C"  String_t* ContentType_WrapIfEspecialsExist_m3095784631 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::GuessEncoding(System.String)
extern "C"  Encoding_t663144255 * ContentType_GuessEncoding_m430683225 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mime.ContentType::GuessTransferEncoding(System.Text.Encoding)
extern "C"  int32_t ContentType_GuessTransferEncoding_m2439030124 (Il2CppObject * __this /* static, unused */, Encoding_t663144255 * ___enc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::To2047(System.Byte[])
extern "C"  String_t* ContentType_To2047_m92524219 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::EncodeSubjectRFC2047(System.String,System.Text.Encoding)
extern "C"  String_t* ContentType_EncodeSubjectRFC2047_m2558987611 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___enc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
