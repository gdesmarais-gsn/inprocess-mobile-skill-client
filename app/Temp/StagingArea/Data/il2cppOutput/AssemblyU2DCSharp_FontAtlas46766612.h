#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Glyph[]
struct GlyphU5BU5D_t1828002399;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.Dictionary`2<System.Char,Glyph>
struct Dictionary_2_t2339713763;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FontAtlas
struct  FontAtlas_t46766612  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 FontAtlas::fontSize
	int32_t ___fontSize_4;
	// System.Single FontAtlas::ascent
	float ___ascent_5;
	// Glyph[] FontAtlas::glyphs
	GlyphU5BU5D_t1828002399* ___glyphs_6;
	// UnityEngine.Texture2D FontAtlas::image
	Texture2D_t3542995729 * ___image_7;
	// System.Collections.Generic.Dictionary`2<System.Char,Glyph> FontAtlas::mDict
	Dictionary_2_t2339713763 * ___mDict_8;

public:
	inline static int32_t get_offset_of_fontSize_4() { return static_cast<int32_t>(offsetof(FontAtlas_t46766612, ___fontSize_4)); }
	inline int32_t get_fontSize_4() const { return ___fontSize_4; }
	inline int32_t* get_address_of_fontSize_4() { return &___fontSize_4; }
	inline void set_fontSize_4(int32_t value)
	{
		___fontSize_4 = value;
	}

	inline static int32_t get_offset_of_ascent_5() { return static_cast<int32_t>(offsetof(FontAtlas_t46766612, ___ascent_5)); }
	inline float get_ascent_5() const { return ___ascent_5; }
	inline float* get_address_of_ascent_5() { return &___ascent_5; }
	inline void set_ascent_5(float value)
	{
		___ascent_5 = value;
	}

	inline static int32_t get_offset_of_glyphs_6() { return static_cast<int32_t>(offsetof(FontAtlas_t46766612, ___glyphs_6)); }
	inline GlyphU5BU5D_t1828002399* get_glyphs_6() const { return ___glyphs_6; }
	inline GlyphU5BU5D_t1828002399** get_address_of_glyphs_6() { return &___glyphs_6; }
	inline void set_glyphs_6(GlyphU5BU5D_t1828002399* value)
	{
		___glyphs_6 = value;
		Il2CppCodeGenWriteBarrier(&___glyphs_6, value);
	}

	inline static int32_t get_offset_of_image_7() { return static_cast<int32_t>(offsetof(FontAtlas_t46766612, ___image_7)); }
	inline Texture2D_t3542995729 * get_image_7() const { return ___image_7; }
	inline Texture2D_t3542995729 ** get_address_of_image_7() { return &___image_7; }
	inline void set_image_7(Texture2D_t3542995729 * value)
	{
		___image_7 = value;
		Il2CppCodeGenWriteBarrier(&___image_7, value);
	}

	inline static int32_t get_offset_of_mDict_8() { return static_cast<int32_t>(offsetof(FontAtlas_t46766612, ___mDict_8)); }
	inline Dictionary_2_t2339713763 * get_mDict_8() const { return ___mDict_8; }
	inline Dictionary_2_t2339713763 ** get_address_of_mDict_8() { return &___mDict_8; }
	inline void set_mDict_8(Dictionary_2_t2339713763 * value)
	{
		___mDict_8 = value;
		Il2CppCodeGenWriteBarrier(&___mDict_8, value);
	}
};

struct FontAtlas_t46766612_StaticFields
{
public:
	// System.Boolean FontAtlas::recursionGuard
	bool ___recursionGuard_9;

public:
	inline static int32_t get_offset_of_recursionGuard_9() { return static_cast<int32_t>(offsetof(FontAtlas_t46766612_StaticFields, ___recursionGuard_9)); }
	inline bool get_recursionGuard_9() const { return ___recursionGuard_9; }
	inline bool* get_address_of_recursionGuard_9() { return &___recursionGuard_9; }
	inline void set_recursionGuard_9(bool value)
	{
		___recursionGuard_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
