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
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se1585225230.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.TriPeaksWebEntry
struct  TriPeaksWebEntry_t1570223739  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSN.Skill.Games.Common.Client.TriPeaksWebEntry::_gameSceneToLoad
	String_t* ____gameSceneToLoad_3;
	// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.Client.TriPeaksWebEntry::_gameSession
	Il2CppObject * ____gameSession_4;
	// GSN.Skill.Games.Common.Client.Session.SessionType GSN.Skill.Games.Common.Client.TriPeaksWebEntry::_gameSessionType
	int32_t ____gameSessionType_5;

public:
	inline static int32_t get_offset_of__gameSceneToLoad_3() { return static_cast<int32_t>(offsetof(TriPeaksWebEntry_t1570223739, ____gameSceneToLoad_3)); }
	inline String_t* get__gameSceneToLoad_3() const { return ____gameSceneToLoad_3; }
	inline String_t** get_address_of__gameSceneToLoad_3() { return &____gameSceneToLoad_3; }
	inline void set__gameSceneToLoad_3(String_t* value)
	{
		____gameSceneToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&____gameSceneToLoad_3, value);
	}

	inline static int32_t get_offset_of__gameSession_4() { return static_cast<int32_t>(offsetof(TriPeaksWebEntry_t1570223739, ____gameSession_4)); }
	inline Il2CppObject * get__gameSession_4() const { return ____gameSession_4; }
	inline Il2CppObject ** get_address_of__gameSession_4() { return &____gameSession_4; }
	inline void set__gameSession_4(Il2CppObject * value)
	{
		____gameSession_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameSession_4, value);
	}

	inline static int32_t get_offset_of__gameSessionType_5() { return static_cast<int32_t>(offsetof(TriPeaksWebEntry_t1570223739, ____gameSessionType_5)); }
	inline int32_t get__gameSessionType_5() const { return ____gameSessionType_5; }
	inline int32_t* get_address_of__gameSessionType_5() { return &____gameSessionType_5; }
	inline void set__gameSessionType_5(int32_t value)
	{
		____gameSessionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
