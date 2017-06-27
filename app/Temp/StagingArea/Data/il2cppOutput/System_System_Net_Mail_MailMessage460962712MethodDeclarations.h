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

// System.Net.Mail.MailMessage
struct MailMessage_t460962712;
// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t2752355131;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t537487287;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3502002665;
// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t2830199573;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Net.Mail.MailAddress
struct MailAddress_t1980919589;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Mime_TransferEncoding3662047104.h"
#include "System_System_Net_Mail_MailAddress1980919589.h"
#include "System_System_Net_Mail_MailPriority2524119153.h"

// System.Void System.Net.Mail.MailMessage::.ctor()
extern "C"  void MailMessage__ctor_m2564037877 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::get_AlternateViews()
extern "C"  AlternateViewCollection_t2752355131 * MailMessage_get_AlternateViews_m1633868523 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::get_Attachments()
extern "C"  AttachmentCollection_t537487287 * MailMessage_get_Attachments_m2104015575 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_Bcc()
extern "C"  MailAddressCollection_t3502002665 * MailMessage_get_Bcc_m806169089 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Body()
extern "C"  String_t* MailMessage_get_Body_m1263654313 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Body(System.String)
extern "C"  void MailMessage_set_Body_m690599032 (MailMessage_t460962712 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.MailMessage::get_BodyContentType()
extern "C"  ContentType_t2830199573 * MailMessage_get_BodyContentType_m2848421699 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.MailMessage::get_ContentTransferEncoding()
extern "C"  int32_t MailMessage_get_ContentTransferEncoding_m2266736684 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_BodyEncoding()
extern "C"  Encoding_t663144255 * MailMessage_get_BodyEncoding_m3527272607 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_CC()
extern "C"  MailAddressCollection_t3502002665 * MailMessage_get_CC_m391387143 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_From()
extern "C"  MailAddress_t1980919589 * MailMessage_get_From_m31404315 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_From(System.Net.Mail.MailAddress)
extern "C"  void MailMessage_set_From_m4254590858 (MailMessage_t460962712 * __this, MailAddress_t1980919589 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::get_Headers()
extern "C"  NameValueCollection_t3047564564 * MailMessage_get_Headers_m248526882 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailMessage::get_IsBodyHtml()
extern "C"  bool MailMessage_get_IsBodyHtml_m2751287499 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::get_Priority()
extern "C"  int32_t MailMessage_get_Priority_m3062159687 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_ReplyToList()
extern "C"  MailAddressCollection_t3502002665 * MailMessage_get_ReplyToList_m4210024830 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_Sender()
extern "C"  MailAddress_t1980919589 * MailMessage_get_Sender_m210137990 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Subject()
extern "C"  String_t* MailMessage_get_Subject_m3872906597 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Subject(System.String)
extern "C"  void MailMessage_set_Subject_m321994782 (MailMessage_t460962712 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_SubjectEncoding()
extern "C"  Encoding_t663144255 * MailMessage_get_SubjectEncoding_m2856684851 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_To()
extern "C"  MailAddressCollection_t3502002665 * MailMessage_get_To_m1574905830 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose()
extern "C"  void MailMessage_Dispose_m1804353022 (MailMessage_t460962712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose(System.Boolean)
extern "C"  void MailMessage_Dispose_m4278891945 (MailMessage_t460962712 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::GuessEncoding(System.String)
extern "C"  Encoding_t663144255 * MailMessage_GuessEncoding_m2474364103 (MailMessage_t460962712 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
