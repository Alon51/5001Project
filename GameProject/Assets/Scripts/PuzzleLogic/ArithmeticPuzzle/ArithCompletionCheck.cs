using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class ArithCompletionCheck : MonoBehaviour {

	// LEVEL MANAGER FOR THE ARRAY LEVEL

	public ArrayReaction check1, check2, check3, check4, check5;

	public GameObject[] arrayTiles; // the tiles that will be dragged
	public GameObject[] replacementTiles;

	public bool puzzleFinished, camToggled;
	// Use this for initialization
	void Start () {
		arrayTiles = GameObject.FindGameObjectsWithTag ("ArrayTile");
		puzzleFinished = false;
		camToggled = false;
	}

	// Update is called once per frame
	void Update () {
		//print ("in update");
		replacementTiles = GameObject.FindGameObjectsWithTag ("ReplaceTile");

		foreach (GameObject repTile in replacementTiles) {
			//print ("in update " + repTile.ToString ());

		}


		//if all 3 spots are filled
		if (check1.success && check2.success && check3.success && check4.success && check5.success) {
			//drop the platforms
			//GlobalController.Instance.toggleCamera();
			if (!camToggled) {
				GlobalController.Instance.toggleCamera ();
				camToggled = true;
			}
			makePlatformsVisible ();
			puzzleFinished = true;
		}
		//reset puzzle and platforms
		if (puzzleFinished && Input.GetKeyDown(KeyCode.R)) {
			//GlobalController.Instance.resetBoxBools();
			resetTiles ();
			resetSlots ();
			resetActive ();
			resetPlatforms ();
			resetCheckValues ();
			camToggled = false;
			puzzleFinished = false;
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
			//print (repTile.ToString ());
			Destroy (repTile);
			//Time.timeScale = 0.0f;
		}
	}

	// reset tiles to active and in original position
	public void resetTiles(){
		for (int i = 0; i < arrayTiles.Length; i++) {
			//arrayTiles [i].gameObject.SetActive (false);
			print("Array BoxColliders : + " + arrayTiles[i].GetComponent<BoxCollider2D>().enabled);
			arrayTiles[i].GetComponent<TileDrag>().onReset();
			print(arrayTiles[i].ToString());
		}


	}

	public void resetActive()
	{
		for (int i = 0; i < arrayTiles.Length; i++) 
		{
			arrayTiles[i].gameObject.SetActive(true);
		}
	}

	public void resetPlatforms(){
		//set all platforms back to original state of being inactive
		foreach (GameObject temp in arrayTiles) {
			if (temp.GetComponent<ArrayTileController> ().connectedPlatform != null) {
				temp.GetComponent<ArrayTileController> ().connectedPlatform.SetInvisibleAndInactive ();
			}
		}
	}


}
