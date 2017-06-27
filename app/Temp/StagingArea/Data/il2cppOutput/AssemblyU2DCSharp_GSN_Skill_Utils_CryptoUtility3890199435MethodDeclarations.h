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

// GSN.Skill.Utils.CryptoUtility
struct CryptoUtility_t3890199435;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.FileInfo
struct FileInfo_t3153503742;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_FileInfo3153503742.h"
#include "mscorlib_System_Security_Cryptography_RSACryptoSer4229286967.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"

// System.Void GSN.Skill.Utils.CryptoUtility::.ctor()
extern "C"  void CryptoUtility__ctor_m102374196 (CryptoUtility_t3890199435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::ComputeMd5Hash(System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_ComputeMd5Hash_m1770737003 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::ComputeMd5Hash(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_ComputeMd5Hash_m3903678358 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::ComputeMd5Hash(System.IO.FileInfo)
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_ComputeMd5Hash_m3232027720 (Il2CppObject * __this /* static, unused */, FileInfo_t3153503742 * ___fileInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::ComputeMd5HashOfFile(System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_ComputeMd5HashOfFile_m4224646732 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::ComputeMd5HashString(System.String)
extern "C"  String_t* CryptoUtility_ComputeMd5HashString_m3252127931 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::ComputeMd5HashString(System.IO.Stream)
extern "C"  String_t* CryptoUtility_ComputeMd5HashString_m447144232 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::ComputeMd5HashString(System.IO.FileInfo)
extern "C"  String_t* CryptoUtility_ComputeMd5HashString_m1130259086 (Il2CppObject * __this /* static, unused */, FileInfo_t3153503742 * ___fileInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::ComputeMd5HashStringOfFile(System.String)
extern "C"  String_t* CryptoUtility_ComputeMd5HashStringOfFile_m3045997710 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::ByteArrayToHexString(System.Byte[])
extern "C"  String_t* CryptoUtility_ByteArrayToHexString_m3304379006 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___arrInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::HMACUsingSHA256(System.String,System.String,System.Boolean)
extern "C"  String_t* CryptoUtility_HMACUsingSHA256_m1066993286 (Il2CppObject * __this /* static, unused */, String_t* ___secretkey0, String_t* ___url1, bool ___urlEncode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::EncryptWithProvider(System.Security.Cryptography.RSACryptoServiceProvider,System.String)
extern "C"  String_t* CryptoUtility_EncryptWithProvider_m4130341513 (Il2CppObject * __this /* static, unused */, RSACryptoServiceProvider_t4229286967 * ___provider0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::EncryptWithCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2,System.String)
extern "C"  String_t* CryptoUtility_EncryptWithCertificate_m2009898993 (Il2CppObject * __this /* static, unused */, X509Certificate2_t4056456767 * ___cert0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 GSN.Skill.Utils.CryptoUtility::LoadGsnCertificate()
extern "C"  X509Certificate2_t4056456767 * CryptoUtility_LoadGsnCertificate_m1306349682 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::EncryptWithCertificate(System.String)
extern "C"  String_t* CryptoUtility_EncryptWithCertificate_m1733281497 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::Encrypt(System.Byte[],System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_Encrypt_m1972948080 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___clearData0, ByteU5BU5D_t3397334013* ___Key1, ByteU5BU5D_t3397334013* ___IV2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::Encrypt(System.String)
extern "C"  String_t* CryptoUtility_Encrypt_m1924498762 (Il2CppObject * __this /* static, unused */, String_t* ___clearText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::Encrypt(System.String,System.String)
extern "C"  String_t* CryptoUtility_Encrypt_m668832766 (Il2CppObject * __this /* static, unused */, String_t* ___clearText0, String_t* ___Password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::Encrypt(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_Encrypt_m1300116440 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___clearData0, String_t* ___Password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Utils.CryptoUtility::Encrypt(System.String,System.String,System.String)
extern "C"  bool CryptoUtility_Encrypt_m3111743387 (Il2CppObject * __this /* static, unused */, String_t* ___fileIn0, String_t* ___fileOut1, String_t* ___Password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::Decrypt(System.Byte[],System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_Decrypt_m2950537040 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___cipherData0, ByteU5BU5D_t3397334013* ___Key1, ByteU5BU5D_t3397334013* ___IV2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::Decrypt(System.String)
extern "C"  String_t* CryptoUtility_Decrypt_m3719661670 (Il2CppObject * __this /* static, unused */, String_t* ___cipherText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.CryptoUtility::Decrypt(System.String,System.String)
extern "C"  String_t* CryptoUtility_Decrypt_m363476498 (Il2CppObject * __this /* static, unused */, String_t* ___cipherText0, String_t* ___Password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Utils.CryptoUtility::Decrypt(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoUtility_Decrypt_m1463770760 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___cipherData0, String_t* ___Password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.CryptoUtility::Decrypt(System.String,System.String,System.String)
extern "C"  void CryptoUtility_Decrypt_m3491296229 (Il2CppObject * __this /* static, unused */, String_t* ___fileIn0, String_t* ___fileOut1, String_t* ___Password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.CryptoUtility::.cctor()
extern "C"  void CryptoUtility__cctor_m3237625397 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
