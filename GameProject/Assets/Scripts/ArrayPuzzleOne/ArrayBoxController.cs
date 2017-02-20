using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrayBoxController : MonoBehaviour {

	public int weight; // the weight of the box
	public GameObject underPlatform;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public int getWeight(){
		return weight;
	}

	public void dropPlatform(){
		underPlatform.SetActive (false);
	}
}
