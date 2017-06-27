#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.DeckData
struct  DeckData_t2475950745  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Texture[] GSN.Skill.Games.Tripeaks.DeckData::_suitTextures
	TextureU5BU5D_t2474608790* ____suitTextures_2;
	// UnityEngine.Texture[] GSN.Skill.Games.Tripeaks.DeckData::_redNumberTextures
	TextureU5BU5D_t2474608790* ____redNumberTextures_3;
	// UnityEngine.Texture[] GSN.Skill.Games.Tripeaks.DeckData::_blackNumberTextures
	TextureU5BU5D_t2474608790* ____blackNumberTextures_4;
	// UnityEngine.Texture GSN.Skill.Games.Tripeaks.DeckData::_cardBackTexture
	Texture_t2243626319 * ____cardBackTexture_5;

public:
	inline static int32_t get_offset_of__suitTextures_2() { return static_cast<int32_t>(offsetof(DeckData_t2475950745, ____suitTextures_2)); }
	inline TextureU5BU5D_t2474608790* get__suitTextures_2() const { return ____suitTextures_2; }
	inline TextureU5BU5D_t2474608790** get_address_of__suitTextures_2() { return &____suitTextures_2; }
	inline void set__suitTextures_2(TextureU5BU5D_t2474608790* value)
	{
		____suitTextures_2 = value;
		Il2CppCodeGenWriteBarrier(&____suitTextures_2, value);
	}

	inline static int32_t get_offset_of__redNumberTextures_3() { return static_cast<int32_t>(offsetof(DeckData_t2475950745, ____redNumberTextures_3)); }
	inline TextureU5BU5D_t2474608790* get__redNumberTextures_3() const { return ____redNumberTextures_3; }
	inline TextureU5BU5D_t2474608790** get_address_of__redNumberTextures_3() { return &____redNumberTextures_3; }
	inline void set__redNumberTextures_3(TextureU5BU5D_t2474608790* value)
	{
		____redNumberTextures_3 = value;
		Il2CppCodeGenWriteBarrier(&____redNumberTextures_3, value);
	}

	inline static int32_t get_offset_of__blackNumberTextures_4() { return static_cast<int32_t>(offsetof(DeckData_t2475950745, ____blackNumberTextures_4)); }
	inline TextureU5BU5D_t2474608790* get__blackNumberTextures_4() const { return ____blackNumberTextures_4; }
	inline TextureU5BU5D_t2474608790** get_address_of__blackNumberTextures_4() { return &____blackNumberTextures_4; }
	inline void set__blackNumberTextures_4(TextureU5BU5D_t2474608790* value)
	{
		____blackNumberTextures_4 = value;
		Il2CppCodeGenWriteBarrier(&____blackNumberTextures_4, value);
	}

	inline static int32_t get_offset_of__cardBackTexture_5() { return static_cast<int32_t>(offsetof(DeckData_t2475950745, ____cardBackTexture_5)); }
	inline Texture_t2243626319 * get__cardBackTexture_5() const { return ____cardBackTexture_5; }
	inline Texture_t2243626319 ** get_address_of__cardBackTexture_5() { return &____cardBackTexture_5; }
	inline void set__cardBackTexture_5(Texture_t2243626319 * value)
	{
		____cardBackTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&____cardBackTexture_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
