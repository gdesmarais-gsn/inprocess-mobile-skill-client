using UnityEditor;
using UnityEngine;

using System;
using System.Text;
using System.IO;
using System.Collections.Generic;
using System.Xml;

#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif
using UnityEditor.Callbacks;
using GSN.Skill.Games.Common.Build;

//using Gsn.Api ;
//using Gsn.SideLoading ;
//using Gsn.Utils ;
//using Gsn.Utils.Xml ;
//using Gsn.Utils.Collections ;

public class BuildUnityGame {
	/// <summary>
	/// Enumeration of all known command-line args to make translating
	/// them easier
	/// </summary>
	enum ArgumentKey {
		/// <summary>
		/// <see langword="true"/> for a development build, <see langword="false"/> otherwise
		/// </summary>
		/// <remarks>
		/// Default value is <see langword="true"/>
		/// </remarks>
		/// <example>
		/// +development:true
		/// </example>
		Development,
		/// <summary>
		/// Output path (required)
		/// </summary>
		/// <example>
		/// +output:bin/casino
		/// </example>
		Output,
		/// <summary>
		/// Target platform for build
		/// </summary>
		/// <remarks>
		/// Uses the values defined by <see cref="MobilePlatform"/>. Default value
		/// is <see cref="MobilePlatform.Ios"/>
		/// </remarks>
		/// <example>
		/// +platform:ios
		/// </example>
		Platform,
		/// <summary>
		/// Defines the build input file used to specify what we
		/// are building (required)
		/// </summary>
		/// <example>
		/// +build:Assets/Games/outlaw_poker/ovp.build.xml
		/// </example>
		Build,
		/// <summary>
		/// Sets the Bundle Identifier to use
		/// </summary>
		BundleId,
		/// <summary>
		/// Sets the Bundle Version Code to use
		/// </summary>
		BundleVersionCode,
		/// <summary>
		/// Sets the Bundle Version to use
		/// </summary>
		BundleVersion,
		/// <summary>
		/// Sets the Payment Context for Android builds. The default is Google.
		/// </summary>
		AndroidPaymentContext,
		/// <summary>
		/// Sets preprocessor defines for the build
		/// </summary>
		PreprocessorDefines
	}

	private static Dictionary<ArgumentKey, object> _arguments;

	/// <summary>
	/// Primary entry point for building the game
	/// </summary>
	/// <exception cref='ArgumentException'>
	/// Is thrown when an argument passed to a method is invalid.
	/// </exception>
	/// <remarks>
	/// Because parameters cannot be passed to this method, we fall back to the use of command-line parameters of
	/// the form: +{key}:{value}. Arguments are case-INsensitive
	/// <para>
	/// The following general parameters are required:
	/// +build:{build xml path}	specifies the location of an xml with game/scene definitions to include in the build.
	/// Example xml file: &lt;UnityBuild&gt; &lt;Games&gt; &lt;Game id="casino" basePath="Assets/Games" title="GSN Casino"&gt;
	/// &lt;Scenes&gt; &lt;Scene path="dashboard/Scenes/Startup.unity" /&gt; &lt;/Scenes&gt; &lt;/Game&gt; &lt;/Games&gt; &lt;/UnityBuild&gt;
	/// </para>
	/// <para>
	/// The following general parameters are optional:
	/// +game:{game id}				specifies asset bundles be built for a specific game (otherwise, ALL games)
	/// +output:{output path}		specifies the location where asset bundles will be built
	/// +test:{true|false}			specifies whether asset bundles will be built (false) or not (true)
	/// </para>
	/// <para>
	/// The following attributes are required:
	/// +platform:{MobilePlatform}		specifies which platform to build for
	/// </para>
	/// <para>
	/// The following attributes are optional:
	/// +resolution:{MobileResolution}	specifies which resolution to build (or all)
	/// +aspect:{int32}					specifies the aspect ratio to build for (in GSN format)
	/// +model:{model}					specifies the model to build for
	/// +device:{device}				specifies the device to build for
	/// +version:{expression}			specifies a version expression to build for
	/// </para>
	/// </remarks>
	public static void PerformBuild() {
		try {
			_arguments = CookArguments(BuildHelpers.ParseArguments(Environment.GetCommandLineArgs())) ;

			if (getArgument(ArgumentKey.Build) == null)
				_arguments[ArgumentKey.Build] = "AssetManifest.xml";
			
			if (getArgument(ArgumentKey.Platform) == null)
				_arguments[ArgumentKey.Platform] = "ios";
			
			RunBuild ();
			
		} catch(Exception ex) {
			BuildHelpers.LogError(ex) ;
			throw ;
		}
	}
	
#region Preprocessor Defines
	/// <summary>
	/// Our collection of preprocessor defines
	/// </summary>
	private static IDictionary<string,string> preprocessorDefines ;
	
