using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionScriptThree : MonoBehaviour {

	public ArrayReaction oneSuccess, twoSuccess, threeSuccess, fourSuccess, fiveSuccess, breakSuccess,
						 doorNumberSuccess;
	public ArrayReaction replacementOne, replacementTwo, replacementThree, replacementFour, replacementFive,
						 replacementBreak, replacementDoorNumber;

	public bool puzzleFinished, camToggled, scoreChanged, disablePortals;

	public GameObject[] arrayTiles; // the tiles that will be dragged
	public GameObject[] replacementTiles; //The replacements when tiles dragged into the slots
	public GameObject arithmeticPortal, conditionalPortal, arrayPortal, loopPortal, finalPortal;


	// Use this for initialization
	void Start () {
		arrayTiles = GameObject.FindGameObjectsWithTag ("ArrayTile");
		puzzleFinished = false;
		camToggled = false;
		scoreChanged = false;
		arithmeticPortal.SetActive (false);
		conditionalPortal.SetActive (false);
		loopPortal.SetActive (false);
		arrayPortal.SetActive (false);
		finalPortal.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		replacementTiles = GameObject.FindGameObjectsWithTag ("ReplaceTile");

		//Open Portal to Arithmetic Ops
		if(oneSuccess.success && oneSuccess.giveName == "Replacement1" &&
			doorNumberSuccess.success && doorNumberSuccess.giveName == "ReplacementdoorNumber" &&
			breakSuccess.success && breakSuccess.giveName == "ReplacementBreak" && !puzzleFinished){
				//instantiate the arimetic portal.
				arithmeticPortal.SetActive(true);
				puzzleFinished = true;
		}

		//Open Portal to Conditionals
		if(twoSuccess.success && twoSuccess.giveName == "Replacement2" &&
			doorNumberSuccess.success && doorNumberSuccess.giveName == "ReplacementdoorNumber" &&
			breakSuccess.success && breakSuccess.giveName == "ReplacementBreak" && !puzzleFinished){
				//Instantiate the Conditional Ops portal
				conditionalPortal.SetActive (true);
				puzzleFinished = true;
		}

		//Open Portal to Array
		if(threeSuccess.success && threeSuccess.giveName == "Replacement3" &&
			doorNumberSuccess.success && doorNumberSuccess.giveName == "ReplacementdoorNumber" &&
			breakSuccess.success && breakSuccess.giveName == "ReplacementBreak" && !puzzleFinished){
				//instantiate the array portal
				arrayPortal.SetActive (true);
				puzzleFinished = true;
		}

		//Open Portal to Loop
		if(fourSuccess.success && fourSuccess.giveName == "Replacement4" &&
			doorNumberSuccess.success && doorNumberSuccess.giveName == "ReplacementdoorNumber" &&
			breakSuccess.success && breakSuccess.giveName == "ReplacementBreak" && !puzzleFinished){
				//instantiate the loop portal
				loopPortal.SetActive (true);
				puzzleFinished = true;
		}

		//Open Portal to Final
		if(fiveSuccess.success && fiveSuccess.giveName == "Replacement5" &&
			doorNumberSuccess.success && doorNumberSuccess.giveName == "ReplacementdoorNumber" &&
			breakSuccess.success && breakSuccess.giveName == "ReplacementBreak" && !puzzleFinished){
				//instantiate the final portal
				finalPortal.SetActive (true);
				puzzleFinished = true;
		}

		//The Reset Logic
		if (Input.GetKeyDown (KeyCode.R) && GlobalController.Instance.camName == "SwitchCamera") {
			resetTiles ();
			resetSlots ();
			resetActive ();
			resetCheckValues ();
			camToggled = false;
			puzzleFinished = false;
		}
			
	}
		

	public void resetCheckValues(){
		oneSuccess.resetSuccessBool ();
		twoSuccess.resetSuccessBool ();
		threeSuccess.resetSuccessBool ();
		fourSuccess.resetSuccessBool ();
		fiveSuccess.resetSuccessBool ();
		doorNumberSuccess.resetSuccessBool ();
		breakSuccess.resetSuccessBool ();
	}


	public void resetSlots(){
		replacementTiles = GameObject.FindGameObjectsWithTag ("ReplaceTile");

		foreach (GameObject repTile in replacementTiles) {
			Destroy (repTile);
		}
	}

	public void resetTiles(){
		for (int i = 0; i < arrayTiles.Length; i++) {
			arrayTiles[i].GetComponent<TileDrag>().onReset();
		}
	}

	public void resetActive(){
		for (int i = 0; i < arrayTiles.Length; i++) {
			arrayTiles [i].gameObject.SetActive (true);
		}
	}

}
