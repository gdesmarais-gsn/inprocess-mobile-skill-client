using UnityEngine;
using UnityEngine.Audio;

namespace GSN.Skill.Games.Common.Client.Audio
{
	public static class AudioSourceExtensions
	{
		/// Tween an Audio Source to a certain volume over a certain number of seconds.
		public static void TweenToVolume(this AudioSource audioSource, float toVolume, float seconds = AudioFactory.VOLUME_CHANGE_SECONDS)
		{
			AudioFactory.TweenToVolume(audioSource, toVolume, seconds);
		}

		/// This function will fade the audio source out in seconds. 
		public static void FadeOutDestroy(this AudioSource audioSource, float seconds = AudioFactory.FADE_OUT_SECONDS)
		{
			AudioFactory.FadeOutDestroy(audioSource, seconds);
		}
	}
}
