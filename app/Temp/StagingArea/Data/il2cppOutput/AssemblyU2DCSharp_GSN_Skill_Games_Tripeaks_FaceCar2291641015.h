#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t4220419316;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Card2087545274.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.FaceCard
struct  FaceCard_t2291641015  : public Card_t2087545274
{
public:
	// UnityEngine.SkinnedMeshRenderer GSN.Skill.Games.Tripeaks.FaceCard::_suitRenderer
	SkinnedMeshRenderer_t4220419316 * ____suitRenderer_47;
	// UnityEngine.SkinnedMeshRenderer GSN.Skill.Games.Tripeaks.FaceCard::_numberRenderer
	SkinnedMeshRenderer_t4220419316 * ____numberRenderer_48;
	// UnityEngine.Texture[] GSN.Skill.Games.Tripeaks.FaceCard::_suitTextures
	TextureU5BU5D_t2474608790* ____suitTextures_49;
	// UnityEngine.Texture[] GSN.Skill.Games.Tripeaks.FaceCard::_numberTextures
	TextureU5BU5D_t2474608790* ____numberTextures_50;

public:
	inline static int32_t get_offset_of__suitRenderer_47() { return static_cast<int32_t>(offsetof(FaceCard_t2291641015, ____suitRenderer_47)); }
	inline SkinnedMeshRenderer_t4220419316 * get__suitRenderer_47() const { return ____suitRenderer_47; }
	inline SkinnedMeshRenderer_t4220419316 ** get_address_of__suitRenderer_47() { return &____suitRenderer_47; }
	inline void set__suitRenderer_47(SkinnedMeshRenderer_t4220419316 * value)
	{
		____suitRenderer_47 = value;
		Il2CppCodeGenWriteBarrier(&____suitRenderer_47, value);
	}

	inline static int32_t get_offset_of__numberRenderer_48() { return static_cast<int32_t>(offsetof(FaceCard_t2291641015, ____numberRenderer_48)); }
	inline SkinnedMeshRenderer_t4220419316 * get__numberRenderer_48() const { return ____numberRenderer_48; }
	inline SkinnedMeshRenderer_t4220419316 ** get_address_of__numberRenderer_48() { return &____numberRenderer_48; }
	inline void set__numberRenderer_48(SkinnedMeshRenderer_t4220419316 * value)
	{
		____numberRenderer_48 = value;
		Il2CppCodeGenWriteBarrier(&____numberRenderer_48, value);
	}

	inline static int32_t get_offset_of__suitTextures_49() { return static_cast<int32_t>(offsetof(FaceCard_t2291641015, ____suitTextures_49)); }
	inline TextureU5BU5D_t2474608790* get__suitTextures_49() const { return ____suitTextures_49; }
	inline TextureU5BU5D_t2474608790** get_address_of__suitTextures_49() { return &____suitTextures_49; }
	inline void set__suitTextures_49(TextureU5BU5D_t2474608790* value)
	{
		____suitTextures_49 = value;
		Il2CppCodeGenWriteBarrier(&____suitTextures_49, value);
	}

	inline static int32_t get_offset_of__numberTextures_50() { return static_cast<int32_t>(offsetof(FaceCard_t2291641015, ____numberTextures_50)); }
	inline TextureU5BU5D_t2474608790* get__numberTextures_50() const { return ____numberTextures_50; }
	inline TextureU5BU5D_t2474608790** get_address_of__numberTextures_50() { return &____numberTextures_50; }
	inline void set__numberTextures_50(TextureU5BU5D_t2474608790* value)
	{
		____numberTextures_50 = value;
		Il2CppCodeGenWriteBarrier(&____numberTextures_50, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
