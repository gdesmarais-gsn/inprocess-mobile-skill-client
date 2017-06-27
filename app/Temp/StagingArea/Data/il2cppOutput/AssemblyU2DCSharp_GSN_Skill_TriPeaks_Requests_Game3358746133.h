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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>
struct Dictionary_2_t92613559;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;

#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game1749497108.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game3649477548.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData
struct  TriPeaksNotaryRequestData_t3358746133  : public TriPeaksRequestData_1_t1749497108
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]> GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::NOTARY_REQUEST_TYPES
	Dictionary_2_t92613559 * ___NOTARY_REQUEST_TYPES_15;
	// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::<secureHunk>k__BackingField
	SecureHunk_t3302567905 * ___U3CsecureHunkU3Ek__BackingField_16;
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::hunkType
	ByteU5BU5D_t3397334013* ___hunkType_17;
	// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::_response
	TriPeaksNotaryData_t3649477548  ____response_18;

public:
	inline static int32_t get_offset_of_NOTARY_REQUEST_TYPES_15() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133, ___NOTARY_REQUEST_TYPES_15)); }
	inline Dictionary_2_t92613559 * get_NOTARY_REQUEST_TYPES_15() const { return ___NOTARY_REQUEST_TYPES_15; }
	inline Dictionary_2_t92613559 ** get_address_of_NOTARY_REQUEST_TYPES_15() { return &___NOTARY_REQUEST_TYPES_15; }
	inline void set_NOTARY_REQUEST_TYPES_15(Dictionary_2_t92613559 * value)
	{
		___NOTARY_REQUEST_TYPES_15 = value;
		Il2CppCodeGenWriteBarrier(&___NOTARY_REQUEST_TYPES_15, value);
	}

	inline static int32_t get_offset_of_U3CsecureHunkU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133, ___U3CsecureHunkU3Ek__BackingField_16)); }
	inline SecureHunk_t3302567905 * get_U3CsecureHunkU3Ek__BackingField_16() const { return ___U3CsecureHunkU3Ek__BackingField_16; }
	inline SecureHunk_t3302567905 ** get_address_of_U3CsecureHunkU3Ek__BackingField_16() { return &___U3CsecureHunkU3Ek__BackingField_16; }
	inline void set_U3CsecureHunkU3Ek__BackingField_16(SecureHunk_t3302567905 * value)
	{
		___U3CsecureHunkU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsecureHunkU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_hunkType_17() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133, ___hunkType_17)); }
	inline ByteU5BU5D_t3397334013* get_hunkType_17() const { return ___hunkType_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_hunkType_17() { return &___hunkType_17; }
	inline void set_hunkType_17(ByteU5BU5D_t3397334013* value)
	{
		___hunkType_17 = value;
		Il2CppCodeGenWriteBarrier(&___hunkType_17, value);
	}

	inline static int32_t get_offset_of__response_18() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133, ____response_18)); }
	inline TriPeaksNotaryData_t3649477548  get__response_18() const { return ____response_18; }
	inline TriPeaksNotaryData_t3649477548 * get_address_of__response_18() { return &____response_18; }
	inline void set__response_18(TriPeaksNotaryData_t3649477548  value)
	{
		____response_18 = value;
	}
};

struct TriPeaksNotaryRequestData_t3358746133_StaticFields
{
public:
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::NOTARY_REQUEST_TYPE_JOIN
	ByteU5BU5D_t3397334013* ___NOTARY_REQUEST_TYPE_JOIN_12;
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::NOTARY_REQUEST_TYPE_START
	ByteU5BU5D_t3397334013* ___NOTARY_REQUEST_TYPE_START_13;
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryRequestData::NOTARY_REQUEST_TYPE_NOTARY
	ByteU5BU5D_t3397334013* ___NOTARY_REQUEST_TYPE_NOTARY_14;

public:
	inline static int32_t get_offset_of_NOTARY_REQUEST_TYPE_JOIN_12() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133_StaticFields, ___NOTARY_REQUEST_TYPE_JOIN_12)); }
	inline ByteU5BU5D_t3397334013* get_NOTARY_REQUEST_TYPE_JOIN_12() const { return ___NOTARY_REQUEST_TYPE_JOIN_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_NOTARY_REQUEST_TYPE_JOIN_12() { return &___NOTARY_REQUEST_TYPE_JOIN_12; }
	inline void set_NOTARY_REQUEST_TYPE_JOIN_12(ByteU5BU5D_t3397334013* value)
	{
		___NOTARY_REQUEST_TYPE_JOIN_12 = value;
		Il2CppCodeGenWriteBarrier(&___NOTARY_REQUEST_TYPE_JOIN_12, value);
	}

	inline static int32_t get_offset_of_NOTARY_REQUEST_TYPE_START_13() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133_StaticFields, ___NOTARY_REQUEST_TYPE_START_13)); }
	inline ByteU5BU5D_t3397334013* get_NOTARY_REQUEST_TYPE_START_13() const { return ___NOTARY_REQUEST_TYPE_START_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_NOTARY_REQUEST_TYPE_START_13() { return &___NOTARY_REQUEST_TYPE_START_13; }
	inline void set_NOTARY_REQUEST_TYPE_START_13(ByteU5BU5D_t3397334013* value)
	{
		___NOTARY_REQUEST_TYPE_START_13 = value;
		Il2CppCodeGenWriteBarrier(&___NOTARY_REQUEST_TYPE_START_13, value);
	}

	inline static int32_t get_offset_of_NOTARY_REQUEST_TYPE_NOTARY_14() { return static_cast<int32_t>(offsetof(TriPeaksNotaryRequestData_t3358746133_StaticFields, ___NOTARY_REQUEST_TYPE_NOTARY_14)); }
	inline ByteU5BU5D_t3397334013* get_NOTARY_REQUEST_TYPE_NOTARY_14() const { return ___NOTARY_REQUEST_TYPE_NOTARY_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_NOTARY_REQUEST_TYPE_NOTARY_14() { return &___NOTARY_REQUEST_TYPE_NOTARY_14; }
	inline void set_NOTARY_REQUEST_TYPE_NOTARY_14(ByteU5BU5D_t3397334013* value)
	{
		___NOTARY_REQUEST_TYPE_NOTARY_14 = value;
		Il2CppCodeGenWriteBarrier(&___NOTARY_REQUEST_TYPE_NOTARY_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
