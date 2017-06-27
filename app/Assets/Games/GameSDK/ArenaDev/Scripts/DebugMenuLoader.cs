// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using System;
using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using GSN.Skill.Games.Common.AssemblyExtensionsWorkaround;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{
    public class DebugMenuLoader : MonoBehaviour
    {
        void Awake()
        {
            //http://stackoverflow.com/questions/26733/getting-all-types-that-implement-an-interface
            GameObject debugMenu = GameObject.Find("DebugMenu"); 
            if (debugMenu == null) 
            {
                Debug.LogError("Could not find a debug menu");
                return;
            }
            //  Add the Game Specific Debug Menu to the DebugMenu Object
            IEnumerable<Type> types = AppDomain.CurrentDomain.GetAssemblies().
                SelectMany(s => s.GetLoadableTypes()).
                    Where(p => typeof(ArenaDebugMenu).IsAssignableFrom(p));

            Type type = types.First();
            if (type.Equals (typeof(ArenaDebugMenu)))
                type = types.Last ();

            if (debugMenu.GetComponent(type) == null)
            {
                debugMenu.AddComponent(type);
            }

// put this back when all games have asset bundling.
            //  Add the CDK Startup MonoBehaviour to the DebugMenu GameObject
  //          if (debugMenu.GetComponent<ArenaCDKStartup>() == null)
  //        {
  //            debugMenu.AddComponent<ArenaCDKStartup>();
  //        }
        }
	}
}

