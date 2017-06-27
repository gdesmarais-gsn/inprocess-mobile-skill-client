using System.Collections;
using System.Security.Cryptography;
using System.Text;
using System.IO;
using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;

namespace GSN.Skill.Utils
{
	/// <summary>
	/// TODO: Reevaluate using this class! We purely use this to encrypt and decrypt passwords saved in PlayerPrefs
	/// </summary>
	public class CryptoUtility
	{

		#region Fields

		private static string deviceId = "80000016CB8AD62A";
		private static X509Certificate2 _cert = null;

		#endregion

		#region Hash

		static public byte[] ComputeMd5Hash(string input)
		{
			using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider())
			{
				return md5.ComputeHash(ASCIIEncoding.ASCII.GetBytes(input));
			}
		}

		static public byte[] ComputeMd5Hash(Stream stream)
		{
			using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider())
			{
				return md5.ComputeHash(stream);
			}
		}

		static public byte[] ComputeMd5Hash(FileInfo fileInfo)
		{
			FileStream file = File.Open(fileInfo.FullName, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);

			try
			{
				return ComputeMd5Hash(file);
			}
			finally
			{
				file.Close();
			}
		}

		public static byte[] ComputeMd5HashOfFile(string filePath)
		{
			return ComputeMd5Hash(new FileInfo(filePath));
		}

		public static String ComputeMd5HashString(string input)
		{
			return ByteArrayToHexString(ComputeMd5Hash(input));
		}

		public static String ComputeMd5HashString(Stream stream)
		{
			return ByteArrayToHexString(ComputeMd5Hash(stream));
		}

		public static String ComputeMd5HashString(FileInfo fileInfo)
		{
			return ByteArrayToHexString(ComputeMd5Hash(fileInfo));
		}

		public static String ComputeMd5HashStringOfFile(string filePath)
		{
			return ByteArrayToHexString(ComputeMd5HashOfFile(filePath));
		}

		static public string ByteArrayToHexString(byte[] arrInput)
		{
			StringBuilder sOutput = new StringBuilder(arrInput.Length);

			for (int i = 0; i < arrInput.Length; i++)
			{
				sOutput.Append(arrInput[i].ToString("x2"));
			}

			return sOutput.ToString();
		}

		static public string HMACUsingSHA256(string secretkey, string url, bool urlEncode)
		{
			byte[] key = Encoding.UTF8.GetBytes(secretkey);

			using (HMACSHA256 myhash256 = new HMACSHA256(key))
			{
				return ByteArrayToHexString(myhash256.ComputeHash(Encoding.UTF8.GetBytes(url)));
			}
		}

		#endregion

		#region V1 Encryption

		public static string EncryptWithProvider(RSACryptoServiceProvider provider, string data)
		{
			byte[] dataBytes = Encoding.UTF8.GetBytes(data);
			byte[] cipherData = provider.Encrypt(dataBytes, false);
			data = Convert.ToBase64String(cipherData);
			data = data.Replace("=", "");

			return data;
		}

		public static string EncryptWithCertificate(X509Certificate2 cert, string data)
		{
			return EncryptWithProvider((RSACryptoServiceProvider)cert.PublicKey.Key, data);
		}

		private static X509Certificate2 LoadGsnCertificate()
		{
			// Load the certificate into an X509Certificate object.
			string cert = "MIICXDCCAcWgAwIBAgIJAOqBToHIG8dUMA0GCSqGSIb3DQEBBQUAMEcxCzAJBgNVBAYTAlVTMQswCQYDVQQIDAJNQTEPMA0GA1UEBwwGQk9TVE9OMQwwCgYDVQQKDANHU04xDDAKBgNVBAsMA0dTTjAeFw0xMjA0MDIxNzI4MDdaFw0xMjA1MDIxNzI4MDdaMEcxCzAJBgNVBAYTAlVTMQswCQYDVQQIDAJNQTEPMA0GA1UEBwwGQk9TVE9OMQwwCgYDVQQKDANHU04xDDAKBgNVBAsMA0dTTjCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEA0hkFfX8cgonMTJtWO7PmBxqATgDWFSvEjLEaTsfqOZYupdkYChPc4GBaq/4WVYiHYuEFX+EADhA4hPqAcfSUnZLrGtxFFCN8FVksz+gmbA1RLLeTn8RQtMxycepj6Jqd1r/WCyCqtcwVBnlSq/60w1DfHP0fBYwcl+qHdHWZNvcCAwEAAaNQME4wHQYDVR0OBBYEFDuDwIr+tcrTOQNeVRvLwyxwxgOfMB8GA1UdIwQYMBaAFDuDwIr+tcrTOQNeVRvLwyxwxgOfMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQEFBQADgYEARgSjUQ4aoj+p7riKnqVm/Dxc2WT1uDeMo9bEcfqJp5Y9MQ8gnsp66L4LtTy8NeTt/T44BpQPyMki46dgtvBWBWUn8AB70YcxfIMIsJSm8+V3SSLDOfHvu2xux7ky8AOf92x1YMqqDtuXlilYs4l+3xSTtnJEQE8GqNs6TnMUMvY=";
			//System.Reflection.Assembly thisExe;
			//thisExe = System.Reflection.Assembly.GetExecutingAssembly();
			//System.IO.Stream stream = thisExe.GetManifestResourceStream("Gsn.Utils.Resources.gsn.com.cer");

			byte[] buffer = System.Convert.FromBase64String(cert);//null;
																  /*try {
																	  buffer = new byte[stream.Length];
																	  // Read the bytes from this stream
																	  stream.Read(buffer, 0, buffer.Length);
																  } finally {
																	  stream.Close();
																  }*/

			return new X509Certificate2(buffer);
		}

		public static string EncryptWithCertificate(string data)
		{
			if (_cert == null)
			{
				_cert = LoadGsnCertificate();
			}

			return EncryptWithProvider((RSACryptoServiceProvider)_cert.PublicKey.Key, data);
		}

		// Encrypt a byte array into a byte array using a key and an IV 
		public static byte[] Encrypt(byte[] clearData, byte[] Key, byte[] IV)
		{
			// Create a MemoryStream to accept the encrypted bytes 
			MemoryStream ms = new MemoryStream();

			try
			{
				// Create a symmetric algorithm. 
				// We are going to use Rijndael because it is strong and
				// available on all platforms. 
				// You can use other algorithms, to do so substitute the
				// next line with something like 
				//      TripleDES alg = TripleDES.Create(); 
				using (Rijndael alg = Rijndael.Create())
				{
					// Now set the key and the IV. 
					// We need the IV (Initialization Vector) because
					// the algorithm is operating in its default 
					// mode called CBC (Cipher Block Chaining).
					// The IV is XORed with the first block (8 byte) 
					// of the data before it is encrypted, and then each
					// encrypted block is XORed with the 
					// following block of plaintext.
					// This is done to make encryption more secure. 
					// There is also a mode called ECB which does not need an IV,
					// but it is much less secure. 
					alg.Key = Key;
					alg.IV = IV;

					// Create a CryptoStream through which we are going to be
					// pumping our data. 
					// CryptoStreamMode.Write means that we are going to be
					// writing data to the stream and the output will be written
					// in the MemoryStream we have provided. 
					CryptoStream cs = new CryptoStream(ms, alg.CreateEncryptor(), CryptoStreamMode.Write);

					try
					{
						// Write the data and make it do the encryption 
						cs.Write(clearData, 0, clearData.Length);
					}
					finally
					{
						// Close the crypto stream (or do FlushFinalBlock). 
						// This will tell it that we have done our encryption and
						// there is no more data coming in, 
						// and it is now a good time to apply the padding and
						// finalize the encryption process. 
						cs.Close();
					}
				}

				// Now get the encrypted data from the MemoryStream.
				// Some people make a mistake of using GetBuffer() here,
				// which is not the right way. 
				return ms.ToArray();
			}
			finally
			{
				ms.Close();
			}
		}

		// Encrypt a string into a string using a password 
		//    Uses Encrypt(byte[], byte[], byte[]) 
		public static string Encrypt(string clearText)
		{
			return Encrypt(clearText, deviceId);
		}

		public static string Encrypt(string clearText, string Password)
		{
			// First we need to turn the input string into a byte array. 
			byte[] clearBytes = System.Text.Encoding.Unicode.GetBytes(clearText);

			// Then, we need to turn the password into Key and IV 
			// We are using salt to make it harder to guess our key
			// using a dictionary attack - 
			// trying to guess a password by enumerating all possible words. 
			Rfc2898DeriveBytes pdb =
					new Rfc2898DeriveBytes(
						Password,
						new byte[] { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 }
				);

			byte[] encryptedData = Encrypt(clearBytes, pdb.GetBytes(32), pdb.GetBytes(16));

			// Now we need to turn the resulting byte array into a string. 
			// A common mistake would be to use an Encoding class for that.
			//It does not work because not all byte values can be
			// represented by characters. 
			// We are going to be using Base64 encoding that is designed
			//exactly for what we are trying to do. 
			return System.Convert.ToBase64String(encryptedData);
		}

		// Encrypt bytes into bytes using a password 
		//    Uses Encrypt(byte[], byte[], byte[]) 
		public static byte[] Encrypt(byte[] clearData, string Password)
		{
			// We need to turn the password into Key and IV. 
			// We are using salt to make it harder to guess our key
			// using a dictionary attack - 
			// trying to guess a password by enumerating all possible words. 
			Rfc2898DeriveBytes pdb =
					new Rfc2898DeriveBytes(
							Password,
							new byte[] { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 }
				);

			return Encrypt(clearData, pdb.GetBytes(32), pdb.GetBytes(16));
		}

		// Encrypt a file into another file using a password 
		public static bool Encrypt(string fileIn, string fileOut, string Password)
		{
			// First we are going to open the file streams 
			FileStream fsIn = new FileStream(fileIn, FileMode.Open, FileAccess.Read);
			FileStream fsOut = null;

			try
			{
				fsOut = new FileStream(fileOut, FileMode.OpenOrCreate, FileAccess.Write);

				// Then we are going to derive a Key and an IV from the
				// Password and create an algorithm 
				Rfc2898DeriveBytes pdb =
					new Rfc2898DeriveBytes(
					Password,
					new byte[] { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 }
					);
				using (Rijndael alg = Rijndael.Create())
				{
					alg.Key = pdb.GetBytes(32);
					alg.IV = pdb.GetBytes(16);

					// Now create a crypto stream through which we are going
					// to be pumping data. 
					// Our fileOut is going to be receiving the encrypted bytes. 
					CryptoStream cs = new CryptoStream(fsOut, alg.CreateEncryptor(), CryptoStreamMode.Write);

					try
					{
						// Now will will initialize a buffer and will be processing
						// the input file in chunks. 
						// This is done to avoid reading the whole file (which can
						// be huge) into memory. 
						byte[] buffer = new byte[4096];
						int bytesRead;

						do
						{
							// read a chunk of data from the input file 
							bytesRead = fsIn.Read(buffer, 0, buffer.Length);

							// encrypt it 
							cs.Write(buffer, 0, bytesRead);
						} while (bytesRead != 0);
					}
					finally
					{
						cs.Close();
					}
				}
			}
			finally
			{
				fsIn.Close();

				if (fsOut != null)
				{
					fsOut.Close();
				}
			}

			return true;
		}

		// Decrypt a byte array into a byte array using a key and an IV 
		public static byte[] Decrypt(byte[] cipherData, byte[] Key, byte[] IV)
		{
			// Create a MemoryStream that is going to accept the
			// decrypted bytes 
			MemoryStream ms = new MemoryStream();

			try
			{
				// Create a symmetric algorithm. 
				// We are going to use Rijndael because it is strong and
				// available on all platforms. 
				// You can use other algorithms, to do so substitute the next
				// line with something like 
				//     TripleDES alg = TripleDES.Create(); 
				using (Rijndael alg = Rijndael.Create())
				{
					// Now set the key and the IV. 
					// We need the IV (Initialization Vector) because the algorithm
					// is operating in its default 
					// mode called CBC (Cipher Block Chaining). The IV is XORed with
					// the first block (8 byte) 
					// of the data after it is decrypted, and then each decrypted
					// block is XORed with the previous 
					// cipher block. This is done to make encryption more secure. 
					// There is also a mode called ECB which does not need an IV,
					// but it is much less secure. 
					alg.Key = Key;
					alg.IV = IV;

					// Create a CryptoStream through which we are going to be
					// pumping our data. 
					// CryptoStreamMode.Write means that we are going to be
					// writing data to the stream 
					// and the output will be written in the MemoryStream
					// we have provided. 
					CryptoStream cs = new CryptoStream(ms, alg.CreateDecryptor(), CryptoStreamMode.Write);
					try
					{
						// Write the data and make it do the decryption 
						cs.Write(cipherData, 0, cipherData.Length);
					}
					finally
					{
						// Close the crypto stream (or do FlushFinalBlock). 
						// This will tell it that we have done our decryption
						// and there is no more data coming in, 
						// and it is now a good time to remove the padding
						// and finalize the decryption process. 
						cs.Close();
					}
				}

				// Now get the decrypted data from the MemoryStream. 
				// Some people make a mistake of using GetBuffer() here,
				// which is not the right way. 
				return ms.ToArray();
			}
			finally
			{
				ms.Close();
			}
		}

		// Decrypt a string into a string using a password 
		//    Uses Decrypt(byte[], byte[], byte[]) 
		public static string Decrypt(string cipherText)
		{
			return Decrypt(cipherText, deviceId);
		}

		public static string Decrypt(string cipherText, string Password)
		{
			// First we need to turn the input string into a byte array. 
			// We presume that Base64 encoding was used 
			byte[] cipherBytes = System.Convert.FromBase64String(cipherText);

			// Then, we need to turn the password into Key and IV 
			// We are using salt to make it harder to guess our key
			// using a dictionary attack - 
			// trying to guess a password by enumerating all possible words. 
			Rfc2898DeriveBytes pdb =
				new Rfc2898DeriveBytes(
					Password,
					new byte[] { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 }
			);

			// Now get the key/IV and do the decryption using
			// the function that accepts byte arrays. 
			// Using Rfc2898DeriveBytes object we are first
			// getting 32 bytes for the Key 
			// (the default Rijndael key length is 256bit = 32bytes)
			// and then 16 bytes for the IV. 
			// IV should always be the block size, which is by
			// default 16 bytes (128 bit) for Rijndael. 
			// If you are using DES/TripleDES/RC2 the block size is
			// 8 bytes and so should be the IV size. 
			// You can also read KeySize/BlockSize properties off
			// the algorithm to find out the sizes. 
			byte[] decryptedData = Decrypt(cipherBytes, pdb.GetBytes(32), pdb.GetBytes(16));

			// Now we need to turn the resulting byte array into a string. 
			// A common mistake would be to use an Encoding class for that.
			// It does not work 
			// because not all byte values can be represented by characters. 
			// We are going to be using Base64 encoding that is 
			// designed exactly for what we are trying to do. 
			return System.Text.Encoding.Unicode.GetString(decryptedData);
		}

		// Decrypt bytes into bytes using a password 
		//    Uses Decrypt(byte[], byte[], byte[]) 
		public static byte[] Decrypt(byte[] cipherData, string Password)
		{
			// We need to turn the password into Key and IV. 
			// We are using salt to make it harder to guess our key
			// using a dictionary attack - 
			// trying to guess a password by enumerating all possible words. 
			Rfc2898DeriveBytes pdb =
				new Rfc2898DeriveBytes(
					Password,
					new byte[] { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 }
				);

			return Decrypt(cipherData, pdb.GetBytes(32), pdb.GetBytes(16));
		}

		// Decrypt a file into another file using a password 
		public static void Decrypt(string fileIn, string fileOut, string Password)
		{
			FileStream fsOut = null;

			// First we are going to open the file streams 
			FileStream fsIn = new FileStream(fileIn, FileMode.Open, FileAccess.Read); ;
			try
			{
				fsOut = new FileStream(fileOut, FileMode.OpenOrCreate, FileAccess.Write);

				// Then we are going to derive a Key and an IV from
				// the Password and create an algorithm 
				Rfc2898DeriveBytes pdb =
							new Rfc2898DeriveBytes(
								Password,
								new byte[] { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 }
					);

				using (Rijndael alg = Rijndael.Create())
				{
					alg.Key = pdb.GetBytes(32);
					alg.IV = pdb.GetBytes(16);

					// Now create a crypto stream through which we are going
					// to be pumping data. 
					// Our fileOut is going to be receiving the Decrypted bytes. 
					CryptoStream cs = new CryptoStream(fsOut, alg.CreateDecryptor(), CryptoStreamMode.Write);

					try
					{
						// Now will will initialize a buffer and will be 
						// processing the input file in chunks. 
						// This is done to avoid reading the whole file (which can be
						// huge) into memory. 

						byte[] buffer = new byte[4096];
						int bytesRead;

						do
						{
							// read a chunk of data from the input file 
							bytesRead = fsIn.Read(buffer, 0, buffer.Length);

							// Decrypt it 
							cs.Write(buffer, 0, bytesRead);
						} while (bytesRead != 0);
					}
					finally
					{
						cs.Close();
					}
				}
			}
			finally
			{
				fsIn.Close();

				if (fsOut != null)
				{
					fsOut.Close();
				}
			}
		}
	}

	#endregion
}