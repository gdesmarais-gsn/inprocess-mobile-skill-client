namespace GSN.Skill.Phoenix.Build
{
	public class BuildTimeValues
	{
		// DO NOT EDIT THESE! These strings are replaced at build time by the build farm
		// via update_client_values.sh
		//
		// You can expect these to be set before the Unity build starts.
		//
		public static string CLIENT_BRANCH_NAME = "LOCAL_BRANCH";
		public static string CLIENT_BUILD_NUMBER = "LOCAL_BUILD_NUMBER";
        public static string ENVIRONMENT = "TARGET_ENVIRONMENT";
	}
}