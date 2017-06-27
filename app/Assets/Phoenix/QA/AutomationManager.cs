using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutomationManager : MonoBehaviour
{
	void Start ()
	{
		// This is the initial scene that the app loads.
		UnityEngine.SceneManagement.SceneManager.LoadScene("BootstrapScene", UnityEngine.SceneManagement.LoadSceneMode.Additive);

		StartCoroutine( StartTests() );
	}

	IEnumerator StartTests()
	{
		// wait until the next frame.  That gives the scene objects a chance to
		// do their initialization and startup important systems, ex: EventDispatcher.
		yield return null;

		// our child is the TestRunner object.
		transform.GetChild(0).gameObject.SetActive(true);
	}
}
	