using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TeleporterController : MonoBehaviour {

	private bool inArea = false;

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
//		if (inArea) {
//			if (Input.GetKeyDown ("x")) {
//				SceneManager.LoadScene ("ArrayLevel");
//			}
//		}
	}

	void OnCollisionStay2D(Collision2D other){
		if (other.gameObject.tag == "Player") {
			//show interact text
			if (Input.GetKeyDown ("x")) {
				//send it the tag, which is also the level name
				GlobalController.Instance.changeScene (this.tag); 
			}
			//inArea = true;
		}
	}

	void OnTriggerExit2D(Collider2D other){
		//inArea = false;
	}
}