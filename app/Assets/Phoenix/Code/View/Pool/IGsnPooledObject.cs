namespace GSN.Skill.Phoenix.View.Pool
{
	/// <summary>
	/// Interface for pooled objects.
	/// See <see cref="T:GSN.Skill.Phoenix.View.Pool.GsnObjectPool"/>
	/// </summary>
	public interface IGsnPooledObject
	{
		void Free();

		/// <summary>
		/// Called by the owning GsnObjectPool when allocated or released.
		/// 
		/// Sets a value indicating whether this <see cref="T:GSN.Skill.Phoenix.View.Pool.IGsnPooledObject"/> is allocated.
		/// </summary>
		/// <value><c>true</c> if allocated; otherwise, <c>false</c>.</value>
		bool Allocated { get; set; }
	}
}
