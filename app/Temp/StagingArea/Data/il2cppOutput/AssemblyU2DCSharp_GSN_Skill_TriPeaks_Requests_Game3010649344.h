#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game_T10378600.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData/Result
struct  Result_t3010649344  : public TriPeaksResult_t10378600
{
public:
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData/Result::hmac
	ByteU5BU5D_t3397334013* ___hmac_2;
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData/Result::keyVersion
	ByteU5BU5D_t3397334013* ___keyVersion_3;
	// System.Byte[] GSN.Skill.TriPeaks.Requests.Game.TriPeaksNotaryData/Result::timeStamp
	ByteU5BU5D_t3397334013* ___timeStamp_4;

public:
	inline static int32_t get_offset_of_hmac_2() { return static_cast<int32_t>(offsetof(Result_t3010649344, ___hmac_2)); }
	inline ByteU5BU5D_t3397334013* get_hmac_2() const { return ___hmac_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_hmac_2() { return &___hmac_2; }
	inline void set_hmac_2(ByteU5BU5D_t3397334013* value)
	{
		___hmac_2 = value;
		Il2CppCodeGenWriteBarrier(&___hmac_2, value);
	}

	inline static int32_t get_offset_of_keyVersion_3() { return static_cast<int32_t>(offsetof(Result_t3010649344, ___keyVersion_3)); }
	inline ByteU5BU5D_t3397334013* get_keyVersion_3() const { return ___keyVersion_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyVersion_3() { return &___keyVersion_3; }
	inline void set_keyVersion_3(ByteU5BU5D_t3397334013* value)
	{
		___keyVersion_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyVersion_3, value);
	}

	inline static int32_t get_offset_of_timeStamp_4() { return static_cast<int32_t>(offsetof(Result_t3010649344, ___timeStamp_4)); }
	inline ByteU5BU5D_t3397334013* get_timeStamp_4() const { return ___timeStamp_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_timeStamp_4() { return &___timeStamp_4; }
	inline void set_timeStamp_4(ByteU5BU5D_t3397334013* value)
	{
		___timeStamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___timeStamp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
