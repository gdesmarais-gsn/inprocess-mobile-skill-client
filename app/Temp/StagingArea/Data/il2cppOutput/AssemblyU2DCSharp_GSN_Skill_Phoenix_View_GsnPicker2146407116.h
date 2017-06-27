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
// UnityEngine.UI.Button
struct Button_t2872111280;
// GSNPicker
struct GSNPicker_t2311934918;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseValida514734584.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.GsnPickerField
struct  GsnPickerField_t2146407116  : public BaseValidatableField_t514734584
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.GsnPickerField::_displayField
	TextMeshProUGUI_t934157183 * ____displayField_13;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.GsnPickerField::_pickerButton
	Button_t2872111280 * ____pickerButton_14;
	// GSNPicker GSN.Skill.Phoenix.View.GsnPickerField::_picker
	GSNPicker_t2311934918 * ____picker_15;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Phoenix.View.GsnPickerField::_rowData
	List_1_t1398341365 * ____rowData_16;
	// System.Boolean GSN.Skill.Phoenix.View.GsnPickerField::_showingPicker
	bool ____showingPicker_17;

public:
	inline static int32_t get_offset_of__displayField_13() { return static_cast<int32_t>(offsetof(GsnPickerField_t2146407116, ____displayField_13)); }
	inline TextMeshProUGUI_t934157183 * get__displayField_13() const { return ____displayField_13; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__displayField_13() { return &____displayField_13; }
	inline void set__displayField_13(TextMeshProUGUI_t934157183 * value)
	{
		____displayField_13 = value;
		Il2CppCodeGenWriteBarrier(&____displayField_13, value);
	}

	inline static int32_t get_offset_of__pickerButton_14() { return static_cast<int32_t>(offsetof(GsnPickerField_t2146407116, ____pickerButton_14)); }
	inline Button_t2872111280 * get__pickerButton_14() const { return ____pickerButton_14; }
	inline Button_t2872111280 ** get_address_of__pickerButton_14() { return &____pickerButton_14; }
	inline void set__pickerButton_14(Button_t2872111280 * value)
	{
		____pickerButton_14 = value;
		Il2CppCodeGenWriteBarrier(&____pickerButton_14, value);
	}

	inline static int32_t get_offset_of__picker_15() { return static_cast<int32_t>(offsetof(GsnPickerField_t2146407116, ____picker_15)); }
	inline GSNPicker_t2311934918 * get__picker_15() const { return ____picker_15; }
	inline GSNPicker_t2311934918 ** get_address_of__picker_15() { return &____picker_15; }
	inline void set__picker_15(GSNPicker_t2311934918 * value)
	{
		____picker_15 = value;
		Il2CppCodeGenWriteBarrier(&____picker_15, value);
	}

	inline static int32_t get_offset_of__rowData_16() { return static_cast<int32_t>(offsetof(GsnPickerField_t2146407116, ____rowData_16)); }
	inline List_1_t1398341365 * get__rowData_16() const { return ____rowData_16; }
	inline List_1_t1398341365 ** get_address_of__rowData_16() { return &____rowData_16; }
	inline void set__rowData_16(List_1_t1398341365 * value)
	{
		____rowData_16 = value;
		Il2CppCodeGenWriteBarrier(&____rowData_16, value);
	}

	inline static int32_t get_offset_of__showingPicker_17() { return static_cast<int32_t>(offsetof(GsnPickerField_t2146407116, ____showingPicker_17)); }
	inline bool get__showingPicker_17() const { return ____showingPicker_17; }
	inline bool* get_address_of__showingPicker_17() { return &____showingPicker_17; }
	inline void set__showingPicker_17(bool value)
	{
		____showingPicker_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
