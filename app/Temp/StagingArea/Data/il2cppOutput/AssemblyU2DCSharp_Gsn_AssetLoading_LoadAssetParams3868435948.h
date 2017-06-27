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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gsn.AssetLoading.LoadAssetParams
struct  LoadAssetParams_t3868435948 
{
public:
	// System.String Gsn.AssetLoading.LoadAssetParams::groupName
	String_t* ___groupName_0;
	// System.String Gsn.AssetLoading.LoadAssetParams::assetName
	String_t* ___assetName_1;

public:
	inline static int32_t get_offset_of_groupName_0() { return static_cast<int32_t>(offsetof(LoadAssetParams_t3868435948, ___groupName_0)); }
	inline String_t* get_groupName_0() const { return ___groupName_0; }
	inline String_t** get_address_of_groupName_0() { return &___groupName_0; }
	inline void set_groupName_0(String_t* value)
	{
		___groupName_0 = value;
		Il2CppCodeGenWriteBarrier(&___groupName_0, value);
	}

	inline static int32_t get_offset_of_assetName_1() { return static_cast<int32_t>(offsetof(LoadAssetParams_t3868435948, ___assetName_1)); }
	inline String_t* get_assetName_1() const { return ___assetName_1; }
	inline String_t** get_address_of_assetName_1() { return &___assetName_1; }
	inline void set_assetName_1(String_t* value)
	{
		___assetName_1 = value;
		Il2CppCodeGenWriteBarrier(&___assetName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Gsn.AssetLoading.LoadAssetParams
struct LoadAssetParams_t3868435948_marshaled_pinvoke
{
	char* ___groupName_0;
	char* ___assetName_1;
};
// Native definition for COM marshalling of Gsn.AssetLoading.LoadAssetParams
struct LoadAssetParams_t3868435948_marshaled_com
{
	Il2CppChar* ___groupName_0;
	Il2CppChar* ___assetName_1;
};
