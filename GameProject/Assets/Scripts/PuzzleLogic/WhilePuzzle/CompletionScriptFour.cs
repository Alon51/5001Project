using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionScriptFour : MonoBehaviour{

	public ReacttoXP4 xSuccess;
	public ReactToPlusP4 plusSuccess;
	public ReactToPlusPlusP4 plusPlusSuccess;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

		if (xSuccess.success && plusSuccess.success && plusPlusSuccess.success) {
			//SceneManager.LoadScene ("scene3.2.4");
		}


	}
}