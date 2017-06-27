namespace GSN.Skill.Phoenix.Model.LoadFlows
{
	public interface ISceneLoad
	{
		/// <summary>
		/// NOTE: Must dispatch event LoadCompleteEvent when complete!
		/// </summary>
		void Start();
		void Finish();
	}
}
