#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;

#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t2570125387  : public PropertyDescriptor_t4250402154
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_6;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_7;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::getter
	PropertyInfo_t * ___getter_8;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::setter
	PropertyInfo_t * ___setter_9;
	// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::accessors_inited
	bool ___accessors_inited_10;

public:
	inline static int32_t get_offset_of__member_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2570125387, ____member_5)); }
	inline PropertyInfo_t * get__member_5() const { return ____member_5; }
	inline PropertyInfo_t ** get_address_of__member_5() { return &____member_5; }
	inline void set__member_5(PropertyInfo_t * value)
	{
		____member_5 = value;
		Il2CppCodeGenWriteBarrier(&____member_5, value);
	}

	inline static int32_t get_offset_of__componentType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2570125387, ____componentType_6)); }
	inline Type_t * get__componentType_6() const { return ____componentType_6; }
	inline Type_t ** get_address_of__componentType_6() { return &____componentType_6; }
	inline void set__componentType_6(Type_t * value)
	{
		____componentType_6 = value;
		Il2CppCodeGenWriteBarrier(&____componentType_6, value);
	}

	inline static int32_t get_offset_of__propertyType_7() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2570125387, ____propertyType_7)); }
	inline Type_t * get__propertyType_7() const { return ____propertyType_7; }
	inline Type_t ** get_address_of__propertyType_7() { return &____propertyType_7; }
	inline void set__propertyType_7(Type_t * value)
	{
		____propertyType_7 = value;
		Il2CppCodeGenWriteBarrier(&____propertyType_7, value);
	}

	inline static int32_t get_offset_of_getter_8() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2570125387, ___getter_8)); }
	inline PropertyInfo_t * get_getter_8() const { return ___getter_8; }
	inline PropertyInfo_t ** get_address_of_getter_8() { return &___getter_8; }
	inline void set_getter_8(PropertyInfo_t * value)
	{
		___getter_8 = value;
		Il2CppCodeGenWriteBarrier(&___getter_8, value);
	}

	inline static int32_t get_offset_of_setter_9() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2570125387, ___setter_9)); }
	inline PropertyInfo_t * get_setter_9() const { return ___setter_9; }
	inline PropertyInfo_t ** get_address_of_setter_9() { return &___setter_9; }
	inline void set_setter_9(PropertyInfo_t * value)
	{
		___setter_9 = value;
		Il2CppCodeGenWriteBarrier(&___setter_9, value);
	}

	inline static int32_t get_offset_of_accessors_inited_10() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2570125387, ___accessors_inited_10)); }
	inline bool get_accessors_inited_10() const { return ___accessors_inited_10; }
	inline bool* get_address_of_accessors_inited_10() { return &___accessors_inited_10; }
	inline void set_accessors_inited_10(bool value)
	{
		___accessors_inited_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
