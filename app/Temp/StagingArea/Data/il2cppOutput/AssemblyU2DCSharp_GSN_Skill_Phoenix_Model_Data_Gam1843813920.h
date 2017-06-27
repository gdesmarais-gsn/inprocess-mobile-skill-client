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

// GSN.Skill.Phoenix.Model.Data.GameData
struct  GameData_t1843813920 
{
public:
	// System.String GSN.Skill.Phoenix.Model.Data.GameData::resourceName
	String_t* ___resourceName_0;
	// System.Int32 GSN.Skill.Phoenix.Model.Data.GameData::gameID
	int32_t ___gameID_1;
	// System.Int32 GSN.Skill.Phoenix.Model.Data.GameData::mobileGameID
	int32_t ___mobileGameID_2;
	// System.String GSN.Skill.Phoenix.Model.Data.GameData::friendlyName
	String_t* ___friendlyName_3;
	// System.String GSN.Skill.Phoenix.Model.Data.GameData::gameSite
	String_t* ___gameSite_4;

public:
	inline static int32_t get_offset_of_resourceName_0() { return static_cast<int32_t>(offsetof(GameData_t1843813920, ___resourceName_0)); }
	inline String_t* get_resourceName_0() const { return ___resourceName_0; }
	inline String_t** get_address_of_resourceName_0() { return &___resourceName_0; }
	inline void set_resourceName_0(String_t* value)
	{
		___resourceName_0 = value;
		Il2CppCodeGenWriteBarrier(&___resourceName_0, value);
	}

	inline static int32_t get_offset_of_gameID_1() { return static_cast<int32_t>(offsetof(GameData_t1843813920, ___gameID_1)); }
	inline int32_t get_gameID_1() const { return ___gameID_1; }
	inline int32_t* get_address_of_gameID_1() { return &___gameID_1; }
	inline void set_gameID_1(int32_t value)
	{
		___gameID_1 = value;
	}

	inline static int32_t get_offset_of_mobileGameID_2() { return static_cast<int32_t>(offsetof(GameData_t1843813920, ___mobileGameID_2)); }
	inline int32_t get_mobileGameID_2() const { return ___mobileGameID_2; }
	inline int32_t* get_address_of_mobileGameID_2() { return &___mobileGameID_2; }
	inline void set_mobileGameID_2(int32_t value)
	{
		___mobileGameID_2 = value;
	}

	inline static int32_t get_offset_of_friendlyName_3() { return static_cast<int32_t>(offsetof(GameData_t1843813920, ___friendlyName_3)); }
	inline String_t* get_friendlyName_3() const { return ___friendlyName_3; }
	inline String_t** get_address_of_friendlyName_3() { return &___friendlyName_3; }
	inline void set_friendlyName_3(String_t* value)
	{
		___friendlyName_3 = value;
		Il2CppCodeGenWriteBarrier(&___friendlyName_3, value);
	}

	inline static int32_t get_offset_of_gameSite_4() { return static_cast<int32_t>(offsetof(GameData_t1843813920, ___gameSite_4)); }
	inline String_t* get_gameSite_4() const { return ___gameSite_4; }
	inline String_t** get_address_of_gameSite_4() { return &___gameSite_4; }
	inline void set_gameSite_4(String_t* value)
	{
		___gameSite_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameSite_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Model.Data.GameData
struct GameData_t1843813920_marshaled_pinvoke
{
	char* ___resourceName_0;
	int32_t ___gameID_1;
	int32_t ___mobileGameID_2;
	char* ___friendlyName_3;
	char* ___gameSite_4;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Model.Data.GameData
struct GameData_t1843813920_marshaled_com
{
	Il2CppChar* ___resourceName_0;
	int32_t ___gameID_1;
	int32_t ___mobileGameID_2;
	Il2CppChar* ___friendlyName_3;
	Il2CppChar* ___gameSite_4;
};
