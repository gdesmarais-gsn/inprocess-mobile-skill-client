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

// GSN.Skill.Requests.WebRequester/Parser
struct Parser_t1855886527;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Requests.WebRequester/Parser::.ctor(GSN.Skill.Requests.IWebRequest,System.String)
extern "C"  void Parser__ctor_m2371438003 (Parser_t1855886527 * __this, Il2CppObject * ___request0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Requests.WebRequester/Parser::get_ParseComplete()
extern "C"  bool Parser_get_ParseComplete_m639538603 (Parser_t1855886527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester/Parser::set_ParseComplete(System.Boolean)
extern "C"  void Parser_set_ParseComplete_m2436118490 (Parser_t1855886527 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester/Parser::Parse()
extern "C"  void Parser_Parse_m2540095579 (Parser_t1855886527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Requests.WebRequester/Parser::TryParseWorldWinnerError(GSN.Skill.Requests.IWebRequest,System.String)
extern "C"  bool Parser_TryParseWorldWinnerError_m3292942910 (Parser_t1855886527 * __this, Il2CppObject * ___request0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester/Parser::Dispose()
extern "C"  void Parser_Dispose_m3046897341 (Parser_t1855886527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequester/Parser::.cctor()
extern "C"  void Parser__cctor_m45460177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
