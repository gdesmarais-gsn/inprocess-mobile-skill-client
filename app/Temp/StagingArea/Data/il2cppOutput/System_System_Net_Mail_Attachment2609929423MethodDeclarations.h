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

// System.Net.Mail.Attachment
struct Attachment_t2609929423;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t1586505162;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.Net.Mail.Attachment::.ctor(System.String)
extern "C"  void Attachment__ctor_m2582460116 (Attachment_t2609929423 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.IO.Stream,System.String,System.String)
extern "C"  void Attachment__ctor_m1641775085 (Attachment_t2609929423 * __this, Stream_t3255436806 * ___contentStream0, String_t* ___name1, String_t* ___mediaType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::get_ContentDisposition()
extern "C"  ContentDisposition_t1586505162 * Attachment_get_ContentDisposition_m744092352 (Attachment_t2609929423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.Attachment::get_Name()
extern "C"  String_t* Attachment_get_Name_m2601417665 (Attachment_t2609929423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::set_Name(System.String)
extern "C"  void Attachment_set_Name_m1496561796 (Attachment_t2609929423 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.Attachment::get_NameEncoding()
extern "C"  Encoding_t663144255 * Attachment_get_NameEncoding_m3250837535 (Attachment_t2609929423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.Attachment System.Net.Mail.Attachment::CreateAttachmentFromString(System.String,System.String,System.Text.Encoding,System.String)
extern "C"  Attachment_t2609929423 * Attachment_CreateAttachmentFromString_m2209720454 (Il2CppObject * __this /* static, unused */, String_t* ___content0, String_t* ___name1, Encoding_t663144255 * ___contentEncoding2, String_t* ___mediaType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::InitName(System.String)
extern "C"  void Attachment_InitName_m835767157 (Attachment_t2609929423 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