	/// <summary>
	/// Get the preprocessor define collection
	/// </summary>
	/// <value>
	/// The collection of preprocessor defines
	/// </value>
	private static IDictionary<string,string> PreprocessorDefines {
		get {
			if (preprocessorDefines == null) {
				// note that the dictionary is case-sensitive, as is the preprocessor
				preprocessorDefines = new Dictionary<string,string>() ;
			}
			
			return preprocessorDefines ;
		}
	}
	
	/// <summary>
	/// Adds 1 or more preprocessor defines to our collection
	/// </summary>
	/// <param name='defines'>
	/// A single define, or a ';' separated list of defines
	/// </param>
	private static void AddPreprocessorDefines(string defines) {
		if (String.IsNullOrEmpty (defines))
			return;

		String [] defineArray = defines.Split (';') ;
		
		foreach(String define in defineArray) {
			if (!PreprocessorDefines.ContainsKey(define)) {
				PreprocessorDefines[define] = define ;
			}
		}
	}
	
	/// <summary>
	/// Remove a pre-processor define
	/// </summary>
	/// <param name='define'>
	/// The define to remove
	/// </param>
	/// <remarks>
	/// only works for a single define
	/// </remarks>
	private static void RemovePreprocessorDefine(string define) {
		if (String.IsNullOrEmpty(define)) 
			return ;
		
		PreprocessorDefines.Remove(define) ;
	}
	
	/// <summary>
	/// Determine if we have any preprocessor defines
	/// </summary>
	/// <returns>
	/// <c>true</c> if this instance has preprocessor defines; otherwise, <c>false</c>.
	/// </returns>
	private static bool HasPreprocessorDefines {
		get {
			return (preprocessorDefines != null) && (preprocessorDefines.Count > 0) ;
		}
	}
	
	/// <summary>
	/// Convert the collection of preprocessor defines to string with each
	/// define separated by a ';'
	/// </summary>
	/// <returns>
	/// The preprocessor defines as a ';' separated string
	/// </returns>
	private static string GetPreprocessorDefines() {
		StringBuilder sb = new StringBuilder() ;
		
		foreach(String define in PreprocessorDefines.Keys) {
			if (sb.Length > 0) {
				sb.Append(';') ;
			}
			
			sb.Append(define) ;
		}
		
		return sb.ToString() ;
	}
	
	private static void SetPreprocessorDefines(string platform,string defines) {
#if !(UNITY_3_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5)
		BuildTargetGroup targetGroup = BuildHelpers.GetBuildTargetGroup(platform);
		PlayerSettings.SetScriptingDefineSymbolsForGroup(targetGroup, defines ?? string.Empty);
#endif
	}
	
	/// <summary>
	/// Tell Unity about our preprocessor defines
	/// </summary>
	/// <param name='platform'>
	/// The mobile platform
	/// </param>
	/// <remarks>
	/// Only supported for versions of Unity > 3.5
	/// </remarks>
	private static void SetPreprocessorDefines(string platform) {
		if (HasPreprocessorDefines) {
			string defines = GetPreprocessorDefines() ;
			
			Debug.Log("Preprocessor Defines for this build: " + defines) ;

			SetPreprocessorDefines(platform,defines) ;
		} else {
			Debug.Log("No Preprocessor Defines for this build") ;			
		}
	}
		
	private static void InitPreprocessorDefinesFromSettings(string platform) {
#if !(UNITY_3_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5)
		BuildTargetGroup targetGroup = BuildHelpers.GetBuildTargetGroup(platform);
			
		string settingsDefines = PlayerSettings.GetScriptingDefineSymbolsForGroup(targetGroup);
		
		if (!String.IsNullOrEmpty(settingsDefines)) {
			AddPreprocessorDefines(settingsDefines) ;
		}
#endif
	}
	
	private static string GetUnityPreprocessorDefines(string platform) {
		string settingsDefines = string.Empty ;
		
#if !(UNITY_3_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5)
		BuildTargetGroup targetGroup = BuildHelpers.GetBuildTargetGroup(platform);
			
		settingsDefines = PlayerSettings.GetScriptingDefineSymbolsForGroup(targetGroup);
#endif
		
		return settingsDefines ;
	}
#endregion

