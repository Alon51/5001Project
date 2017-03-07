using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionScriptFour : MonoBehaviour{

	public ArrayReaction xSuccess, plusSuccess, plusPlusSuccess;
	public ArrayReaction replacementX, replacementPlus, replacementPlusPlus;

	private bool completeFlag = false; //Flag that allows laser to switch off once.
	public GameObject laser; //The laser gameobject
	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

		if (xSuccess.success && replacementX.giveName == "ReplacementX" &&
			plusSuccess.success && replacementPlus.giveName == "Replacement+" &&
			plusSuccess.success && replacementPlusPlus.giveName == "Replacement+") {
			GlobalController.Instance.whileLoopComplete = true;
			if (GlobalController.Instance.singleForLoopComplete && !completeFlag) {
				removeBeam ();
				completeFlag = true;
			}
		}
	}

	void removeBeam(){
		laser.transform.position = new Vector3 (laser.transform.position.x, 
			laser.transform.position.y + 50.0f, 0);
	}
}