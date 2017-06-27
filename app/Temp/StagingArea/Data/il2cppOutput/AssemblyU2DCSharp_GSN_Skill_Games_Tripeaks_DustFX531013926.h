#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.DustFX
struct  DustFX_t531013926  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GSN.Skill.Games.Tripeaks.DustFX::transformToFollow
	Transform_t3275118058 * ___transformToFollow_2;
	// UnityEngine.Transform GSN.Skill.Games.Tripeaks.DustFX::lockPosY
	Transform_t3275118058 * ___lockPosY_3;
	// System.Boolean GSN.Skill.Games.Tripeaks.DustFX::followCharacter
	bool ___followCharacter_4;
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.DustFX::_followPos
	Vector3_t2243707580  ____followPos_5;
	// UnityEngine.ParticleSystem GSN.Skill.Games.Tripeaks.DustFX::dustFX
	ParticleSystem_t3394631041 * ___dustFX_6;

public:
	inline static int32_t get_offset_of_transformToFollow_2() { return static_cast<int32_t>(offsetof(DustFX_t531013926, ___transformToFollow_2)); }
	inline Transform_t3275118058 * get_transformToFollow_2() const { return ___transformToFollow_2; }
	inline Transform_t3275118058 ** get_address_of_transformToFollow_2() { return &___transformToFollow_2; }
	inline void set_transformToFollow_2(Transform_t3275118058 * value)
	{
		___transformToFollow_2 = value;
		Il2CppCodeGenWriteBarrier(&___transformToFollow_2, value);
	}

	inline static int32_t get_offset_of_lockPosY_3() { return static_cast<int32_t>(offsetof(DustFX_t531013926, ___lockPosY_3)); }
	inline Transform_t3275118058 * get_lockPosY_3() const { return ___lockPosY_3; }
	inline Transform_t3275118058 ** get_address_of_lockPosY_3() { return &___lockPosY_3; }
	inline void set_lockPosY_3(Transform_t3275118058 * value)
	{
		___lockPosY_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockPosY_3, value);
	}

	inline static int32_t get_offset_of_followCharacter_4() { return static_cast<int32_t>(offsetof(DustFX_t531013926, ___followCharacter_4)); }
	inline bool get_followCharacter_4() const { return ___followCharacter_4; }
	inline bool* get_address_of_followCharacter_4() { return &___followCharacter_4; }
	inline void set_followCharacter_4(bool value)
	{
		___followCharacter_4 = value;
	}

	inline static int32_t get_offset_of__followPos_5() { return static_cast<int32_t>(offsetof(DustFX_t531013926, ____followPos_5)); }
	inline Vector3_t2243707580  get__followPos_5() const { return ____followPos_5; }
	inline Vector3_t2243707580 * get_address_of__followPos_5() { return &____followPos_5; }
	inline void set__followPos_5(Vector3_t2243707580  value)
	{
		____followPos_5 = value;
	}

	inline static int32_t get_offset_of_dustFX_6() { return static_cast<int32_t>(offsetof(DustFX_t531013926, ___dustFX_6)); }
	inline ParticleSystem_t3394631041 * get_dustFX_6() const { return ___dustFX_6; }
	inline ParticleSystem_t3394631041 ** get_address_of_dustFX_6() { return &___dustFX_6; }
	inline void set_dustFX_6(ParticleSystem_t3394631041 * value)
	{
		___dustFX_6 = value;
		Il2CppCodeGenWriteBarrier(&___dustFX_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
