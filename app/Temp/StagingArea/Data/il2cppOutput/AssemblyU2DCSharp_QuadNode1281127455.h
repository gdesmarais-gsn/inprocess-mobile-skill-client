#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// QuadNodeQuad[]
struct QuadNodeQuadU5BU5D_t2259725357;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// QuadRenderer
struct QuadRenderer_t4156594076;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuadNode
struct  QuadNode_t1281127455  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 QuadNode::stride
	int32_t ___stride_2;
	// QuadNodeQuad[] QuadNode::quads
	QuadNodeQuadU5BU5D_t2259725357* ___quads_3;
	// System.Single QuadNode::subdivX
	float ___subdivX_4;
	// System.Single QuadNode::subdivY
	float ___subdivY_5;
	// UnityEngine.Vector2 QuadNode::boneBase
	Vector2_t2243707579  ___boneBase_6;
	// UnityEngine.Vector2 QuadNode::boneTip
	Vector2_t2243707579  ___boneTip_7;
	// System.Single QuadNode::tempZ
	float ___tempZ_8;
	// UnityEngine.Transform QuadNode::root
	Transform_t3275118058 * ___root_9;
	// UnityEngine.Transform[] QuadNode::vertexBones
	TransformU5BU5D_t3764228911* ___vertexBones_10;
	// QuadRenderer QuadNode::quadRenderer
	QuadRenderer_t4156594076 * ___quadRenderer_11;

public:
	inline static int32_t get_offset_of_stride_2() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___stride_2)); }
	inline int32_t get_stride_2() const { return ___stride_2; }
	inline int32_t* get_address_of_stride_2() { return &___stride_2; }
	inline void set_stride_2(int32_t value)
	{
		___stride_2 = value;
	}

	inline static int32_t get_offset_of_quads_3() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___quads_3)); }
	inline QuadNodeQuadU5BU5D_t2259725357* get_quads_3() const { return ___quads_3; }
	inline QuadNodeQuadU5BU5D_t2259725357** get_address_of_quads_3() { return &___quads_3; }
	inline void set_quads_3(QuadNodeQuadU5BU5D_t2259725357* value)
	{
		___quads_3 = value;
		Il2CppCodeGenWriteBarrier(&___quads_3, value);
	}

	inline static int32_t get_offset_of_subdivX_4() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___subdivX_4)); }
	inline float get_subdivX_4() const { return ___subdivX_4; }
	inline float* get_address_of_subdivX_4() { return &___subdivX_4; }
	inline void set_subdivX_4(float value)
	{
		___subdivX_4 = value;
	}

	inline static int32_t get_offset_of_subdivY_5() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___subdivY_5)); }
	inline float get_subdivY_5() const { return ___subdivY_5; }
	inline float* get_address_of_subdivY_5() { return &___subdivY_5; }
	inline void set_subdivY_5(float value)
	{
		___subdivY_5 = value;
	}

	inline static int32_t get_offset_of_boneBase_6() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___boneBase_6)); }
	inline Vector2_t2243707579  get_boneBase_6() const { return ___boneBase_6; }
	inline Vector2_t2243707579 * get_address_of_boneBase_6() { return &___boneBase_6; }
	inline void set_boneBase_6(Vector2_t2243707579  value)
	{
		___boneBase_6 = value;
	}

	inline static int32_t get_offset_of_boneTip_7() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___boneTip_7)); }
	inline Vector2_t2243707579  get_boneTip_7() const { return ___boneTip_7; }
	inline Vector2_t2243707579 * get_address_of_boneTip_7() { return &___boneTip_7; }
	inline void set_boneTip_7(Vector2_t2243707579  value)
	{
		___boneTip_7 = value;
	}

	inline static int32_t get_offset_of_tempZ_8() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___tempZ_8)); }
	inline float get_tempZ_8() const { return ___tempZ_8; }
	inline float* get_address_of_tempZ_8() { return &___tempZ_8; }
	inline void set_tempZ_8(float value)
	{
		___tempZ_8 = value;
	}

	inline static int32_t get_offset_of_root_9() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___root_9)); }
	inline Transform_t3275118058 * get_root_9() const { return ___root_9; }
	inline Transform_t3275118058 ** get_address_of_root_9() { return &___root_9; }
	inline void set_root_9(Transform_t3275118058 * value)
	{
		___root_9 = value;
		Il2CppCodeGenWriteBarrier(&___root_9, value);
	}

	inline static int32_t get_offset_of_vertexBones_10() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___vertexBones_10)); }
	inline TransformU5BU5D_t3764228911* get_vertexBones_10() const { return ___vertexBones_10; }
	inline TransformU5BU5D_t3764228911** get_address_of_vertexBones_10() { return &___vertexBones_10; }
	inline void set_vertexBones_10(TransformU5BU5D_t3764228911* value)
	{
		___vertexBones_10 = value;
		Il2CppCodeGenWriteBarrier(&___vertexBones_10, value);
	}

	inline static int32_t get_offset_of_quadRenderer_11() { return static_cast<int32_t>(offsetof(QuadNode_t1281127455, ___quadRenderer_11)); }
	inline QuadRenderer_t4156594076 * get_quadRenderer_11() const { return ___quadRenderer_11; }
	inline QuadRenderer_t4156594076 ** get_address_of_quadRenderer_11() { return &___quadRenderer_11; }
	inline void set_quadRenderer_11(QuadRenderer_t4156594076 * value)
	{
		___quadRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___quadRenderer_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
