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

// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct GsnCardPile_t3625903776;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive3625903776.h"

// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void GsnCard__ctor_m2593301661 (GsnCard_t782444760 * __this, String_t* ___type0, int32_t ___flags1, int32_t ___sortValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCard::get_type()
extern "C"  String_t* GsnCard_get_type_m4031925263 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::set_type(System.String)
extern "C"  void GsnCard_set_type_m44029666 (GsnCard_t782444760 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCard::get_flags()
extern "C"  int32_t GsnCard_get_flags_m1061295935 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::set_flags(System.Int32)
extern "C"  void GsnCard_set_flags_m1261701372 (GsnCard_t782444760 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCard::get_sortValue()
extern "C"  int32_t GsnCard_get_sortValue_m2754974173 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::set_sortValue(System.Int32)
extern "C"  void GsnCard_set_sortValue_m1717465366 (GsnCard_t782444760 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCard::ToString()
extern "C"  String_t* GsnCard_ToString_m72959698 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::Rewind(System.Int32)
extern "C"  void GsnCard_Rewind_m3700630077 (GsnCard_t782444760 * __this, int32_t ___stateTimeMS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCard::PrettyString()
extern "C"  String_t* GsnCard_PrettyString_m1317916993 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Primitive.Card.GsnCard::HasFlag(System.Int32)
extern "C"  bool GsnCard_HasFlag_m545784328 (GsnCard_t782444760 * __this, int32_t ___bit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::SetFlag(System.Int32,System.Boolean)
extern "C"  void GsnCard_SetFlag_m1203110991 (GsnCard_t782444760 * __this, int32_t ___bit0, bool ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::ClearFlags()
extern "C"  void GsnCard_ClearFlags_m3752963657 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile GSN.Skill.Games.Common.Primitive.Card.GsnCard::get_pile()
extern "C"  GsnCardPile_t3625903776 * GsnCard_get_pile_m2749839609 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::set_pile(GSN.Skill.Games.Common.Primitive.Card.GsnCardPile)
extern "C"  void GsnCard_set_pile_m3949374140 (GsnCard_t782444760 * __this, GsnCardPile_t3625903776 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Primitive.Card.GsnCard::get_faceUp()
extern "C"  bool GsnCard_get_faceUp_m1886863502 (GsnCard_t782444760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Primitive.Card.GsnCard::set_faceUp(System.Boolean)
extern "C"  void GsnCard_set_faceUp_m3645161989 (GsnCard_t782444760 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
