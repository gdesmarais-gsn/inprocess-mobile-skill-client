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

// GSN.Skill.Games.Common.Utils.LinkedList
struct LinkedList_t3867642533;
// GSN.Skill.Games.Common.Utils.LinkedListNode
struct LinkedListNode_t3062077665;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Lin3062077665.h"

// System.Void GSN.Skill.Games.Common.Utils.LinkedList::.ctor()
extern "C"  void LinkedList__ctor_m3883321324 (LinkedList_t3867642533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::Destroy()
extern "C"  void LinkedList_Destroy_m2118042518 (LinkedList_t3867642533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::UnlinkAll()
extern "C"  void LinkedList_UnlinkAll_m3012026786 (LinkedList_t3867642533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::PushBack(GSN.Skill.Games.Common.Utils.LinkedListNode)
extern "C"  void LinkedList_PushBack_m2277962614 (LinkedList_t3867642533 * __this, LinkedListNode_t3062077665 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::PushFront(GSN.Skill.Games.Common.Utils.LinkedListNode)
extern "C"  void LinkedList_PushFront_m1845019436 (LinkedList_t3867642533 * __this, LinkedListNode_t3062077665 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::InsertBefore(GSN.Skill.Games.Common.Utils.LinkedListNode,GSN.Skill.Games.Common.Utils.LinkedListNode)
extern "C"  void LinkedList_InsertBefore_m1715477018 (LinkedList_t3867642533 * __this, LinkedListNode_t3062077665 * ___lnode0, LinkedListNode_t3062077665 * ___inode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::InsertAfter(GSN.Skill.Games.Common.Utils.LinkedListNode,GSN.Skill.Games.Common.Utils.LinkedListNode)
extern "C"  void LinkedList_InsertAfter_m3687099565 (LinkedList_t3867642533 * __this, LinkedListNode_t3062077665 * ___lnode0, LinkedListNode_t3062077665 * ___inode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.LinkedList::InsertRingAfter(GSN.Skill.Games.Common.Utils.LinkedListNode,GSN.Skill.Games.Common.Utils.LinkedListNode)
extern "C"  void LinkedList_InsertRingAfter_m3615025259 (LinkedList_t3867642533 * __this, LinkedListNode_t3062077665 * ___lnode0, LinkedListNode_t3062077665 * ___ring1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.LinkedListNode GSN.Skill.Games.Common.Utils.LinkedList::Remove(GSN.Skill.Games.Common.Utils.LinkedListNode)
extern "C"  LinkedListNode_t3062077665 * LinkedList_Remove_m1546776391 (LinkedList_t3867642533 * __this, LinkedListNode_t3062077665 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.LinkedList::IsEmpty()
extern "C"  bool LinkedList_IsEmpty_m2713184793 (LinkedList_t3867642533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.LinkedList::GetDumpString()
extern "C"  String_t* LinkedList_GetDumpString_m2186334514 (LinkedList_t3867642533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.LinkedList::get_size()
extern "C"  int32_t LinkedList_get_size_m3616080372 (LinkedList_t3867642533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
