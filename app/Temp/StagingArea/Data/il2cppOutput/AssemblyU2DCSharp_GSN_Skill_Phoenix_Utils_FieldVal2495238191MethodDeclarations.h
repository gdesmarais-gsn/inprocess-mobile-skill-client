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

// GSN.Skill.Phoenix.Utils.FieldValidationUtilities
struct FieldValidationUtilities_t2495238191;
// System.String
struct String_t;
// System.Enum
struct Enum_t2459695545;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_InputFi918236426.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Enum2459695545.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"

// System.Void GSN.Skill.Phoenix.Utils.FieldValidationUtilities::.ctor()
extern "C"  void FieldValidationUtilities__ctor_m3868431109 (FieldValidationUtilities_t2495238191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateField(GSN.Skill.Phoenix.Strings.InputFieldType,System.String,System.Boolean)
extern "C"  void FieldValidationUtilities_ValidateField_m3641790292 (FieldValidationUtilities_t2495238191 * __this, int32_t ___field0, String_t* ___text1, bool ___allowEmpty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.FieldValidationUtilities::SendInputErrorEvent(GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum)
extern "C"  void FieldValidationUtilities_SendInputErrorEvent_m313345159 (FieldValidationUtilities_t2495238191 * __this, int32_t ___field0, Enum_t2459695545 * ___entryKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.FieldValidationUtilities::SendInputValidEvent(GSN.Skill.Phoenix.Strings.InputFieldType)
extern "C"  void FieldValidationUtilities_SendInputValidEvent_m3312663617 (FieldValidationUtilities_t2495238191 * __this, int32_t ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::IsRegexMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool FieldValidationUtilities_IsRegexMatch_m1056842681 (FieldValidationUtilities_t2495238191 * __this, String_t* ___text0, String_t* ___pattern1, int32_t ___regexOptions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateFirstName(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateFirstName_m1832302434 (FieldValidationUtilities_t2495238191 * __this, String_t* ___firstName0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateLastName(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateLastName_m3604192400 (FieldValidationUtilities_t2495238191 * __this, String_t* ___lastName0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateAddress(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateAddress_m3848798205 (FieldValidationUtilities_t2495238191 * __this, String_t* ___address0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateCity(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateCity_m2239982520 (FieldValidationUtilities_t2495238191 * __this, String_t* ___city0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateEmail(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateEmail_m287232715 (FieldValidationUtilities_t2495238191 * __this, String_t* ___email0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidatePasswordComplexity(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidatePasswordComplexity_m571952622 (FieldValidationUtilities_t2495238191 * __this, String_t* ___password0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateLitePassword(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateLitePassword_m598421698 (FieldValidationUtilities_t2495238191 * __this, String_t* ___password0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateUsername(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateUsername_m896722673 (FieldValidationUtilities_t2495238191 * __this, String_t* ___username0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateLiteUsername(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateLiteUsername_m2006856725 (FieldValidationUtilities_t2495238191 * __this, String_t* ___username0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateCreditCard(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateCreditCard_m919691924 (FieldValidationUtilities_t2495238191 * __this, String_t* ___ccNumber0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateZip(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateZip_m3050877332 (FieldValidationUtilities_t2495238191 * __this, String_t* ___zip0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateCVN(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateCVN_m1062527950 (FieldValidationUtilities_t2495238191 * __this, String_t* ___cvn0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.FieldValidationUtilities::ValidateWithdrawAmount(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum&)
extern "C"  bool FieldValidationUtilities_ValidateWithdrawAmount_m1140849093 (FieldValidationUtilities_t2495238191 * __this, String_t* ___withdrawAmount0, int32_t ___field1, Enum_t2459695545 ** ___errorEntryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
