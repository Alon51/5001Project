using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FinalPuzzleCompletionCheck : MonoBehaviour {

	// LEVEL MANAGER FOR THE ARRAY LEVEL


	public GameObject[] checkSlots; //manually set in inspector
	public GameObject[] arrayTiles; // the tiles that will be dragged
	public GameObject[] replacementTiles;
	public GameObject elevator;
	public Text errorMessage;
	public bool puzzleFinished, camToggled, scoreChanged;
	// Use this for initialization
	void Start () {
		arrayTiles = GameObject.FindGameObjectsWithTag ("ArrayTile");
		puzzleFinished = false;
		camToggled = false;
		scoreChanged = false;
		errorMessage.enabled = false;
	}

	// Update is called once per frame
	void Update () {
		//if all 5 spots are filled and is correct
		if (checkInputSuccess () && checkInputName ()) {
			if (!camToggled) {
				GlobalController.Instance.toggleCamera ();
				camToggled = true;
				//activate the elevator
				activateElevator();
				puzzleFinished = true;

				//add to score
				if (!scoreChanged) {
					GlobalController.Instance.incScore ();
					scoreChanged = true;
				}
			}

		} else if (checkInputSuccess ()) { // if input is done, but is incorrct
			if (!camToggled) {
				GlobalController.Instance.toggleCamera ();
				camToggled = true;
				puzzleFinished = true;
				errorMessage.enabled = true;
			}
		}
		//reset puzzle and platforms
		if (Input.GetKeyDown(KeyCode.R)) {
			resetPuzzle ();
		}

	}

	public void resetPuzzle(){
		//GlobalController.Instance.resetBoxBools();
		resetTiles ();
		resetSlots ();
		resetActive ();
		resetCheckValues ();
		camToggled = false;
		puzzleFinished = false;
		errorMessage.enabled = false;
		//lower additive
		GlobalController.Instance.decAdditive ();
	}

	public void resetCheckValues(){
		foreach (GameObject slot in checkSlots) {
			slot.GetComponent<ArrayReaction>().resetSuccessBool ();
		}
	}

	public void activateElevator(){
		GameObject temp = GameObject.FindGameObjectWithTag ("RisingPlatform");
		temp.GetComponent<MovingObject> ().enabled = true;

	}

	//reset slots to empty
	public void resetSlots(){
		replacementTiles = GameObject.FindGameObjectsWithTag ("ReplaceTile");

		foreach (GameObject repTile in replacementTiles) {
			Destroy (repTile);
		}
	}

	// reset tiles to active and in original position
	public void resetTiles(){
		for (int i = 0; i < arrayTiles.Length; i++) {
			//arrayTiles [i].gameObject.SetActive (false);
			arrayTiles[i].GetComponent<TileDrag>().onReset();
		}


	}

	public void resetActive()
	{
		for (int i = 0; i < arrayTiles.Length; i++) 
		{
			arrayTiles[i].gameObject.SetActive(true);
		}
	}

	public bool checkInputSuccess(){
		foreach (GameObject slot in checkSlots) {
			if (!slot.GetComponent<ArrayReaction>().success) {
				return false;
			}
		}
		return true;
	}

	public bool checkInputName(){
		if (checkSlots [0].GetComponent<ArrayReaction>().giveName == "Replacement-" &&
			checkSlots [1].GetComponent<ArrayReaction>().giveName == "Replacement-" &&
			checkSlots [2].GetComponent<ArrayReaction>().giveName == "ReplacementX" &&
			checkSlots [3].GetComponent<ArrayReaction>().giveName == "ReplacementMOD" &&
			checkSlots [4].GetComponent<ArrayReaction>().giveName == "ReplacementX") 
		{
			return true;
		}
		return false;
	}
		

}


