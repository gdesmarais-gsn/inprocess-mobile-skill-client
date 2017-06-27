#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Net.ICredentialsByHost
struct ICredentialsByHost_t1409008158;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.IO.StreamReader
struct StreamReader_t2360341767;
// System.Net.Mail.MailAddress
struct MailAddress_t1980919589;
// System.Net.Mail.MailMessage
struct MailMessage_t460962712;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t4230068110;
// System.Threading.Mutex
struct Mutex_t297030111;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod1749648319.h"
#include "System_System_Net_Mail_SmtpClient_AuthMechs3916064079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpClient
struct  SmtpClient_t2719616745  : public Il2CppObject
{
public:
	// System.String System.Net.Mail.SmtpClient::host
	String_t* ___host_0;
	// System.Int32 System.Net.Mail.SmtpClient::port
	int32_t ___port_1;
	// System.Int32 System.Net.Mail.SmtpClient::timeout
	int32_t ___timeout_2;
	// System.Net.ICredentialsByHost System.Net.Mail.SmtpClient::credentials
	Il2CppObject * ___credentials_3;
	// System.String System.Net.Mail.SmtpClient::pickupDirectoryLocation
	String_t* ___pickupDirectoryLocation_4;
	// System.Net.Mail.SmtpDeliveryMethod System.Net.Mail.SmtpClient::deliveryMethod
	int32_t ___deliveryMethod_5;
	// System.Boolean System.Net.Mail.SmtpClient::enableSsl
	bool ___enableSsl_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Mail.SmtpClient::clientCertificates
	X509CertificateCollection_t1197680765 * ___clientCertificates_7;
	// System.Net.Sockets.TcpClient System.Net.Mail.SmtpClient::client
	TcpClient_t408947970 * ___client_8;
	// System.IO.Stream System.Net.Mail.SmtpClient::stream
	Stream_t3255436806 * ___stream_9;
	// System.IO.StreamWriter System.Net.Mail.SmtpClient::writer
	StreamWriter_t3858580635 * ___writer_10;
	// System.IO.StreamReader System.Net.Mail.SmtpClient::reader
	StreamReader_t2360341767 * ___reader_11;
	// System.Int32 System.Net.Mail.SmtpClient::boundaryIndex
	int32_t ___boundaryIndex_12;
	// System.Net.Mail.MailAddress System.Net.Mail.SmtpClient::defaultFrom
	MailAddress_t1980919589 * ___defaultFrom_13;
	// System.Net.Mail.MailMessage System.Net.Mail.SmtpClient::messageInProcess
	MailMessage_t460962712 * ___messageInProcess_14;
	// System.ComponentModel.BackgroundWorker System.Net.Mail.SmtpClient::worker
	BackgroundWorker_t4230068110 * ___worker_15;
	// System.Net.Mail.SmtpClient/AuthMechs System.Net.Mail.SmtpClient::authMechs
	int32_t ___authMechs_16;
	// System.Threading.Mutex System.Net.Mail.SmtpClient::mutex
	Mutex_t297030111 * ___mutex_17;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Mail.SmtpClient::callback
	RemoteCertificateValidationCallback_t2756269959 * ___callback_18;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___host_0)); }
	inline String_t* get_host_0() const { return ___host_0; }
	inline String_t** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(String_t* value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier(&___host_0, value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_timeout_2() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___timeout_2)); }
	inline int32_t get_timeout_2() const { return ___timeout_2; }
	inline int32_t* get_address_of_timeout_2() { return &___timeout_2; }
	inline void set_timeout_2(int32_t value)
	{
		___timeout_2 = value;
	}

	inline static int32_t get_offset_of_credentials_3() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___credentials_3)); }
	inline Il2CppObject * get_credentials_3() const { return ___credentials_3; }
	inline Il2CppObject ** get_address_of_credentials_3() { return &___credentials_3; }
	inline void set_credentials_3(Il2CppObject * value)
	{
		___credentials_3 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_3, value);
	}

	inline static int32_t get_offset_of_pickupDirectoryLocation_4() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___pickupDirectoryLocation_4)); }
	inline String_t* get_pickupDirectoryLocation_4() const { return ___pickupDirectoryLocation_4; }
	inline String_t** get_address_of_pickupDirectoryLocation_4() { return &___pickupDirectoryLocation_4; }
	inline void set_pickupDirectoryLocation_4(String_t* value)
	{
		___pickupDirectoryLocation_4 = value;
		Il2CppCodeGenWriteBarrier(&___pickupDirectoryLocation_4, value);
	}

	inline static int32_t get_offset_of_deliveryMethod_5() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___deliveryMethod_5)); }
	inline int32_t get_deliveryMethod_5() const { return ___deliveryMethod_5; }
	inline int32_t* get_address_of_deliveryMethod_5() { return &___deliveryMethod_5; }
	inline void set_deliveryMethod_5(int32_t value)
	{
		___deliveryMethod_5 = value;
	}

	inline static int32_t get_offset_of_enableSsl_6() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___enableSsl_6)); }
	inline bool get_enableSsl_6() const { return ___enableSsl_6; }
	inline bool* get_address_of_enableSsl_6() { return &___enableSsl_6; }
	inline void set_enableSsl_6(bool value)
	{
		___enableSsl_6 = value;
	}

	inline static int32_t get_offset_of_clientCertificates_7() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___clientCertificates_7)); }
	inline X509CertificateCollection_t1197680765 * get_clientCertificates_7() const { return ___clientCertificates_7; }
	inline X509CertificateCollection_t1197680765 ** get_address_of_clientCertificates_7() { return &___clientCertificates_7; }
	inline void set_clientCertificates_7(X509CertificateCollection_t1197680765 * value)
	{
		___clientCertificates_7 = value;
		Il2CppCodeGenWriteBarrier(&___clientCertificates_7, value);
	}

	inline static int32_t get_offset_of_client_8() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___client_8)); }
	inline TcpClient_t408947970 * get_client_8() const { return ___client_8; }
	inline TcpClient_t408947970 ** get_address_of_client_8() { return &___client_8; }
	inline void set_client_8(TcpClient_t408947970 * value)
	{
		___client_8 = value;
		Il2CppCodeGenWriteBarrier(&___client_8, value);
	}

	inline static int32_t get_offset_of_stream_9() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___stream_9)); }
	inline Stream_t3255436806 * get_stream_9() const { return ___stream_9; }
	inline Stream_t3255436806 ** get_address_of_stream_9() { return &___stream_9; }
	inline void set_stream_9(Stream_t3255436806 * value)
	{
		___stream_9 = value;
		Il2CppCodeGenWriteBarrier(&___stream_9, value);
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___writer_10)); }
	inline StreamWriter_t3858580635 * get_writer_10() const { return ___writer_10; }
	inline StreamWriter_t3858580635 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(StreamWriter_t3858580635 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier(&___writer_10, value);
	}

	inline static int32_t get_offset_of_reader_11() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___reader_11)); }
	inline StreamReader_t2360341767 * get_reader_11() const { return ___reader_11; }
	inline StreamReader_t2360341767 ** get_address_of_reader_11() { return &___reader_11; }
	inline void set_reader_11(StreamReader_t2360341767 * value)
	{
		___reader_11 = value;
		Il2CppCodeGenWriteBarrier(&___reader_11, value);
	}

	inline static int32_t get_offset_of_boundaryIndex_12() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___boundaryIndex_12)); }
	inline int32_t get_boundaryIndex_12() const { return ___boundaryIndex_12; }
	inline int32_t* get_address_of_boundaryIndex_12() { return &___boundaryIndex_12; }
	inline void set_boundaryIndex_12(int32_t value)
	{
		___boundaryIndex_12 = value;
	}

	inline static int32_t get_offset_of_defaultFrom_13() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___defaultFrom_13)); }
	inline MailAddress_t1980919589 * get_defaultFrom_13() const { return ___defaultFrom_13; }
	inline MailAddress_t1980919589 ** get_address_of_defaultFrom_13() { return &___defaultFrom_13; }
	inline void set_defaultFrom_13(MailAddress_t1980919589 * value)
	{
		___defaultFrom_13 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFrom_13, value);
	}

	inline static int32_t get_offset_of_messageInProcess_14() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___messageInProcess_14)); }
	inline MailMessage_t460962712 * get_messageInProcess_14() const { return ___messageInProcess_14; }
	inline MailMessage_t460962712 ** get_address_of_messageInProcess_14() { return &___messageInProcess_14; }
	inline void set_messageInProcess_14(MailMessage_t460962712 * value)
	{
		___messageInProcess_14 = value;
		Il2CppCodeGenWriteBarrier(&___messageInProcess_14, value);
	}

	inline static int32_t get_offset_of_worker_15() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___worker_15)); }
	inline BackgroundWorker_t4230068110 * get_worker_15() const { return ___worker_15; }
	inline BackgroundWorker_t4230068110 ** get_address_of_worker_15() { return &___worker_15; }
	inline void set_worker_15(BackgroundWorker_t4230068110 * value)
	{
		___worker_15 = value;
		Il2CppCodeGenWriteBarrier(&___worker_15, value);
	}

	inline static int32_t get_offset_of_authMechs_16() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___authMechs_16)); }
	inline int32_t get_authMechs_16() const { return ___authMechs_16; }
	inline int32_t* get_address_of_authMechs_16() { return &___authMechs_16; }
	inline void set_authMechs_16(int32_t value)
	{
		___authMechs_16 = value;
	}

	inline static int32_t get_offset_of_mutex_17() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___mutex_17)); }
	inline Mutex_t297030111 * get_mutex_17() const { return ___mutex_17; }
	inline Mutex_t297030111 ** get_address_of_mutex_17() { return &___mutex_17; }
	inline void set_mutex_17(Mutex_t297030111 * value)
	{
		___mutex_17 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_17, value);
	}

	inline static int32_t get_offset_of_callback_18() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745, ___callback_18)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_callback_18() const { return ___callback_18; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_callback_18() { return &___callback_18; }
	inline void set_callback_18(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___callback_18 = value;
		Il2CppCodeGenWriteBarrier(&___callback_18, value);
	}
};

struct SmtpClient_t2719616745_StaticFields
{
public:
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Mail.SmtpClient::<>f__am$cache16
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache16_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.Mail.SmtpClient::<>f__switch$map2
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_19() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745_StaticFields, ___U3CU3Ef__amU24cache16_19)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache16_19() const { return ___U3CU3Ef__amU24cache16_19; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache16_19() { return &___U3CU3Ef__amU24cache16_19; }
	inline void set_U3CU3Ef__amU24cache16_19(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache16_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache16_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_20() { return static_cast<int32_t>(offsetof(SmtpClient_t2719616745_StaticFields, ___U3CU3Ef__switchU24map2_20)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2_20() const { return ___U3CU3Ef__switchU24map2_20; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2_20() { return &___U3CU3Ef__switchU24map2_20; }
	inline void set_U3CU3Ef__switchU24map2_20(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
