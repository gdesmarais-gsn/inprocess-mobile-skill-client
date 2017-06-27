#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Unity.IO.Compression.HuffmanTree
struct HuffmanTree_t2300544925;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.IO.Compression.HuffmanTree
struct  HuffmanTree_t2300544925  : public Il2CppObject
{
public:
	// System.Int32 Unity.IO.Compression.HuffmanTree::tableBits
	int32_t ___tableBits_0;
	// System.Int16[] Unity.IO.Compression.HuffmanTree::table
	Int16U5BU5D_t3104283263* ___table_1;
	// System.Int16[] Unity.IO.Compression.HuffmanTree::left
	Int16U5BU5D_t3104283263* ___left_2;
	// System.Int16[] Unity.IO.Compression.HuffmanTree::right
	Int16U5BU5D_t3104283263* ___right_3;
	// System.Byte[] Unity.IO.Compression.HuffmanTree::codeLengthArray
	ByteU5BU5D_t3397334013* ___codeLengthArray_4;
	// System.UInt32[] Unity.IO.Compression.HuffmanTree::codeArrayDebug
	UInt32U5BU5D_t59386216* ___codeArrayDebug_5;
	// System.Int32 Unity.IO.Compression.HuffmanTree::tableMask
	int32_t ___tableMask_6;

public:
	inline static int32_t get_offset_of_tableBits_0() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___tableBits_0)); }
	inline int32_t get_tableBits_0() const { return ___tableBits_0; }
	inline int32_t* get_address_of_tableBits_0() { return &___tableBits_0; }
	inline void set_tableBits_0(int32_t value)
	{
		___tableBits_0 = value;
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___table_1)); }
	inline Int16U5BU5D_t3104283263* get_table_1() const { return ___table_1; }
	inline Int16U5BU5D_t3104283263** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Int16U5BU5D_t3104283263* value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___left_2)); }
	inline Int16U5BU5D_t3104283263* get_left_2() const { return ___left_2; }
	inline Int16U5BU5D_t3104283263** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Int16U5BU5D_t3104283263* value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier(&___left_2, value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___right_3)); }
	inline Int16U5BU5D_t3104283263* get_right_3() const { return ___right_3; }
	inline Int16U5BU5D_t3104283263** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Int16U5BU5D_t3104283263* value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier(&___right_3, value);
	}

	inline static int32_t get_offset_of_codeLengthArray_4() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___codeLengthArray_4)); }
	inline ByteU5BU5D_t3397334013* get_codeLengthArray_4() const { return ___codeLengthArray_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_codeLengthArray_4() { return &___codeLengthArray_4; }
	inline void set_codeLengthArray_4(ByteU5BU5D_t3397334013* value)
	{
		___codeLengthArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___codeLengthArray_4, value);
	}

	inline static int32_t get_offset_of_codeArrayDebug_5() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___codeArrayDebug_5)); }
	inline UInt32U5BU5D_t59386216* get_codeArrayDebug_5() const { return ___codeArrayDebug_5; }
	inline UInt32U5BU5D_t59386216** get_address_of_codeArrayDebug_5() { return &___codeArrayDebug_5; }
	inline void set_codeArrayDebug_5(UInt32U5BU5D_t59386216* value)
	{
		___codeArrayDebug_5 = value;
		Il2CppCodeGenWriteBarrier(&___codeArrayDebug_5, value);
	}

	inline static int32_t get_offset_of_tableMask_6() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925, ___tableMask_6)); }
	inline int32_t get_tableMask_6() const { return ___tableMask_6; }
	inline int32_t* get_address_of_tableMask_6() { return &___tableMask_6; }
	inline void set_tableMask_6(int32_t value)
	{
		___tableMask_6 = value;
	}
};

struct HuffmanTree_t2300544925_StaticFields
{
public:
	// Unity.IO.Compression.HuffmanTree Unity.IO.Compression.HuffmanTree::staticLiteralLengthTree
	HuffmanTree_t2300544925 * ___staticLiteralLengthTree_7;
	// Unity.IO.Compression.HuffmanTree Unity.IO.Compression.HuffmanTree::staticDistanceTree
	HuffmanTree_t2300544925 * ___staticDistanceTree_8;

public:
	inline static int32_t get_offset_of_staticLiteralLengthTree_7() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925_StaticFields, ___staticLiteralLengthTree_7)); }
	inline HuffmanTree_t2300544925 * get_staticLiteralLengthTree_7() const { return ___staticLiteralLengthTree_7; }
	inline HuffmanTree_t2300544925 ** get_address_of_staticLiteralLengthTree_7() { return &___staticLiteralLengthTree_7; }
	inline void set_staticLiteralLengthTree_7(HuffmanTree_t2300544925 * value)
	{
		___staticLiteralLengthTree_7 = value;
		Il2CppCodeGenWriteBarrier(&___staticLiteralLengthTree_7, value);
	}

	inline static int32_t get_offset_of_staticDistanceTree_8() { return static_cast<int32_t>(offsetof(HuffmanTree_t2300544925_StaticFields, ___staticDistanceTree_8)); }
	inline HuffmanTree_t2300544925 * get_staticDistanceTree_8() const { return ___staticDistanceTree_8; }
	inline HuffmanTree_t2300544925 ** get_address_of_staticDistanceTree_8() { return &___staticDistanceTree_8; }
	inline void set_staticDistanceTree_8(HuffmanTree_t2300544925 * value)
	{
		___staticDistanceTree_8 = value;
		Il2CppCodeGenWriteBarrier(&___staticDistanceTree_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
