#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GSN.Skill.Games.Common.Trie.GsnTrieNode
struct GsnTrieNode_t4255458958;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// GSN.Skill.Games.Common.Trie.GsnTrieWordInfo
struct GsnTrieWordInfo_t40534766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Trie_GsnT4255458958.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Trie_GsnTri40534766.h"

// System.Void GSN.Skill.Games.Common.Trie.GsnTrieNode::.cctor()
extern "C"  void GsnTrieNode__cctor_m916018475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Trie.GsnTrieNode::.ctor()
extern "C"  void GsnTrieNode__ctor_m2631468614 (GsnTrieNode_t4255458958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Trie.GsnTrieNode::AddLetters(System.String,System.Int32,System.Int32)
extern "C"  void GsnTrieNode_AddLetters_m1343572964 (GsnTrieNode_t4255458958 * __this, String_t* ___s0, int32_t ___startIndex1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Trie.GsnTrieNode::AddWordVector(System.Collections.Generic.List`1<System.String>)
extern "C"  void GsnTrieNode_AddWordVector_m3667038634 (GsnTrieNode_t4255458958 * __this, List_1_t1398341365 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Trie.GsnTrieNode::IsWord(System.String,System.Int32,System.Int32)
extern "C"  bool GsnTrieNode_IsWord_m3534744750 (GsnTrieNode_t4255458958 * __this, String_t* ___s0, int32_t ___si1, int32_t ___ei2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Trie.GsnTrieNode::GetLongestWordLength(System.String,System.Int32,GSN.Skill.Games.Common.Trie.GsnTrieNode)
extern "C"  int32_t GsnTrieNode_GetLongestWordLength_m1293094108 (GsnTrieNode_t4255458958 * __this, String_t* ___s0, int32_t ___si1, GsnTrieNode_t4255458958 * ___notIn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Trie.GsnTrieNode::GetBestWord(GSN.Skill.Games.Common.Trie.GsnTrieWordInfo,System.Int32,GSN.Skill.Games.Common.Trie.GsnTrieNode)
extern "C"  bool GsnTrieNode_GetBestWord_m681958045 (GsnTrieNode_t4255458958 * __this, GsnTrieWordInfo_t40534766 * ___twi0, int32_t ___mustIndex1, GsnTrieNode_t4255458958 * ___notIn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Trie.GsnTrieNode::AddWords(System.String)
extern "C"  void GsnTrieNode_AddWords_m2722532062 (GsnTrieNode_t4255458958 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Trie.GsnTrieNode::IsValidPrefixstring(System.String)
extern "C"  bool GsnTrieNode_IsValidPrefixstring_m2677893699 (GsnTrieNode_t4255458958 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
