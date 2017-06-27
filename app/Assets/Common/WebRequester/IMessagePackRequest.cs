namespace GSN.Skill.Requests
{
	public interface IMessagePackRequest
	{
		bool unpackMessagePack (byte[] packedBytes);
		byte[] RawBody { get; }
	}
}