	private static object getArgument(ArgumentKey key)
	{
		if (_arguments.ContainsKey (key))
			return _arguments [key];
		return null;
	}

	private static string getArgumentAsString(ArgumentKey key, string defValue = null)
	{
		object val = getArgument(key);
		if (val != null)
			return val as String;
		return defValue;
	}

	private static void BuildScenes(string title, List<string> Scenes)
	{
			
			//	----------------------------------------------------------------
			//	Update the Player settings based on the Xml data or
			//	parameters to the script.
			//
			//	Note how we override the product name from the Xml data. Not 
			//	sure I like this, but if I remember correctly I did this because
			//	people forget to set it in Unity, or it has a bogus value.
			//	----------------------------------------------------------------
			
			PlayerSettings.productName = title;

			PlayerSettings.bundleIdentifier = getArgumentAsString(ArgumentKey.BundleId);

			object bundleVersionCode = getArgument(ArgumentKey.BundleVersionCode);
			if (bundleVersionCode != null)
			{
				PlayerSettings.Android.bundleVersionCode = Convert.ToInt32(bundleVersionCode) ;
			}

			PlayerSettings.bundleVersion = getArgumentAsString(ArgumentKey.BundleVersion);

			string platform = getArgumentAsString(ArgumentKey.Platform);
			BuildTarget target = BuildHelpers.GetBuildTarget(platform);
			
			//	----------------------------------------------------------------
			//	Here we get any existing Unity preprocessor settings and add
			//	them to our collection. We will restore them later.
			//	----------------------------------------------------------------
			string unityDefines = GetUnityPreprocessorDefines(platform) ;
			
			if (!String.IsNullOrEmpty(unityDefines)) {
				AddPreprocessorDefines(unityDefines) ;
			}

			//	----------------------------------------------------------------
			//	Here we check to see if we need to add a preprocessor define
			//	for using the Amazon store instead of Google Play (the default)
			//	----------------------------------------------------------------
			UIOrientation savedDefaultInterfaceOrientation = PlayerSettings.defaultInterfaceOrientation;
			if (getArgument(ArgumentKey.AndroidPaymentContext) != null) 
			{
				if (platform == BuildHelpers.ANDROID) {
					/*PaymentContext paymentContext = args.GetProperty<PaymentContext>(ArgumentKey.AndroidPaymentContext,PaymentContext.Google);
					String defines = Enum.GetName(typeof(PaymentContext), paymentContext).ToUpper();
					
					AddPreprocessorDefines(defines) ;
					
					BuildHelpers.Log("Building for Android Payment Context " + defines);
					
					// If AMAZON, we want to lock orientation to landscape left because of rotation
					// issues with newer Kindle devices. The rotation is essentially backwards
					// from what we would expect.
					if (!String.IsNullOrEmpty(defines) && defines.Equals(Enum.GetName(typeof(PaymentContext), PaymentContext.Amazon).ToUpper())) {
						PlayerSettings.defaultInterfaceOrientation = UIOrientation.LandscapeLeft;	
					}
					*/
				} else {
					BuildHelpers.Log("Ignoring the AndroidPaymentContext argument for this non-Android build.");
				}
			}
			
			//	----------------------------------------------------------------
			//	Here we take any custom preprocessor arguments passed via the
			//	command-line and add them to our collection
			//	----------------------------------------------------------------
			
			string preprocessorDefines = getArgumentAsString(ArgumentKey.PreprocessorDefines);
			if (!String.IsNullOrEmpty(preprocessorDefines)) {
				// defines should be seperated by ; ex. "PLAYTEST;DEBUG;RELEASE"
				AddPreprocessorDefines(preprocessorDefines);
			}
			
			// Figure out if it is a development build
			bool developmentBuild = getArgumentAsString(ArgumentKey.Development) == "true";

			bool UseGsnTestTools = developmentBuild || (HasPreprocessorDefines && PreprocessorDefines.ContainsKey("GSNTESTTOOLS"));
			if(UseGsnTestTools) {
				System.Reflection.Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
				Type FoundType = null;
				foreach(System.Reflection.Assembly assembly in assemblies) {
					foreach(Type t in assembly.GetTypes()) {
						if(t.Name.Equals("AutomatedTestingBuildHelper")) {
							FoundType = t;
							break;
						}
					}
					if(FoundType!=null) {
						System.Reflection.MethodInfo mi = FoundType.GetMethod("GetBootLoaderScene");
						string bootloaderscene = (string)mi.Invoke(null,null);
						BuildHelpers.Log ("Adding Scene '{0}' - Automation",bootloaderscene);

						mi = FoundType.GetMethod("GetBootLoadScenes");
						IList<string> BootLoadScenes = (IList<string>)mi.Invoke(null,null);

						foreach(string tempscene in BootLoadScenes) {
							BuildHelpers.Log ("Adding Scene '{0}' - Automation", tempscene);
						}

						Scenes.Insert(0, bootloaderscene);
						Scenes.AddRange(BootLoadScenes);
						break;
					}
				}
			}

			//	----------------------------------------------------------------
			//	Here everything is ready and we need to kick the build
			//	----------------------------------------------------------------
			
			// Tell Unity about the preprocessor defines (only if Unity version is > 3.5)
			SetPreprocessorDefines(platform) ;
			
			try {
				// Build the game
				string error = BuildPipeline.BuildPlayer(
					Scenes.ToArray(),
					getArgumentAsString(ArgumentKey.Output),
					target,
					developmentBuild ? (BuildOptions.Development) : BuildOptions.None
					) ;
				if(!string.IsNullOrEmpty(error)) {
					throw new Exception(error);
				}
			} finally {
				// restore the original defines in the player settings
				SetPreprocessorDefines(platform,unityDefines) ;
				
				// restore the original default orientation
				PlayerSettings.defaultInterfaceOrientation = savedDefaultInterfaceOrientation;	
			}
	}

