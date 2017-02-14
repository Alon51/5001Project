using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DesktopControllerBoxArray : MonoBehaviour {

	public Text prompt; //text to display
	private bool inArea = false;
	public Camera cam;

	// Use this for initialization
	void Start () {
		prompt.enabled = false;
		cam = GetComponent<Camera> ();
	}

	// Update is called once per frame
	void Update () {
		if (inArea) {
			if (Input.GetKeyDown ("x")) {
				//SceneManager.LoadScene ("SwitchStatement");
			}
		}
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			//show interact text
			prompt.enabled = true;
			inArea = true;
			//zoom out camera for player to see puzzle
			cam.orthographicSize = 10.0f;

		}
	}

	void OnTriggerExit2D(Collider2D other){
		prompt.enabled = false;
		inArea = false;
		cam.orthographicSize = 6.0f;
	}
}
