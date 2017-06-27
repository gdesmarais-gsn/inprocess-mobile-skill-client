using UnityEngine;
using System.Collections;
using TMPro;

namespace GSN.Skill.Games.Tripeaks
{
    public class UIPrizePoolItem : MonoBehaviour
    {
        [SerializeField]
        private TextMeshProUGUI _rankText;
        [SerializeField]
        private TextMeshProUGUI _fameText;
        [SerializeField]
        private TextMeshProUGUI _prizeText;
        [SerializeField]
        private GameObject _fameObject;

        public void SetPrizePoolText(string rank, string fame, string prize)
        {
            _rankText.text = rank;
            _fameText.text = fame + " Fame";
            _prizeText.text = prize;

            // if no fame hide fame object
            if (string.IsNullOrEmpty(fame))
                _fameObject.SetActive(false);
        }
    }
}
