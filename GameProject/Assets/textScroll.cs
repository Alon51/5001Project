using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class textScroll : MonoBehaviour {

	public Text assistDia;
	public int count;

	// Use this for initialization
	void Start () {
		count = 0;
	}

	// Update is called once per frame
	void Update () {
		showDialogue (count);
	}

	public void onRightPress(){
		if (count <= 2) {
			count++;
		}
	}

	public void onLeftPress(){
		if (count >= 0) {
			count--;
		}
	}

	public void showDialogue(int number){
		switch (count) {
		case 0:
			assistDia.text = "THIS IS A TEST OF PAGE 1";
			break;
		case 1:
			assistDia.text = "THIS IS A TEST OF PAGE 2";
			break;
		case 2:
			assistDia.text = "THIS IS A TEST OF PAGE 3";
			break;
		}
	}
		
}
