using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Phoenix.Model;

namespace GSN.Skill.Phoenix.View
{
	public class NavbarView : BaseView
	{
		[SerializeField]
		private Image _gameTile;

        [SerializeField]
        private Image _maskedBar;
        [SerializeField]
        private Image _maskedButtons;

        [SerializeField]
        private Sprite _defaultBackground;
        [SerializeField]
        private Sprite _defaultPromo;

        [SerializeField]
        private Sprite _whiteSquare;

		private Material _barMat;
		private Material _buttonMat;

		void Awake()
		{
			_barMat = new Material(_maskedBar.material);
			_buttonMat = new Material(_maskedButtons.material);
		}

        public void SetGame(GameResource gameResource)
		{
			_gameTile.sprite = gameResource.navBarGameTile;
		}

        public void SetTheme(ScreenType screenType, GameResource gameResource)
		{
            Sprite spriteswap = _defaultBackground;
            Color tintColor = Color.white;
            switch (screenType)
            {
                case ScreenType.Home:
                    spriteswap = _defaultPromo;
                    tintColor = Color.white;
                    break;
                case ScreenType.TournamentSelect:
                    spriteswap = _whiteSquare;
                    tintColor = gameResource.tournamentFooterColor;
                    break;
                case ScreenType.GameHistory:
                    spriteswap = _whiteSquare;
                    tintColor = new Color(.34f, .41f, 1, 1);
                    break;
            }

            _maskedBar.sprite = spriteswap;
			_barMat.SetColor("_Color", tintColor);
            _maskedButtons.sprite = spriteswap;
			_buttonMat.SetColor("_Color", tintColor);

			_maskedBar.material = _barMat;
			_maskedButtons.material = _buttonMat;
        }

        public void SetPromoResource(Sprite promo)
        {
            _maskedBar.sprite = promo;
            _maskedButtons.sprite = promo;
        }
    }
} 