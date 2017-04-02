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
				wordDisplay.text = "It seems some of the holo-platforms are disabled, which means you can't get across!" +
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
			case "DataTypeBriefing":
				wordDisplay.text = "There's only 1 scientist in here, blocked by 2 doors." +
				"The theme of this room is initialization and arithmetic math. \n \n" +
				"There are many datatypes used in programming such as int, bool, double, string, char, and float. \n" +
				"Ints hold whole numbers, doubles hold decimal values, chars hold single characters, and so on.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "DataTypeChallenge":
				wordDisplay.text = "The code is incomplete! To get past this first door, place the correct datatypes with their variables. You can do it!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ArithBriefing":
				wordDisplay.text = "There are 5 main operators that are used: +, -, *, /, and %. \n" +
					"The % operator gives the remainder of a division. So 8 % 3 is 2.\n\n" +
					"Also, remember that parentheses are important and give different answers.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ArithChallenge":
				wordDisplay.text = "The code is incomplete! To open the door, set the equation to equal 30, don't give up!";
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
			//First generic scientist response
			case "Scientist1":
				wordDisplay.text = "Thanks for saving me! I'll help you regain control of the ship!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			//Second generic scientis response
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

			case "ConditionalBriefing":
				wordDisplay.text = "Three scientists are stuck behind three doors,  \n" +
					"The desktops in this wing operate using conditional logic, complete their code to release the scientists.\n " +
					"Conditional logic is extremely useful in creating if statements and loops.  \n" +
					"Remember these common operators:  \n" +
					"'!' - negation operator. \n '&&' - logical and operator. All conditions in the statement" +
					"must be true. \n '||' - logical or operator. Only one of the conditions need be true.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;

			case "BoolOpsBrief":
				wordDisplay.text = "The desktop ahead controls the elevator \n" +
				"and can take you up or down depending on your decision.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;

			case "LogicalAndBrief":
				wordDisplay.text = "You have arrived at the Logical And terminal. " +
				"These pylons in the ship's floor must be raised to open the door locking in " +
					"the scientist. Remember the key distinction between AND and OR.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;

			case "LogicalOrBrief":
				wordDisplay.text = "You have arrived at the Logical Or terminal. " +
					"These pylons in the ship's floor must be raised to open the door locking in " +
					"the scientist. Remember the key distinction between AND and OR.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "LogicalAndScientistJIT":
				wordDisplay.text = "Thanks for saving me! Let me help you get the ship under control!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "LogicalOrScientistJIT":
				wordDisplay.text = "Thanks for saving me! Let me help you get the ship under control!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "ExitDoorScientistJIT":
				wordDisplay.text = "Good work! Hurry through the portal, there are more like me to be helped!";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			//Specifically for managing cams in Arrya level since there are many cameras
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
