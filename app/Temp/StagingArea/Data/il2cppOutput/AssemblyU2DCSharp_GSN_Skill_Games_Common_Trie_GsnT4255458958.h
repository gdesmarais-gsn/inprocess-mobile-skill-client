#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Trie.GsnTrieNode>
struct List_1_t3624580090;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Trie.GsnTrieNode
struct  GsnTrieNode_t4255458958  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Games.Common.Trie.GsnTrieNode::_terminal
	int32_t ____terminal_0;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Trie.GsnTrieNode> GSN.Skill.Games.Common.Trie.GsnTrieNode::_children
	List_1_t3624580090 * ____children_1;

public:
	inline static int32_t get_offset_of__terminal_0() { return static_cast<int32_t>(offsetof(GsnTrieNode_t4255458958, ____terminal_0)); }
	inline int32_t get__terminal_0() const { return ____terminal_0; }
	inline int32_t* get_address_of__terminal_0() { return &____terminal_0; }
	inline void set__terminal_0(int32_t value)
	{
		____terminal_0 = value;
	}

	inline static int32_t get_offset_of__children_1() { return static_cast<int32_t>(offsetof(GsnTrieNode_t4255458958, ____children_1)); }
	inline List_1_t3624580090 * get__children_1() const { return ____children_1; }
	inline List_1_t3624580090 ** get_address_of__children_1() { return &____children_1; }
	inline void set__children_1(List_1_t3624580090 * value)
	{
		____children_1 = value;
		Il2CppCodeGenWriteBarrier(&____children_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