	private static List<string> ReadNames()
	{
		List<string> scenes = new List<string>();
		foreach (EditorBuildSettingsScene S in EditorBuildSettings.scenes)
		{
			if (S.enabled)
			{
				scenes.Add(S.path);
			}
		}
		return scenes;
	}

	public static string GetProjectName()
	{
		string[] s = Application.dataPath.Split('/');
		string projectName = s[s.Length - 2];
		Debug.Log("project = " + projectName);
		return projectName;
	}
	
	private static void RunBuild() {
		// Mark the beginning of our build in the log
		BuildHelpers.LogSeperator ();
		BuildHelpers.Log("Building Games from Build Manifest at '{0}'",getArgumentAsString(ArgumentKey.Build));
		BuildHelpers.Log("development build => {0}",getArgument(ArgumentKey.Development)) ;
		BuildHelpers.Log("Preprocessor Defines => {0}",getArgumentAsString(ArgumentKey.PreprocessorDefines)) ;
		
		BuildHelpers.Log ("Creating output directory '{0}'",getArgumentAsString(ArgumentKey.Output)) ;
		BuildHelpers.Log("Arguments:");
		foreach(KeyValuePair<ArgumentKey,object> pair in _arguments) {
			BuildHelpers.Log ("  " + pair.Key.ToString() + " => " + pair.Value.ToString());
		}

		// Get the current build platform, default to iOS.
		string buildPlatform = getArgumentAsString(ArgumentKey.Platform);
		// Don't create a subdirectory within our output folder to place our output files if we are on Android.
		// With Unity 4.3 there is a build error if the directory already exists and the APK fails to build.
		// -Dack

		string buildDirectory = getArgumentAsString(ArgumentKey.Output);
		if (buildPlatform != BuildHelpers.ANDROID && buildDirectory != null) {
			Directory.CreateDirectory (buildDirectory);
		}

		// Do a check to make sure the ScriptCallOptimization player setting is not set to FastButNoExceptions.
		// Since the CDK relies on exception handling, any builds done with this setting are considered unsafe and
		// will cause a build failure right here.
		// -Dack
		if (buildPlatform == BuildHelpers.IOS && PlayerSettings.iOS.scriptCallOptimization == ScriptCallOptimizationLevel.FastButNoExceptions) {
			throw new InvalidOperationException("CDK iOS builds cannot have ScriptCallOptimization set to FastButNoExceptions.");
		}

		// Do a check to make sure the strippingLevel player setting is set to StripByteCode.
		// To save disk space, unused byte code is stripped when a build is created. If a CDK project is not using
		// this setting, then any integration in GSN Casino will run into unexpected issues.
		// -Dack
		if (PlayerSettings.strippingLevel != StrippingLevel.StripByteCode) {
			Debug.Log("PlayerSettings.strippingLevel = " + PlayerSettings.strippingLevel);
			PlayerSettings.strippingLevel = StrippingLevel.StripByteCode;
			//throw new InvalidOperationException("CDK builds must have stripping level set to Strip Byte Code.");
		}

		UnityBuild unityBuild = null ;

		string buildName = getArgumentAsString (ArgumentKey.Build);
		if (buildName != null && buildName != "")
		{
			BuildHelpers.Log("Parsing XML document {0}", buildName) ;
			XmlDocument xmlDoc = new XmlDocument ();
			try 
			{
				xmlDoc.Load(buildName);
			}
			catch (Exception e)
			{
				BuildHelpers.LogError ("Error Loading xml", e);
			}
			BuildHelpers.Log("Creating Build Manifest from XML Document") ;
			unityBuild = new UnityBuild(xmlDoc.DocumentElement);
			BuildHelpers.Log("Build Manifest created successfully") ;
			
			foreach(BuildGame game in unityBuild.Games) 
			{
				BuildHelpers.Log ("Building {0}",game.Title);

				foreach(string scenePath in game.Scenes) 
				{
					BuildHelpers.Log ("Adding Scene '{0}'",scenePath);
				}

				BuildScenes(game.Title, game.Scenes);
			
			}
		}
		else
		{
			BuildScenes(GetProjectName(), ReadNames());
		}
	}
	
	
#region Argument Processing
	private static Dictionary<ArgumentKey,object> CookArguments(Dictionary<string,string> args) {
		Dictionary<ArgumentKey,object> result = new Dictionary<ArgumentKey, object>(EqualityComparer<ArgumentKey>.Default) ;
		
		IDictionary<string,ArgumentKey> argLookup = new Dictionary<string,ArgumentKey>(StringComparer.InvariantCultureIgnoreCase) {
			{"platform",ArgumentKey.Platform},
			{"development",ArgumentKey.Development},
			{"output",ArgumentKey.Output},
			{"build",ArgumentKey.Build},
			{"bundleId",ArgumentKey.BundleId},
			{"bundleVersionCode",ArgumentKey.BundleVersionCode},
			{"bundleVersion",ArgumentKey.BundleVersion},
			{"androidPaymentContext",ArgumentKey.AndroidPaymentContext},
			{"preprocessorDefines",ArgumentKey.PreprocessorDefines},
		} ;
		
		foreach(KeyValuePair<string,string> kvp in args) {

			ArgumentKey argKey ;

			// If we don't recognize it, it is an error
			if (!argLookup.TryGetValue(kvp.Key,out argKey)) {
				throw new ArgumentException("Unknown argument '" + kvp.Key + "'") ;
			}
			result.Add(argKey,kvp.Value) ;
		}
		
		return result ;
	}
#endregion

