#if UNITY_EDITOR
using UnityEngine; 
using UnityEditor;
namespace Stm.V1_1 {  

public class EditorRealTime
{
	public double time = EditorApplication.timeSinceStartup;
	public float deltaTime;
	
	public void Update()
	{
		double newTime = EditorApplication.timeSinceStartup;
		deltaTime = (float)(newTime - time);
		time = newTime;
	}
}
}
#endif
