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
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.SecureHunk>
struct List_1_t2671689037;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.GameLogRecord>
struct List_1_t3372751093;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GSN.Skill.Games.Common.Utils.Notarizer
struct Notarizer_t1554491764;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// GSN.Skill.Requests.SingleWebRequestBegin
struct SingleWebRequestBegin_t714235414;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GameLog
struct  GameLog_t388062514  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Games.Common.Utils.GameLog::ValidateInProgress
	bool ___ValidateInProgress_3;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.SecureHunk> GSN.Skill.Games.Common.Utils.GameLog::notarizedHunks
	List_1_t2671689037 * ___notarizedHunks_4;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.GameLogRecord> GSN.Skill.Games.Common.Utils.GameLog::records
	List_1_t3372751093 * ___records_5;
	// System.IO.MemoryStream GSN.Skill.Games.Common.Utils.GameLog::dataHistory
	MemoryStream_t743994179 * ___dataHistory_6;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::dataHistoryHMAC
	ByteU5BU5D_t3397334013* ___dataHistoryHMAC_7;
	// System.Int32 GSN.Skill.Games.Common.Utils.GameLog::recordBytes
	int32_t ___recordBytes_8;
	// GSN.Skill.Games.Common.Utils.Notarizer GSN.Skill.Games.Common.Utils.GameLog::notarizer
	Notarizer_t1554491764 * ___notarizer_9;
	// System.String GSN.Skill.Games.Common.Utils.GameLog::TitleName
	String_t* ___TitleName_10;
	// System.String GSN.Skill.Games.Common.Utils.GameLog::modelVersion
	String_t* ___modelVersion_11;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::currentHash
	ByteU5BU5D_t3397334013* ___currentHash_13;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::joinResponse
	ByteU5BU5D_t3397334013* ___joinResponse_14;
	// System.Boolean GSN.Skill.Games.Common.Utils.GameLog::Success
	bool ___Success_15;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::startResponse
	ByteU5BU5D_t3397334013* ___startResponse_16;
	// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::<JoinHunk>k__BackingField
	SecureHunk_t3302567905 * ___U3CJoinHunkU3Ek__BackingField_17;
	// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::<StartHunk>k__BackingField
	SecureHunk_t3302567905 * ___U3CStartHunkU3Ek__BackingField_18;
	// System.String GSN.Skill.Games.Common.Utils.GameLog::NotaryCompression
	String_t* ___NotaryCompression_19;

