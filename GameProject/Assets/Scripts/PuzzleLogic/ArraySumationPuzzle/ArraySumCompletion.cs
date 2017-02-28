using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class ArraySumCompletion : MonoBehaviour {

	// LEVEL MANAGER FOR THE ARRAY LEVEL

	public ArrayReaction checkOne, checkTwo, checkThree;
//	public ArrayReactionTwo checkTwo;
//	public ArrayReactionThree checkThree;

	public GameObject[] arrayTiles; // the tiles that will be dragged
	public GameObject[] replacementTiles;
	public List<Transform> arrayTilePositions; // their positions, used for resetting challenge

	public bool puzzleFinished;
	// Use this for initialization
	void Start () {
		//arrayBoxes = GameObject.FindGameObjectsWithTag ("ArrayBox");
		arrayTiles = GameObject.FindGameObjectsWithTag ("ArrayTile");

		puzzleFinished = false;
		arrayTilePositions = new List<Transform> ();
		foreach(GameObject tile in arrayTiles) {
			arrayTilePositions.Add (tile.transform);
		}
	}
	
	// Update is called once per frame
	void Update () {
		//if all 3 spots are filled
		if (checkOne.success && checkTwo.success && checkThree.success) {
			//drop the platforms
			GlobalController.Instance.toggleCamera();
			dropTilePlatforms ();
			//resetCheckValues ();
			//reset everything for the next use
			GlobalController.Instance.resetBoxBools();
			resetSlots ();
			resetTiles ();
		}	

	}

	public void resetCheckValues(){
		checkOne.resetSuccessBool ();
		checkTwo.resetSuccessBool ();
		checkThree.resetSuccessBool ();
	}

	public void dropTilePlatforms(){
		foreach (GameObject temp in arrayTiles) {
			// if this tile was used as part of the sum
			if (temp.GetComponent<ArrayTileController> ().isUsed) { 
				//drop it's corresponding box
				temp.GetComponent<ArrayTileController> ().connectedBox.dropPlatform ();

			}
				
		}
		resetCheckValues ();
	}
	//reset slots to empty
	public void resetSlots(){
		replacementTiles = GameObject.FindGameObjectsWithTag ("ReplaceTile");

		foreach (GameObject repTile in replacementTiles) {
			Destroy (repTile.gameObject);
		}
	}

	// reset tiles to active and in original position
	public void resetTiles(){
		for(int i = 0; i < arrayTiles.Length; i++) {
			
			arrayTiles [i].transform.position = arrayTilePositions [i].transform.position; // move to original position
			// THIS LINE MESSES UP THE RESET
			//arrayTiles [i].SetActive (true); // set active 
			arrayTiles [i].GetComponent<ArrayTileController> ().resetUsed (); // change bool to false;

		}
	}

}
