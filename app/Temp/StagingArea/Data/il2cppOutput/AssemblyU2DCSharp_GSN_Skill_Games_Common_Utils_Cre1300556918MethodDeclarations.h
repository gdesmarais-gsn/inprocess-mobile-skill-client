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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Cred653291983.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"

// GSN.Skill.Games.Common.Utils.CreditCardType GSN.Skill.Games.Common.Utils.CreditCardUtils::GuessCreditCardType(System.String)
extern "C"  int32_t CreditCardUtils_GuessCreditCardType_m557099967 (Il2CppObject * __this /* static, unused */, String_t* ___creditCardNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.CreditCardType GSN.Skill.Games.Common.Utils.CreditCardUtils::GetCreditCardType(System.String)
extern "C"  int32_t CreditCardUtils_GetCreditCardType_m3063184530 (Il2CppObject * __this /* static, unused */, String_t* ___creditCardNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.CreditCardUtils::IsExpirationDateCorrect(System.String,System.String)
extern "C"  bool CreditCardUtils_IsExpirationDateCorrect_m2953476230 (Il2CppObject * __this /* static, unused */, String_t* ___monthStr0, String_t* ___yearStr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.CreditCardUtils::IsExpirationDateCorrect(System.DateTime)
extern "C"  bool CreditCardUtils_IsExpirationDateCorrect_m3484680742 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___expDate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.CreditCardUtils::IsCvvCodeCorrect(System.String)
extern "C"  bool CreditCardUtils_IsCvvCodeCorrect_m306020811 (Il2CppObject * __this /* static, unused */, String_t* ___cvvCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.CreditCardUtils::CvvLengthForCreditCardType(GSN.Skill.Games.Common.Utils.CreditCardType)
extern "C"  uint32_t CreditCardUtils_CvvLengthForCreditCardType_m3529299904 (Il2CppObject * __this /* static, unused */, int32_t ___creditCardType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
