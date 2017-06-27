using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using System.Linq;
using GSN.Skill.Games.Common.Client.DebugMenu;
using GSN.Skill.Games.Common.AssemblyExtensionsWorkaround;

public class GameLoader : MonoBehaviour {
 
    Type _currentGameType;
    ArenaDebugMenu _currentMenu;
    Dictionary<string, Type> _gameTypes = new Dictionary<string, Type>();

    void Start()
    {   
        GameObject optionsGO = ArenaMenu.instance.optionsGO;

        if (optionsGO == null)
        {
            throw new Exception("Options Go is null!");
        }

        GameObject games =  ArenaMenu.instance.CreatePanel(optionsGO, "Games");

        IEnumerable<Type> types = AppDomain.CurrentDomain.GetAssemblies().
            SelectMany(s => s.GetLoadableTypes()).
                Where(p => typeof(ArenaDebugMenu).IsAssignableFrom(p)).
                Where(p => p.Name.Equals("ArenaDebugMenu") == false); 
                 
        Debug.Log("Type COunt is" + types.Count());
        foreach (Type type in types)
        {
            Button btn = ArenaMenu.instance.CreateButton(games, type.FullName, type.Name);
            btn.gameObject.AddComponent<HorizontalLayoutGroup> ();
            _gameTypes[btn.name] = type;
            btn.onClick.AddListener(()=> 
            {
                Debug.Log("Clicked " + btn.name);
                Type gameType = _gameTypes[btn.name];
                if (_currentGameType == gameType)
                    return;

                if (_currentMenu != null)
                {
                    foreach (Transform child in optionsGO.transform) 
                    {
                        if (child == games.transform)
                            continue;
                        GameObject.Destroy(child.gameObject);
                    }
                    ArenaMenu.instance.ClearPanels();
                    ArenaMenu.instance.AddPanel(games);
                    GameObject.Destroy(_currentMenu);
                }
                Debug.Log("Adding:" + gameType.Name);

                _currentMenu = this.gameObject.AddComponent(gameType) as ArenaDebugMenu;
                _currentGameType = gameType;
            });
        }

        ArenaMenu.instance.AdjustScale();
    }

    public void OnStart()
    {
        if (_currentMenu == null)
            return;

        _currentMenu.StartGame();
    }   
}
