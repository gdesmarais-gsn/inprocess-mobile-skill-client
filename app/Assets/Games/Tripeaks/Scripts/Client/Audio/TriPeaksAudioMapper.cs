using UnityEngine;
using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	// NOTE: When adding new items to the enum, do not change the numbers assigned to the existing items
	public enum TriPeaksAudio
	{
		NoSound,
		StreakIncrement,
		Fireball,
		Extinguish,
		MenuMusic,
		GameMusic,
		TimeWarningMusic,
		TimeWarning30,
		CardReveal,
		CardPlace,
		CardInvalid,
		OneShotWildUsed,
		TikiCardUse,
		HazardCardUse,
		VolcanoTiki,
		TrapShow,
		TrapClear,
		BombTick,
		BombExplode,
		BombDiffuse,
		SharkReveal,
		SharkMatch,
		TimeWarning10,
		NinjaCard,
		Reshuffle,
		ButtonClick,
		LastCard,
		MaxStreak,
		GameMusic2,
		GameMusic3,
		GameMusic4,
		GameMusic5,
		GameMusic6,
		GameMusic7,
		GameMusic8,
		GameMusic9,
		GameMusic10,
		RollingScore,
		CardDeal,
		UITransition,
		ButtonRelease,
		PerfectGame,
		UITransitionQuick,
		CardCyclone,
		CardFall,
		TimeUp,
		DogBarkSlow,
		DogBarkFast,
		BombShow,
		RevealCollectible,
		PerfectGameBigWin,
		TreasureMap,
		CardBonus
	}
	
	public class TriPeaksAudioMapper : AudioMapper<TriPeaksAudio>
	{
	}
	
	
}
