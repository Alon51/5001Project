using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ArraySumCompletion : MonoBehaviour {

	// LEVEL MANAGER FOR THE ARRAY LEVEL

	public ArrayReaction checkOne, checkTwo, checkThree;
//	public ArrayReactionTwo checkTwo;
//	public ArrayReactionThree checkThree;

	public GameObject[] arrayBoxes;
	public GameObject[] arrayTiles;

	public bool puzzleFinished;
	// Use this for initialization
	void Start () {
		//arrayBoxes = GameObject.FindGameObjectsWithTag ("ArrayBox");
		arrayTiles = GameObject.FindGameObjectsWithTag ("ArrayTile");
		puzzleFinished = false;

	}
	
	// Update is called once per frame
	void Update () {
		if (checkOne.success && checkTwo.success && checkThree.success) {
			dropTilePlatforms ();
			//resetCheckValues ();
		}	

	}

	public void resetCheckValues(){
		checkOne.success = false;
		checkTwo.success = false;
		checkThree.success = false;
	}

	public void dropTilePlatforms(){
		print ("In DropTilePlatforms");
		foreach (GameObject temp in arrayTiles) {
			// if this tile was used as part of the sum
			if (temp.GetComponent<ArrayTileController> ().isUsed) { 
				//drop it's corresponding box
				print ("In Drop IF");
				temp.GetComponent<ArrayTileController> ().connectedBox.GetComponent<ArrayBoxController> ().dropPlatform ();

			}
				
		}
		resetCheckValues ();
	}
}
