using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//public class AssetExposer : MonoBehaviour
public interface IAssetExposer
{ 
	void GetExposedAssetKeys(System.Collections.Generic.List<string> list);

	UnityEngine.Object GetExposedAsset(string key);

	void SetExposedAsset(string key, UnityEngine.Object value);
}
