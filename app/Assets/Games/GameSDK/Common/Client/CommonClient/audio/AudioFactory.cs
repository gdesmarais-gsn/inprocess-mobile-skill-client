using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Audio 
{
	public enum SoundChannels
	{
		CHAN_SFX,
		CHAN_MUSIC,
	};

	public struct AudioOptions
	{	
		public float volume;
		public uint cooldown;
		public bool loop;
		public float pitch;
		public float delayTime;
		public float fadeToVol;
        public float fadeInSecs;
		public float duckMusicVolume;
	 }
    
    
	/// AudioFactory - Handles management and playback of Audio Assets
	public class AudioFactory : SingletonMonoBehaviour<AudioFactory>
	{
		private const int MS_PER_DAY = 86400000; // milliseconds per day. 
		
		private uint _tZero;

		private int _duckCount = 0;
		private float _originalMusicUnDuckedVolume;
		private AudioSource _musicAudioSource;

		public const float VOLUME_CHANGE_SECONDS = 0.5f;
		public const float FADE_OUT_SECONDS = 1.0f;
		private const float DEFAULT_DUCK_IN_MUSIC_TIME = 0.1f;
		private const float DEFAULT_DUCK_OUT_MUSIC_TIME = 0.3f;
		private string [] prefKeys = new string[2] { "sfxEnabled", "musicEnabled"};

		EnumeratedArray<AudioChannel> _channels = new EnumeratedArray<AudioChannel>(typeof(SoundChannels));

		public override void Awake ()
		{
			base.Awake ();

			for (int i = 0; i < _channels.Length; ++i)
			{
				GameObject channelGO = new GameObject(prefKeys[i]);
				channelGO.transform.SetParent(transform);
				_channels[i] = channelGO.AddComponent<AudioChannel>();
				_channels[i].Init(prefKeys[i]);
			}
		}

		void Start()
		{
			_tZero = GsnGameUtils.GetMSSinceMidnight();
		}

		private uint GetPlayTimeStamp() {
			uint ts = GsnGameUtils.GetMSSinceMidnight();
			
			if (ts > _tZero)
			{
				return ts - _tZero;
            }
            
            return ts + MS_PER_DAY - _tZero;
        }

		public const float DEFAULT_VOLUME = 1f;
		public const float DEFAULT_DUCK_MUSIC_VOLUME = 1f;
		public const uint DEFAULT_COOLDOWN = 50;
		public const bool DEFAULT_LOOP = false;
		public const float DEFAULT_PITCH = 1f;
		public const float DEFAULT_DELAY = 1f;
		public const float DEFAULT_FADE_TO_VOL = 1.0f;
		public const float DEFAULT_FADE_IN_SECS = 0.0f;


        

        /// This function sets the default options for playing a sound. Before playing a sound if you need to override settings, call this then set the specific overrides that you want.  Pass the options into \ref PlayAudio
        public static AudioOptions DefaultOptions()
		{
			return new AudioOptions 
			{ 
				volume = DEFAULT_VOLUME,
				cooldown = DEFAULT_COOLDOWN,
				loop = DEFAULT_LOOP,
				pitch = DEFAULT_PITCH,
				delayTime = DEFAULT_DELAY,
				fadeToVol = DEFAULT_FADE_TO_VOL,
				fadeInSecs = DEFAULT_FADE_IN_SECS,
				duckMusicVolume = DEFAULT_DUCK_MUSIC_VOLUME,
			};
		}


		#region Audio Helpers

		public AudioSource PlaySoundEffect<E>(
			E audio, ///< Enum Index to the sound you want to play
			bool random = false
			)
		{
			return PlayAudio(audio, SoundChannels.CHAN_SFX, random);
		}

		public AudioSource PlaySoundEffect<E>(
			E audio, ///< Enum Index to the sound you want to play
			AudioOptions options,	///< Options top play the sound with
			bool random = false
			)
		{
			return PlayAudio(audio, options, SoundChannels.CHAN_SFX, random);
		}

		public AudioSource PlayMusic<E>(
			E audio, ///< Enum Index to the sound you want to play
			bool random = false
			)
		{
			return PlayAudio(audio, SoundChannels.CHAN_MUSIC, random);
		}

		public AudioSource PlayMusic<E>(
			E audio, ///< Enum Index to the sound you want to play
			AudioOptions options, 	///< Options top play the sound with
			bool random = false
		)
		{
			return PlayAudio(audio, options, SoundChannels.CHAN_MUSIC, random);
		}

		/// This function will play an audio with \ref DefaultOptions.  It will return the AudioSource for the object played.
		private AudioSource PlayAudio<E>(
			E audio, ///< Enum Index to the sound you want to play
			SoundChannels chan,
			bool random = false
			)
		{
			return PlayAudio<E> (audio, DefaultOptions (), chan, random);
		}

		/// This function will play an audio with options you override.  Create the options using \ref DefaultOptions, then override whatever you need to. It will return the AudioSource for the object played.
		private AudioSource PlayAudio<E>(
			E audio, 				///< Enum Index to the sound you want to play
			AudioOptions options, 	///< Options top play the sound with
			SoundChannels channel,
			bool random
			)
		{
			AudioMapper<E> mapper = AudioMapper<E>.instance;
			if (mapper == null)
			{
				GsnDebug.LogError("Audio Mapper is not in the scene. Please Add One");
				return null;
			}

			BaseMapEntry entry = mapper.getEntry(audio);
			if (entry == null)
				return null;

			AudioClip clip = entry.getClip (random);
			if (clip == null)
				return null;

			uint tnow = GetPlayTimeStamp(); // what time is it now?
			
			//_lastTimePlayed is 0 if this has never been played before.  Check that in case we try to play when tnow < cooldown
			if (tnow - entry._lastTimePlayed < options.cooldown && entry._lastTimePlayed != 0)
			{   // we are trying to play the asset too soon after it was last played.
				return null;
			}
			
			entry._lastTimePlayed = tnow;
			string name = typeof(E).FullName + "." + audio.ToString ();
			GameObject audioGameObject = new GameObject(name);
			audioGameObject.transform.position = Vector3.zero;

			// add an audio source and set it up
			AudioSource source = audioGameObject.AddComponent<AudioSource>();
			source.clip = clip;
			
			float fadeToVol = 0;
			float fadeInSecs = 0;
			bool muteSound = true;
			if (_channels[channel].isEnabled)
			{
				fadeToVol = options.fadeToVol;
				fadeInSecs = options.fadeInSecs;
				muteSound = false;
			}
			source.volume = options.volume;
			source.pitch = options.pitch;
			source.loop = options.loop;
			source.mute = muteSound;

			_channels[channel].AddSound(audioGameObject);
			
			// play the clip
			if (options.loop)
			{
				source.PlayDelayed (options.delayTime);
			}
			else 
			{
				source.PlayOneShot(source.clip);
				// Destroy the gameObject we created to host the audio source after the clip duration
				GameObject.Destroy(audioGameObject, source.clip.length + options.delayTime);
			}
			//Check to see if we want to Duck music volume
			if (channel == SoundChannels.CHAN_SFX && options.duckMusicVolume < 1.0f)
			{
				instance.StartCoroutine (HandleMusicDuckingAndUnducking (source, options.duckMusicVolume, options.delayTime));
			}

			if (fadeInSecs != 0.0f) 
				source.TweenToVolume(fadeToVol, fadeInSecs);
			
			// return the GO in case the caller wants to stop the audio before it completes
			return source;
		}


		/// This function will stop all sounds on a channel.  You can specify how quickly the sounds will fade.
		public void StopAudiosOnChan(
			SoundChannels chan, 	///< Channel to stop all sounds on
			float fadeTime = 0.0f	///< Fade time to fade sound out. Default is 0.
			)
		{
			AudioChannel channel = _channels [chan];
			channel.FadeOutDestroy(fadeTime);
		}

		/// Is the sound channel enabled?
		public bool ChannelIsEnabled(
			SoundChannels chan 	///< Channel to test for
			)
		{
			return _channels [chan].isEnabled;
		}

		/// Set the sound channel enabled or disabled
		public void SetChannelEnabled(
			SoundChannels chan, 	///< Channel to set state of
			bool e 					///< State to set the channel to
			)
		{
			_channels [chan].isEnabled = e;
		}

		#endregion

		/// Tween an Audio Source to a certain volume over a certain number of seconds.
		public static void TweenToVolume(
			AudioSource audioSource, 				///< Source to tween
			float toVolume, 						///< Volume to tween to	
			float seconds = VOLUME_CHANGE_SECONDS	///< Seconds to tween the volume in
			)
		{
			instance.StartCoroutine(instance.InternalTweenToVolume(audioSource, toVolume, seconds));
		}

		private IEnumerator InternalTweenToVolume(AudioSource audioSource, float toVolume, float seconds, bool checkForDucking = false)
		{
			float startVolume = audioSource.volume;
			float changePerSecond = Mathf.Abs(toVolume - startVolume) / seconds;
			while (audioSource.volume != toVolume)
			{
				// In the situation where we are tweening back up from a ducked audio track, we want to constantly be on the lookout for a new audio request that needs to duck.
				// If we encounter a new ducking request, we want to stop tweening the unduck.  
				if (checkForDucking && _duckCount > 0)
				{
					break;
				}
				audioSource.volume = Mathf.MoveTowards(audioSource.volume, toVolume, changePerSecond * Time.deltaTime);
				yield return null;
			}
		}

 
		/// <summary>
		/// Handles the audio ducking and unducking.  Audio Ducking is a way to lower the main music track while a sound effect is playing. 
		/// </summary>
		/// <returns>The audio ducking and unducking.</returns>
		/// <param name="audioSourceCausingDuck">Audio source causing duck. (Sound Effect that is requesting ducking)</param>
		/// <param name="toVolume">To volume. (Volume the Music track should go to)</param>
		/// <param name="fadeInSeconds">Seconds to fade in and out.</param>
		/// <param name="delayTime">Delay time.</param>
		private IEnumerator HandleMusicDuckingAndUnducking( AudioSource audioSourceCausingDuck, float toVolume, float delayTime)
		{
			if (_musicAudioSource == null)
			{
				// Get the music Channel, and find the audio source.
				AudioChannel musicChannel = _channels[SoundChannels.CHAN_MUSIC];
				Transform child = musicChannel.transform.GetChild(0);
				if (child != null)
				{
					_musicAudioSource = child.gameObject.GetComponent<AudioSource> ();
				}
				_originalMusicUnDuckedVolume = _musicAudioSource.volume;
			}

			if (_musicAudioSource != null)
			{
				float currentVol = 1;
				currentVol = _musicAudioSource.volume;
				// Now duck the volume of the music trackGsnDebug.LogError ("DUCKING About to start :  Duck Count: " +_duckCount);
				instance.StartCoroutine(instance.InternalTweenToVolume(_musicAudioSource, toVolume, DEFAULT_DUCK_IN_MUSIC_TIME));
				GsnDebug.LogError ("DUCKING StartCoroutine(instance.InternalTweenToVolume called" );
				// Keep track of the number of things requesting ducking.
				_duckCount++;
				yield return new WaitForSeconds(delayTime + audioSourceCausingDuck.clip.length);  
				// If no other sound effect is requesting ducking, go ahead and unduck the music track.
				if (--_duckCount == 0)
				{
					instance.StartCoroutine (instance.InternalTweenToVolume (_musicAudioSource, _originalMusicUnDuckedVolume, DEFAULT_DUCK_OUT_MUSIC_TIME, true));
				}
			}
		}
		 
		/// This function will fade the audio source out in seconds. 
		public static void FadeOutDestroy(
			AudioSource audioSource, 			///< AudioSource to tween
			float seconds = FADE_OUT_SECONDS	///< Time to fade out in
			)
		{
			instance.StartCoroutine(instance.InternalFadeOutDestroy(audioSource, seconds));
		}

		private IEnumerator InternalFadeOutDestroy(AudioSource audioSource, float seconds)
		{
			GameObject.DontDestroyOnLoad(audioSource.gameObject);

			yield return StartCoroutine(InternalTweenToVolume(audioSource, 0.0f, seconds));
			GameObject.Destroy(audioSource.gameObject);
		}
 
	}

	public class AudioChannel : MonoBehaviour
	{
		private string _prefKey;
		private bool _enabled = true;
		//private float _currentVol = 1.0f;



		public void Init(string key)
		{
			_prefKey = key;

			isEnabled = PlayerPrefs.GetInt(_prefKey, 1) == 1;
		}

		public void AddSound(GameObject audioGameObject)
		{
			audioGameObject.transform.SetParent(transform);
		}

		public bool isEnabled
		{
			get
			{
				return _enabled;
			}
			set
			{
				_enabled = value;
				MuteAll(!value);

				PlayerPrefs.SetInt(_prefKey, value?1:0);
			}
		}

		/// This function will stop all sounds on a channel.  You can specify how quickly the sounds will fade.
		public void FadeOutDestroy(
			float fadeTime = 0.0f,	///< Fade time to fade sound out. Default is 0.
			bool destroy = false
			)
		{
			for (int i = 0; i < transform.childCount; ++i)
			{
				Transform child = transform.GetChild(i);
				AudioSource audioS = child.gameObject.GetComponent<AudioSource>();
				audioS.FadeOutDestroy(fadeTime);
			}
		}

		public void TweenAll(
			float tweenTo,
			float fadeTime = 0.0f	///< Fade time to fade sound out. Default is 0.
			)
		{
			//_currentVol = tweenTo;
			for (int i = 0; i < transform.childCount; ++i)
			{
				Transform child = transform.GetChild(i);
				AudioSource audioS = child.gameObject.GetComponent<AudioSource>();
				audioS.TweenToVolume(tweenTo, fadeTime);
			}
		}

		public void MuteAll(bool mute)
		{
			for (int i = 0; i < transform.childCount; ++i)
			{
				Transform child = transform.GetChild(i);
				AudioSource audioS = child.gameObject.GetComponent<AudioSource>();
				audioS.mute = mute;
			}
		}

	}
}

