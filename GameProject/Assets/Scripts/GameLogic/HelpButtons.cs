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
		case "HelpButton1_Dt":
			helpText.text =
			"Remember that each variable needs a datatype. \nIt could be a long, int, bool, float, string, char, double, and more";
			break;
		case "HelpButton2_Dt":
			helpText.text = "Here's a hint: Doubles carry values like 33.9.";
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
