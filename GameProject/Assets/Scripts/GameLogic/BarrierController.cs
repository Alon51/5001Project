using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarrierController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.L)) {
			moveBarrierUp ();
		}
	}

	public void moveBarrierUp(){
		transform.position = new Vector3 (transform.position.x, transform.position.y - 1f, 0);
	}
}
