#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.BaseValidatableField>
struct List_1_t4178823012;
// System.String
struct String_t;
// GSN.Skill.Phoenix.View.BaseValidatableField/ValidateHandler
struct ValidateHandler_t254373312;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_InputFi918236426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.BaseValidatableField
struct  BaseValidatableField_t514734584  : public BaseView_t2538946938
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.BaseValidatableField::_errorLabel
	TextMeshProUGUI_t934157183 * ____errorLabel_5;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.BaseValidatableField::_errorPanel
	GameObject_t1756533147 * ____errorPanel_6;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.BaseValidatableField> GSN.Skill.Phoenix.View.BaseValidatableField::_linkedValidationFields
	List_1_t4178823012 * ____linkedValidationFields_7;
	// System.Boolean GSN.Skill.Phoenix.View.BaseValidatableField::_isValid
	bool ____isValid_8;
	// System.String GSN.Skill.Phoenix.View.BaseValidatableField::_textAtLastValidityFailure
	String_t* ____textAtLastValidityFailure_9;
	// System.Boolean GSN.Skill.Phoenix.View.BaseValidatableField::_allowEmptyText
	bool ____allowEmptyText_10;
	// GSN.Skill.Phoenix.Strings.InputFieldType GSN.Skill.Phoenix.View.BaseValidatableField::_type
	int32_t ____type_11;
	// GSN.Skill.Phoenix.View.BaseValidatableField/ValidateHandler GSN.Skill.Phoenix.View.BaseValidatableField::validateHandler
	ValidateHandler_t254373312 * ___validateHandler_12;

public:
	inline static int32_t get_offset_of__errorLabel_5() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____errorLabel_5)); }
	inline TextMeshProUGUI_t934157183 * get__errorLabel_5() const { return ____errorLabel_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__errorLabel_5() { return &____errorLabel_5; }
	inline void set__errorLabel_5(TextMeshProUGUI_t934157183 * value)
	{
		____errorLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&____errorLabel_5, value);
	}

	inline static int32_t get_offset_of__errorPanel_6() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____errorPanel_6)); }
	inline GameObject_t1756533147 * get__errorPanel_6() const { return ____errorPanel_6; }
	inline GameObject_t1756533147 ** get_address_of__errorPanel_6() { return &____errorPanel_6; }
	inline void set__errorPanel_6(GameObject_t1756533147 * value)
	{
		____errorPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&____errorPanel_6, value);
	}

	inline static int32_t get_offset_of__linkedValidationFields_7() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____linkedValidationFields_7)); }
	inline List_1_t4178823012 * get__linkedValidationFields_7() const { return ____linkedValidationFields_7; }
	inline List_1_t4178823012 ** get_address_of__linkedValidationFields_7() { return &____linkedValidationFields_7; }
	inline void set__linkedValidationFields_7(List_1_t4178823012 * value)
	{
		____linkedValidationFields_7 = value;
		Il2CppCodeGenWriteBarrier(&____linkedValidationFields_7, value);
	}

	inline static int32_t get_offset_of__isValid_8() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____isValid_8)); }
	inline bool get__isValid_8() const { return ____isValid_8; }
	inline bool* get_address_of__isValid_8() { return &____isValid_8; }
	inline void set__isValid_8(bool value)
	{
		____isValid_8 = value;
	}

	inline static int32_t get_offset_of__textAtLastValidityFailure_9() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____textAtLastValidityFailure_9)); }
	inline String_t* get__textAtLastValidityFailure_9() const { return ____textAtLastValidityFailure_9; }
	inline String_t** get_address_of__textAtLastValidityFailure_9() { return &____textAtLastValidityFailure_9; }
	inline void set__textAtLastValidityFailure_9(String_t* value)
	{
		____textAtLastValidityFailure_9 = value;
		Il2CppCodeGenWriteBarrier(&____textAtLastValidityFailure_9, value);
	}

	inline static int32_t get_offset_of__allowEmptyText_10() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____allowEmptyText_10)); }
	inline bool get__allowEmptyText_10() const { return ____allowEmptyText_10; }
	inline bool* get_address_of__allowEmptyText_10() { return &____allowEmptyText_10; }
	inline void set__allowEmptyText_10(bool value)
	{
		____allowEmptyText_10 = value;
	}

	inline static int32_t get_offset_of__type_11() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ____type_11)); }
	inline int32_t get__type_11() const { return ____type_11; }
	inline int32_t* get_address_of__type_11() { return &____type_11; }
	inline void set__type_11(int32_t value)
	{
		____type_11 = value;
	}

	inline static int32_t get_offset_of_validateHandler_12() { return static_cast<int32_t>(offsetof(BaseValidatableField_t514734584, ___validateHandler_12)); }
	inline ValidateHandler_t254373312 * get_validateHandler_12() const { return ___validateHandler_12; }
	inline ValidateHandler_t254373312 ** get_address_of_validateHandler_12() { return &___validateHandler_12; }
	inline void set_validateHandler_12(ValidateHandler_t254373312 * value)
	{
		___validateHandler_12 = value;
		Il2CppCodeGenWriteBarrier(&___validateHandler_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
