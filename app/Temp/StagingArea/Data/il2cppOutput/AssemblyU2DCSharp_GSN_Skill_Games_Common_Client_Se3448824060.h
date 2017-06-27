#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// GSN.Skill.Games.Common.Client.Session.ValidateJob
struct ValidateJob_t4103004751;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3185325067.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se1578491093.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game783480378.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.GameSession
struct  GameSession_t3448824060  : public GameSessionBase_t3185325067
{
public:
	// System.Boolean GSN.Skill.Games.Common.Client.Session.GameSession::ActuallyValidate
	bool ___ActuallyValidate_11;
	// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Client.Session.GameSession::<ErrorRequestWrapper>k__BackingField
	RequestWrapper_t293827378 * ___U3CErrorRequestWrapperU3Ek__BackingField_12;
	// System.Boolean GSN.Skill.Games.Common.Client.Session.GameSession::<Done>k__BackingField
	bool ___U3CDoneU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::<JoinBody>k__BackingField
	Dictionary_2_t3943999495 * ___U3CJoinBodyU3Ek__BackingField_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::<JoinRecord>k__BackingField
	Dictionary_2_t3943999495 * ___U3CJoinRecordU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::<StartBody>k__BackingField
	Dictionary_2_t3943999495 * ___U3CStartBodyU3Ek__BackingField_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::<StartRecord>k__BackingField
	Dictionary_2_t3943999495 * ___U3CStartRecordU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::<ValidationResponse>k__BackingField
	Dictionary_2_t3943999495 * ___U3CValidationResponseU3Ek__BackingField_18;
	// System.Boolean GSN.Skill.Games.Common.Client.Session.GameSession::<Success>k__BackingField
	bool ___U3CSuccessU3Ek__BackingField_19;
	// GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons GSN.Skill.Games.Common.Client.Session.GameSession::<FailReason>k__BackingField
	int32_t ___U3CFailReasonU3Ek__BackingField_20;
	// System.Int32 GSN.Skill.Games.Common.Client.Session.GameSession::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_21;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_22;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::notaryCompression
	String_t* ___notaryCompression_23;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::_txsessionid
	String_t* ____txsessionid_24;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::_tournamentid
	String_t* ____tournamentid_25;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::_gameid
	String_t* ____gameid_26;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::_clientid
	String_t* ____clientid_27;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSession::_userid
	String_t* ____userid_28;
	// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Client.Session.GameSession::<customizeRequest>k__BackingField
	requestCustomizer_t2087322079 * ___U3CcustomizeRequestU3Ek__BackingField_29;
	// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Session.GameSession::<ExitMode>k__BackingField
	int32_t ___U3CExitModeU3Ek__BackingField_30;
	// GSN.Skill.Games.Common.Utils.GameValidationResult GSN.Skill.Games.Common.Client.Session.GameSession::<ValidationResult>k__BackingField
	int32_t ___U3CValidationResultU3Ek__BackingField_31;
	// GSN.Skill.Games.Common.Client.Session.ValidateJob GSN.Skill.Games.Common.Client.Session.GameSession::validateJob
	ValidateJob_t4103004751 * ___validateJob_32;
	// System.Byte[] GSN.Skill.Games.Common.Client.Session.GameSession::currentFakeHash
	ByteU5BU5D_t3397334013* ___currentFakeHash_33;

public:
	inline static int32_t get_offset_of_ActuallyValidate_11() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___ActuallyValidate_11)); }
	inline bool get_ActuallyValidate_11() const { return ___ActuallyValidate_11; }
	inline bool* get_address_of_ActuallyValidate_11() { return &___ActuallyValidate_11; }
	inline void set_ActuallyValidate_11(bool value)
	{
		___ActuallyValidate_11 = value;
	}

	inline static int32_t get_offset_of_U3CErrorRequestWrapperU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CErrorRequestWrapperU3Ek__BackingField_12)); }
	inline RequestWrapper_t293827378 * get_U3CErrorRequestWrapperU3Ek__BackingField_12() const { return ___U3CErrorRequestWrapperU3Ek__BackingField_12; }
	inline RequestWrapper_t293827378 ** get_address_of_U3CErrorRequestWrapperU3Ek__BackingField_12() { return &___U3CErrorRequestWrapperU3Ek__BackingField_12; }
	inline void set_U3CErrorRequestWrapperU3Ek__BackingField_12(RequestWrapper_t293827378 * value)
	{
		___U3CErrorRequestWrapperU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorRequestWrapperU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CDoneU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CDoneU3Ek__BackingField_13)); }
	inline bool get_U3CDoneU3Ek__BackingField_13() const { return ___U3CDoneU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CDoneU3Ek__BackingField_13() { return &___U3CDoneU3Ek__BackingField_13; }
	inline void set_U3CDoneU3Ek__BackingField_13(bool value)
	{
		___U3CDoneU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CJoinBodyU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CJoinBodyU3Ek__BackingField_14)); }
	inline Dictionary_2_t3943999495 * get_U3CJoinBodyU3Ek__BackingField_14() const { return ___U3CJoinBodyU3Ek__BackingField_14; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CJoinBodyU3Ek__BackingField_14() { return &___U3CJoinBodyU3Ek__BackingField_14; }
	inline void set_U3CJoinBodyU3Ek__BackingField_14(Dictionary_2_t3943999495 * value)
	{
		___U3CJoinBodyU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CJoinBodyU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CJoinRecordU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CJoinRecordU3Ek__BackingField_15)); }
	inline Dictionary_2_t3943999495 * get_U3CJoinRecordU3Ek__BackingField_15() const { return ___U3CJoinRecordU3Ek__BackingField_15; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CJoinRecordU3Ek__BackingField_15() { return &___U3CJoinRecordU3Ek__BackingField_15; }
	inline void set_U3CJoinRecordU3Ek__BackingField_15(Dictionary_2_t3943999495 * value)
	{
		___U3CJoinRecordU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CJoinRecordU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CStartBodyU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CStartBodyU3Ek__BackingField_16)); }
	inline Dictionary_2_t3943999495 * get_U3CStartBodyU3Ek__BackingField_16() const { return ___U3CStartBodyU3Ek__BackingField_16; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CStartBodyU3Ek__BackingField_16() { return &___U3CStartBodyU3Ek__BackingField_16; }
	inline void set_U3CStartBodyU3Ek__BackingField_16(Dictionary_2_t3943999495 * value)
	{
		___U3CStartBodyU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartBodyU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CStartRecordU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CStartRecordU3Ek__BackingField_17)); }
	inline Dictionary_2_t3943999495 * get_U3CStartRecordU3Ek__BackingField_17() const { return ___U3CStartRecordU3Ek__BackingField_17; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CStartRecordU3Ek__BackingField_17() { return &___U3CStartRecordU3Ek__BackingField_17; }
	inline void set_U3CStartRecordU3Ek__BackingField_17(Dictionary_2_t3943999495 * value)
	{
		___U3CStartRecordU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartRecordU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CValidationResponseU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CValidationResponseU3Ek__BackingField_18)); }
	inline Dictionary_2_t3943999495 * get_U3CValidationResponseU3Ek__BackingField_18() const { return ___U3CValidationResponseU3Ek__BackingField_18; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CValidationResponseU3Ek__BackingField_18() { return &___U3CValidationResponseU3Ek__BackingField_18; }
	inline void set_U3CValidationResponseU3Ek__BackingField_18(Dictionary_2_t3943999495 * value)
	{
		___U3CValidationResponseU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValidationResponseU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CSuccessU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CSuccessU3Ek__BackingField_19)); }
	inline bool get_U3CSuccessU3Ek__BackingField_19() const { return ___U3CSuccessU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CSuccessU3Ek__BackingField_19() { return &___U3CSuccessU3Ek__BackingField_19; }
	inline void set_U3CSuccessU3Ek__BackingField_19(bool value)
	{
		___U3CSuccessU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CFailReasonU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CFailReasonU3Ek__BackingField_20)); }
	inline int32_t get_U3CFailReasonU3Ek__BackingField_20() const { return ___U3CFailReasonU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CFailReasonU3Ek__BackingField_20() { return &___U3CFailReasonU3Ek__BackingField_20; }
	inline void set_U3CFailReasonU3Ek__BackingField_20(int32_t value)
	{
		___U3CFailReasonU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CTimeoutU3Ek__BackingField_21)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_21() const { return ___U3CTimeoutU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_21() { return &___U3CTimeoutU3Ek__BackingField_21; }
	inline void set_U3CTimeoutU3Ek__BackingField_21(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CUrlU3Ek__BackingField_22)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_22() const { return ___U3CUrlU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_22() { return &___U3CUrlU3Ek__BackingField_22; }
	inline void set_U3CUrlU3Ek__BackingField_22(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUrlU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_notaryCompression_23() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___notaryCompression_23)); }
	inline String_t* get_notaryCompression_23() const { return ___notaryCompression_23; }
	inline String_t** get_address_of_notaryCompression_23() { return &___notaryCompression_23; }
	inline void set_notaryCompression_23(String_t* value)
	{
		___notaryCompression_23 = value;
		Il2CppCodeGenWriteBarrier(&___notaryCompression_23, value);
	}

	inline static int32_t get_offset_of__txsessionid_24() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ____txsessionid_24)); }
	inline String_t* get__txsessionid_24() const { return ____txsessionid_24; }
	inline String_t** get_address_of__txsessionid_24() { return &____txsessionid_24; }
	inline void set__txsessionid_24(String_t* value)
	{
		____txsessionid_24 = value;
		Il2CppCodeGenWriteBarrier(&____txsessionid_24, value);
	}

	inline static int32_t get_offset_of__tournamentid_25() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ____tournamentid_25)); }
	inline String_t* get__tournamentid_25() const { return ____tournamentid_25; }
	inline String_t** get_address_of__tournamentid_25() { return &____tournamentid_25; }
	inline void set__tournamentid_25(String_t* value)
	{
		____tournamentid_25 = value;
		Il2CppCodeGenWriteBarrier(&____tournamentid_25, value);
	}

	inline static int32_t get_offset_of__gameid_26() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ____gameid_26)); }
	inline String_t* get__gameid_26() const { return ____gameid_26; }
	inline String_t** get_address_of__gameid_26() { return &____gameid_26; }
	inline void set__gameid_26(String_t* value)
	{
		____gameid_26 = value;
		Il2CppCodeGenWriteBarrier(&____gameid_26, value);
	}

	inline static int32_t get_offset_of__clientid_27() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ____clientid_27)); }
	inline String_t* get__clientid_27() const { return ____clientid_27; }
	inline String_t** get_address_of__clientid_27() { return &____clientid_27; }
	inline void set__clientid_27(String_t* value)
	{
		____clientid_27 = value;
		Il2CppCodeGenWriteBarrier(&____clientid_27, value);
	}

	inline static int32_t get_offset_of__userid_28() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ____userid_28)); }
	inline String_t* get__userid_28() const { return ____userid_28; }
	inline String_t** get_address_of__userid_28() { return &____userid_28; }
	inline void set__userid_28(String_t* value)
	{
		____userid_28 = value;
		Il2CppCodeGenWriteBarrier(&____userid_28, value);
	}

	inline static int32_t get_offset_of_U3CcustomizeRequestU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CcustomizeRequestU3Ek__BackingField_29)); }
	inline requestCustomizer_t2087322079 * get_U3CcustomizeRequestU3Ek__BackingField_29() const { return ___U3CcustomizeRequestU3Ek__BackingField_29; }
	inline requestCustomizer_t2087322079 ** get_address_of_U3CcustomizeRequestU3Ek__BackingField_29() { return &___U3CcustomizeRequestU3Ek__BackingField_29; }
	inline void set_U3CcustomizeRequestU3Ek__BackingField_29(requestCustomizer_t2087322079 * value)
	{
		___U3CcustomizeRequestU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcustomizeRequestU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CExitModeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CExitModeU3Ek__BackingField_30)); }
	inline int32_t get_U3CExitModeU3Ek__BackingField_30() const { return ___U3CExitModeU3Ek__BackingField_30; }
	inline int32_t* get_address_of_U3CExitModeU3Ek__BackingField_30() { return &___U3CExitModeU3Ek__BackingField_30; }
	inline void set_U3CExitModeU3Ek__BackingField_30(int32_t value)
	{
		___U3CExitModeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CValidationResultU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___U3CValidationResultU3Ek__BackingField_31)); }
	inline int32_t get_U3CValidationResultU3Ek__BackingField_31() const { return ___U3CValidationResultU3Ek__BackingField_31; }
	inline int32_t* get_address_of_U3CValidationResultU3Ek__BackingField_31() { return &___U3CValidationResultU3Ek__BackingField_31; }
	inline void set_U3CValidationResultU3Ek__BackingField_31(int32_t value)
	{
		___U3CValidationResultU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_validateJob_32() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___validateJob_32)); }
	inline ValidateJob_t4103004751 * get_validateJob_32() const { return ___validateJob_32; }
	inline ValidateJob_t4103004751 ** get_address_of_validateJob_32() { return &___validateJob_32; }
	inline void set_validateJob_32(ValidateJob_t4103004751 * value)
	{
		___validateJob_32 = value;
		Il2CppCodeGenWriteBarrier(&___validateJob_32, value);
	}

	inline static int32_t get_offset_of_currentFakeHash_33() { return static_cast<int32_t>(offsetof(GameSession_t3448824060, ___currentFakeHash_33)); }
	inline ByteU5BU5D_t3397334013* get_currentFakeHash_33() const { return ___currentFakeHash_33; }
	inline ByteU5BU5D_t3397334013** get_address_of_currentFakeHash_33() { return &___currentFakeHash_33; }
	inline void set_currentFakeHash_33(ByteU5BU5D_t3397334013* value)
	{
		___currentFakeHash_33 = value;
		Il2CppCodeGenWriteBarrier(&___currentFakeHash_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
