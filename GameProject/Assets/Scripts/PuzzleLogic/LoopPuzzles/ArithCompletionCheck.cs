using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class ArithCompletionCheck : MonoBehaviour {

	// LEVEL MANAGER FOR THE ARRAY LEVEL

	public ArrayReaction check1, check2, check3, check4,check5;

	public GameObject[] arrayTiles; // the tiles that will be dragged
	public GameObject[] replacementTiles;
	public List<Vector3> arrayTilePositions; // their positions, used for resetting challenge

	public bool puzzleFinished;
	// Use this for initialization
	void Start () {
		arrayTiles = GameObject.FindGameObjectsWithTag ("ArrayTile");
		puzzleFinished = false;

	}

	// Update is called once per frame
	void Update () {
		//if all 3 spots are filled
		if (check1.success && check2.success && check3.success && check4.success && check5.success) {
			//drop the platforms
			GlobalController.Instance.toggleCamera();
			makePlatformsVisible ();
			//reset everything for the next use	
			GlobalController.Instance.resetBoxBools();
			resetTiles ();
			resetSlots ();

			//resetCheckValues ();
		}	

	}

	public void resetCheckValues(){
		check1.resetSuccessBool ();
		check2.resetSuccessBool ();
		check3.resetSuccessBool ();
		check4.resetSuccessBool ();
		check5.resetSuccessBool ();
	}

	public void makePlatformsVisible(){
		foreach (GameObject temp in arrayTiles) {
			// if this tile was used as part of the sum
			if (temp.GetComponent<ArrayTileController> ().isUsed) { 
				//drop it's corresponding box
				temp.GetComponent<ArrayTileController>().connectedPlatform.SetVisibleAndActive();
				temp.GetComponent<ArrayTileController> ().resetUsed ();
			}

		}
		//resetCheckValues ();
	}
	//reset slots to empty
	public void resetSlots(){
		replacementTiles = GameObject.FindGameObjectsWithTag ("ReplaceTile");

		foreach (GameObject repTile in replacementTiles) {
			Destroy (repTile);
		}
		//THIS LINE ALSO CAUSES PROBLEMS
		resetCheckValues ();
	}

	// reset tiles to active and in original position
	public void resetTiles(){
		for (int i = 0; i < arrayTiles.Length; i++) {
			//set to initial position
			arrayTiles[i].GetComponent<TileDrag>().onReset();
			arrayTiles [i].GetComponent<ArrayTileController> ().resetUsed (); // change bool to false;
			// THIS LINE MESSES UP THE RESET
			//arrayTiles [i].GetComponent<BoxCollider2D>().enabled = true;

		}

	}

}
