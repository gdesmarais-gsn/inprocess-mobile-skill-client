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

// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3502002665;
// System.String
struct String_t;
// System.Net.Mail.MailAddress
struct MailAddress_t1980919589;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Mail_MailAddress1980919589.h"

// System.Void System.Net.Mail.MailAddressCollection::.ctor()
extern "C"  void MailAddressCollection__ctor_m3656192278 (MailAddressCollection_t3502002665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::Add(System.String)
extern "C"  void MailAddressCollection_Add_m3560223589 (MailAddressCollection_t3502002665 * __this, String_t* ___addresses0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::InsertItem(System.Int32,System.Net.Mail.MailAddress)
extern "C"  void MailAddressCollection_InsertItem_m928083083 (MailAddressCollection_t3502002665 * __this, int32_t ___index0, MailAddress_t1980919589 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::SetItem(System.Int32,System.Net.Mail.MailAddress)
extern "C"  void MailAddressCollection_SetItem_m1778562138 (MailAddressCollection_t3502002665 * __this, int32_t ___index0, MailAddress_t1980919589 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddressCollection::ToString()
extern "C"  String_t* MailAddressCollection_ToString_m2589230133 (MailAddressCollection_t3502002665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
