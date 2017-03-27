using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems; //allows us to get name of buttons that are clicked

public class HelpButtons : MonoBehaviour {

	public Text helpText;


	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showHelpText(){
		switch(this.gameObject.name){

		//DATATYPE BUTTONS
		case "HelpButton1_Dt":
			helpText.text =
			"Remember that each variable needs a datatype. \nIt could be a long, int, bool, float, string, char, double, and more";
			break;
		case "HelpButton2_Dt":
			helpText.text = "Here's a hint: Doubles carry values like 33.9. Also bools can only hold 1 of 2 values.";
			break;
			//ARITHMETIC BUTTONS
		case "HelpButton1_Arth":
			helpText.text = "Remember PEMDAS! That will help you order your parentheses and operations.";
			break;
		case "HelpButton2_Arth":
			helpText.text = "Try out some combinations and see if they equal 30, there's only 1 correct answer.";
			break;
		case "HelpButton3_Arth":
			helpText.text =
				"Here's a hint: You'll probably need to divide.";
			break;
		//ARRAY ACCESS BUTTONS
		case "HelpButton1_Acc":
			helpText.text = "Arrays must be accessed with correct indexes to avoid errors.\n" +
				"Remember that arrays begin counting at 0!";
			break;
		case "HelpButton2_Acc":
			helpText.text = "You want the first, third, and last platforms to be activated.\n" +
				"Here's a hint: the third element of an array is the 2nd element.";
			break;
		case "HelpButton3_Acc":
			helpText.text =
				"N or N-1? Is there a difference if we start counting at 0? There definitely is.";
			break;
		//ARRAY BOX SUM BUTTONS
		case "HelpButton1_Arr":
			helpText.text =
				"The required weight is 14, so you need to pick the correct elements to meet that total.\n" +
				"There are multiple ways to complete this task.";
			break;
		case "HelpButton2_Arr":
			helpText.text = "Remember that array indexes begin at 0!\n" +
				"This will help you to make sure that you choose the correct elements";
			break;
		}
	}

	void OnMouseEnter(){
		showHelpText ();
	}
	void OnMouseExit(){
		helpText.text = "";
	}

}
