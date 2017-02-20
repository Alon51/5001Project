using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterController : MonoBehaviour {

	public GameObject Water;
	public float unit = 0.35f; //test number so that 14 increments makes the water the correct level

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
//		if (Input.GetKeyDown (KeyCode.R)) {
//			transform.position = new Vector3 (transform.position.x, transform.position.y+1, 0); // move water upward
//		}
//		if (Input.GetKeyDown (KeyCode.L)) {
//			transform.position = new Vector3 (transform.position.x, transform.position.y-1, 0); // move water downward
//		}
	}

	//increase water level
	void waterUp(int boxWeight){
		float adjust = unit * boxWeight;
		transform.position = new Vector3 (transform.position.x, transform.position.y+adjust, 0); // move water upward
	}
	//decrease water level
	void waterDown(int boxWeight){
		float adjust = unit * boxWeight;
		transform.position = new Vector3 (transform.position.x, transform.position.y-adjust, 0); // move water downward

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.CompareTag ("ArrayBox")) {
			int wght = other.GetComponent<ArrayBoxController> ().getWeight ();
			waterUp (wght);
		}
	}

}
