using System.IO;
using System.Text;

namespace GSN.Skill.Games.Common.Utils {

	public static class StreamExtensions {

		public static byte [] ToBytes (this MemoryStream mstream) {

			long len = mstream.Length;

			byte[] retval = new byte[len];

			mstream.Seek(0, SeekOrigin.Begin); // start at the beginning.

			int r;
			int offset = 0;
			while ((r = mstream.Read(retval, offset, (int)(len - offset))) > 0)
			{
			    offset += r;
			}

			return retval;
		}

		public static byte [] ToBytes (this Stream stream) {

			// we don't know if this stream is seeekable. Don't seek. 

			using (MemoryStream mstream = new MemoryStream()) {
				stream.CopyTo(mstream);
				return mstream.ToArray();
			}
		}

		public static void Write(this Stream stream, byte [] bytes) {
			stream.Write(bytes, 0, bytes.Length);
		} 

		public static void CopyTo(this Stream src, Stream dest)
		{
		    byte[] buffer = new byte[16384];
		    int readCount;

		    // read into the beginning of the buffer, as much as possible.
		    while ((readCount = src.Read(buffer, 0, buffer.Length)) > 0)
		    {
		    	// write from the buffer to the destination.
		        dest.Write (buffer, 0, readCount);
		    }
		}

		public static void WriteToFile(this Stream stream, string fn, bool text = false) {

			using (FileStream outfile = new FileStream(fn, FileMode.Create)) {

				if (text) { // write it out as hex text
					outfile.Write(Encoding.UTF8.GetBytes( StringExtensions.GetHexString(stream.ToBytes())));
				} 
				else
				{	// write it in binary
					stream.CopyTo(outfile);
				}
			}
		}
	}
}

