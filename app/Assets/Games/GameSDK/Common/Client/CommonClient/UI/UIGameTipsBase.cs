using System.Collections;
using System.Collections.Generic;
using Gsn.AssetLoading;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client
{
	/// <summary>
	/// This class is the Base class for displaying tips in the UI. 
	/// </summary>
	public abstract class UIGameTipsBase : UIInfoTab
    {
		public virtual string GetTipsResourcePrefix()
		{
			return "GameTips/";
		} 
		
		private const int TIP_COUNT = 3;
		private TipBase[] _tips = new TipBase[TIP_COUNT];

		// names of our default tip scriptable objects (to load if all else fails)
		const string DEFAULT_TIP_1 = "Tip1";
		const string DEFAULT_TIP_2 = "Tip2";
		const string DEFAULT_TIP_3 = "Tip3";
		
		readonly string[] DEFAULT_TIPS = new string[TIP_COUNT] 
		{
			// collection of our default tip object names
			DEFAULT_TIP_1, 
			DEFAULT_TIP_2,
			DEFAULT_TIP_3
		};
		
		readonly string[] GENERIC_TIP_OPTION_NAME = new string[TIP_COUNT]
		{ // tournament option keys used to look for tip object names in the join record
			GameModelBase.OPTIONS_GAME_TIP1,
			GameModelBase.OPTIONS_GAME_TIP2,
			GameModelBase.OPTIONS_GAME_TIP3
		};

		public override void Setup()
		{
			TipBase tip;
			for (int i = 0; i < _tips.Length; ++i)
			{ // iterate over all the tips we want to display and create them
				tip = _tips[i];
				if (tip == null)
					break;
				CreateTip(tip);
			}
		}

		/// <summary>
		/// This function when derived in the game's UIGameTip class will create a tip from the prefab that has been linked to the games tip class.
		/// </summary>
		/// <param name="tip">Tip.</param>
		protected abstract void CreateTip(TipBase tip);

		/// <summary>
		/// Parses the tournament options for specific tip object names to use (or falling back to defaults).
		/// Loads all the game tips and populates them accordingly.
		/// </summary>
		/// <param name="joinRecord">dictionary containing the tournament options to parse</param>
		public override IEnumerator Preload(Dictionary<string, string> joinRecord)
		{
			string bundleName = NewViewBase.instance.GetTipBundleName ();
			string tipOptionName;
			string tipResourceName = null;
			TipBase tip;
			for (int i = 0; i < TIP_COUNT; ++i)
			{ // iterate over all the tips we want to display, parse options and create them
				tipOptionName = GENERIC_TIP_OPTION_NAME[i];
				if (joinRecord.ContainsKey(tipOptionName))
				{ // get a random resource name from the comma delimited string of names
					tipResourceName = GetRandomTip(joinRecord[tipOptionName]);
				}
				
				// try loading the tip resource
				tip = LoadGameTip(bundleName, tipResourceName);
				if (tip == null)
				{ // the resource was null or doesn't exist, try falling back to the default
					GsnDebug.LogError("Missing tip resource using default! " + tipResourceName);
					tip = LoadGameTip(bundleName, DEFAULT_TIPS[i]);
				}
				
				if (tip == null)
				{ // we've done all we can, throw out a log to warn that the resource is missing
					GsnDebug.LogError("Missing tip resource! " + DEFAULT_TIPS[i]);
					break;
				}
				
				NewViewBase.instance.IncrementItemLoaded();
				_tips[i] = tip;
				yield return null;
			}
			
			yield return null;
		}

		public override int PreloadCount()
		{
			return TIP_COUNT;
		}

		/// <summary>
		/// Return a random tip object name from a comma separated string.
		/// </summary>
		/// <param name="tipsString">string containing the comma delimited list of tip names</param>
		/// <returns>a randomly chosen tip name (or null if empty)</returns>
		private string GetRandomTip(string tipsString)
		{
			if (string.IsNullOrEmpty(tipsString))
				return null;
			
			string[] tips = tipsString.Split(',');
			
			return tips[UnityEngine.Random.Range(0, tips.Length)];
		}
		
		/// <summary>
		/// Load a tip scriptable object resource by name.
		/// </summary>
		/// <param name="bundleName">the name of the bundle to load the tip from</param>
		/// <param name="tipResourceName">the name of the tip object to load</param>
		/// <returns>the loaded Tip resource (or null if unable to load)</returns>
		private TipBase LoadGameTip(string bundleName, string tipResourceName)
		{
			if (string.IsNullOrEmpty(tipResourceName))
				return null;
			
			return (TipBase)AssetLoadingService.LoadAsset(new LoadAssetParams(bundleName, GetTipsResourcePrefix() + tipResourceName));
		}


    }
}

