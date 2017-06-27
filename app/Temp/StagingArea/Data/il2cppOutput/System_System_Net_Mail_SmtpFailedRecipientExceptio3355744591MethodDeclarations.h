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

// System.Net.Mail.SmtpFailedRecipientException
struct SmtpFailedRecipientException_t3355744591;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "System_System_Net_Mail_SmtpStatusCode887155417.h"

// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor()
extern "C"  void SmtpFailedRecipientException__ctor_m1144146498 (SmtpFailedRecipientException_t3355744591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.String)
extern "C"  void SmtpFailedRecipientException__ctor_m618583868 (SmtpFailedRecipientException_t3355744591 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SmtpFailedRecipientException__ctor_m306055241 (SmtpFailedRecipientException_t3355744591 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Net.Mail.SmtpStatusCode,System.String)
extern "C"  void SmtpFailedRecipientException__ctor_m3869723732 (SmtpFailedRecipientException_t3355744591 * __this, int32_t ___statusCode0, String_t* ___failedRecipient1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SmtpFailedRecipientException_System_Runtime_Serialization_ISerializable_GetObjectData_m3146159421 (SmtpFailedRecipientException_t3355744591 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SmtpFailedRecipientException_GetObjectData_m3505537434 (SmtpFailedRecipientException_t3355744591 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
