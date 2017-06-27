#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "System_System_Collections_Generic_RBTree_Node2499136326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/Node<System.String,System.Int32>
struct  Node_t4218597531  : public Node_t2499136326
{
public:
	// TKey System.Collections.Generic.SortedDictionary`2/Node::key
	String_t* ___key_5;
	// TValue System.Collections.Generic.SortedDictionary`2/Node::value
	int32_t ___value_6;

public:
	inline static int32_t get_offset_of_key_5() { return static_cast<int32_t>(offsetof(Node_t4218597531, ___key_5)); }
	inline String_t* get_key_5() const { return ___key_5; }
	inline String_t** get_address_of_key_5() { return &___key_5; }
	inline void set_key_5(String_t* value)
	{
		___key_5 = value;
		Il2CppCodeGenWriteBarrier(&___key_5, value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(Node_t4218597531, ___value_6)); }
	inline int32_t get_value_6() const { return ___value_6; }
	inline int32_t* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(int32_t value)
	{
		___value_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
