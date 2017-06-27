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

// System.Net.Mail.SmtpClient
struct SmtpClient_t2719616745;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Net.ICredentialsByHost
struct ICredentialsByHost_t1409008158;
// System.Net.Mail.MailAddress
struct MailAddress_t1980919589;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3502002665;
// System.Net.Mail.MailMessage
struct MailMessage_t460962712;
// System.Net.Mail.AlternateView
struct AlternateView_t1668264691;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t3361889291;
// System.Net.Mail.Attachment
struct Attachment_t2609929423;
// System.Net.Mime.ContentType
struct ContentType_t2830199573;
// System.Net.Mail.LinkedResource
struct LinkedResource_t830466835;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t1586505162;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Mail_MailAddress1980919589.h"
#include "System_System_Net_Mail_MailAddressCollection3502002665.h"
#include "System_System_Net_Mail_MailMessage460962712.h"
#include "System_System_Net_Mail_AlternateView1668264691.h"
#include "System_System_Net_Mail_SmtpClient_SmtpResponse616735068.h"
#include "System_System_Net_Mail_LinkedResourceCollection3361889291.h"
#include "System_System_Net_Mail_Attachment2609929423.h"
#include "System_System_Net_Mime_ContentType2830199573.h"
#include "System_System_Net_Mime_TransferEncoding3662047104.h"
#include "System_System_Net_Mail_LinkedResource830466835.h"
#include "System_System_Net_Mime_ContentDisposition1586505162.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void System.Net.Mail.SmtpClient::.ctor(System.String)
extern "C"  void SmtpClient__ctor_m1314415978 (SmtpClient_t2719616745 * __this, String_t* ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::.ctor(System.String,System.Int32)
extern "C"  void SmtpClient__ctor_m2791419963 (SmtpClient_t2719616745 * __this, String_t* ___host0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Mail.SmtpClient::get_ClientCertificates()
extern "C"  X509CertificateCollection_t1197680765 * SmtpClient_get_ClientCertificates_m3063027881 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentialsByHost System.Net.Mail.SmtpClient::get_Credentials()
extern "C"  Il2CppObject * SmtpClient_get_Credentials_m3439925748 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Credentials(System.Net.ICredentialsByHost)
extern "C"  void SmtpClient_set_Credentials_m3257154693 (SmtpClient_t2719616745 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_EnableSsl(System.Boolean)
extern "C"  void SmtpClient_set_EnableSsl_m2196092979 (SmtpClient_t2719616745 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::get_Host()
extern "C"  String_t* SmtpClient_get_Host_m3553943736 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Port(System.Int32)
extern "C"  void SmtpClient_set_Port_m965812189 (SmtpClient_t2719616745 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::get_UseDefaultCredentials()
extern "C"  bool SmtpClient_get_UseDefaultCredentials_m1107063357 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::CheckState()
extern "C"  void SmtpClient_CheckState_m544475977 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeAddress(System.Net.Mail.MailAddress)
extern "C"  String_t* SmtpClient_EncodeAddress_m3891378607 (Il2CppObject * __this /* static, unused */, MailAddress_t1980919589 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeAddresses(System.Net.Mail.MailAddressCollection)
extern "C"  String_t* SmtpClient_EncodeAddresses_m415816743 (Il2CppObject * __this /* static, unused */, MailAddressCollection_t3502002665 * ___addresses0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeSubjectRFC2047(System.Net.Mail.MailMessage)
extern "C"  String_t* SmtpClient_EncodeSubjectRFC2047_m3037315592 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeBody(System.Net.Mail.MailMessage)
extern "C"  String_t* SmtpClient_EncodeBody_m1029925246 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeBody(System.Net.Mail.AlternateView)
extern "C"  String_t* SmtpClient_EncodeBody_m1100478955 (SmtpClient_t2719616745 * __this, AlternateView_t1668264691 * ___av0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::EndSection(System.String)
extern "C"  void SmtpClient_EndSection_m2654485128 (SmtpClient_t2719616745 * __this, String_t* ___section0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GenerateBoundary()
extern "C"  String_t* SmtpClient_GenerateBoundary_m2960843858 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GenerateBoundary(System.Int32)
extern "C"  String_t* SmtpClient_GenerateBoundary_m1288622655 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::IsError(System.Net.Mail.SmtpClient/SmtpResponse)
extern "C"  bool SmtpClient_IsError_m3229974232 (SmtpClient_t2719616745 * __this, SmtpResponse_t616735068  ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::CheckCancellation()
extern "C"  void SmtpClient_CheckCancellation_m3486226781 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient::Read()
extern "C"  SmtpResponse_t616735068  SmtpClient_Read_m469272661 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::ResetExtensions()
extern "C"  void SmtpClient_ResetExtensions_m1400287915 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::ParseExtensions(System.String)
extern "C"  void SmtpClient_ParseExtensions_m1426553949 (SmtpClient_t2719616745 * __this, String_t* ___extens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Send(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_Send_m1335332679 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendInternal(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendInternal_m1920579382 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendToFile(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendToFile_m3635673804 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendCore(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendCore_m2786901160 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendDot()
extern "C"  void SmtpClient_SendDot_m1127701087 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendData(System.String)
extern "C"  void SmtpClient_SendData_m3573341818 (SmtpClient_t2719616745 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::AddPriorityHeader(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_AddPriorityHeader_m665400007 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendSimpleBody(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendSimpleBody_m456636417 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendBodylessSingleAlternate(System.Net.Mail.AlternateView)
extern "C"  void SmtpClient_SendBodylessSingleAlternate_m3161137435 (SmtpClient_t2719616745 * __this, AlternateView_t1668264691 * ___av0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendWithoutAttachments(System.Net.Mail.MailMessage,System.String,System.Boolean)
extern "C"  void SmtpClient_SendWithoutAttachments_m728631306 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, String_t* ___boundary1, bool ___attachmentExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendWithAttachments(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendWithAttachments_m3259939 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendBodyWithAlternateViews(System.Net.Mail.MailMessage,System.String,System.Boolean)
extern "C"  void SmtpClient_SendBodyWithAlternateViews_m396803556 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, String_t* ___boundary1, bool ___attachmentExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendLinkedResources(System.Net.Mail.MailMessage,System.Net.Mail.LinkedResourceCollection,System.String)
extern "C"  void SmtpClient_SendLinkedResources_m1276541857 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, LinkedResourceCollection_t3361889291 * ___resources1, String_t* ___boundary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendAttachments(System.Net.Mail.MailMessage,System.Net.Mail.Attachment,System.String)
extern "C"  void SmtpClient_SendAttachments_m1044441231 (SmtpClient_t2719616745 * __this, MailMessage_t460962712 * ___message0, Attachment_t2609929423 * ___body1, String_t* ___boundary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient::SendCommand(System.String)
extern "C"  SmtpResponse_t616735068  SmtpClient_SendCommand_m2925096138 (SmtpClient_t2719616745 * __this, String_t* ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendHeader(System.String,System.String)
extern "C"  void SmtpClient_SendHeader_m1207288915 (SmtpClient_t2719616745 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType)
extern "C"  void SmtpClient_StartSection_m2772897794 (SmtpClient_t2719616745 * __this, String_t* ___section0, ContentType_t2830199573 * ___sectionContentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding)
extern "C"  void SmtpClient_StartSection_m2636567902 (SmtpClient_t2719616745 * __this, String_t* ___section0, ContentType_t2830199573 * ___sectionContentType1, int32_t ___transferEncoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding,System.Net.Mail.LinkedResource)
extern "C"  void SmtpClient_StartSection_m587009204 (SmtpClient_t2719616745 * __this, String_t* ___section0, ContentType_t2830199573 * ___sectionContentType1, int32_t ___transferEncoding2, LinkedResource_t830466835 * ___lr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding,System.Net.Mime.ContentDisposition)
extern "C"  void SmtpClient_StartSection_m1404115764 (SmtpClient_t2719616745 * __this, String_t* ___section0, ContentType_t2830199573 * ___sectionContentType1, int32_t ___transferEncoding2, ContentDisposition_t1586505162 * ___contentDisposition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::ToQuotedPrintable(System.String,System.Text.Encoding)
extern "C"  String_t* SmtpClient_ToQuotedPrintable_m2339218132 (SmtpClient_t2719616745 * __this, String_t* ___input0, Encoding_t663144255 * ___enc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::ToQuotedPrintable(System.Byte[])
extern "C"  String_t* SmtpClient_ToQuotedPrintable_m3173265746 (SmtpClient_t2719616745 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GetTransferEncodingName(System.Net.Mime.TransferEncoding)
extern "C"  String_t* SmtpClient_GetTransferEncodingName_m1391912260 (Il2CppObject * __this /* static, unused */, int32_t ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::InitiateSecureConnection()
extern "C"  void SmtpClient_InitiateSecureConnection_m2169222528 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Authenticate()
extern "C"  void SmtpClient_Authenticate_m252120009 (SmtpClient_t2719616745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Authenticate(System.String,System.String)
extern "C"  void SmtpClient_Authenticate_m3295848473 (SmtpClient_t2719616745 * __this, String_t* ___Username0, String_t* ___Password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::<callback>m__2(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool SmtpClient_U3CcallbackU3Em__2_m2488456467 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t283079845 * ___certificate1, X509Chain_t777637347 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
