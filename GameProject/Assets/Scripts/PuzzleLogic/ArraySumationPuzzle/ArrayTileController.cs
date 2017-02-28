using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrayTileController : MonoBehaviour {

	public string tileName;
	public ArrayBoxController connectedBox;
	public bool isUsed;

	// Use this for initialization
	void Start () {
		isUsed = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void resetUsed(){
		isUsed = false;
	}

}
