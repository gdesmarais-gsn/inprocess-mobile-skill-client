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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Trie.GsnTrieWordInfo
struct  GsnTrieWordInfo_t40534766  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Trie.GsnTrieWordInfo::_s
	String_t* ____s_0;
	// System.Int32 GSN.Skill.Games.Common.Trie.GsnTrieWordInfo::_si
	int32_t ____si_1;
	// System.Int32 GSN.Skill.Games.Common.Trie.GsnTrieWordInfo::_len
	int32_t ____len_2;

public:
	inline static int32_t get_offset_of__s_0() { return static_cast<int32_t>(offsetof(GsnTrieWordInfo_t40534766, ____s_0)); }
	inline String_t* get__s_0() const { return ____s_0; }
	inline String_t** get_address_of__s_0() { return &____s_0; }
	inline void set__s_0(String_t* value)
	{
		____s_0 = value;
		Il2CppCodeGenWriteBarrier(&____s_0, value);
	}

	inline static int32_t get_offset_of__si_1() { return static_cast<int32_t>(offsetof(GsnTrieWordInfo_t40534766, ____si_1)); }
	inline int32_t get__si_1() const { return ____si_1; }
	inline int32_t* get_address_of__si_1() { return &____si_1; }
	inline void set__si_1(int32_t value)
	{
		____si_1 = value;
	}

	inline static int32_t get_offset_of__len_2() { return static_cast<int32_t>(offsetof(GsnTrieWordInfo_t40534766, ____len_2)); }
	inline int32_t get__len_2() const { return ____len_2; }
	inline int32_t* get_address_of__len_2() { return &____len_2; }
	inline void set__len_2(int32_t value)
	{
		____len_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
