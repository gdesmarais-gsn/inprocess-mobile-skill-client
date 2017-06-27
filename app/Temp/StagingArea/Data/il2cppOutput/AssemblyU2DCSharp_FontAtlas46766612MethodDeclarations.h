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

// FontAtlas
struct FontAtlas_t46766612;
// Glyph
struct Glyph_t739236474;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.Object
struct Object_t1021602117;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"

// System.Void FontAtlas::.ctor()
extern "C"  void FontAtlas__ctor_m344259383 (FontAtlas_t46766612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontAtlas::ReleaseTexture()
extern "C"  void FontAtlas_ReleaseTexture_m2512526217 (FontAtlas_t46766612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FontAtlas::get_Descent()
extern "C"  float FontAtlas_get_Descent_m12273552 (FontAtlas_t46766612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontAtlas::SortGlyphs()
extern "C"  void FontAtlas_SortGlyphs_m1459391512 (FontAtlas_t46766612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Glyph FontAtlas::GlyphFor(System.Char)
extern "C"  Glyph_t739236474 * FontAtlas_GlyphFor_m42966408 (FontAtlas_t46766612 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FontAtlas::ComputeWidthOf(System.String)
extern "C"  float FontAtlas_ComputeWidthOf_m1038064433 (FontAtlas_t46766612 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FontAtlas::ComputeFixedWidthOf(System.String,System.Char)
extern "C"  float FontAtlas_ComputeFixedWidthOf_m742336508 (FontAtlas_t46766612 * __this, String_t* ___msg0, Il2CppChar ___baseChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontAtlas::IAssetExposer.GetExposedAssetKeys(System.Collections.Generic.List`1<System.String>)
extern "C"  void FontAtlas_IAssetExposer_GetExposedAssetKeys_m422686400 (FontAtlas_t46766612 * __this, List_1_t1398341365 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object FontAtlas::IAssetExposer.GetExposedAsset(System.String)
extern "C"  Object_t1021602117 * FontAtlas_IAssetExposer_GetExposedAsset_m4267470719 (FontAtlas_t46766612 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontAtlas::IAssetExposer.SetExposedAsset(System.String,UnityEngine.Object)
extern "C"  void FontAtlas_IAssetExposer_SetExposedAsset_m3816426196 (FontAtlas_t46766612 * __this, String_t* ___key0, Object_t1021602117 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
