using GSN.Skill.Phoenix.Controller;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.View;
using UnityEngine;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Phoenix.Strings;
using System.Collections;

namespace GSN.Skill.Phoenix
{
	public class Bootstrap : MonoBehaviour
	{
		void Start()
		{
			StartCoroutine(InitBootstrap());
		}

		IEnumerator InitBootstrap()
		{
			// don't destroy the entire gameobject (which includes all other scripts attached to this gameobject)
			DontDestroyOnLoad(this.gameObject);

			// setup the context for GsnDebug to log. In our case we're using Unity's Debug Logging system
			GsnDebug.SetContext(new LogContext(Debug.Log, Debug.LogWarning, Debug.LogError));

			PhoenixEvents.RegisterEvents();

			// Get SceneManager from this GameObject
			SceneManager sceneManager = GetComponent<SceneManager>();

			// Setup WebRequester with the WorldWinner specific session handler
			WebRequester.Instance.Init(new WorldWinnerSessionHandler());

			// These are quite noisy, and redundant.
			WebRequester.Instance.SquelchInfoLog<GSN.Skill.Phoenix.Requests.Logging.LogRequestData>();

			PhoenixStringTable.SetTable();
			PhoenixErrorLookupTable.SetTable();

			yield return DeviceManager.Instance.Init();

			// instantiate Model and Controller
			MainModel model = new MainModel(sceneManager);
			MainController controller = new MainController();

			// set all Views to reference the same controller
			BaseView.controller = controller;
			controller.model = model;

#if DEBUG
			Reporter.createReporterObject();
			ReporterGSNUtilities.controller = controller;
#endif
			
			model.Init();
			// Add one to the launch counter
			UserSaveRestore.Device.NumberOfLaunches++;
		}
	}
}