public:
	inline static int32_t get_offset_of_ValidateInProgress_3() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___ValidateInProgress_3)); }
	inline bool get_ValidateInProgress_3() const { return ___ValidateInProgress_3; }
	inline bool* get_address_of_ValidateInProgress_3() { return &___ValidateInProgress_3; }
	inline void set_ValidateInProgress_3(bool value)
	{
		___ValidateInProgress_3 = value;
	}

	inline static int32_t get_offset_of_notarizedHunks_4() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___notarizedHunks_4)); }
	inline List_1_t2671689037 * get_notarizedHunks_4() const { return ___notarizedHunks_4; }
	inline List_1_t2671689037 ** get_address_of_notarizedHunks_4() { return &___notarizedHunks_4; }
	inline void set_notarizedHunks_4(List_1_t2671689037 * value)
	{
		___notarizedHunks_4 = value;
		Il2CppCodeGenWriteBarrier(&___notarizedHunks_4, value);
	}

	inline static int32_t get_offset_of_records_5() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___records_5)); }
	inline List_1_t3372751093 * get_records_5() const { return ___records_5; }
	inline List_1_t3372751093 ** get_address_of_records_5() { return &___records_5; }
	inline void set_records_5(List_1_t3372751093 * value)
	{
		___records_5 = value;
		Il2CppCodeGenWriteBarrier(&___records_5, value);
	}

	inline static int32_t get_offset_of_dataHistory_6() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___dataHistory_6)); }
	inline MemoryStream_t743994179 * get_dataHistory_6() const { return ___dataHistory_6; }
	inline MemoryStream_t743994179 ** get_address_of_dataHistory_6() { return &___dataHistory_6; }
	inline void set_dataHistory_6(MemoryStream_t743994179 * value)
	{
		___dataHistory_6 = value;
		Il2CppCodeGenWriteBarrier(&___dataHistory_6, value);
	}

	inline static int32_t get_offset_of_dataHistoryHMAC_7() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___dataHistoryHMAC_7)); }
	inline ByteU5BU5D_t3397334013* get_dataHistoryHMAC_7() const { return ___dataHistoryHMAC_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_dataHistoryHMAC_7() { return &___dataHistoryHMAC_7; }
	inline void set_dataHistoryHMAC_7(ByteU5BU5D_t3397334013* value)
	{
		___dataHistoryHMAC_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataHistoryHMAC_7, value);
	}

	inline static int32_t get_offset_of_recordBytes_8() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___recordBytes_8)); }
	inline int32_t get_recordBytes_8() const { return ___recordBytes_8; }
	inline int32_t* get_address_of_recordBytes_8() { return &___recordBytes_8; }
	inline void set_recordBytes_8(int32_t value)
	{
		___recordBytes_8 = value;
	}

	inline static int32_t get_offset_of_notarizer_9() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___notarizer_9)); }
	inline Notarizer_t1554491764 * get_notarizer_9() const { return ___notarizer_9; }
	inline Notarizer_t1554491764 ** get_address_of_notarizer_9() { return &___notarizer_9; }
	inline void set_notarizer_9(Notarizer_t1554491764 * value)
	{
		___notarizer_9 = value;
		Il2CppCodeGenWriteBarrier(&___notarizer_9, value);
	}

	inline static int32_t get_offset_of_TitleName_10() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___TitleName_10)); }
	inline String_t* get_TitleName_10() const { return ___TitleName_10; }
	inline String_t** get_address_of_TitleName_10() { return &___TitleName_10; }
	inline void set_TitleName_10(String_t* value)
	{
		___TitleName_10 = value;
		Il2CppCodeGenWriteBarrier(&___TitleName_10, value);
	}

	inline static int32_t get_offset_of_modelVersion_11() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___modelVersion_11)); }
	inline String_t* get_modelVersion_11() const { return ___modelVersion_11; }
	inline String_t** get_address_of_modelVersion_11() { return &___modelVersion_11; }
	inline void set_modelVersion_11(String_t* value)
	{
		___modelVersion_11 = value;
		Il2CppCodeGenWriteBarrier(&___modelVersion_11, value);
	}

	inline static int32_t get_offset_of_currentHash_13() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___currentHash_13)); }
	inline ByteU5BU5D_t3397334013* get_currentHash_13() const { return ___currentHash_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_currentHash_13() { return &___currentHash_13; }
	inline void set_currentHash_13(ByteU5BU5D_t3397334013* value)
	{
		___currentHash_13 = value;
		Il2CppCodeGenWriteBarrier(&___currentHash_13, value);
	}

	inline static int32_t get_offset_of_joinResponse_14() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___joinResponse_14)); }
	inline ByteU5BU5D_t3397334013* get_joinResponse_14() const { return ___joinResponse_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_joinResponse_14() { return &___joinResponse_14; }
	inline void set_joinResponse_14(ByteU5BU5D_t3397334013* value)
	{
		___joinResponse_14 = value;
		Il2CppCodeGenWriteBarrier(&___joinResponse_14, value);
	}

	inline static int32_t get_offset_of_Success_15() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___Success_15)); }
	inline bool get_Success_15() const { return ___Success_15; }
	inline bool* get_address_of_Success_15() { return &___Success_15; }
	inline void set_Success_15(bool value)
	{
		___Success_15 = value;
	}

	inline static int32_t get_offset_of_startResponse_16() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___startResponse_16)); }
	inline ByteU5BU5D_t3397334013* get_startResponse_16() const { return ___startResponse_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_startResponse_16() { return &___startResponse_16; }
	inline void set_startResponse_16(ByteU5BU5D_t3397334013* value)
	{
		___startResponse_16 = value;
		Il2CppCodeGenWriteBarrier(&___startResponse_16, value);
	}

	inline static int32_t get_offset_of_U3CJoinHunkU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___U3CJoinHunkU3Ek__BackingField_17)); }
	inline SecureHunk_t3302567905 * get_U3CJoinHunkU3Ek__BackingField_17() const { return ___U3CJoinHunkU3Ek__BackingField_17; }
	inline SecureHunk_t3302567905 ** get_address_of_U3CJoinHunkU3Ek__BackingField_17() { return &___U3CJoinHunkU3Ek__BackingField_17; }
	inline void set_U3CJoinHunkU3Ek__BackingField_17(SecureHunk_t3302567905 * value)
	{
		___U3CJoinHunkU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CJoinHunkU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CStartHunkU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___U3CStartHunkU3Ek__BackingField_18)); }
	inline SecureHunk_t3302567905 * get_U3CStartHunkU3Ek__BackingField_18() const { return ___U3CStartHunkU3Ek__BackingField_18; }
	inline SecureHunk_t3302567905 ** get_address_of_U3CStartHunkU3Ek__BackingField_18() { return &___U3CStartHunkU3Ek__BackingField_18; }
	inline void set_U3CStartHunkU3Ek__BackingField_18(SecureHunk_t3302567905 * value)
	{
		___U3CStartHunkU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartHunkU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_NotaryCompression_19() { return static_cast<int32_t>(offsetof(GameLog_t388062514, ___NotaryCompression_19)); }
	inline String_t* get_NotaryCompression_19() const { return ___NotaryCompression_19; }
	inline String_t** get_address_of_NotaryCompression_19() { return &___NotaryCompression_19; }
	inline void set_NotaryCompression_19(String_t* value)
	{
		___NotaryCompression_19 = value;
		Il2CppCodeGenWriteBarrier(&___NotaryCompression_19, value);
	}
};

