using System.IO;
using Unity.IO.Compression;

namespace GSN.Skill.Games.Common.Utils {

	// This class makes it easy to use Unity.IO.Compression.
	public class GZipper {

		MemoryStream inStream;
		byte [] inBytes;
		bool inputIsBytes;

		public GZipper() {

		}

		// set input as a memorystream
		public void SetInput(MemoryStream i) {
			inStream = i; // we like memory streams.
			inputIsBytes = false;
		}

		// set input as bytes
		public void SetInput(byte [] b) {
			inBytes = b;
			inputIsBytes = true;
		}

		// fetch output into a memorystream.
		public void GetOutput(MemoryStream outStream, CompressionMode mode) {

			switch (mode) {

				case CompressionMode.Compress:

					// compress to a stream.
					using (GZipStream compstream = new GZipStream (outStream, mode)) {
						if (inputIsBytes) 
						{	// compress from bytes.
							compstream.Write (inBytes);							
						} else {
							// compress from a stream.
							inStream.CopyTo (compstream);							
						}
					}
					break;

				case CompressionMode.Decompress:

					// decompress is always from a stream. convert bytes to a stream.
					if (inputIsBytes)
						inStream = new MemoryStream(inBytes);

					// decompress to output stream.
					using (GZipStream gzs = new GZipStream (inStream, mode)) {

						gzs.CopyTo (outStream);
					}

					// if we converted, dispose what we made.
					if (inputIsBytes) 
						inStream.Dispose();

					break;
			}

			// clean out temporaries.
			inStream = null;
			inBytes = null;

		}

		// fetch output as a byte array
		public byte [] GetOutput(CompressionMode mode) {

			byte [] retval;

			using (MemoryStream outStream = new MemoryStream()) {
				GetOutput(outStream, mode);
				retval = outStream.ToArray ();
			}

			return retval;
		}
	}
}