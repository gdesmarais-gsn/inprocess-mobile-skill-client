#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_Attachment2609929423.h"
#include "System_System_Net_Mail_AttachmentBase3226558610.h"
#include "System_System_Net_Mail_AttachmentBase_MimeTypes4160044079.h"
#include "System_System_Net_Mail_AttachmentCollection537487287.h"
#include "System_System_Net_Mail_LinkedResource830466835.h"
#include "System_System_Net_Mail_LinkedResourceCollection3361889291.h"
#include "System_System_Net_Mail_MailAddress1980919589.h"
#include "System_System_Net_Mail_MailAddressCollection3502002665.h"
#include "System_System_Net_Mail_MailMessage460962712.h"
#include "System_System_Net_Mail_MailPriority2524119153.h"
#include "System_System_Net_Mail_SmtpClient2719616745.h"
#include "System_System_Net_Mail_SmtpClient_AuthMechs3916064079.h"
#include "System_System_Net_Mail_SmtpClient_CancellationExcep544132923.h"
#include "System_System_Net_Mail_SmtpClient_SmtpResponse616735068.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod1749648319.h"
#include "System_System_Net_Mail_SmtpException1190166745.h"
#include "System_System_Net_Mail_SmtpFailedRecipientExceptio3355744591.h"
#include "System_System_Net_Mail_SmtpFailedRecipientsExcepti1979361300.h"
#include "System_System_Net_Mail_SmtpStatusCode887155417.h"
#include "System_System_Net_Mime_ContentDisposition1586505162.h"
#include "System_System_Net_Mime_ContentType2830199573.h"
#include "System_System_Net_Mime_TransferEncoding3662047104.h"
#include "System_System_Net_NetworkInformation_DuplicateAddr3969562151.h"
#include "System_System_Net_NetworkInformation_IPAddressInfor732454853.h"
#include "System_System_Net_NetworkInformation_IPInterfacePr3986609851.h"
#include "System_System_Net_NetworkInformation_UnixIPInterfa2418091637.h"
#include "System_System_Net_NetworkInformation_LinuxIPInterf3318447793.h"
#include "System_System_Net_NetworkInformation_MacOsIPInterf3101377296.h"
#include "System_System_Net_NetworkInformation_Win32IPInterf3641679752.h"
#include "System_System_Net_NetworkInformation_IPv4Interface3946458365.h"
#include "System_System_Net_NetworkInformation_Win32IPv4Inte2652275954.h"
#include "System_System_Net_NetworkInformation_ifa_ifu602722385.h"
#include "System_System_Net_NetworkInformation_ifaddrs2532459533.h"
#include "System_System_Net_NetworkInformation_sockaddr_in1277740973.h"
#include "System_System_Net_NetworkInformation_sockaddr_in62899168071.h"
#include "System_System_Net_NetworkInformation_in6_addr4035827331.h"
#include "System_System_Net_NetworkInformation_sockaddr_ll1681025498.h"
#include "System_System_Net_NetworkInformation_LinuxArpHardw4257672401.h"
#include "System_System_Net_NetworkInformation_MacOsStructs_i937751619.h"
#include "System_System_Net_NetworkInformation_MacOsStructs_3329842375.h"
#include "System_System_Net_NetworkInformation_MacOsStructs_2792443317.h"
#include "System_System_Net_NetworkInformation_MacOsStructs_1014645363.h"
#include "System_System_Net_NetworkInformation_MacOsStructs_s834146887.h"
#include "System_System_Net_NetworkInformation_MacOsStructs_3955242742.h"
#include "System_System_Net_NetworkInformation_MacOsArpHardwa650784048.h"
#include "System_System_Net_NetworkInformation_NetworkInform1863186723.h"
#include "System_System_Net_NetworkInformation_NetworkInterfac63927633.h"
#include "System_System_Net_NetworkInformation_UnixNetworkIn1000704527.h"
#include "System_System_Net_NetworkInformation_LinuxNetworkI3864470295.h"
#include "System_System_Net_NetworkInformation_MacOsNetworkI1454185290.h"
#include "System_System_Net_NetworkInformation_Win32NetworkIn482839970.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"
#include "System_System_Net_NetworkInformation_OperationalSt2833345236.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin2896511548.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin2288602937.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddr2919786644.h"
#include "System_System_Net_NetworkInformation_Win32UnicastI1388218403.h"
#include "System_System_Net_NetworkInformation_LinuxUnicastIP870378058.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddre347163204.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddre771061202.h"
#include "System_System_Net_NetworkInformation_AlignmentUnion707470070.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPT680756680.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAP2310876292.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADDR2646152127.h"
#include "System_System_Net_NetworkInformation_Win32LengthFl1910118479.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAP1884414946.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKADD1606057231.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_1093973396.h"
#include "System_System_Net_Security_AuthenticatedStream1183414097.h"
#include "System_System_Net_Security_AuthenticationLevel2424130044.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"
#include "System_System_Net_Security_SslStream1853163792.h"
#include "System_System_Net_Security_SslStream_U3CBeginAuthe1358332250.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_Sockets_IPv6MulticastOption1621622330.h"
#include "System_System_Net_Sockets_LingerOption1165263720.h"
#include "System_System_Net_Sockets_MulticastOption2505469155.h"
#include "System_System_Net_Sockets_NetworkStream581172200.h"
#include "System_System_Net_Sockets_ProtocolType2178963134.h"
#include "System_System_Net_Sockets_SelectMode3413969319.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "System_System_Net_Sockets_Socket_SocketOperation3328960782.h"
#include "System_System_Net_Sockets_Socket_SocketAsyncResult2959281146.h"
#include "System_System_Net_Sockets_Socket_Worker1317165246.h"
#include "System_System_Net_Sockets_Socket_SocketAsyncCall3737776727.h"
#include "System_System_Net_Sockets_SocketError307542793.h"
#include "System_System_Net_Sockets_SocketException1618573604.h"
#include "System_System_Net_Sockets_SocketFlags2353657790.h"
#include "System_System_Net_Sockets_SocketOptionLevel1505247880.h"
#include "System_System_Net_Sockets_SocketOptionName1089121285.h"
#include "System_System_Net_Sockets_SocketShutdown3247039417.h"
#include "System_System_Net_Sockets_SocketType1143498533.h"
#include "System_System_Net_Sockets_TcpClient408947970.h"
#include "System_System_Net_Sockets_TcpClient_Properties4286508698.h"
#include "System_System_Net_AuthenticationManager3410876775.h"
#include "System_System_Net_Authorization1602399.h"
#include "System_System_Net_BasicClient3996961659.h"
#include "System_System_Net_ChunkStream91719323.h"
#include "System_System_Net_ChunkStream_State4001596355.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (Attachment_t2609929423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1300[2] = 
{
	Attachment_t2609929423::get_offset_of_contentDisposition_4(),
	Attachment_t2609929423::get_offset_of_nameEncoding_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (AttachmentBase_t3226558610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1301[4] = 
{
	AttachmentBase_t3226558610::get_offset_of_id_0(),
	AttachmentBase_t3226558610::get_offset_of_contentType_1(),
	AttachmentBase_t3226558610::get_offset_of_contentStream_2(),
	AttachmentBase_t3226558610::get_offset_of_transferEncoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (MimeTypes_t4160044079), -1, sizeof(MimeTypes_t4160044079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1302[1] = 
{
	MimeTypes_t4160044079_StaticFields::get_offset_of_mimeTypes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (AttachmentCollection_t537487287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (LinkedResource_t830466835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (LinkedResourceCollection_t3361889291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (MailAddress_t1980919589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1306[2] = 
{
	MailAddress_t1980919589::get_offset_of_address_0(),
	MailAddress_t1980919589::get_offset_of_displayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (MailAddressCollection_t3502002665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (MailMessage_t460962712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1308[16] = 
{
	MailMessage_t460962712::get_offset_of_alternateViews_0(),
	MailMessage_t460962712::get_offset_of_attachments_1(),
	MailMessage_t460962712::get_offset_of_bcc_2(),
	MailMessage_t460962712::get_offset_of_replyTo_3(),
	MailMessage_t460962712::get_offset_of_body_4(),
	MailMessage_t460962712::get_offset_of_priority_5(),
	MailMessage_t460962712::get_offset_of_sender_6(),
	MailMessage_t460962712::get_offset_of_cc_7(),
	MailMessage_t460962712::get_offset_of_from_8(),
	MailMessage_t460962712::get_offset_of_headers_9(),
	MailMessage_t460962712::get_offset_of_to_10(),
	MailMessage_t460962712::get_offset_of_subject_11(),
	MailMessage_t460962712::get_offset_of_subjectEncoding_12(),
	MailMessage_t460962712::get_offset_of_bodyEncoding_13(),
	MailMessage_t460962712::get_offset_of_headersEncoding_14(),
	MailMessage_t460962712::get_offset_of_isHtml_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (MailPriority_t2524119153)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1309[4] = 
{
	MailPriority_t2524119153::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (SmtpClient_t2719616745), -1, sizeof(SmtpClient_t2719616745_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1310[21] = 
{
	SmtpClient_t2719616745::get_offset_of_host_0(),
	SmtpClient_t2719616745::get_offset_of_port_1(),
	SmtpClient_t2719616745::get_offset_of_timeout_2(),
	SmtpClient_t2719616745::get_offset_of_credentials_3(),
	SmtpClient_t2719616745::get_offset_of_pickupDirectoryLocation_4(),
	SmtpClient_t2719616745::get_offset_of_deliveryMethod_5(),
	SmtpClient_t2719616745::get_offset_of_enableSsl_6(),
	SmtpClient_t2719616745::get_offset_of_clientCertificates_7(),
	SmtpClient_t2719616745::get_offset_of_client_8(),
	SmtpClient_t2719616745::get_offset_of_stream_9(),
	SmtpClient_t2719616745::get_offset_of_writer_10(),
	SmtpClient_t2719616745::get_offset_of_reader_11(),
	SmtpClient_t2719616745::get_offset_of_boundaryIndex_12(),
	SmtpClient_t2719616745::get_offset_of_defaultFrom_13(),
	SmtpClient_t2719616745::get_offset_of_messageInProcess_14(),
	SmtpClient_t2719616745::get_offset_of_worker_15(),
	SmtpClient_t2719616745::get_offset_of_authMechs_16(),
	SmtpClient_t2719616745::get_offset_of_mutex_17(),
	SmtpClient_t2719616745::get_offset_of_callback_18(),
	SmtpClient_t2719616745_StaticFields::get_offset_of_U3CU3Ef__amU24cache16_19(),
	SmtpClient_t2719616745_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (AuthMechs_t3916064079)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1311[8] = 
{
	AuthMechs_t3916064079::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (CancellationException_t544132923), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (SmtpResponse_t616735068)+ sizeof (Il2CppObject), sizeof(SmtpResponse_t616735068_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1313[2] = 
{
	SmtpResponse_t616735068::get_offset_of_StatusCode_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	SmtpResponse_t616735068::get_offset_of_Description_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (SmtpDeliveryMethod_t1749648319)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1314[4] = 
{
	SmtpDeliveryMethod_t1749648319::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (SmtpException_t1190166745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1315[1] = 
{
	SmtpException_t1190166745::get_offset_of_statusCode_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (SmtpFailedRecipientException_t3355744591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1316[1] = 
{
	SmtpFailedRecipientException_t3355744591::get_offset_of_failedRecipient_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (SmtpFailedRecipientsException_t1979361300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1317[1] = 
{
	SmtpFailedRecipientsException_t1979361300::get_offset_of_innerExceptions_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (SmtpStatusCode_t887155417)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1318[26] = 
{
	SmtpStatusCode_t887155417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (ContentDisposition_t1586505162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1319[2] = 
{
	ContentDisposition_t1586505162::get_offset_of_dispositionType_0(),
	ContentDisposition_t1586505162::get_offset_of_parameters_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (ContentType_t2830199573), -1, sizeof(ContentType_t2830199573_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1320[4] = 
{
	ContentType_t2830199573_StaticFields::get_offset_of_utf8unmarked_0(),
	ContentType_t2830199573::get_offset_of_mediaType_1(),
	ContentType_t2830199573::get_offset_of_parameters_2(),
	ContentType_t2830199573_StaticFields::get_offset_of_especials_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (TransferEncoding_t3662047104)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1321[5] = 
{
	TransferEncoding_t3662047104::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (DuplicateAddressDetectionState_t3969562151)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1322[6] = 
{
	DuplicateAddressDetectionState_t3969562151::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (IPAddressInformation_t732454853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (IPInterfaceProperties_t3986609851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (UnixIPInterfaceProperties_t2418091637), -1, sizeof(UnixIPInterfaceProperties_t2418091637_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1325[4] = 
{
	UnixIPInterfaceProperties_t2418091637::get_offset_of_iface_0(),
	UnixIPInterfaceProperties_t2418091637::get_offset_of_addresses_1(),
	UnixIPInterfaceProperties_t2418091637_StaticFields::get_offset_of_ns_2(),
	UnixIPInterfaceProperties_t2418091637_StaticFields::get_offset_of_search_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (LinuxIPInterfaceProperties_t3318447793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (MacOsIPInterfaceProperties_t3101377296), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (Win32IPInterfaceProperties2_t3641679752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1328[3] = 
{
	Win32IPInterfaceProperties2_t3641679752::get_offset_of_addr_0(),
	Win32IPInterfaceProperties2_t3641679752::get_offset_of_mib4_1(),
	Win32IPInterfaceProperties2_t3641679752::get_offset_of_mib6_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (IPv4InterfaceStatistics_t3946458365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (Win32IPv4InterfaceStatistics_t2652275954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1330[1] = 
{
	Win32IPv4InterfaceStatistics_t2652275954::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (ifa_ifu_t602722385)+ sizeof (Il2CppObject), sizeof(ifa_ifu_t602722385 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1331[2] = 
{
	ifa_ifu_t602722385::get_offset_of_ifu_broadaddr_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifa_ifu_t602722385::get_offset_of_ifu_dstaddr_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (ifaddrs_t2532459533)+ sizeof (Il2CppObject), sizeof(ifaddrs_t2532459533_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1332[7] = 
{
	ifaddrs_t2532459533::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t2532459533::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t2532459533::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t2532459533::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t2532459533::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t2532459533::get_offset_of_ifa_ifu_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t2532459533::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (sockaddr_in_t1277740973)+ sizeof (Il2CppObject), sizeof(sockaddr_in_t1277740973 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1333[3] = 
{
	sockaddr_in_t1277740973::get_offset_of_sin_family_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in_t1277740973::get_offset_of_sin_port_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in_t1277740973::get_offset_of_sin_addr_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (sockaddr_in6_t2899168071)+ sizeof (Il2CppObject), sizeof(sockaddr_in6_t2899168071_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1334[5] = 
{
	sockaddr_in6_t2899168071::get_offset_of_sin6_family_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t2899168071::get_offset_of_sin6_port_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t2899168071::get_offset_of_sin6_flowinfo_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t2899168071::get_offset_of_sin6_addr_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t2899168071::get_offset_of_sin6_scope_id_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (in6_addr_t4035827331)+ sizeof (Il2CppObject), sizeof(in6_addr_t4035827331_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1335[1] = 
{
	in6_addr_t4035827331::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (sockaddr_ll_t1681025498)+ sizeof (Il2CppObject), sizeof(sockaddr_ll_t1681025498_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1336[7] = 
{
	sockaddr_ll_t1681025498::get_offset_of_sll_family_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_ll_t1681025498::get_offset_of_sll_protocol_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_ll_t1681025498::get_offset_of_sll_ifindex_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_ll_t1681025498::get_offset_of_sll_hatype_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_ll_t1681025498::get_offset_of_sll_pkttype_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_ll_t1681025498::get_offset_of_sll_halen_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_ll_t1681025498::get_offset_of_sll_addr_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (LinuxArpHardware_t4257672401)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1337[11] = 
{
	LinuxArpHardware_t4257672401::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (ifaddrs_t937751619)+ sizeof (Il2CppObject), sizeof(ifaddrs_t937751619_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1338[7] = 
{
	ifaddrs_t937751619::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t937751619::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t937751619::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t937751619::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t937751619::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t937751619::get_offset_of_ifa_dstaddr_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ifaddrs_t937751619::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (sockaddr_t3329842375)+ sizeof (Il2CppObject), sizeof(sockaddr_t3329842375 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1339[2] = 
{
	sockaddr_t3329842375::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_t3329842375::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (sockaddr_in_t2792443317)+ sizeof (Il2CppObject), sizeof(sockaddr_in_t2792443317 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1340[4] = 
{
	sockaddr_in_t2792443317::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in_t2792443317::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in_t2792443317::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in_t2792443317::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (in6_addr_t1014645363)+ sizeof (Il2CppObject), sizeof(in6_addr_t1014645363_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1341[1] = 
{
	in6_addr_t1014645363::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (sockaddr_in6_t834146887)+ sizeof (Il2CppObject), sizeof(sockaddr_in6_t834146887_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1342[6] = 
{
	sockaddr_in6_t834146887::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t834146887::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t834146887::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t834146887::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t834146887::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_in6_t834146887::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (sockaddr_dl_t3955242742)+ sizeof (Il2CppObject), sizeof(sockaddr_dl_t3955242742_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1343[8] = 
{
	sockaddr_dl_t3955242742::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	sockaddr_dl_t3955242742::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (MacOsArpHardware_t650784048)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1344[7] = 
{
	MacOsArpHardware_t650784048::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (NetworkInformationException_t1863186723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1345[1] = 
{
	NetworkInformationException_t1863186723::get_offset_of_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (NetworkInterface_t63927633), -1, sizeof(NetworkInterface_t63927633_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1346[2] = 
{
	NetworkInterface_t63927633_StaticFields::get_offset_of_windowsVer51_0(),
	NetworkInterface_t63927633_StaticFields::get_offset_of_runningOnUnix_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (UnixNetworkInterface_t1000704527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1347[6] = 
{
	UnixNetworkInterface_t1000704527::get_offset_of_ipproperties_2(),
	UnixNetworkInterface_t1000704527::get_offset_of_name_3(),
	UnixNetworkInterface_t1000704527::get_offset_of_index_4(),
	UnixNetworkInterface_t1000704527::get_offset_of_addresses_5(),
	UnixNetworkInterface_t1000704527::get_offset_of_macAddress_6(),
	UnixNetworkInterface_t1000704527::get_offset_of_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (LinuxNetworkInterface_t3864470295), -1, sizeof(LinuxNetworkInterface_t3864470295_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1348[4] = 
{
	LinuxNetworkInterface_t3864470295::get_offset_of_iface_path_8(),
	LinuxNetworkInterface_t3864470295::get_offset_of_iface_operstate_path_9(),
	LinuxNetworkInterface_t3864470295::get_offset_of_iface_flags_path_10(),
	LinuxNetworkInterface_t3864470295_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (MacOsNetworkInterface_t1454185290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (Win32NetworkInterface2_t482839970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1350[5] = 
{
	Win32NetworkInterface2_t482839970::get_offset_of_addr_2(),
	Win32NetworkInterface2_t482839970::get_offset_of_mib4_3(),
	Win32NetworkInterface2_t482839970::get_offset_of_mib6_4(),
	Win32NetworkInterface2_t482839970::get_offset_of_ip4stats_5(),
	Win32NetworkInterface2_t482839970::get_offset_of_ip_if_props_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (NetworkInterfaceType_t4226883065)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1351[26] = 
{
	NetworkInterfaceType_t4226883065::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (OperationalStatus_t2833345236)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1352[8] = 
{
	OperationalStatus_t2833345236::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (PrefixOrigin_t2896511548)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1353[6] = 
{
	PrefixOrigin_t2896511548::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (SuffixOrigin_t2288602937)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1354[7] = 
{
	SuffixOrigin_t2288602937::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (UnicastIPAddressInformation_t2919786644), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (Win32UnicastIPAddressInformation_t1388218403), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1356[2] = 
{
	Win32UnicastIPAddressInformation_t1388218403::get_offset_of_if_index_0(),
	Win32UnicastIPAddressInformation_t1388218403::get_offset_of_info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (LinuxUnicastIPAddressInformation_t870378058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1357[1] = 
{
	LinuxUnicastIPAddressInformation_t870378058::get_offset_of_address_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (UnicastIPAddressInformationCollection_t347163204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[1] = 
{
	UnicastIPAddressInformationCollection_t347163204::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (UnicastIPAddressInformationImplCollection_t771061202), -1, sizeof(UnicastIPAddressInformationImplCollection_t771061202_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1359[2] = 
{
	UnicastIPAddressInformationImplCollection_t771061202_StaticFields::get_offset_of_Empty_1(),
	UnicastIPAddressInformationImplCollection_t771061202::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (AlignmentUnion_t707470070)+ sizeof (Il2CppObject), sizeof(AlignmentUnion_t707470070 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1360[3] = 
{
	AlignmentUnion_t707470070::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AlignmentUnion_t707470070::get_offset_of_Length_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AlignmentUnion_t707470070::get_offset_of_IfIndex_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (Win32_IP_ADAPTER_ADDRESSES_t680756680), sizeof(Win32_IP_ADAPTER_ADDRESSES_t680756680_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1361[18] = 
{
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_Alignment_0(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_Next_1(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_AdapterName_2(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_FirstUnicastAddress_3(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_FirstAnycastAddress_4(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_FirstMulticastAddress_5(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_FirstDnsServerAddress_6(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_DnsSuffix_7(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_Description_8(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_FriendlyName_9(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_PhysicalAddress_10(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_PhysicalAddressLength_11(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_Flags_12(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_Mtu_13(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_IfType_14(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_OperStatus_15(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_Ipv6IfIndex_16(),
	Win32_IP_ADAPTER_ADDRESSES_t680756680::get_offset_of_ZoneIndices_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (Win32_IP_ADAPTER_INFO_t2310876292), sizeof(Win32_IP_ADAPTER_INFO_t2310876292_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1362[18] = 
{
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_Next_0(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_ComboIndex_1(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_AdapterName_2(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_Description_3(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_AddressLength_4(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_Address_5(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_Index_6(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_Type_7(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_DhcpEnabled_8(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_CurrentIpAddress_9(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_IpAddressList_10(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_GatewayList_11(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_DhcpServer_12(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_HaveWins_13(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_PrimaryWinsServer_14(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_SecondaryWinsServer_15(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_LeaseObtained_16(),
	Win32_IP_ADAPTER_INFO_t2310876292::get_offset_of_LeaseExpires_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (Win32_MIB_IFROW_t4215928996)+ sizeof (Il2CppObject), sizeof(Win32_MIB_IFROW_t4215928996_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1363[24] = 
{
	Win32_MIB_IFROW_t4215928996::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_Type_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_Mtu_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_Speed_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_PhysAddrLen_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_PhysAddr_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_AdminStatus_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OperStatus_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_LastChange_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_InOctets_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_InUcastPkts_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_InNUcastPkts_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_InDiscards_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_InErrors_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_InUnknownProtos_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OutOctets_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OutUcastPkts_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OutNUcastPkts_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OutDiscards_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OutErrors_20() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_OutQLen_21() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_DescrLen_22() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_IFROW_t4215928996::get_offset_of_Descr_23() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (Win32_IP_ADDR_STRING_t2646152127)+ sizeof (Il2CppObject), sizeof(Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1364[4] = 
{
	Win32_IP_ADDR_STRING_t2646152127::get_offset_of_Next_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADDR_STRING_t2646152127::get_offset_of_IpAddress_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADDR_STRING_t2646152127::get_offset_of_IpMask_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADDR_STRING_t2646152127::get_offset_of_Context_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (Win32LengthFlagsUnion_t1910118479)+ sizeof (Il2CppObject), sizeof(Win32LengthFlagsUnion_t1910118479 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1365[2] = 
{
	Win32LengthFlagsUnion_t1910118479::get_offset_of_Length_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32LengthFlagsUnion_t1910118479::get_offset_of_Flags_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946)+ sizeof (Il2CppObject), sizeof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1366[10] = 
{
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_PrefixOrigin_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_SuffixOrigin_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_DadState_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_ValidLifetime_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_PreferredLifetime_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_LeaseLifetime_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946::get_offset_of_OnLinkPrefixLength_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (Win32_SOCKADDR_t1606057231)+ sizeof (Il2CppObject), sizeof(Win32_SOCKADDR_t1606057231_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1367[2] = 
{
	Win32_SOCKADDR_t1606057231::get_offset_of_AddressFamily_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_SOCKADDR_t1606057231::get_offset_of_AddressData_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (Win32_SOCKET_ADDRESS_t1093973396)+ sizeof (Il2CppObject), sizeof(Win32_SOCKET_ADDRESS_t1093973396 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1368[2] = 
{
	Win32_SOCKET_ADDRESS_t1093973396::get_offset_of_Sockaddr_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_SOCKET_ADDRESS_t1093973396::get_offset_of_SockaddrLength_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (AuthenticatedStream_t1183414097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1369[2] = 
{
	AuthenticatedStream_t1183414097::get_offset_of_innerStream_1(),
	AuthenticatedStream_t1183414097::get_offset_of_leaveStreamOpen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (AuthenticationLevel_t2424130044)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1370[4] = 
{
	AuthenticationLevel_t2424130044::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (SslPolicyErrors_t1928581431)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1371[5] = 
{
	SslPolicyErrors_t1928581431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (SslStream_t1853163792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1372[3] = 
{
	SslStream_t1853163792::get_offset_of_ssl_stream_3(),
	SslStream_t1853163792::get_offset_of_validation_callback_4(),
	SslStream_t1853163792::get_offset_of_selection_callback_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1358332250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1373[2] = 
{
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1358332250::get_offset_of_clientCertificates_0(),
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1358332250::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (AddressFamily_t303362630)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1374[32] = 
{
	AddressFamily_t303362630::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (IPv6MulticastOption_t1621622330), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (LingerOption_t1165263720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1376[2] = 
{
	LingerOption_t1165263720::get_offset_of_enabled_0(),
	LingerOption_t1165263720::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (MulticastOption_t2505469155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (NetworkStream_t581172200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1378[6] = 
{
	NetworkStream_t581172200::get_offset_of_access_1(),
	NetworkStream_t581172200::get_offset_of_socket_2(),
	NetworkStream_t581172200::get_offset_of_owns_socket_3(),
	NetworkStream_t581172200::get_offset_of_readable_4(),
	NetworkStream_t581172200::get_offset_of_writeable_5(),
	NetworkStream_t581172200::get_offset_of_disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (ProtocolType_t2178963134)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1379[26] = 
{
	ProtocolType_t2178963134::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (SelectMode_t3413969319)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1380[4] = 
{
	SelectMode_t3413969319::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (Socket_t3821512045), -1, sizeof(Socket_t3821512045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1381[22] = 
{
	Socket_t3821512045::get_offset_of_readQ_0(),
	Socket_t3821512045::get_offset_of_writeQ_1(),
	Socket_t3821512045::get_offset_of_islistening_2(),
	Socket_t3821512045::get_offset_of_MinListenPort_3(),
	Socket_t3821512045::get_offset_of_MaxListenPort_4(),
	Socket_t3821512045_StaticFields::get_offset_of_ipv4Supported_5(),
	Socket_t3821512045_StaticFields::get_offset_of_ipv6Supported_6(),
	Socket_t3821512045::get_offset_of_linger_timeout_7(),
	Socket_t3821512045::get_offset_of_socket_8(),
	Socket_t3821512045::get_offset_of_address_family_9(),
	Socket_t3821512045::get_offset_of_socket_type_10(),
	Socket_t3821512045::get_offset_of_protocol_type_11(),
	Socket_t3821512045::get_offset_of_blocking_12(),
	Socket_t3821512045::get_offset_of_blocking_thread_13(),
	Socket_t3821512045::get_offset_of_isbound_14(),
	Socket_t3821512045_StaticFields::get_offset_of_current_bind_count_15(),
	Socket_t3821512045::get_offset_of_max_bind_count_16(),
	Socket_t3821512045::get_offset_of_connected_17(),
	Socket_t3821512045::get_offset_of_closed_18(),
	Socket_t3821512045::get_offset_of_disposed_19(),
	Socket_t3821512045::get_offset_of_seed_endpoint_20(),
	Socket_t3821512045_StaticFields::get_offset_of_check_socket_policy_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (SocketOperation_t3328960782)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1382[15] = 
{
	SocketOperation_t3328960782::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (SocketAsyncResult_t2959281146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1383[25] = 
{
	SocketAsyncResult_t2959281146::get_offset_of_Sock_0(),
	SocketAsyncResult_t2959281146::get_offset_of_handle_1(),
	SocketAsyncResult_t2959281146::get_offset_of_state_2(),
	SocketAsyncResult_t2959281146::get_offset_of_callback_3(),
	SocketAsyncResult_t2959281146::get_offset_of_waithandle_4(),
	SocketAsyncResult_t2959281146::get_offset_of_delayedException_5(),
	SocketAsyncResult_t2959281146::get_offset_of_EndPoint_6(),
	SocketAsyncResult_t2959281146::get_offset_of_Buffer_7(),
	SocketAsyncResult_t2959281146::get_offset_of_Offset_8(),
	SocketAsyncResult_t2959281146::get_offset_of_Size_9(),
	SocketAsyncResult_t2959281146::get_offset_of_SockFlags_10(),
	SocketAsyncResult_t2959281146::get_offset_of_AcceptSocket_11(),
	SocketAsyncResult_t2959281146::get_offset_of_Addresses_12(),
	SocketAsyncResult_t2959281146::get_offset_of_Port_13(),
	SocketAsyncResult_t2959281146::get_offset_of_Buffers_14(),
	SocketAsyncResult_t2959281146::get_offset_of_ReuseSocket_15(),
	SocketAsyncResult_t2959281146::get_offset_of_acc_socket_16(),
	SocketAsyncResult_t2959281146::get_offset_of_total_17(),
	SocketAsyncResult_t2959281146::get_offset_of_completed_sync_18(),
	SocketAsyncResult_t2959281146::get_offset_of_completed_19(),
	SocketAsyncResult_t2959281146::get_offset_of_blocking_20(),
	SocketAsyncResult_t2959281146::get_offset_of_error_21(),
	SocketAsyncResult_t2959281146::get_offset_of_operation_22(),
	SocketAsyncResult_t2959281146::get_offset_of_ares_23(),
	SocketAsyncResult_t2959281146::get_offset_of_EndCalled_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (Worker_t1317165246), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1384[3] = 
{
	Worker_t1317165246::get_offset_of_result_0(),
	Worker_t1317165246::get_offset_of_requireSocketSecurity_1(),
	Worker_t1317165246::get_offset_of_send_so_far_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (SocketAsyncCall_t3737776727), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (SocketError_t307542793)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1386[48] = 
{
	SocketError_t307542793::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (SocketException_t1618573604), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (SocketFlags_t2353657790)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1388[11] = 
{
	SocketFlags_t2353657790::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (SocketOptionLevel_t1505247880)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1389[6] = 
{
	SocketOptionLevel_t1505247880::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (SocketOptionName_t1089121285)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1390[44] = 
{
	SocketOptionName_t1089121285::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (SocketShutdown_t3247039417)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1391[4] = 
{
	SocketShutdown_t3247039417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (SocketType_t1143498533)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1392[7] = 
{
	SocketType_t1143498533::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (TcpClient_t408947970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1393[11] = 
{
	TcpClient_t408947970::get_offset_of_stream_0(),
	TcpClient_t408947970::get_offset_of_active_1(),
	TcpClient_t408947970::get_offset_of_client_2(),
	TcpClient_t408947970::get_offset_of_disposed_3(),
	TcpClient_t408947970::get_offset_of_values_4(),
	TcpClient_t408947970::get_offset_of_recv_timeout_5(),
	TcpClient_t408947970::get_offset_of_send_timeout_6(),
	TcpClient_t408947970::get_offset_of_recv_buffer_size_7(),
	TcpClient_t408947970::get_offset_of_send_buffer_size_8(),
	TcpClient_t408947970::get_offset_of_linger_state_9(),
	TcpClient_t408947970::get_offset_of_no_delay_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (Properties_t4286508698)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1394[7] = 
{
	Properties_t4286508698::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (AuthenticationManager_t3410876775), -1, sizeof(AuthenticationManager_t3410876775_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1395[3] = 
{
	AuthenticationManager_t3410876775_StaticFields::get_offset_of_modules_0(),
	AuthenticationManager_t3410876775_StaticFields::get_offset_of_locker_1(),
	AuthenticationManager_t3410876775_StaticFields::get_offset_of_credential_policy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (Authorization_t1602399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1396[4] = 
{
	Authorization_t1602399::get_offset_of_token_0(),
	Authorization_t1602399::get_offset_of_complete_1(),
	Authorization_t1602399::get_offset_of_connectionGroupId_2(),
	Authorization_t1602399::get_offset_of_module_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (BasicClient_t3996961659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (ChunkStream_t91719323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1398[9] = 
{
	ChunkStream_t91719323::get_offset_of_headers_0(),
	ChunkStream_t91719323::get_offset_of_chunkSize_1(),
	ChunkStream_t91719323::get_offset_of_chunkRead_2(),
	ChunkStream_t91719323::get_offset_of_state_3(),
	ChunkStream_t91719323::get_offset_of_saved_4(),
	ChunkStream_t91719323::get_offset_of_sawCR_5(),
	ChunkStream_t91719323::get_offset_of_gotit_6(),
	ChunkStream_t91719323::get_offset_of_trailerState_7(),
	ChunkStream_t91719323::get_offset_of_chunks_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (State_t4001596355)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1399[5] = 
{
	State_t4001596355::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
