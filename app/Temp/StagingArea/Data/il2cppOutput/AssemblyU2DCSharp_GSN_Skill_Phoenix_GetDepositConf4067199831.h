#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t1298644088;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount>
struct List_1_t849062044;
// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.CreditCardDetails>
struct Dictionary_2_t444515746;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent
struct  GetDepositConfigDataSuccessEvent_t4067199831  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::countries
	Dictionary_2_t3943999495 * ___countries_0;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::states
	SortedDictionary_2_t1298644088 * ___states_1;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::provinces
	SortedDictionary_2_t1298644088 * ___provinces_2;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount> GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::depositAmounts
	List_1_t849062044 * ___depositAmounts_3;
	// System.Boolean GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::showFirstTimeDepositBonus
	bool ___showFirstTimeDepositBonus_4;
	// System.Boolean GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::hasCard
	bool ___hasCard_5;
	// System.Boolean GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::hasMultipleCards
	bool ___hasMultipleCards_6;
	// System.Boolean GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::isPaypalUser
	bool ___isPaypalUser_7;
	// System.Nullable`1<System.Int32> GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::lastCardUsedID
	Nullable_1_t334943763  ___lastCardUsedID_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.CreditCardDetails> GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent::creditCards
	Dictionary_2_t444515746 * ___creditCards_9;

public:
	inline static int32_t get_offset_of_countries_0() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___countries_0)); }
	inline Dictionary_2_t3943999495 * get_countries_0() const { return ___countries_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_countries_0() { return &___countries_0; }
	inline void set_countries_0(Dictionary_2_t3943999495 * value)
	{
		___countries_0 = value;
		Il2CppCodeGenWriteBarrier(&___countries_0, value);
	}

	inline static int32_t get_offset_of_states_1() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___states_1)); }
	inline SortedDictionary_2_t1298644088 * get_states_1() const { return ___states_1; }
	inline SortedDictionary_2_t1298644088 ** get_address_of_states_1() { return &___states_1; }
	inline void set_states_1(SortedDictionary_2_t1298644088 * value)
	{
		___states_1 = value;
		Il2CppCodeGenWriteBarrier(&___states_1, value);
	}

	inline static int32_t get_offset_of_provinces_2() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___provinces_2)); }
	inline SortedDictionary_2_t1298644088 * get_provinces_2() const { return ___provinces_2; }
	inline SortedDictionary_2_t1298644088 ** get_address_of_provinces_2() { return &___provinces_2; }
	inline void set_provinces_2(SortedDictionary_2_t1298644088 * value)
	{
		___provinces_2 = value;
		Il2CppCodeGenWriteBarrier(&___provinces_2, value);
	}

	inline static int32_t get_offset_of_depositAmounts_3() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___depositAmounts_3)); }
	inline List_1_t849062044 * get_depositAmounts_3() const { return ___depositAmounts_3; }
	inline List_1_t849062044 ** get_address_of_depositAmounts_3() { return &___depositAmounts_3; }
	inline void set_depositAmounts_3(List_1_t849062044 * value)
	{
		___depositAmounts_3 = value;
		Il2CppCodeGenWriteBarrier(&___depositAmounts_3, value);
	}

	inline static int32_t get_offset_of_showFirstTimeDepositBonus_4() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___showFirstTimeDepositBonus_4)); }
	inline bool get_showFirstTimeDepositBonus_4() const { return ___showFirstTimeDepositBonus_4; }
	inline bool* get_address_of_showFirstTimeDepositBonus_4() { return &___showFirstTimeDepositBonus_4; }
	inline void set_showFirstTimeDepositBonus_4(bool value)
	{
		___showFirstTimeDepositBonus_4 = value;
	}

	inline static int32_t get_offset_of_hasCard_5() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___hasCard_5)); }
	inline bool get_hasCard_5() const { return ___hasCard_5; }
	inline bool* get_address_of_hasCard_5() { return &___hasCard_5; }
	inline void set_hasCard_5(bool value)
	{
		___hasCard_5 = value;
	}

	inline static int32_t get_offset_of_hasMultipleCards_6() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___hasMultipleCards_6)); }
	inline bool get_hasMultipleCards_6() const { return ___hasMultipleCards_6; }
	inline bool* get_address_of_hasMultipleCards_6() { return &___hasMultipleCards_6; }
	inline void set_hasMultipleCards_6(bool value)
	{
		___hasMultipleCards_6 = value;
	}

	inline static int32_t get_offset_of_isPaypalUser_7() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___isPaypalUser_7)); }
	inline bool get_isPaypalUser_7() const { return ___isPaypalUser_7; }
	inline bool* get_address_of_isPaypalUser_7() { return &___isPaypalUser_7; }
	inline void set_isPaypalUser_7(bool value)
	{
		___isPaypalUser_7 = value;
	}

	inline static int32_t get_offset_of_lastCardUsedID_8() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___lastCardUsedID_8)); }
	inline Nullable_1_t334943763  get_lastCardUsedID_8() const { return ___lastCardUsedID_8; }
	inline Nullable_1_t334943763 * get_address_of_lastCardUsedID_8() { return &___lastCardUsedID_8; }
	inline void set_lastCardUsedID_8(Nullable_1_t334943763  value)
	{
		___lastCardUsedID_8 = value;
	}

	inline static int32_t get_offset_of_creditCards_9() { return static_cast<int32_t>(offsetof(GetDepositConfigDataSuccessEvent_t4067199831, ___creditCards_9)); }
	inline Dictionary_2_t444515746 * get_creditCards_9() const { return ___creditCards_9; }
	inline Dictionary_2_t444515746 ** get_address_of_creditCards_9() { return &___creditCards_9; }
	inline void set_creditCards_9(Dictionary_2_t444515746 * value)
	{
		___creditCards_9 = value;
		Il2CppCodeGenWriteBarrier(&___creditCards_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
