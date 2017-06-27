#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Utils.GameLog
struct GameLog_t388062514;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator
struct DataSafePluginCreator_t1885769099;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3185325067.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se1578491093.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game783480378.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.MockGameSession
struct  MockGameSession_t1302467586  : public GameSessionBase_t3185325067
{
public:
	// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Client.Session.MockGameSession::_dataSafe
	Il2CppObject * ____dataSafe_12;
	// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Client.Session.MockGameSession::<ErrorRequestWrapper>k__BackingField
	RequestWrapper_t293827378 * ___U3CErrorRequestWrapperU3Ek__BackingField_13;
	// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Client.Session.MockGameSession::<customizeRequest>k__BackingField
	requestCustomizer_t2087322079 * ___U3CcustomizeRequestU3Ek__BackingField_14;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.MockGameSession::Setup
	Dictionary_2_t3943999495 * ___Setup_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.MockGameSession::Options
	Dictionary_2_t3943999495 * ___Options_17;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::notaryCompression
	String_t* ___notaryCompression_18;
	// GSN.Skill.Games.Common.Utils.GameLog GSN.Skill.Games.Common.Client.Session.MockGameSession::_gameLog
	GameLog_t388062514 * ____gameLog_19;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Client.Session.MockGameSession::_actionQueue
	ActionQueue_t1924202305 * ____actionQueue_20;
	// System.Byte[] GSN.Skill.Games.Common.Client.Session.MockGameSession::currentHash
	ByteU5BU5D_t3397334013* ___currentHash_21;
	// System.Int32 GSN.Skill.Games.Common.Client.Session.MockGameSession::_timeout
	int32_t ____timeout_22;
	// System.Boolean GSN.Skill.Games.Common.Client.Session.MockGameSession::_success
	bool ____success_23;
	// GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons GSN.Skill.Games.Common.Client.Session.MockGameSession::<FailReason>k__BackingField
	int32_t ___U3CFailReasonU3Ek__BackingField_24;
	// System.Boolean GSN.Skill.Games.Common.Client.Session.MockGameSession::ActuallyValidate
	bool ___ActuallyValidate_25;
	// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Session.MockGameSession::<ExitMode>k__BackingField
	int32_t ___U3CExitModeU3Ek__BackingField_26;
	// GSN.Skill.Games.Common.Utils.GameValidationResult GSN.Skill.Games.Common.Client.Session.MockGameSession::<ValidationResult>k__BackingField
	int32_t ___U3CValidationResultU3Ek__BackingField_27;
	// System.Boolean GSN.Skill.Games.Common.Client.Session.MockGameSession::ReplayEmailWhenDone
	bool ___ReplayEmailWhenDone_28;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::ReplayEmailSmtpServer
	String_t* ___ReplayEmailSmtpServer_29;
	// System.Int32 GSN.Skill.Games.Common.Client.Session.MockGameSession::ReplayEmailSmtpPort
	int32_t ___ReplayEmailSmtpPort_30;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::ReplayEmailFromAddress
	String_t* ___ReplayEmailFromAddress_31;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::ReplayEmailFromPassword
	String_t* ___ReplayEmailFromPassword_32;
	// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::ReplayToEmails
	String_t* ___ReplayToEmails_33;
	// GSN.Skill.Games.Common.Client.Session.MockGameSession/DataSafePluginCreator GSN.Skill.Games.Common.Client.Session.MockGameSession::CreateDataSafePlugin
	DataSafePluginCreator_t1885769099 * ___CreateDataSafePlugin_34;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Client.Session.MockGameSession::validateJob
	Job_t4002496073 * ___validateJob_35;

public:
	inline static int32_t get_offset_of__dataSafe_12() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ____dataSafe_12)); }
	inline Il2CppObject * get__dataSafe_12() const { return ____dataSafe_12; }
	inline Il2CppObject ** get_address_of__dataSafe_12() { return &____dataSafe_12; }
	inline void set__dataSafe_12(Il2CppObject * value)
	{
		____dataSafe_12 = value;
		Il2CppCodeGenWriteBarrier(&____dataSafe_12, value);
	}

	inline static int32_t get_offset_of_U3CErrorRequestWrapperU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___U3CErrorRequestWrapperU3Ek__BackingField_13)); }
	inline RequestWrapper_t293827378 * get_U3CErrorRequestWrapperU3Ek__BackingField_13() const { return ___U3CErrorRequestWrapperU3Ek__BackingField_13; }
	inline RequestWrapper_t293827378 ** get_address_of_U3CErrorRequestWrapperU3Ek__BackingField_13() { return &___U3CErrorRequestWrapperU3Ek__BackingField_13; }
	inline void set_U3CErrorRequestWrapperU3Ek__BackingField_13(RequestWrapper_t293827378 * value)
	{
		___U3CErrorRequestWrapperU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorRequestWrapperU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CcustomizeRequestU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___U3CcustomizeRequestU3Ek__BackingField_14)); }
	inline requestCustomizer_t2087322079 * get_U3CcustomizeRequestU3Ek__BackingField_14() const { return ___U3CcustomizeRequestU3Ek__BackingField_14; }
	inline requestCustomizer_t2087322079 ** get_address_of_U3CcustomizeRequestU3Ek__BackingField_14() { return &___U3CcustomizeRequestU3Ek__BackingField_14; }
	inline void set_U3CcustomizeRequestU3Ek__BackingField_14(requestCustomizer_t2087322079 * value)
	{
		___U3CcustomizeRequestU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcustomizeRequestU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___U3CUrlU3Ek__BackingField_15)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_15() const { return ___U3CUrlU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_15() { return &___U3CUrlU3Ek__BackingField_15; }
	inline void set_U3CUrlU3Ek__BackingField_15(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUrlU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_Setup_16() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___Setup_16)); }
	inline Dictionary_2_t3943999495 * get_Setup_16() const { return ___Setup_16; }
	inline Dictionary_2_t3943999495 ** get_address_of_Setup_16() { return &___Setup_16; }
	inline void set_Setup_16(Dictionary_2_t3943999495 * value)
	{
		___Setup_16 = value;
		Il2CppCodeGenWriteBarrier(&___Setup_16, value);
	}

	inline static int32_t get_offset_of_Options_17() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___Options_17)); }
	inline Dictionary_2_t3943999495 * get_Options_17() const { return ___Options_17; }
	inline Dictionary_2_t3943999495 ** get_address_of_Options_17() { return &___Options_17; }
	inline void set_Options_17(Dictionary_2_t3943999495 * value)
	{
		___Options_17 = value;
		Il2CppCodeGenWriteBarrier(&___Options_17, value);
	}

	inline static int32_t get_offset_of_notaryCompression_18() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___notaryCompression_18)); }
	inline String_t* get_notaryCompression_18() const { return ___notaryCompression_18; }
	inline String_t** get_address_of_notaryCompression_18() { return &___notaryCompression_18; }
	inline void set_notaryCompression_18(String_t* value)
	{
		___notaryCompression_18 = value;
		Il2CppCodeGenWriteBarrier(&___notaryCompression_18, value);
	}

	inline static int32_t get_offset_of__gameLog_19() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ____gameLog_19)); }
	inline GameLog_t388062514 * get__gameLog_19() const { return ____gameLog_19; }
	inline GameLog_t388062514 ** get_address_of__gameLog_19() { return &____gameLog_19; }
	inline void set__gameLog_19(GameLog_t388062514 * value)
	{
		____gameLog_19 = value;
		Il2CppCodeGenWriteBarrier(&____gameLog_19, value);
	}

	inline static int32_t get_offset_of__actionQueue_20() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ____actionQueue_20)); }
	inline ActionQueue_t1924202305 * get__actionQueue_20() const { return ____actionQueue_20; }
	inline ActionQueue_t1924202305 ** get_address_of__actionQueue_20() { return &____actionQueue_20; }
	inline void set__actionQueue_20(ActionQueue_t1924202305 * value)
	{
		____actionQueue_20 = value;
		Il2CppCodeGenWriteBarrier(&____actionQueue_20, value);
	}

	inline static int32_t get_offset_of_currentHash_21() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___currentHash_21)); }
	inline ByteU5BU5D_t3397334013* get_currentHash_21() const { return ___currentHash_21; }
	inline ByteU5BU5D_t3397334013** get_address_of_currentHash_21() { return &___currentHash_21; }
	inline void set_currentHash_21(ByteU5BU5D_t3397334013* value)
	{
		___currentHash_21 = value;
		Il2CppCodeGenWriteBarrier(&___currentHash_21, value);
	}

	inline static int32_t get_offset_of__timeout_22() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ____timeout_22)); }
	inline int32_t get__timeout_22() const { return ____timeout_22; }
	inline int32_t* get_address_of__timeout_22() { return &____timeout_22; }
	inline void set__timeout_22(int32_t value)
	{
		____timeout_22 = value;
	}

	inline static int32_t get_offset_of__success_23() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ____success_23)); }
	inline bool get__success_23() const { return ____success_23; }
	inline bool* get_address_of__success_23() { return &____success_23; }
	inline void set__success_23(bool value)
	{
		____success_23 = value;
	}

	inline static int32_t get_offset_of_U3CFailReasonU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___U3CFailReasonU3Ek__BackingField_24)); }
	inline int32_t get_U3CFailReasonU3Ek__BackingField_24() const { return ___U3CFailReasonU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CFailReasonU3Ek__BackingField_24() { return &___U3CFailReasonU3Ek__BackingField_24; }
	inline void set_U3CFailReasonU3Ek__BackingField_24(int32_t value)
	{
		___U3CFailReasonU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_ActuallyValidate_25() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ActuallyValidate_25)); }
	inline bool get_ActuallyValidate_25() const { return ___ActuallyValidate_25; }
	inline bool* get_address_of_ActuallyValidate_25() { return &___ActuallyValidate_25; }
	inline void set_ActuallyValidate_25(bool value)
	{
		___ActuallyValidate_25 = value;
	}

	inline static int32_t get_offset_of_U3CExitModeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___U3CExitModeU3Ek__BackingField_26)); }
	inline int32_t get_U3CExitModeU3Ek__BackingField_26() const { return ___U3CExitModeU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CExitModeU3Ek__BackingField_26() { return &___U3CExitModeU3Ek__BackingField_26; }
	inline void set_U3CExitModeU3Ek__BackingField_26(int32_t value)
	{
		___U3CExitModeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CValidationResultU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___U3CValidationResultU3Ek__BackingField_27)); }
	inline int32_t get_U3CValidationResultU3Ek__BackingField_27() const { return ___U3CValidationResultU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CValidationResultU3Ek__BackingField_27() { return &___U3CValidationResultU3Ek__BackingField_27; }
	inline void set_U3CValidationResultU3Ek__BackingField_27(int32_t value)
	{
		___U3CValidationResultU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_ReplayEmailWhenDone_28() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ReplayEmailWhenDone_28)); }
	inline bool get_ReplayEmailWhenDone_28() const { return ___ReplayEmailWhenDone_28; }
	inline bool* get_address_of_ReplayEmailWhenDone_28() { return &___ReplayEmailWhenDone_28; }
	inline void set_ReplayEmailWhenDone_28(bool value)
	{
		___ReplayEmailWhenDone_28 = value;
	}

	inline static int32_t get_offset_of_ReplayEmailSmtpServer_29() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ReplayEmailSmtpServer_29)); }
	inline String_t* get_ReplayEmailSmtpServer_29() const { return ___ReplayEmailSmtpServer_29; }
	inline String_t** get_address_of_ReplayEmailSmtpServer_29() { return &___ReplayEmailSmtpServer_29; }
	inline void set_ReplayEmailSmtpServer_29(String_t* value)
	{
		___ReplayEmailSmtpServer_29 = value;
		Il2CppCodeGenWriteBarrier(&___ReplayEmailSmtpServer_29, value);
	}

	inline static int32_t get_offset_of_ReplayEmailSmtpPort_30() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ReplayEmailSmtpPort_30)); }
	inline int32_t get_ReplayEmailSmtpPort_30() const { return ___ReplayEmailSmtpPort_30; }
	inline int32_t* get_address_of_ReplayEmailSmtpPort_30() { return &___ReplayEmailSmtpPort_30; }
	inline void set_ReplayEmailSmtpPort_30(int32_t value)
	{
		___ReplayEmailSmtpPort_30 = value;
	}

	inline static int32_t get_offset_of_ReplayEmailFromAddress_31() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ReplayEmailFromAddress_31)); }
	inline String_t* get_ReplayEmailFromAddress_31() const { return ___ReplayEmailFromAddress_31; }
	inline String_t** get_address_of_ReplayEmailFromAddress_31() { return &___ReplayEmailFromAddress_31; }
	inline void set_ReplayEmailFromAddress_31(String_t* value)
	{
		___ReplayEmailFromAddress_31 = value;
		Il2CppCodeGenWriteBarrier(&___ReplayEmailFromAddress_31, value);
	}

	inline static int32_t get_offset_of_ReplayEmailFromPassword_32() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ReplayEmailFromPassword_32)); }
	inline String_t* get_ReplayEmailFromPassword_32() const { return ___ReplayEmailFromPassword_32; }
	inline String_t** get_address_of_ReplayEmailFromPassword_32() { return &___ReplayEmailFromPassword_32; }
	inline void set_ReplayEmailFromPassword_32(String_t* value)
	{
		___ReplayEmailFromPassword_32 = value;
		Il2CppCodeGenWriteBarrier(&___ReplayEmailFromPassword_32, value);
	}

	inline static int32_t get_offset_of_ReplayToEmails_33() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___ReplayToEmails_33)); }
	inline String_t* get_ReplayToEmails_33() const { return ___ReplayToEmails_33; }
	inline String_t** get_address_of_ReplayToEmails_33() { return &___ReplayToEmails_33; }
	inline void set_ReplayToEmails_33(String_t* value)
	{
		___ReplayToEmails_33 = value;
		Il2CppCodeGenWriteBarrier(&___ReplayToEmails_33, value);
	}

	inline static int32_t get_offset_of_CreateDataSafePlugin_34() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___CreateDataSafePlugin_34)); }
	inline DataSafePluginCreator_t1885769099 * get_CreateDataSafePlugin_34() const { return ___CreateDataSafePlugin_34; }
	inline DataSafePluginCreator_t1885769099 ** get_address_of_CreateDataSafePlugin_34() { return &___CreateDataSafePlugin_34; }
	inline void set_CreateDataSafePlugin_34(DataSafePluginCreator_t1885769099 * value)
	{
		___CreateDataSafePlugin_34 = value;
		Il2CppCodeGenWriteBarrier(&___CreateDataSafePlugin_34, value);
	}

	inline static int32_t get_offset_of_validateJob_35() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586, ___validateJob_35)); }
	inline Job_t4002496073 * get_validateJob_35() const { return ___validateJob_35; }
	inline Job_t4002496073 ** get_address_of_validateJob_35() { return &___validateJob_35; }
	inline void set_validateJob_35(Job_t4002496073 * value)
	{
		___validateJob_35 = value;
		Il2CppCodeGenWriteBarrier(&___validateJob_35, value);
	}
};

