using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class UISettings : MonoBehaviour {

		public Toggle musicToggle;
		public Toggle soundFXToggle;
        public Button closeButton;

        private void Start()
        {
            RefreshSettings();
        }

        void OnEnable()
		{
            closeButton.onClick.AddListener(OnCloseClick);
		}

        private void OnDisable()
        {
            closeButton.onClick.RemoveListener(OnCloseClick);
        }

        public void RefreshSettings()
        {
            bool musicOn = AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_MUSIC);
            musicToggle.isOn = musicOn;
            musicToggle.GetComponent<UIToggleSlider>().isOn(musicOn);

            bool sfxOn = AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_SFX);
            soundFXToggle.isOn = sfxOn;
            soundFXToggle.GetComponent<UIToggleSlider>().isOn(sfxOn);
        }

		private void reportSettingToggle(string type, bool current, bool to)
		{
			TriPeaksAnalytics.instance.SendUserGameSettings (type, current ? "on" : "off", to ? "on" : "off");
		}

        public void toggleMusic(bool isOn)
        {
			reportSettingToggle ("music", AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_MUSIC), isOn);
            musicToggle.isOn = isOn;
            musicToggle.GetComponent<UIToggleSlider>().isOn(isOn);
            AudioFactory.instance.SetChannelEnabled(SoundChannels.CHAN_MUSIC, isOn);
        }

        public void toggleSoundFX(bool isOn)
        {   
			reportSettingToggle ("sfx",AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_SFX), isOn);
			soundFXToggle.isOn = isOn;
            soundFXToggle.GetComponent<UIToggleSlider>().isOn(isOn);
            AudioFactory.instance.SetChannelEnabled(SoundChannels.CHAN_SFX, isOn);
        }

        void OnCloseClick()
        {
            this.gameObject.SetActive(false);
        }
    }
}
