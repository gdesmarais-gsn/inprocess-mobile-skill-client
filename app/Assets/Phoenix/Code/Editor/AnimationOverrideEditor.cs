using UnityEngine;
using UnityEditor;
using UnityEditor.Animations;
using System.Collections;
using System.Collections.Generic;

[CustomEditor(typeof(AnimationOverride))]

public class AnimationOverrideEditor : Editor{
	
	private int _animatorClipCount;


    public override void OnInspectorGUI(){
		serializedObject.Update ();
		AnimationOverride myTarget = (AnimationOverride)target;
		GUILayout.Label ("Choose Base Controller", EditorStyles.boldLabel);	
		
		
		//If an runtime controller already exists, show it in the selection field.
		if(myTarget.selectedController == null && myTarget.animatorToOverride.runtimeAnimatorController != null)
			myTarget.selectedController = myTarget.animatorToOverride.runtimeAnimatorController;
		
		myTarget.selectedController = (RuntimeAnimatorController)EditorGUILayout.ObjectField (myTarget.selectedController, typeof(RuntimeAnimatorController), true);
		if (myTarget.selectedController != null) {
			myTarget.storeController = myTarget.selectedController;
			_animatorClipCount = myTarget.storeController.animationClips.Length;
			
			//Initialize list if Controller has changed
			if( myTarget.checkControllerName != myTarget.storeController.name || myTarget.checkControllerName == null)
            {
				myTarget.animClips.Clear();
				//myTarget.animClips_old.Clear ();
				for (int n = 0; n < _animatorClipCount; ++n) {
					myTarget.animClips.Add (myTarget.storeController.animationClips[n]);
					//myTarget.animClips_old.Add(myTarget.storeController.animationClips[n].name);
				}
				myTarget.checkControllerName = myTarget.storeController.name;
				//If a new base controller is chosen, empty runtime controller
				myTarget.animatorToOverride.runtimeAnimatorController = null;
			}

            //If number of base controller animclips have changed
            if (myTarget.animClips.Count != _animatorClipCount)
            {
                int _difference = Mathf.Abs(_animatorClipCount - myTarget.animClips.Count);

                if (myTarget.animClips.Count < _animatorClipCount) // Clips have been added
                {
                    for (int n = 0; n < _difference; ++n)
                    {
                        myTarget.animClips.Add(myTarget.storeController.animationClips[myTarget.animClips.Count + _difference - 1]);                        
                    }                                                     
                }

                if (myTarget.animClips.Count > _animatorClipCount) // Clips have been removed
                {
                    myTarget.animClips.Clear();
                    for (int n = 0; n < _animatorClipCount; ++n)
                    {
                        myTarget.animClips.Add(myTarget.storeController.animationClips[n]);                       
                    }
                }
            }
           


            //Generate object fields for Animator Clips and their corresponding Animation Clip Overrides                        

            for (int n = 0; n < _animatorClipCount; ++n) {
				GetClipName(myTarget.storeController,n);
				myTarget.animClips[n] = (AnimationClip) EditorGUILayout.ObjectField (myTarget.animClips[n], typeof(AnimationClip),true);
                
            }

			GUI.color = Color.yellow;
			EditorGUILayout.HelpBox("Remember to Apply Changes!!!", MessageType.Warning, true);
			//EditorGUILayout.TextArea("Remember to Apply Changes", GUI.skin.GetStyle("HelpBox"));
			if(GUILayout.Button("Preview Changes")){
				myTarget.CreateAnimatorOverrideController(myTarget.storeController);
			}

			
			
		}		
		serializedObject.ApplyModifiedProperties ();
	}
	
	
	
	
	private void GetClipName(RuntimeAnimatorController ac, int n){
		GUILayout.Label (ac.animationClips[n].name, EditorStyles.boldLabel);
	}
	
}

