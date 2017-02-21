using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ArraySumCompletion : MonoBehaviour {

	public ArrayReaction checkOne;
	public ArrayReactionTwo checkTwo;
	public ArrayReactionThree checkThree;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (checkOne.success && checkTwo.success && checkThree.success) {
			SceneManager.LoadScene ("ArrayLevel");
		}
			
		
	}
}
