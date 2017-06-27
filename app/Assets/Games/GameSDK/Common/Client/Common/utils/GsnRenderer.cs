using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{

    public class GsnRenderer
    {
        private static GsnRenderer _instance;

        public static GsnRenderer instance
        {
            get
            {
                if (_instance == null)
                    _instance = new GsnRenderer();

                return _instance;
            }
        }

        private List<IGsnRenderable> _renderables;

        private GsnRenderer()
        {
            _renderables = new List<IGsnRenderable>();
        }

        public void reconstruct()
        {
            _renderables.Clear();
        }

		// TODO: Investigate performance of adding and removing from a List
        public void add(IGsnRenderable renderable)
        {
            _renderables.Add(renderable);
        }

		// TODO: Investigate performance of adding and removing from a List
        public void remove(IGsnRenderable renderable)
        {
            _renderables.Remove(renderable);
        }

        public void render(int t)
        {
            int len = _renderables.Count;
            for (int i = 0; i < len; ++i)
            {
                _renderables[i].render(t);
            }
        }
    }
}
