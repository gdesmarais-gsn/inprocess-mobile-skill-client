using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client
{
	internal interface IDestroyable
	{
		void Destroy();
	}

	/**
	* \brief Derive from this to allow static access to the only, global instance of your class.
	*
	* T should, most of the time, be your subclass of Singleton.  For example,
	* \code
	* public class AudioManager : Singleton<AudioManager>
	* \endcode
	* This is called the "curiously recursive templating pattern" or CRTP.  It allows this base class
	* to store each type of singleton separately, internally represented as
	* \code
	* private static T _instance;
	* \endcode
	* The derived class must also have a zero-argument constructor.  This allows the singleton to be created
	* the first time the instance is requested.
	*/
	public abstract class Singleton<T> : IDestroyable where T : Singleton<T>, new()
	{
		private static T _instance;

		///Create a new singleton and assign it to be the instance for this type.
		public Singleton()
		{
			if (_instance != null)
				Debug.LogError("Singleton already exists");
		}

		///Get the singleton instance for this type.  Creates it if it did not previously exist.
		public static T instance
		{
			get
			{
				if (_instance == null)
				{
					_instance = new T();
					if (_instance.destroyOnGameComplete())
						SingletonManager.instance.AddSingleton(_instance);

				}
				return _instance; 
			}
		}

		public void Destroy()
		{
			_instance = null;
		}

		protected virtual bool destroyOnGameComplete()
		{
			return Application.isPlaying;
		}
	}

	public abstract class SingletonManual<T> : IDestroyable where T : SingletonManual<T>
	{
		public static T instance { get; private set;}

		///Create a new singleton and assign it to be the instance for this type.
		public SingletonManual()
		{
			if (instance != null)
				Debug.LogError("Singleton already exists");
			instance = (T)this;
			if (instance.destroyOnGameComplete())
				SingletonManager.instance.AddSingleton(instance);
		}

		public void Destroy()
		{
			instance = null;
		}

		protected virtual bool destroyOnGameComplete()
		{
			return Application.isPlaying;
		}
	}

	public class SingletonManager : SingletonMonoBehaviour<SingletonManager>
	{
		private List<IDestroyable> _singletons = new List<IDestroyable>();

		internal void AddSingleton(IDestroyable s)
		{
			_singletons.Add(s);
		}

		public override void OnDestroy()
		{
			base.OnDestroy();
			foreach(IDestroyable s in _singletons)
				s.Destroy();
			_singletons.Clear();
		}
	}

	/**
	* \brief Derive from this to allow static access to the only, global instance of your MonoBehaviour.
	*
	* \see Singleton
	*
	* MonoBehaviours cannot have constructors, so setup is done in Awake().  If you override Awake(),
	* be sure to call base.Awake().
	*
	* As Singleton<T>, the instance is created if none previously existed.  If a SingletonMonoBehaviour<T>
	* is created this way, it will be added to a new GameObject named after the singleton's type and dropped in
	* the root of the hierarchy.
	*/
	public abstract class SingletonMonoBehaviour<T> : MonoBehaviour where T : SingletonMonoBehaviour<T> {
		private static T _instance;

		///Sets the instance to be this object, and logs an error if a different object is already the instance.
		public virtual void Awake() {
			if (_instance == this)
				return;
			else if (_instance != null)
				GsnDebug.LogError("Singleton", typeof(T).ToString(), "already exists");

			_instance = this as T;
		}

		///Returns the singleton instance of this type. Creates a new GameObject and adds a component of this type to it if it did not previously exist.
		public static T instance 
		{
			get 
			{
				if (_instance == null)
				{
					// create a new gameobject in the scene to hold our component
					GameObject obj = new GameObject(typeof(T).ToString());
					
					// add us as a component and keep a reference to the instance
					_instance = obj.AddComponent<T>();
				}

				return _instance; 
			}
		}

		public virtual void OnDestroy()
		{
			_instance = null;
		}

	}
}
