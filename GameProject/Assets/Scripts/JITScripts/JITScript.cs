using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class JITScript : MonoBehaviour { 
	// JUST IN TIME INSTRUCTIONS

	public Text wordDisplay;
	public string jitName;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			switch (this.jitName) {

			case "ArrayBriefing":
				wordDisplay.text = "There are more scientists to be saved using Arrays! \n" +
					"An array is a list of elements of the same type. \n " +
					"Arrays count their elements starting at 0! Remember that! " +
					"Arrays can be accessed like this: array[num] Where num is a number.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ArrayChallenge1":
				wordDisplay.text = "It seems some of the holo-platforms are diabled, which means you can't get across!" +
					"\nUse this terminal to try and fix them. Turn on the First, Third, and Last platforms." +
					" Watch out for weird array indexes";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ArrayChallenge2":
				wordDisplay.text = "The counter-weight platform is down, but you need to get across. " +
					"Hmm, see those weighted boxed up there, they seem linked ot this terminal! " +
					"It seems that you need a weight of 14 to align the counter-weight platform. " +
					"Put your coding skills to the test and drop a total of 14lbs on the platform.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ArithBriefing":
				wordDisplay.text = "There's only 1 scientist in here. The theme of this room is arithmetic math. \n" +
				"There are 5 main operators that are used: +, -, *, /, and %. \n" +
					"The % operator gives the remainder of a division. So 8 % 3 is 2.\n\n";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ArithChallenge":
				wordDisplay.text = "The code is incomplete! You need to fill it out so that you can tell if the numbers are even or not.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Num15":
				wordDisplay.text = "You've found a crumpled up piece of paper." +
					"\n\n" +
					"It has the number 15 written on it, that might come in handy.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Scientist1":
				wordDisplay.text = "Thanks for saving me! I'll help you regain control of the ship!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Scientist2":
				wordDisplay.text = "Thanks for saving me! Let me help you get the ship under control!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "MidLevelScientistArray":
				//solves camera problem in array level
				wordDisplay.text = "Thanks for saving me! Let me help you get the ship under control!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				GameObject sci = GameObject.Find ("MidScientist");
				Destroy (sci,7.0f);
				break;
			case "ArrayCams":
				GameObject cam = GameObject.Find ("ErrorCamera");
				GameObject cam2 = GameObject.Find ("SecondCamera");
				cam2.GetComponent<Camera> ().enabled = false;
				cam.GetComponent<Camera> ().enabled = false;
				break;
			}
		}
	}



}
