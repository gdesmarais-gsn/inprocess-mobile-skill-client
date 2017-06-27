using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

[RequireComponent(typeof(Animator))]
[ExecuteInEditMode]
public class AnimationOverride : MonoBehaviour {

	public RuntimeAnimatorController selectedController;
	public RuntimeAnimatorController storeController;
	public List<AnimationClip> animClips = new List<AnimationClip>();
	public List<string> animClips_old = new List<string>();
	public GameObject myObject;
	public Animator animatorToOverride;
	private AnimatorOverrideController animOverride;
	public string checkControllerName;
	
	void Awake(){
		myObject = gameObject;
		animatorToOverride = myObject.GetComponent<Animator> ();	
	}

	void Start(){
		if (selectedController != null)
			CreateAnimatorOverrideController(selectedController);
	}

	public void CreateAnimatorOverrideController(RuntimeAnimatorController controller){
		animatorToOverride.runtimeAnimatorController = null; //empty old previewed controller
		animOverride = new AnimatorOverrideController (); // reset controller
		animOverride.runtimeAnimatorController = controller;

		//----Swap Clips-------------
		for (int n = 0; n < animClips.Count; ++n) {
			string clipname = animOverride.animationClips [n].name;
			animOverride [clipname] = animClips [n];
		}
		//-----------------------------------------

		animatorToOverride.runtimeAnimatorController = animOverride;
	}

	
}

