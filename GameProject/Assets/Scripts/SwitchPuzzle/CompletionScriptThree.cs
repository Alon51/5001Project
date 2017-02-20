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
	public bool loopPortalActive = false;



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

		if (intSuccess.successTwo && switchSuccess.success && breakTwoSuccess.success) {
			loopPortalActive = true;
			GlobalController.Instance.loopPortalActive = loopPortalActive;
			SceneManager.LoadScene ("Temp1");
		}
	}
}
