using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterController : MonoBehaviour {

	public GameObject Water;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.R)) {
			transform.position = new Vector3 (transform.position.x, transform.position.y+1, 0); // move water upward
		}
		if (Input.GetKeyDown (KeyCode.L)) {
			transform.position = new Vector3 (transform.position.x, transform.position.y-1, 0); // move water downward
		}
	}
}
