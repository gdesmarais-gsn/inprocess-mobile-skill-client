using UnityEngine;

public class CollisionHelper {
    public const int kLayerDefault = 0;
    public const int kLayerIgnoreRaycast = 2;
	public const int kLayerNoCollisions = 8;
    public const int kLayerJustPlayer = 9;
    public const int kLayerNotPlayer = 12;
    public const int kLayerDebris = 10;
    public const int kLayerPlayer = 11;
    public const int kLayerModal = 13;
    public const int kLayerNotInScreenshot = 14;
    public const int kLayerSmall = 15;
    public const int kLayerKindOfSmall = 16;
    public const int kLayerJustPlayerNoCord = 17;
    public const int kNotPlayerAffector = 18;
    public const int kLayerNotLite = 19;
    public const int kLayerDoF = 21;
    public const int kLayerDoFPass = 22;
    public const int kLayerDoFPass3 = 23;
    public const int kLayerRaycastOnly = 24;
    public const int kLayerFrictionless = 25;
    public const int kLayerSpecial = 26;
    public const int kLayerNotSpecial = 27;
    public const int kLayerJustSpecial = 28;
    public const int kLayerMap = 29;

	public static void SetLayerRecursively(GameObject obj, int layer)
	{
		obj.layer = layer;
		foreach(Transform child in obj.transform) {
			SetLayerRecursively(child.gameObject, layer);
		}
		// premature optimization ready to try:
		//Transform t = obj.transform;
		//int count = t.childCount;
		//for(int i = 0 ; i < count ; i++) {
		//	SetLayerRecursively(t.GetChild(i).gameObject, layer);
		//}
	}
	public static void SetLayerRecursively(Component obj, int layer)
	{
        SetLayerRecursively(obj.gameObject, layer);
	}
}

