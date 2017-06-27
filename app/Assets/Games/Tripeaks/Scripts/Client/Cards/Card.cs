using UnityEngine;
using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class Card : PooledMonoBehaviour
	{	
		public Animator _animator;
		public AnimCurve _cardHop;

		protected int _value;
		protected int _index;
		protected int _cardID;
		protected int _flags;
		protected CardType _cardType;

		public MeshRenderer _cardFrontRenderer;
		public MeshRenderer _cardBackRenderer;
		public SpriteRenderer[] _foregroundSprites;

		PileID _PileID = PileID.Deal;

		private OverlayBase _overlay = null;

		private bool _faceUp = false;

		public const float DEAL_MOVE_TIME = 0.4f;
		private const float TABLEAU_MOVE_TIME = .55f;

		private const string CARD_HOP_RESOURCE = 		"ANIM_CURVE_CardHop";

		private const string PLAYFIELD_DEAL_1 = 		"PlayfieldCard_Deal1";
		private const string PLAYFIELD_DEAL_2 = 		"PlayfieldCard_Deal2";
		private const string DRAWPILE_DEAL = 			"DrawPile_Deal";
		private const string SHAKE = 					"FaceUp_Shake";
		private const string FACEDOWN_SHAKE = 			"FaceDown_Shake";
		private const string DRAWPILE_FALL = 			"DrawPile_Fall";
		private const string PLAYFIELD_FACEDOWN_FALL = 	"FaceDown_Fall";
		private const string PLAYFIELD_FACEUP_FALL = 	"FaceUp_Fall";
		private const string REVEAL = 					"Reveal";
		private const string UNREVEAL =					"Unreveal";
		private const string FACEDOWN_OffSCREEN =		"FaceDown_Offscreen";
		private const string WASTEPILE_FALL =			"WastePile_Fall";
		private const string WILD_FALL =				"WildCard_Fall";
		private const string REVEAL_DRAW_PILE =			"Draw";		
		private const string NINJA_SPIN = 				"NinjaSpin";
		private const string ANIM_CLIP_FACE_UP_IDLE = 	"ANIM_CLIP_Card_FaceUp_Idle";
		private const string CYCLONE = 					"Cyclone";
		
		private float SPIN_DIST_1 = .25f;
		private float SPIN_DIST_2 = 1.25f;

		private float RANDOM_MOVE_DIST = 10.0f;
		private float RANDOM_MOVE_SPEED = .5f;

		private bool _waitForAnimationToEndToShowOverlay = false;
		protected Color[] _timeOfDayTint = new Color[] { Color.white,
														new Color(1, .9411f, .9815f, 1),
														new Color(.8235f, .8235f, 1, 1) };			

		protected const int CARDS_IN_SUIT = 13;
        private Vector3 _originPos;
        private Vector3 _pendingTweenDest;
		private bool _pendingTween = false;

		public int index 
		{
			get { return _index;}
		}

		public int cardID 
		{
			get { return _cardID;}
		}

		public int value 
		{
			get { return _value;}
		}

		public int flag 
		{
			get { return _flags;}
		}

		public CardType cardType
		{
			get { return _cardType;}
			set { _cardType = value;}
		}
		
		public PileID pileId
		{
			get {return _PileID;}
		}
		
		public bool faceUp
		{
			get { return _faceUp;}
            set { _faceUp = value; }
        }

		public virtual void setCard (int cardId, int index, PileID pileID, CardType cardType, DeckData deckData)
		{
			_flags = cardId >> 8;
			_cardID = cardId;
			_value = cardId - (_flags<<8);
			_index = index;
			_PileID = pileID;
			_cardType = cardType;

			_faceUp = false;
		}

		void OnMouseDown ()
		{
            View view = (View)ViewBase.Instance;

            if (!view.CanSendInputToModel(_cardID))
            {
                return;
            }

			switch (_PileID) 
			{
			case PileID.Tableau:
				view.Send (new CardClickedMessage(_index));
				break;
			case PileID.Deal:
				view.Send (new DealMessage());
				break;
			case PileID.Hold:
				view.Send (new HoldMessage());
				break;
			};
		}

		public void FlipCard (bool faceUp, bool showOverlay = true)
		{
			if (_faceUp == faceUp)
				return;

			_faceUp = faceUp;

			if (_PileID == PileID.Deal || _PileID == PileID.OneShotWild)
				CardRevealDraw();
			else if (_faceUp)
				CardReveal(showOverlay);
			else
				CardUnreveal();
		}

		public void SetPile( PileID pileID )
		{
			_PileID = pileID;
		}

		public void MoveCardWithRot(Vector3 destPos, Quaternion destRot, float tweenTime = TABLEAU_MOVE_TIME)
		{
			float moveDistance = Vector3.Distance (this.transform.position, destPos);

			if ( moveDistance > 0)
			{		
				float distX = this.transform.position.x -  destPos.x;
	
				// Set the z level. not reason to tween it
				transform.position = new Vector3( transform.position.x, transform.position.y, destPos.z );
				
				// Get the distance without the Z
				float moveTime = /*Vector3.Distance (this.transform.position, destPos) **/ tweenTime;
					
				LeanTween.moveX(this.gameObject, destPos.x, moveTime).setOnComplete( TweenComplete ).setEase(LeanTweenType.easeInQuad);
				LeanTween.moveY(this.gameObject, destPos.y, moveTime).setOnComplete( TweenComplete ).setEase(_cardHop.animationCurve);
				
				
				float absDistX = Mathf.Abs(distX);
				
				int rotMod = 0;
				
				if ( absDistX >= SPIN_DIST_2)
					rotMod = 2;
				else if ( absDistX >= SPIN_DIST_1)
					rotMod = 1;
					
				if ( distX < 0)
					rotMod *= -1;
					
				// get how far to naturally rotate
				float angle = destRot.eulerAngles.z - transform.rotation.eulerAngles.z;
				
				// add full rotations			
				angle += rotMod * 360;
				
				LeanTween.rotateAround(this.gameObject, Vector3.forward, angle, moveTime ).setEase(LeanTweenType.easeInQuad);
			}
		}
		
		
		public void MoveCard(Vector3 destPos, float tweenTime = DEAL_MOVE_TIME, bool makeSound = true)
		{
			float moveDistance = Vector3.Distance (this.transform.position, destPos);

			if ( moveDistance > 0) 
			{
				// if tweening, save this position and set it when done
				if ( LeanTween.isTweening(this.gameObject))
				{
					_pendingTweenDest = destPos;
					_pendingTween = true;
					return;
				}
				
				// Skip the tween if there is no time
				if( tweenTime == 0 )
				{
					transform.position = destPos;
					return;
				}
				
				if ( makeSound)
					LeanTween.move(this.gameObject, destPos, tweenTime).setEase( LeanTweenType.easeInQuad  ).setOnComplete( TweenCompleteWithSound );
				else
					LeanTween.move(this.gameObject, destPos, tweenTime).setEase( LeanTweenType.easeInQuad  ).setOnComplete( TweenComplete );
			}
				
		}
		
		public void TweenCompleteWithSound()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.CardPlace);

			TweenComplete();		
		}
		
		
		public void TweenComplete()
		{	
			if (_pendingTween)
			{
				_pendingTween = false;
				transform.position = _pendingTweenDest;
			}				
		}
		
		public void MoveCardNinjaStar(Vector3 destPos, float tweenTime = GameModel.NINJA_THROW_TIME * .001f)
		{
			// if this card is falling to waste and it is used in an ninja star move, cancel the waste move and start the ninja
			
			if ( LeanTween.isTweening(this.gameObject))
				LeanTween.cancel(this.gameObject);
				
			destPos.z = -5f;
			// Activate ninja Animation
			LeanTween.move(this.gameObject, destPos, tweenTime).setOnComplete(MoveCardInRandomDirection);	
			_animator.Play(NINJA_SPIN);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.NinjaCard);
		}
		
		public void MoveCardInRandomDirection()
		{
			enableCollider (false);
            _originPos = transform.position;
			Vector3 destPos = transform.position;
			
			Vector3 dir = new Vector3( 0,Random.Range(-.25f,.25f ), 0 );
			dir.x = ( Random.Range(0,2) == 0)?1.0f:-1.0f;
			
			dir.Normalize();
			destPos += dir * RANDOM_MOVE_DIST;
			
			_animator.Play(NINJA_SPIN);
            LeanTween.move(this.gameObject, destPos, RANDOM_MOVE_SPEED).setOnComplete(ResetCardPos);
		}

        // used to reset card location after moving in random direction
        public void ResetCardPos()
        {
            transform.position = _originPos;
			CardFaceDownOffScreen();
        }
		
		public void MoveCardWithBounce(Vector3 destPos, float tweenTime = GameModel.NINJA_THROW_TIME * .001f)
		{
			float moveDistance = Vector3.Distance (this.transform.position, destPos);

			if ( moveDistance > 0)
			{	
				destPos.z = -5f;	
				Vector3 Distance = destPos - transform.position;
				
				// TODO y is 2 plus highest point
				float y = transform.position.y + 2;
				if ( transform.position.y < destPos.y)
					y = destPos.y + 2;
					
				LTBezierPath ltPath = new LTBezierPath( new Vector3[] {new Vector3(transform.position.x,transform.position.y, destPos.z),
															new Vector3(transform.position.x + (Distance.x * .33f), y, destPos.z),
															new Vector3(transform.position.x + (Distance.x * .66f), y, destPos.z), 
															destPos} );

				LeanTween.move(this.gameObject, ltPath.pts, tweenTime).setOnComplete( MoveCardInRandomDirection ).setEase( LeanTweenType.easeOutQuad  ); // animate 

			}

			switch (_flags)
			{
				case GameModel.SHARK_FLAG:
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.SharkMatch);		
				break;
			}
		}
		
		public void KillTweenAndAnimations()
		{
			if ( LeanTween.isTweening(this.gameObject))
			{
				LeanTween.cancel( this.gameObject );
			}
		}
		
		
		void Update()
		{
			if ( _waitForAnimationToEndToShowOverlay && _overlay != null && !_overlay.gameObject.activeSelf)
			{				
				int layerIndex = 0;
				bool animIsDonePlaying = false;
				AnimatorClipInfo[] clipInfo = _animator.GetCurrentAnimatorClipInfo(layerIndex);
				for (int i=0; i<clipInfo.Length; ++i)
				{
            		if (string.Compare(clipInfo[i].clip.name, ANIM_CLIP_FACE_UP_IDLE) == 0)
					{
						animIsDonePlaying = true;
						break;
					}
				}
					
				if ( animIsDonePlaying)
				{
					OverlayAppear();
					_waitForAnimationToEndToShowOverlay = false;
				}
			}
		}

		public void PlayfieldDeal()
		{
			_animator.Play(PLAYFIELD_DEAL_1);
		}

		public void PlayfieldDealActive()
		{
			_animator.Play(PLAYFIELD_DEAL_2);
		}

		public void DrawPileDeal()
		{
			_animator.Play(DRAWPILE_DEAL);
			enableCollider (true);
			_pendingTween = false;
		}

		public void CardShake()
		{
			if ((_flags & GameModel.ONE_SHOT_WILD_FLAG) > 0)
				_animator.Play(FACEDOWN_SHAKE);
			else
				_animator.Play(SHAKE);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.CardInvalid);
		}

		public void CardReveal( bool showOverlay )
		{
			_animator.Play(REVEAL);
			if ( showOverlay)
				_waitForAnimationToEndToShowOverlay = true;
				
			switch (_flags)
			{
				case GameModel.SHARK_FLAG:
					AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.SharkReveal);
					break;
				case GameModel.SHARK_BAIT_FLAG:
					AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RevealCollectible);
					break;
				case GameModel.DYNAMITE_FLAG:
					AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombShow);
					break;
				default:
					AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.CardReveal);
					break;
			}
			
		}		
		
		public void CardUnreveal()
		{
			_animator.Play(UNREVEAL);
		}
		
		public void CardFaceDownOffScreen()
		{
			_animator.Play(FACEDOWN_OffSCREEN);
		}

		public void CardWastePileFall()
		{
			_animator.Play(WASTEPILE_FALL);
			enableCollider (false);
		}
		
		public void DrawPileFall()
		{
			// TODO things
			ClearOverlay();
			_animator.Play (DRAWPILE_FALL);
			// need to kill the collider comp 
			enableCollider (false);
		}
		
		public void CardRevealDraw()
		{
			_animator.Play(REVEAL_DRAW_PILE);
		}

		public void PlayfieldCardFall()
		{
			KillTweenAndAnimations();
			int rand = Random.Range(0,3);

			_animator.SetInteger("FallType", rand);

			if (_faceUp)
				_animator.Play(PLAYFIELD_FACEUP_FALL);
			else
				_animator.Play(PLAYFIELD_FACEDOWN_FALL);
			HideOverlay();
			enableCollider (false);
		}

		public void CardCyclone()
		{
			KillTweenAndAnimations();
			_animator.Play(CYCLONE);
		}

		public void enableCollider(bool e)
		{
			BoxCollider boxCollider = GetComponent<BoxCollider>();
			if (boxCollider != null)
				boxCollider.enabled = e; 
		}
		
		public void SetToIdleAnim()
		{
			//_animator.Play(IDLE);
		}


		public void AddOverlay(GameObject overlay)
		{
			_overlay = overlay.GetComponent<OverlayBase>();
			_overlay.transform.SetParent(this.transform, false);
			_overlay.gameObject.SetActive(false);
		}
		
		public void OverlayAppear()
		{
			if ( _overlay != null )
			{
				_overlay.gameObject.SetActive(true);
				_overlay.ShowOverlay();
			}
		}
		
		public void HideOverlay()
		{
			if ( _overlay != null )
			{
				_overlay.HideOverlay();
				_overlay.GetComponent<PooledMonoBehaviour>().Free();
				_overlay = null;
			}
		}
		
		public void ClearOverlay()
		{
            if ( _overlay != null )
			{
                _overlay.ClearOverlay();
				GameObject.Destroy(_overlay.gameObject, 2f);
				_overlay = null;
			}
		}
		
		public void onUpdateDynamiteCounter(int dynamiteCounter)
		{
			if ( _overlay != null )
			{
				if (_overlay is DynamiteHazard)
				{
					DynamiteHazard dynamiteOverlay = (DynamiteHazard)_overlay;
					if ( dynamiteOverlay != null )
					{
						dynamiteOverlay.UpdateCounter(dynamiteCounter);
					}
				}
			}
		}

		public virtual void setCardTint(int timeOfDay)
		{
			_cardFrontRenderer.material.SetColor("_Color", _timeOfDayTint[timeOfDay]);
			_cardBackRenderer.material.SetColor("_Color", _timeOfDayTint[timeOfDay]);

			for(int i = 0; i < _foregroundSprites.Length; i++)
			{
				_foregroundSprites[i].material.SetColor("_Color", _timeOfDayTint[timeOfDay]);
			}
		}
		
		public virtual string GetPrettyString()
		{
			switch (_flags)
			{
			case GameModel.GOLDEN_TIKI_FLAG:
				return "G";
			case GameModel.BLACK_TIKI_FLAG:
				return "B";
			case GameModel.RED_TIKI_FLAG:
				return "R";
			case GameModel.FLOWER_TIKI_FLAG:
				return "BL";
			case GameModel.VOLCANO_TIKI_FLAG:
				return "V";
			case GameModel.SHARK_FLAG:
				return "S";
			case GameModel.SHARK_BAIT_FLAG:
				return "BA";	
			case GameModel.DYNAMITE_FLAG:
				return " D";
			case GameModel.TRAP_FLAG:
				return " T";	
			}
				
			return "";
		}
	}
}
