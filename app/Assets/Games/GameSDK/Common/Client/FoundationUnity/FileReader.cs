using System.IO;
using GSN.Skill.Games.Common.Utils;
using UnityEngine;

namespace Gsn.Skill.Games.Common.Utils
{
    public class FileReader {

        static public TextReader CreateTextReader( string filename )
        {

            if (Application.platform == RuntimePlatform.Android) {
                UnityEngine.WWW www = new UnityEngine.WWW(filename);
                int iter = 1;
                while (!www.isDone)
                {
                    GsnDebug.Log ("CreateTextReader: Waiting for dictionary file load using WWW." + iter++ );
                }

                if (string.IsNullOrEmpty(www.error))
                {
                    GsnDebug.Log( "CreateTextReader: load complete" );

                    // Read the data as raw bytes, using a StringReader on WWW.text
                    // is very slow, on the order of >10 minutes to read the dictionary.
                    // The bottleneck is likely StringReader.ReadLine
                    //  (Skorski, 11-16-16, Unity 5.2.2)
                    return new StreamReader(new MemoryStream(www.bytes) );
                }
                else
                {
                    GsnDebug.LogError(("CreateTextReader: Can't load dictionary from file " + filename + " - " + www.error ).ToRed());
                }
                
                return null;

            }
            else
            {
                if (!File.Exists(filename)) {
                    GsnDebug.LogError(("CreateTextReader: " + filename + " doesn't exist").ToRed());
                    return null;
                }
                return new StreamReader(filename);
            }
        }
    }
}