struct GameLog_t388062514_StaticFields
{
public:
	// System.String GSN.Skill.Games.Common.Utils.GameLog::TempGameLogFileName
	String_t* ___TempGameLogFileName_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.GameLog::MaxGameLogFileTime
	int32_t ___MaxGameLogFileTime_1;
	// System.Int32 GSN.Skill.Games.Common.Utils.GameLog::bytesPerNotarize
	int32_t ___bytesPerNotarize_2;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::initialHash
	ByteU5BU5D_t3397334013* ___initialHash_12;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Games.Common.Utils.GameLog::<>f__am$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__amU24cache0_20;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Games.Common.Utils.GameLog::<>f__am$cache1
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__amU24cache1_21;

public:
	inline static int32_t get_offset_of_TempGameLogFileName_0() { return static_cast<int32_t>(offsetof(GameLog_t388062514_StaticFields, ___TempGameLogFileName_0)); }
	inline String_t* get_TempGameLogFileName_0() const { return ___TempGameLogFileName_0; }
	inline String_t** get_address_of_TempGameLogFileName_0() { return &___TempGameLogFileName_0; }
	inline void set_TempGameLogFileName_0(String_t* value)
	{
		___TempGameLogFileName_0 = value;
		Il2CppCodeGenWriteBarrier(&___TempGameLogFileName_0, value);
	}

	inline static int32_t get_offset_of_MaxGameLogFileTime_1() { return static_cast<int32_t>(offsetof(GameLog_t388062514_StaticFields, ___MaxGameLogFileTime_1)); }
	inline int32_t get_MaxGameLogFileTime_1() const { return ___MaxGameLogFileTime_1; }
	inline int32_t* get_address_of_MaxGameLogFileTime_1() { return &___MaxGameLogFileTime_1; }
	inline void set_MaxGameLogFileTime_1(int32_t value)
	{
		___MaxGameLogFileTime_1 = value;
	}

	inline static int32_t get_offset_of_bytesPerNotarize_2() { return static_cast<int32_t>(offsetof(GameLog_t388062514_StaticFields, ___bytesPerNotarize_2)); }
	inline int32_t get_bytesPerNotarize_2() const { return ___bytesPerNotarize_2; }
	inline int32_t* get_address_of_bytesPerNotarize_2() { return &___bytesPerNotarize_2; }
	inline void set_bytesPerNotarize_2(int32_t value)
	{
		___bytesPerNotarize_2 = value;
	}

	inline static int32_t get_offset_of_initialHash_12() { return static_cast<int32_t>(offsetof(GameLog_t388062514_StaticFields, ___initialHash_12)); }
	inline ByteU5BU5D_t3397334013* get_initialHash_12() const { return ___initialHash_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_initialHash_12() { return &___initialHash_12; }
	inline void set_initialHash_12(ByteU5BU5D_t3397334013* value)
	{
		___initialHash_12 = value;
		Il2CppCodeGenWriteBarrier(&___initialHash_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(GameLog_t388062514_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_21() { return static_cast<int32_t>(offsetof(GameLog_t388062514_StaticFields, ___U3CU3Ef__amU24cache1_21)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__amU24cache1_21() const { return ___U3CU3Ef__amU24cache1_21; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__amU24cache1_21() { return &___U3CU3Ef__amU24cache1_21; }
	inline void set_U3CU3Ef__amU24cache1_21(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__amU24cache1_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
