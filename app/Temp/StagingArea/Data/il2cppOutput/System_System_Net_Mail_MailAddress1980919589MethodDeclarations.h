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

// System.Net.Mail.MailAddress
struct MailAddress_t1980919589;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Object
struct Il2CppObject;
// System.FormatException
struct FormatException_t2948921286;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Mail_MailAddress1980919589.h"

// System.Void System.Net.Mail.MailAddress::.ctor(System.String)
extern "C"  void MailAddress__ctor_m3206282340 (MailAddress_t1980919589 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String)
extern "C"  void MailAddress__ctor_m4021826340 (MailAddress_t1980919589 * __this, String_t* ___address0, String_t* ___displayName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String,System.Text.Encoding)
extern "C"  void MailAddress__ctor_m3625251371 (MailAddress_t1980919589 * __this, String_t* ___address0, String_t* ___displayName1, Encoding_t663144255 * ___displayNameEncoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_Address()
extern "C"  String_t* MailAddress_get_Address_m1257857744 (MailAddress_t1980919589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_DisplayName()
extern "C"  String_t* MailAddress_get_DisplayName_m4236226261 (MailAddress_t1980919589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Object)
extern "C"  bool MailAddress_Equals_m2670558225 (MailAddress_t1980919589 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Net.Mail.MailAddress)
extern "C"  bool MailAddress_Equals_m3287858545 (MailAddress_t1980919589 * __this, MailAddress_t1980919589 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mail.MailAddress::GetHashCode()
extern "C"  int32_t MailAddress_GetHashCode_m1840949059 (MailAddress_t1980919589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::ToString()
extern "C"  String_t* MailAddress_ToString_m2658093283 (MailAddress_t1980919589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.FormatException System.Net.Mail.MailAddress::CreateFormatException()
extern "C"  FormatException_t2948921286 * MailAddress_CreateFormatException_m1602073998 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
