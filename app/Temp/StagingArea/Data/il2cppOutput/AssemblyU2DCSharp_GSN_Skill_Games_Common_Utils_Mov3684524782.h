#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Action`2<GSN.Skill.Games.Common.Events.IInputMessage,System.Int64>
struct Action_2_t1881255312;
// System.Action`1<System.Int64>
struct Action_1_t710877419;
// GSN.Skill.Games.Common.Events.IInputMessage
struct IInputMessage_t3660278550;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Events.InputMessageConverter
struct InputMessageConverter_t1013852753;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.GameLogRecord>
struct List_1_t3372751093;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.MovePlayer
struct  MovePlayer_t3684524782  : public Il2CppObject
{
public:
	// System.IO.MemoryStream GSN.Skill.Games.Common.Utils.MovePlayer::gameLogStream
	MemoryStream_t743994179 * ___gameLogStream_0;
	// System.Action`2<GSN.Skill.Games.Common.Events.IInputMessage,System.Int64> GSN.Skill.Games.Common.Utils.MovePlayer::_send
	Action_2_t1881255312 * ____send_1;
	// System.Action`1<System.Int64> GSN.Skill.Games.Common.Utils.MovePlayer::_sync
	Action_1_t710877419 * ____sync_2;
	// GSN.Skill.Games.Common.Events.IInputMessage GSN.Skill.Games.Common.Utils.MovePlayer::_nextInput
	Il2CppObject * ____nextInput_3;
	// System.String GSN.Skill.Games.Common.Utils.MovePlayer::commentText
	String_t* ___commentText_4;
	// System.Int32 GSN.Skill.Games.Common.Utils.MovePlayer::_prevRecordTime
	int32_t ____prevRecordTime_6;
	// System.Int32 GSN.Skill.Games.Common.Utils.MovePlayer::_nextRecordTime
	int32_t ____nextRecordTime_7;
	// System.String GSN.Skill.Games.Common.Utils.MovePlayer::_nextRecordType
	String_t* ____nextRecordType_8;
	// GSN.Skill.Games.Common.Events.InputMessageConverter GSN.Skill.Games.Common.Utils.MovePlayer::_converter
	InputMessageConverter_t1013852753 * ____converter_9;
	// System.Boolean GSN.Skill.Games.Common.Utils.MovePlayer::_abortOnEnd
	bool ____abortOnEnd_10;
	// System.UInt32 GSN.Skill.Games.Common.Utils.MovePlayer::startTime
	uint32_t ___startTime_11;
	// System.UInt32 GSN.Skill.Games.Common.Utils.MovePlayer::notaryTime
	uint32_t ___notaryTime_12;
	// System.Int32 GSN.Skill.Games.Common.Utils.MovePlayer::maxGameTime
	int32_t ___maxGameTime_13;
	// System.Int32 GSN.Skill.Games.Common.Utils.MovePlayer::<excessRealTime>k__BackingField
	int32_t ___U3CexcessRealTimeU3Ek__BackingField_14;
	// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.MovePlayer::_peekedHunk
	SecureHunk_t3302567905 * ____peekedHunk_15;
	// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Utils.MovePlayer::_dataSafe
	Il2CppObject * ____dataSafe_16;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.MovePlayer::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_17;
	// System.Byte[] GSN.Skill.Games.Common.Utils.MovePlayer::currentHash
	ByteU5BU5D_t3397334013* ___currentHash_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Utils.MovePlayer::_joinRecord
	Dictionary_2_t3943999495 * ____joinRecord_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Utils.MovePlayer::_startRecord
	Dictionary_2_t3943999495 * ____startRecord_20;
	// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Utils.MovePlayer::_model
	GameModelBase_t2215752692 * ____model_21;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.GameLogRecord> GSN.Skill.Games.Common.Utils.MovePlayer::records
	List_1_t3372751093 * ___records_22;
	// System.Int32 GSN.Skill.Games.Common.Utils.MovePlayer::recordIndex
	int32_t ___recordIndex_23;

public:
	inline static int32_t get_offset_of_gameLogStream_0() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___gameLogStream_0)); }
	inline MemoryStream_t743994179 * get_gameLogStream_0() const { return ___gameLogStream_0; }
	inline MemoryStream_t743994179 ** get_address_of_gameLogStream_0() { return &___gameLogStream_0; }
	inline void set_gameLogStream_0(MemoryStream_t743994179 * value)
	{
		___gameLogStream_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameLogStream_0, value);
	}

	inline static int32_t get_offset_of__send_1() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____send_1)); }
	inline Action_2_t1881255312 * get__send_1() const { return ____send_1; }
	inline Action_2_t1881255312 ** get_address_of__send_1() { return &____send_1; }
	inline void set__send_1(Action_2_t1881255312 * value)
	{
		____send_1 = value;
		Il2CppCodeGenWriteBarrier(&____send_1, value);
	}

	inline static int32_t get_offset_of__sync_2() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____sync_2)); }
	inline Action_1_t710877419 * get__sync_2() const { return ____sync_2; }
	inline Action_1_t710877419 ** get_address_of__sync_2() { return &____sync_2; }
	inline void set__sync_2(Action_1_t710877419 * value)
	{
		____sync_2 = value;
		Il2CppCodeGenWriteBarrier(&____sync_2, value);
	}

	inline static int32_t get_offset_of__nextInput_3() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____nextInput_3)); }
	inline Il2CppObject * get__nextInput_3() const { return ____nextInput_3; }
	inline Il2CppObject ** get_address_of__nextInput_3() { return &____nextInput_3; }
	inline void set__nextInput_3(Il2CppObject * value)
	{
		____nextInput_3 = value;
		Il2CppCodeGenWriteBarrier(&____nextInput_3, value);
	}

	inline static int32_t get_offset_of_commentText_4() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___commentText_4)); }
	inline String_t* get_commentText_4() const { return ___commentText_4; }
	inline String_t** get_address_of_commentText_4() { return &___commentText_4; }
	inline void set_commentText_4(String_t* value)
	{
		___commentText_4 = value;
		Il2CppCodeGenWriteBarrier(&___commentText_4, value);
	}

	inline static int32_t get_offset_of__prevRecordTime_6() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____prevRecordTime_6)); }
	inline int32_t get__prevRecordTime_6() const { return ____prevRecordTime_6; }
	inline int32_t* get_address_of__prevRecordTime_6() { return &____prevRecordTime_6; }
	inline void set__prevRecordTime_6(int32_t value)
	{
		____prevRecordTime_6 = value;
	}

	inline static int32_t get_offset_of__nextRecordTime_7() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____nextRecordTime_7)); }
	inline int32_t get__nextRecordTime_7() const { return ____nextRecordTime_7; }
	inline int32_t* get_address_of__nextRecordTime_7() { return &____nextRecordTime_7; }
	inline void set__nextRecordTime_7(int32_t value)
	{
		____nextRecordTime_7 = value;
	}

	inline static int32_t get_offset_of__nextRecordType_8() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____nextRecordType_8)); }
	inline String_t* get__nextRecordType_8() const { return ____nextRecordType_8; }
	inline String_t** get_address_of__nextRecordType_8() { return &____nextRecordType_8; }
	inline void set__nextRecordType_8(String_t* value)
	{
		____nextRecordType_8 = value;
		Il2CppCodeGenWriteBarrier(&____nextRecordType_8, value);
	}

	inline static int32_t get_offset_of__converter_9() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____converter_9)); }
	inline InputMessageConverter_t1013852753 * get__converter_9() const { return ____converter_9; }
	inline InputMessageConverter_t1013852753 ** get_address_of__converter_9() { return &____converter_9; }
	inline void set__converter_9(InputMessageConverter_t1013852753 * value)
	{
		____converter_9 = value;
		Il2CppCodeGenWriteBarrier(&____converter_9, value);
	}

	inline static int32_t get_offset_of__abortOnEnd_10() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____abortOnEnd_10)); }
	inline bool get__abortOnEnd_10() const { return ____abortOnEnd_10; }
	inline bool* get_address_of__abortOnEnd_10() { return &____abortOnEnd_10; }
	inline void set__abortOnEnd_10(bool value)
	{
		____abortOnEnd_10 = value;
	}

	inline static int32_t get_offset_of_startTime_11() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___startTime_11)); }
	inline uint32_t get_startTime_11() const { return ___startTime_11; }
	inline uint32_t* get_address_of_startTime_11() { return &___startTime_11; }
	inline void set_startTime_11(uint32_t value)
	{
		___startTime_11 = value;
	}

	inline static int32_t get_offset_of_notaryTime_12() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___notaryTime_12)); }
	inline uint32_t get_notaryTime_12() const { return ___notaryTime_12; }
	inline uint32_t* get_address_of_notaryTime_12() { return &___notaryTime_12; }
	inline void set_notaryTime_12(uint32_t value)
	{
		___notaryTime_12 = value;
	}

	inline static int32_t get_offset_of_maxGameTime_13() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___maxGameTime_13)); }
	inline int32_t get_maxGameTime_13() const { return ___maxGameTime_13; }
	inline int32_t* get_address_of_maxGameTime_13() { return &___maxGameTime_13; }
	inline void set_maxGameTime_13(int32_t value)
	{
		___maxGameTime_13 = value;
	}

	inline static int32_t get_offset_of_U3CexcessRealTimeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___U3CexcessRealTimeU3Ek__BackingField_14)); }
	inline int32_t get_U3CexcessRealTimeU3Ek__BackingField_14() const { return ___U3CexcessRealTimeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CexcessRealTimeU3Ek__BackingField_14() { return &___U3CexcessRealTimeU3Ek__BackingField_14; }
	inline void set_U3CexcessRealTimeU3Ek__BackingField_14(int32_t value)
	{
		___U3CexcessRealTimeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of__peekedHunk_15() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____peekedHunk_15)); }
	inline SecureHunk_t3302567905 * get__peekedHunk_15() const { return ____peekedHunk_15; }
	inline SecureHunk_t3302567905 ** get_address_of__peekedHunk_15() { return &____peekedHunk_15; }
	inline void set__peekedHunk_15(SecureHunk_t3302567905 * value)
	{
		____peekedHunk_15 = value;
		Il2CppCodeGenWriteBarrier(&____peekedHunk_15, value);
	}

	inline static int32_t get_offset_of__dataSafe_16() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____dataSafe_16)); }
	inline Il2CppObject * get__dataSafe_16() const { return ____dataSafe_16; }
	inline Il2CppObject ** get_address_of__dataSafe_16() { return &____dataSafe_16; }
	inline void set__dataSafe_16(Il2CppObject * value)
	{
		____dataSafe_16 = value;
		Il2CppCodeGenWriteBarrier(&____dataSafe_16, value);
	}

	inline static int32_t get_offset_of_actionQueue_17() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___actionQueue_17)); }
	inline ActionQueue_t1924202305 * get_actionQueue_17() const { return ___actionQueue_17; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_17() { return &___actionQueue_17; }
	inline void set_actionQueue_17(ActionQueue_t1924202305 * value)
	{
		___actionQueue_17 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_17, value);
	}

	inline static int32_t get_offset_of_currentHash_18() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___currentHash_18)); }
	inline ByteU5BU5D_t3397334013* get_currentHash_18() const { return ___currentHash_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_currentHash_18() { return &___currentHash_18; }
	inline void set_currentHash_18(ByteU5BU5D_t3397334013* value)
	{
		___currentHash_18 = value;
		Il2CppCodeGenWriteBarrier(&___currentHash_18, value);
	}

	inline static int32_t get_offset_of__joinRecord_19() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____joinRecord_19)); }
	inline Dictionary_2_t3943999495 * get__joinRecord_19() const { return ____joinRecord_19; }
	inline Dictionary_2_t3943999495 ** get_address_of__joinRecord_19() { return &____joinRecord_19; }
	inline void set__joinRecord_19(Dictionary_2_t3943999495 * value)
	{
		____joinRecord_19 = value;
		Il2CppCodeGenWriteBarrier(&____joinRecord_19, value);
	}

	inline static int32_t get_offset_of__startRecord_20() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____startRecord_20)); }
	inline Dictionary_2_t3943999495 * get__startRecord_20() const { return ____startRecord_20; }
	inline Dictionary_2_t3943999495 ** get_address_of__startRecord_20() { return &____startRecord_20; }
	inline void set__startRecord_20(Dictionary_2_t3943999495 * value)
	{
		____startRecord_20 = value;
		Il2CppCodeGenWriteBarrier(&____startRecord_20, value);
	}

	inline static int32_t get_offset_of__model_21() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ____model_21)); }
	inline GameModelBase_t2215752692 * get__model_21() const { return ____model_21; }
	inline GameModelBase_t2215752692 ** get_address_of__model_21() { return &____model_21; }
	inline void set__model_21(GameModelBase_t2215752692 * value)
	{
		____model_21 = value;
		Il2CppCodeGenWriteBarrier(&____model_21, value);
	}

	inline static int32_t get_offset_of_records_22() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___records_22)); }
	inline List_1_t3372751093 * get_records_22() const { return ___records_22; }
	inline List_1_t3372751093 ** get_address_of_records_22() { return &___records_22; }
	inline void set_records_22(List_1_t3372751093 * value)
	{
		___records_22 = value;
		Il2CppCodeGenWriteBarrier(&___records_22, value);
	}

	inline static int32_t get_offset_of_recordIndex_23() { return static_cast<int32_t>(offsetof(MovePlayer_t3684524782, ___recordIndex_23)); }
	inline int32_t get_recordIndex_23() const { return ___recordIndex_23; }
	inline int32_t* get_address_of_recordIndex_23() { return &___recordIndex_23; }
	inline void set_recordIndex_23(int32_t value)
	{
		___recordIndex_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
