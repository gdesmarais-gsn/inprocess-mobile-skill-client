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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3185325067.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game783480378.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.ReplayGameSession
struct  ReplayGameSession_t2987204361  : public GameSessionBase_t3185325067
{
public:
	// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_dataSafe
	Il2CppObject * ____dataSafe_11;
	// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Client.Session.ReplayGameSession::<ErrorRequestWrapper>k__BackingField
	RequestWrapper_t293827378 * ___U3CErrorRequestWrapperU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_joinRecord
	Dictionary_2_t3943999495 * ____joinRecord_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_startRecord
	Dictionary_2_t3943999495 * ____startRecord_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_setup
	Dictionary_2_t3943999495 * ____setup_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_options
	Dictionary_2_t3943999495 * ____options_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::join
	Dictionary_2_t3943999495 * ___join_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::start
	Dictionary_2_t3943999495 * ___start_18;
	// System.IO.MemoryStream GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_logStream
	MemoryStream_t743994179 * ____logStream_19;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_actionQueue
	ActionQueue_t1924202305 * ____actionQueue_20;
	// System.Boolean GSN.Skill.Games.Common.Client.Session.ReplayGameSession::abortOnEnd
	bool ___abortOnEnd_21;
	// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Client.Session.ReplayGameSession::<customizeRequest>k__BackingField
	requestCustomizer_t2087322079 * ___U3CcustomizeRequestU3Ek__BackingField_22;
	// System.String GSN.Skill.Games.Common.Client.Session.ReplayGameSession::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_23;
	// System.String GSN.Skill.Games.Common.Client.Session.ReplayGameSession::notaryCompression
	String_t* ___notaryCompression_24;
	// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Session.ReplayGameSession::<ExitMode>k__BackingField
	int32_t ___U3CExitModeU3Ek__BackingField_25;
	// GSN.Skill.Games.Common.Utils.GameValidationResult GSN.Skill.Games.Common.Client.Session.ReplayGameSession::<ValidationResult>k__BackingField
	int32_t ___U3CValidationResultU3Ek__BackingField_26;
	// System.Int32 GSN.Skill.Games.Common.Client.Session.ReplayGameSession::_timeout
	int32_t ____timeout_27;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Client.Session.ReplayGameSession::validateJob
	Job_t4002496073 * ___validateJob_28;

public:
	inline static int32_t get_offset_of__dataSafe_11() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____dataSafe_11)); }
	inline Il2CppObject * get__dataSafe_11() const { return ____dataSafe_11; }
	inline Il2CppObject ** get_address_of__dataSafe_11() { return &____dataSafe_11; }
	inline void set__dataSafe_11(Il2CppObject * value)
	{
		____dataSafe_11 = value;
		Il2CppCodeGenWriteBarrier(&____dataSafe_11, value);
	}

	inline static int32_t get_offset_of_U3CErrorRequestWrapperU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___U3CErrorRequestWrapperU3Ek__BackingField_12)); }
	inline RequestWrapper_t293827378 * get_U3CErrorRequestWrapperU3Ek__BackingField_12() const { return ___U3CErrorRequestWrapperU3Ek__BackingField_12; }
	inline RequestWrapper_t293827378 ** get_address_of_U3CErrorRequestWrapperU3Ek__BackingField_12() { return &___U3CErrorRequestWrapperU3Ek__BackingField_12; }
	inline void set_U3CErrorRequestWrapperU3Ek__BackingField_12(RequestWrapper_t293827378 * value)
	{
		___U3CErrorRequestWrapperU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorRequestWrapperU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of__joinRecord_13() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____joinRecord_13)); }
	inline Dictionary_2_t3943999495 * get__joinRecord_13() const { return ____joinRecord_13; }
	inline Dictionary_2_t3943999495 ** get_address_of__joinRecord_13() { return &____joinRecord_13; }
	inline void set__joinRecord_13(Dictionary_2_t3943999495 * value)
	{
		____joinRecord_13 = value;
		Il2CppCodeGenWriteBarrier(&____joinRecord_13, value);
	}

	inline static int32_t get_offset_of__startRecord_14() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____startRecord_14)); }
	inline Dictionary_2_t3943999495 * get__startRecord_14() const { return ____startRecord_14; }
	inline Dictionary_2_t3943999495 ** get_address_of__startRecord_14() { return &____startRecord_14; }
	inline void set__startRecord_14(Dictionary_2_t3943999495 * value)
	{
		____startRecord_14 = value;
		Il2CppCodeGenWriteBarrier(&____startRecord_14, value);
	}

	inline static int32_t get_offset_of__setup_15() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____setup_15)); }
	inline Dictionary_2_t3943999495 * get__setup_15() const { return ____setup_15; }
	inline Dictionary_2_t3943999495 ** get_address_of__setup_15() { return &____setup_15; }
	inline void set__setup_15(Dictionary_2_t3943999495 * value)
	{
		____setup_15 = value;
		Il2CppCodeGenWriteBarrier(&____setup_15, value);
	}

	inline static int32_t get_offset_of__options_16() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____options_16)); }
	inline Dictionary_2_t3943999495 * get__options_16() const { return ____options_16; }
	inline Dictionary_2_t3943999495 ** get_address_of__options_16() { return &____options_16; }
	inline void set__options_16(Dictionary_2_t3943999495 * value)
	{
		____options_16 = value;
		Il2CppCodeGenWriteBarrier(&____options_16, value);
	}

	inline static int32_t get_offset_of_join_17() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___join_17)); }
	inline Dictionary_2_t3943999495 * get_join_17() const { return ___join_17; }
	inline Dictionary_2_t3943999495 ** get_address_of_join_17() { return &___join_17; }
	inline void set_join_17(Dictionary_2_t3943999495 * value)
	{
		___join_17 = value;
		Il2CppCodeGenWriteBarrier(&___join_17, value);
	}

	inline static int32_t get_offset_of_start_18() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___start_18)); }
	inline Dictionary_2_t3943999495 * get_start_18() const { return ___start_18; }
	inline Dictionary_2_t3943999495 ** get_address_of_start_18() { return &___start_18; }
	inline void set_start_18(Dictionary_2_t3943999495 * value)
	{
		___start_18 = value;
		Il2CppCodeGenWriteBarrier(&___start_18, value);
	}

	inline static int32_t get_offset_of__logStream_19() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____logStream_19)); }
	inline MemoryStream_t743994179 * get__logStream_19() const { return ____logStream_19; }
	inline MemoryStream_t743994179 ** get_address_of__logStream_19() { return &____logStream_19; }
	inline void set__logStream_19(MemoryStream_t743994179 * value)
	{
		____logStream_19 = value;
		Il2CppCodeGenWriteBarrier(&____logStream_19, value);
	}

	inline static int32_t get_offset_of__actionQueue_20() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____actionQueue_20)); }
	inline ActionQueue_t1924202305 * get__actionQueue_20() const { return ____actionQueue_20; }
	inline ActionQueue_t1924202305 ** get_address_of__actionQueue_20() { return &____actionQueue_20; }
	inline void set__actionQueue_20(ActionQueue_t1924202305 * value)
	{
		____actionQueue_20 = value;
		Il2CppCodeGenWriteBarrier(&____actionQueue_20, value);
	}

	inline static int32_t get_offset_of_abortOnEnd_21() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___abortOnEnd_21)); }
	inline bool get_abortOnEnd_21() const { return ___abortOnEnd_21; }
	inline bool* get_address_of_abortOnEnd_21() { return &___abortOnEnd_21; }
	inline void set_abortOnEnd_21(bool value)
	{
		___abortOnEnd_21 = value;
	}

	inline static int32_t get_offset_of_U3CcustomizeRequestU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___U3CcustomizeRequestU3Ek__BackingField_22)); }
	inline requestCustomizer_t2087322079 * get_U3CcustomizeRequestU3Ek__BackingField_22() const { return ___U3CcustomizeRequestU3Ek__BackingField_22; }
	inline requestCustomizer_t2087322079 ** get_address_of_U3CcustomizeRequestU3Ek__BackingField_22() { return &___U3CcustomizeRequestU3Ek__BackingField_22; }
	inline void set_U3CcustomizeRequestU3Ek__BackingField_22(requestCustomizer_t2087322079 * value)
	{
		___U3CcustomizeRequestU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcustomizeRequestU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___U3CUrlU3Ek__BackingField_23)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_23() const { return ___U3CUrlU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_23() { return &___U3CUrlU3Ek__BackingField_23; }
	inline void set_U3CUrlU3Ek__BackingField_23(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUrlU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_notaryCompression_24() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___notaryCompression_24)); }
	inline String_t* get_notaryCompression_24() const { return ___notaryCompression_24; }
	inline String_t** get_address_of_notaryCompression_24() { return &___notaryCompression_24; }
	inline void set_notaryCompression_24(String_t* value)
	{
		___notaryCompression_24 = value;
		Il2CppCodeGenWriteBarrier(&___notaryCompression_24, value);
	}

	inline static int32_t get_offset_of_U3CExitModeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___U3CExitModeU3Ek__BackingField_25)); }
	inline int32_t get_U3CExitModeU3Ek__BackingField_25() const { return ___U3CExitModeU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CExitModeU3Ek__BackingField_25() { return &___U3CExitModeU3Ek__BackingField_25; }
	inline void set_U3CExitModeU3Ek__BackingField_25(int32_t value)
	{
		___U3CExitModeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CValidationResultU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___U3CValidationResultU3Ek__BackingField_26)); }
	inline int32_t get_U3CValidationResultU3Ek__BackingField_26() const { return ___U3CValidationResultU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CValidationResultU3Ek__BackingField_26() { return &___U3CValidationResultU3Ek__BackingField_26; }
	inline void set_U3CValidationResultU3Ek__BackingField_26(int32_t value)
	{
		___U3CValidationResultU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of__timeout_27() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ____timeout_27)); }
	inline int32_t get__timeout_27() const { return ____timeout_27; }
	inline int32_t* get_address_of__timeout_27() { return &____timeout_27; }
	inline void set__timeout_27(int32_t value)
	{
		____timeout_27 = value;
	}

	inline static int32_t get_offset_of_validateJob_28() { return static_cast<int32_t>(offsetof(ReplayGameSession_t2987204361, ___validateJob_28)); }
	inline Job_t4002496073 * get_validateJob_28() const { return ___validateJob_28; }
	inline Job_t4002496073 ** get_address_of_validateJob_28() { return &___validateJob_28; }
	inline void set_validateJob_28(Job_t4002496073 * value)
	{
		___validateJob_28 = value;
		Il2CppCodeGenWriteBarrier(&___validateJob_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