	[PostProcessBuild(2000)]
 	public static void Process( BuildTarget target, string pathToBuiltProject )
 	{
 		Debug.Log( "Beginning Skill SDK Build Post Processors..." );

#if UNITY_IOS
 		if (target.Equals(BuildTarget.iOS))
 		{
 
 			// path to the xcode project file relative to the xcode project root folder.
 			const string projFileXcodeRelPath = "Unity-iPhone.xcodeproj/project.pbxproj";
 
 			// path to the xcode project's plist file relative to the xcode project root folder.
 			const string projPlistXcodeRelPath = "Info.plist";
 
 
 			//////////////////////////////
 			// build up the context
 			string pathToProjectFile = Path.Combine(pathToBuiltProject, projFileXcodeRelPath);
 			string pathToPlistFile = Path.Combine( pathToBuiltProject, projPlistXcodeRelPath);
 
 			PBXProject proj = new PBXProject();
 			proj.ReadFromFile(pathToProjectFile);
 
 			PlistDocument plist = new PlistDocument();
 			plist.ReadFromFile(pathToPlistFile);
 			
 			Debug.Log( "Disabling bitcode" );
 			proj.SetBuildProperty(proj.TargetGuidByName("Unity-iPhone"), "ENABLE_BITCODE", "false");
 
 			//////////////////////////////
 			// Apply pending changes
 			proj.WriteToFile(pathToProjectFile);
 		  plist.WriteToFile(pathToPlistFile);
 		}
#endif
 
 		Debug.Log( "Done with Skill SDK Build Post Processors..." );		
 	}
}
