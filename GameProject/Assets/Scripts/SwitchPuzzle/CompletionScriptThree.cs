using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CompletionScriptThree : MonoBehaviour {

	public reactToInt intSuccess;
	public reactToBreakOne breakOneSuccess;
	public reactToBreakTwo breakTwoSuccess;
	public reactToBreakThree breakThreeSuccess;
	public reactToSwitchCondition switchSuccess;
	public bool arrayPortalActive = false;



	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if (intSuccess.successOne && switchSuccess.success && breakOneSuccess.success) {
			arrayPortalActive = true;
			GlobalController.Instance.arrayPortalActive = arrayPortalActive;
			SceneManager.LoadScene ("Temp1");
		}
	}
}
