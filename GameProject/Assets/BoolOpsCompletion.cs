using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoolOpsCompletion : MonoBehaviour {
	
	public ArrayReaction upSuccess, notUpSuccess;
	public ArrayReaction replacementUp, replacementNotUp;
	public bool useElevator = false;
	public bool goingUp = true;

	private bool completeFlag = false; //Flag that allows door to open once.

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (upSuccess.success && replacementUp.giveName == "ReplacementUp") {
			if (!GlobalController.Instance.boolOpsComplete && !completeFlag) {
				GlobalController.Instance.boolOpsComplete = true;
				useElevator = true;
			}
		}
		if (notUpSuccess.success && replacementNotUp.giveName == "ReplacementNotUp") {
			if (!GlobalController.Instance.boolOpsComplete && !completeFlag) {
				GlobalController.Instance.boolOpsComplete = true;
				useElevator = true;
				goingUp = false;
			}	
		}
	}
}
