using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RisingPlatformController : MonoBehaviour {

	public GameObject risingPlatform;
	public float unit; //test number so that 14 increments makes the water the correct level
	public Text weightText; // text showing weight on platform
	public float sumWeight; // total weight so far

	// Use this for initialization
	void Start () {
		unit = 0.35f;
		weightText.enabled = false;
		sumWeight = 0;
	}
	
	// Update is called once per frame
	void Update () {

	}

	//increase platform height
	void platformUp(int boxWeight){
		float adjust = unit * boxWeight;
		transform.position = new Vector3 (transform.position.x, transform.position.y+adjust, 0); // move water upward
	}
	//decrease platform height
	void platformDown(int boxWeight){
		float adjust = unit * boxWeight;
		transform.position = new Vector3 (transform.position.x, transform.position.y-adjust, 0); // move water downward

	}

	void OnCollisionEnter2D(Collision2D other){
		weightText.enabled = true;
		if (other.gameObject.CompareTag("ArrayBox")) {
			//print ("Collision detected");
			int wght = other.gameObject.GetComponent<ArrayBoxController> ().getWeight ();
			sumWeight += wght;
			weightText.text = "Weight Needed: 14 \n Current Weight: " + sumWeight; // change weight
			platformUp (wght);
		}
	}

}
