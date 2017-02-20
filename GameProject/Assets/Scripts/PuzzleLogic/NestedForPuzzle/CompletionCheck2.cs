using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionCheck2 : MonoBehaviour {
	
	public ReactToTileThree threeSuccess;
	public ReactToTilePlusL2 plusSuccess;
	public ReactToTilePlusPlusL2 plusPlusSuccess;
	public ReactToTileFive fiveSuccess;
	public ReactToTileX xSuccess;
	public ReactToTileY ySuccess;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if (threeSuccess.success && plusSuccess.success && plusPlusSuccess.success && fiveSuccess.success && xSuccess.success && ySuccess.success) {
			GlobalController.Instance.nestedForLoopComplete = true;
			SceneManager.LoadScene ("LoopLevel");
		}
			
	
	}
}