struct MockGameSession_t1302467586_StaticFields
{
public:
	// System.DateTime GSN.Skill.Games.Common.Client.Session.MockGameSession::UnixStartTime
	DateTime_t693205669  ___UnixStartTime_11;
	// System.Net.Security.RemoteCertificateValidationCallback GSN.Skill.Games.Common.Client.Session.MockGameSession::<>f__am$cache0
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache0_36;
	// System.Action GSN.Skill.Games.Common.Client.Session.MockGameSession::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_37;

public:
	inline static int32_t get_offset_of_UnixStartTime_11() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586_StaticFields, ___UnixStartTime_11)); }
	inline DateTime_t693205669  get_UnixStartTime_11() const { return ___UnixStartTime_11; }
	inline DateTime_t693205669 * get_address_of_UnixStartTime_11() { return &___UnixStartTime_11; }
	inline void set_UnixStartTime_11(DateTime_t693205669  value)
	{
		___UnixStartTime_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_36() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586_StaticFields, ___U3CU3Ef__amU24cache0_36)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache0_36() const { return ___U3CU3Ef__amU24cache0_36; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache0_36() { return &___U3CU3Ef__amU24cache0_36; }
	inline void set_U3CU3Ef__amU24cache0_36(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache0_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_37() { return static_cast<int32_t>(offsetof(MockGameSession_t1302467586_StaticFields, ___U3CU3Ef__amU24cache1_37)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_37() const { return ___U3CU3Ef__amU24cache1_37; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_37() { return &___U3CU3Ef__amU24cache1_37; }
	inline void set_U3CU3Ef__amU24cache1_37(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
