using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GSN.Skill.Phoenix.Build;
using GSN.Skill.Requests.Config;
using GSN.Skill.Utils;

public class GsnCrittercism : Crittercism 
{

    public bool UseProductionKeys = false;

    public string ProductionCrittercismiOSAppID = "YOUR PROD IOS APP ID GOES HERE";

    public string ProductionCrittercismAndroidAppID = "YOUR PROD ANDROID APP ID GOES HERE";

    void Awake() 
    {
        if (UseProductionKeys || BuildTimeValues.ENVIRONMENT.Equals(APIInfoRequestData.EnvironmentOptions.Production.ToString()))
        {
            GsnDebug.LogWarning("Using Production Crittercism keys.");
#if UNITY_IOS
            CrittercismIOS.Init(ProductionCrittercismiOSAppID);
#elif UNITY_ANDROID
            CrittercismAndroid.Init(ProductionCrittercismAndroidAppID);
#endif
        }
        else
        {
            GsnDebug.LogWarning("Using Development Crittercism keys.");
#if UNITY_IOS
            CrittercismIOS.Init(CrittercismiOSAppID);
#elif UNITY_ANDROID
            CrittercismAndroid.Init(CrittercismAndroidAppID);
#endif
        }
    }

}
