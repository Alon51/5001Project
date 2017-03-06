using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionCheck : MonoBehaviour {

	public ArrayReaction twoSuccess, plusSuccess, plusPlusSuccess;

	public bool completeFlag = false; //Flag that allows door to open once.

	public GameObject doorOne;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {

		if (twoSuccess.success && plusSuccess.success && plusPlusSuccess.success) {
			GlobalController.Instance.singleForLoopComplete = true;
			if (GlobalController.Instance.singleForLoopComplete && !completeFlag) {
				openDoor();
				completeFlag = true;
			}
		}
	}

	void openDoor(){
		doorOne.transform.position = new Vector3 (doorOne.transform.position.x, 
			doorOne.transform.position.y + 5.0f, 0);
	}
}



