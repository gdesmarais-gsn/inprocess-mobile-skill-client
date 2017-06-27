using System;
using GSN.Skill.Games.Common.Client.Audio;
using UnityEngine;

namespace GSN.Skill.Games.Common.Client
{
	/// <summary>
	/// This class is the Base class for displaying settings in the UI. 
	/// </summary>
	public abstract class UISettingsBase : UIInfoTab
	{
		/// <summary>
		/// Is this panel visible.  This allows us to keep the panel active at all times.
		/// </summary>
		private bool _visible = true;

		/// <summary>
		/// Helper function that is used to toggle the sound and set the button in the UI.
		/// </summary>
		/// <param name="isOn">If set to <c>true</c> is on.</param>
		/// <param name="channel">Channel.</param>
		/// <param name="setFunc">Set func.</param>
		private void ToggleSetting(bool isOn, SoundChannels channel, Action<bool> setFunc)
		{
			string from = AudioFactory.instance.ChannelIsEnabled (channel) ?"on":"off";
			string to = isOn ?"on":"off";

			GameAnalyticSender.instance.SendUserGameSettings (channel.ToString(), from, to);
			
			setFunc(isOn);
			AudioFactory.instance.SetChannelEnabled(channel, isOn);
		}
		
		/// <summary>
		/// Toggle music
		/// </summary>
		/// <param name="isOn"></param>
		public void ToggleMusic(bool isOn)
		{
			ToggleSetting (isOn, SoundChannels.CHAN_MUSIC, SetMusic);
		}
		
		/// <summary>
		/// Toggle sound fx
		/// </summary>
		/// <param name="isOn"></param>
		public void ToggleSoundFX(bool isOn)
		{			
			ToggleSetting (isOn, SoundChannels.CHAN_SFX, SetSoundFX);
		}

		/// <summary>
		/// Sets the state of the music button in the game specific UI
		/// </summary>
		/// <param name="isOn">If set to <c>true</c> is on.</param>
		protected abstract void SetMusic (bool isOn);

		/// <summary>
		/// Sets the state of tje sound effects buttom om the game specific UI
		/// </summary>
		/// <param name="isOn">If set to <c>true</c> is on.</param>
		protected abstract void SetSoundFX (bool isOn);

		/// <summary>
		/// This function is called to setup any data you want on the info tabs.
		/// </summary>
		public override void Setup()
		{
			gameObject.SetActive(true);
			
			SetMusic(AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_MUSIC));
			SetSoundFX(AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_SFX));
			
			visible = false;
		}
		
		/// <summary>
		/// Toggle the visibility of the settings panel.
		/// This allows us to keep the panel active at all times.
		/// </summary>
		public override bool visible
		{
			set
			{
				if (_visible == value)
					return;
				
				_visible = value;
				
				gameObject.transform.localScale = _visible ? Vector3.one : Vector3.zero;
			}
		}
		
	}
}
