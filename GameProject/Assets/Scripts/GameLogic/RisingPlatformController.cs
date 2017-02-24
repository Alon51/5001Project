using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RisingPlatformController : MonoBehaviour {

	public GameObject risingPlatform;
	public float unit; //test number so that 14 increments makes the water the correct level

	// Use this for initialization
	void Start () {
		unit = 0.35f;
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
		if (other.gameObject.CompareTag("ArrayBox")) {
			//print ("Collision detected");
			int wght = other.gameObject.GetComponent<ArrayBoxController> ().getWeight ();
			platformUp (wght);
		}
	}

}
