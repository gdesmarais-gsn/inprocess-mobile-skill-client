#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.FaceInfo
struct FaceInfo_t3239700425;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Glyph>
struct Dictionary_2_t4212586833;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair>
struct Dictionary_2_t585579557;
// TMPro.KerningTable
struct KerningTable_t2970824110;
// TMPro.TMP_Glyph[]
struct TMP_GlyphU5BU5D_t2828072987;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t2823602470;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// TMPro.TMP_Glyph
struct TMP_Glyph_t909793902;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_FaceInfo3239700425.h"
#include "AssemblyU2DCSharp_TMPro_KerningTable2970824110.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_TMPro_TMP_FontAsset2530419979.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Glyph909793902.h"

// System.Void TMPro.TMP_FontAsset::.ctor()
extern "C"  void TMP_FontAsset__ctor_m4161002316 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_FontAsset TMPro.TMP_FontAsset::get_defaultFontAsset()
extern "C"  TMP_FontAsset_t2530419979 * TMP_FontAsset_get_defaultFontAsset_m2618578509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.FaceInfo TMPro.TMP_FontAsset::get_fontInfo()
extern "C"  FaceInfo_t3239700425 * TMP_FontAsset_get_fontInfo_m3058504714 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Glyph> TMPro.TMP_FontAsset::get_characterDictionary()
extern "C"  Dictionary_2_t4212586833 * TMP_FontAsset_get_characterDictionary_m2900931547 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair> TMPro.TMP_FontAsset::get_kerningDictionary()
extern "C"  Dictionary_2_t585579557 * TMP_FontAsset_get_kerningDictionary_m2500219730 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.KerningTable TMPro.TMP_FontAsset::get_kerningInfo()
extern "C"  KerningTable_t2970824110 * TMP_FontAsset_get_kerningInfo_m3170977824 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::OnEnable()
extern "C"  void TMP_FontAsset_OnEnable_m2126275436 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::OnDisable()
extern "C"  void TMP_FontAsset_OnDisable_m3667125885 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::AddFaceInfo(TMPro.FaceInfo)
extern "C"  void TMP_FontAsset_AddFaceInfo_m2842547971 (TMP_FontAsset_t2530419979 * __this, FaceInfo_t3239700425 * ___faceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::AddGlyphInfo(TMPro.TMP_Glyph[])
extern "C"  void TMP_FontAsset_AddGlyphInfo_m3336950977 (TMP_FontAsset_t2530419979 * __this, TMP_GlyphU5BU5D_t2828072987* ___glyphInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::AddKerningInfo(TMPro.KerningTable)
extern "C"  void TMP_FontAsset_AddKerningInfo_m3859923331 (TMP_FontAsset_t2530419979 * __this, KerningTable_t2970824110 * ___kerningTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::ReadFontDefinition()
extern "C"  void TMP_FontAsset_ReadFontDefinition_m664349098 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_FontAsset::SortGlyphs()
extern "C"  void TMP_FontAsset_SortGlyphs_m3576591727 (TMP_FontAsset_t2530419979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacter(System.Int32)
extern "C"  bool TMP_FontAsset_HasCharacter_m3175951710 (TMP_FontAsset_t2530419979 * __this, int32_t ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacter(System.Char)
extern "C"  bool TMP_FontAsset_HasCharacter_m1746879068 (TMP_FontAsset_t2530419979 * __this, Il2CppChar ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacter(System.Char,System.Boolean)
extern "C"  bool TMP_FontAsset_HasCharacter_m3350601663 (TMP_FontAsset_t2530419979 * __this, Il2CppChar ___character0, bool ___searchFallbacks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacters(System.String,System.Collections.Generic.List`1<System.Char>&)
extern "C"  bool TMP_FontAsset_HasCharacters_m1912903089 (TMP_FontAsset_t2530419979 * __this, String_t* ___text0, List_1_t2823602470 ** ___missingCharacters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_FontAsset::HasCharacters(System.String)
extern "C"  bool TMP_FontAsset_HasCharacters_m1610092496 (TMP_FontAsset_t2530419979 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TMPro.TMP_FontAsset::GetCharacters(TMPro.TMP_FontAsset)
extern "C"  String_t* TMP_FontAsset_GetCharacters_m1677989926 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] TMPro.TMP_FontAsset::GetCharactersArray(TMPro.TMP_FontAsset)
extern "C"  Int32U5BU5D_t3030399641* TMP_FontAsset_GetCharactersArray_m155189006 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_FontAsset::<AddGlyphInfo>m__0(TMPro.TMP_Glyph)
extern "C"  int32_t TMP_FontAsset_U3CAddGlyphInfoU3Em__0_m1342353294 (Il2CppObject * __this /* static, unused */, TMP_Glyph_t909793902 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_FontAsset::<SortGlyphs>m__1(TMPro.TMP_Glyph)
extern "C"  int32_t TMP_FontAsset_U3CSortGlyphsU3Em__1_m337397845 (Il2CppObject * __this /* static, unused */, TMP_Glyph_t909793902 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
