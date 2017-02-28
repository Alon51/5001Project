using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class JITScript : MonoBehaviour { 
	// JUST IN TIME INSTRUCTIONS

	public Text wordDisplay;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			switch (this.tag) {

			case "Scientist1":
				wordDisplay.text = "Thanks for saving me! I'll help you regain control of the ship!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			}
		}
	}



}
