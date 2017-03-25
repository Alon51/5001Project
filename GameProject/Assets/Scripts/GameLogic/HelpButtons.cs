using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems; //allows us to get name of buttons that are clicked

public class HelpButtons : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showHelpText(){
		string temp = EventSystem.current.currentSelectedGameObject.name;
		switch(temp){
		case "HelpButton1_Dt":
			EventSystem.current.currentSelectedGameObject.GetComponent<Text>().text = 
			"Remember that each variable needs a datatype. It could be a long, int, bool, float, string, char, double, and more";
			break;
		case "HelpButton2_Dt":
			EventSystem.current.currentSelectedGameObject.GetComponent<Text>().text = 
				"Here's a hint: Doubles carry values like 33.9.";
			break;
		}
	}
}
