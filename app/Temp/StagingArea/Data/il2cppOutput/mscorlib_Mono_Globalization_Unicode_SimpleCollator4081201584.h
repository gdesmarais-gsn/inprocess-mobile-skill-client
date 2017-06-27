#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4081201584;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1073906970;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t4233480993;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t2838259787;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Byte
struct Byte_t3683104436;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator
struct  SimpleCollator_t4081201584  : public Il2CppObject
{
public:
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t3620182823 * ___textInfo_3;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort_4;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable_5;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table_6;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t1073906970 * ___cjkIndexer_7;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table_8;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t1073906970 * ___cjkLv2Indexer_9;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid_10;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t4233480993* ___contractions_11;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t2838259787* ___level2Maps_12;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t3397334013* ___unsafeFlags_13;

public:
	inline static int32_t get_offset_of_textInfo_3() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___textInfo_3)); }
	inline TextInfo_t3620182823 * get_textInfo_3() const { return ___textInfo_3; }
	inline TextInfo_t3620182823 ** get_address_of_textInfo_3() { return &___textInfo_3; }
	inline void set_textInfo_3(TextInfo_t3620182823 * value)
	{
		___textInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&___textInfo_3, value);
	}

	inline static int32_t get_offset_of_frenchSort_4() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___frenchSort_4)); }
	inline bool get_frenchSort_4() const { return ___frenchSort_4; }
	inline bool* get_address_of_frenchSort_4() { return &___frenchSort_4; }
	inline void set_frenchSort_4(bool value)
	{
		___frenchSort_4 = value;
	}

	inline static int32_t get_offset_of_cjkCatTable_5() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkCatTable_5)); }
	inline uint8_t* get_cjkCatTable_5() const { return ___cjkCatTable_5; }
	inline uint8_t** get_address_of_cjkCatTable_5() { return &___cjkCatTable_5; }
	inline void set_cjkCatTable_5(uint8_t* value)
	{
		___cjkCatTable_5 = value;
	}

	inline static int32_t get_offset_of_cjkLv1Table_6() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv1Table_6)); }
	inline uint8_t* get_cjkLv1Table_6() const { return ___cjkLv1Table_6; }
	inline uint8_t** get_address_of_cjkLv1Table_6() { return &___cjkLv1Table_6; }
	inline void set_cjkLv1Table_6(uint8_t* value)
	{
		___cjkLv1Table_6 = value;
	}

	inline static int32_t get_offset_of_cjkIndexer_7() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkIndexer_7)); }
	inline CodePointIndexer_t1073906970 * get_cjkIndexer_7() const { return ___cjkIndexer_7; }
	inline CodePointIndexer_t1073906970 ** get_address_of_cjkIndexer_7() { return &___cjkIndexer_7; }
	inline void set_cjkIndexer_7(CodePointIndexer_t1073906970 * value)
	{
		___cjkIndexer_7 = value;
		Il2CppCodeGenWriteBarrier(&___cjkIndexer_7, value);
	}

	inline static int32_t get_offset_of_cjkLv2Table_8() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv2Table_8)); }
	inline uint8_t* get_cjkLv2Table_8() const { return ___cjkLv2Table_8; }
	inline uint8_t** get_address_of_cjkLv2Table_8() { return &___cjkLv2Table_8; }
	inline void set_cjkLv2Table_8(uint8_t* value)
	{
		___cjkLv2Table_8 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Indexer_9() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___cjkLv2Indexer_9)); }
	inline CodePointIndexer_t1073906970 * get_cjkLv2Indexer_9() const { return ___cjkLv2Indexer_9; }
	inline CodePointIndexer_t1073906970 ** get_address_of_cjkLv2Indexer_9() { return &___cjkLv2Indexer_9; }
	inline void set_cjkLv2Indexer_9(CodePointIndexer_t1073906970 * value)
	{
		___cjkLv2Indexer_9 = value;
		Il2CppCodeGenWriteBarrier(&___cjkLv2Indexer_9, value);
	}

	inline static int32_t get_offset_of_lcid_10() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___lcid_10)); }
	inline int32_t get_lcid_10() const { return ___lcid_10; }
	inline int32_t* get_address_of_lcid_10() { return &___lcid_10; }
	inline void set_lcid_10(int32_t value)
	{
		___lcid_10 = value;
	}

	inline static int32_t get_offset_of_contractions_11() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___contractions_11)); }
	inline ContractionU5BU5D_t4233480993* get_contractions_11() const { return ___contractions_11; }
	inline ContractionU5BU5D_t4233480993** get_address_of_contractions_11() { return &___contractions_11; }
	inline void set_contractions_11(ContractionU5BU5D_t4233480993* value)
	{
		___contractions_11 = value;
		Il2CppCodeGenWriteBarrier(&___contractions_11, value);
	}

	inline static int32_t get_offset_of_level2Maps_12() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___level2Maps_12)); }
	inline Level2MapU5BU5D_t2838259787* get_level2Maps_12() const { return ___level2Maps_12; }
	inline Level2MapU5BU5D_t2838259787** get_address_of_level2Maps_12() { return &___level2Maps_12; }
	inline void set_level2Maps_12(Level2MapU5BU5D_t2838259787* value)
	{
		___level2Maps_12 = value;
		Il2CppCodeGenWriteBarrier(&___level2Maps_12, value);
	}

	inline static int32_t get_offset_of_unsafeFlags_13() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584, ___unsafeFlags_13)); }
	inline ByteU5BU5D_t3397334013* get_unsafeFlags_13() const { return ___unsafeFlags_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_unsafeFlags_13() { return &___unsafeFlags_13; }
	inline void set_unsafeFlags_13(ByteU5BU5D_t3397334013* value)
	{
		___unsafeFlags_13 = value;
		Il2CppCodeGenWriteBarrier(&___unsafeFlags_13, value);
	}
};

struct SimpleCollator_t4081201584_StaticFields
{
public:
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled_1;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t4081201584 * ___invariant_2;

public:
	inline static int32_t get_offset_of_QuickCheckDisabled_1() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584_StaticFields, ___QuickCheckDisabled_1)); }
	inline bool get_QuickCheckDisabled_1() const { return ___QuickCheckDisabled_1; }
	inline bool* get_address_of_QuickCheckDisabled_1() { return &___QuickCheckDisabled_1; }
	inline void set_QuickCheckDisabled_1(bool value)
	{
		___QuickCheckDisabled_1 = value;
	}

	inline static int32_t get_offset_of_invariant_2() { return static_cast<int32_t>(offsetof(SimpleCollator_t4081201584_StaticFields, ___invariant_2)); }
	inline SimpleCollator_t4081201584 * get_invariant_2() const { return ___invariant_2; }
	inline SimpleCollator_t4081201584 ** get_address_of_invariant_2() { return &___invariant_2; }
	inline void set_invariant_2(SimpleCollator_t4081201584 * value)
	{
		___invariant_2 = value;
		Il2CppCodeGenWriteBarrier(&___invariant_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
