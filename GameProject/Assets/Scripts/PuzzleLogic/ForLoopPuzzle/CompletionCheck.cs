using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionCheck : MonoBehaviour {

	public ReactToTile twoSuccess;
	public ReactToTilePlus plusSuccess;
	public ReactToTilePlusPlus plusPlusSuccess;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		if (twoSuccess.success && plusSuccess.success && plusPlusSuccess.success) {
			GlobalController.Instance.singleForLoopComplete = true;
			SceneManager.LoadScene ("LoopLevel");

		}
	}
}



