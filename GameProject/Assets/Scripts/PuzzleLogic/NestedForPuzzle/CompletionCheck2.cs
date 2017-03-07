using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionCheck2 : MonoBehaviour {
	
	/*
	public ReactToTileThree threeSuccess;
	public ReactToTilePlusL2 plusSuccess;
	public ReactToTilePlusPlusL2 plusPlusSuccess;
	public ReactToTileFive fiveSuccess;
	public ReactToTileX xSuccess;
	public ReactToTileY ySuccess;
	*/

	public ArrayReaction threeSuccess, fiveSuccess, xSuccess, ySuccess, plusSuccess, plusPlusSuccess;
	public ArrayReaction replacementThree, replacementFive, replacementX, replacementY, replacementPlus, replacementPlusPlus;

	private bool completeFlag = false; //Flag that allows door to open once.

	public GameObject doorTwo;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if (threeSuccess.success && replacementThree.giveName == "Replacement3" &&
			plusSuccess.success && replacementPlus.giveName == "Replacement+" &&
			plusPlusSuccess.success && replacementPlusPlus.giveName == "Replacement+" &&
			fiveSuccess.success && replacementFive.giveName == "Replacement5" && 
			xSuccess.success && replacementX.giveName == "ReplacementX" &&
			ySuccess.success && replacementY.giveName == "ReplacementY"){

				GlobalController.Instance.nestedForLoopComplete = true;
				if(GlobalController.Instance.nestedForLoopComplete && !completeFlag){
					openDoor();
					completeFlag = true;
				}
			}
	}

	void openDoor(){
		doorTwo.transform.position = new Vector3 (doorTwo.transform.position.x, 
			doorTwo.transform.position.y + 5.0f, 0);
	}
}
