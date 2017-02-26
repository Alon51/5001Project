using UnityEngine;
using System.Collections;

public class TileDrag : MonoBehaviour {

	float x;
	float y;
	float z;
	public Camera testCam;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void OnMouseDrag(){
		x = Input.mousePosition.x;
		y = Input.mousePosition.y;
		// take the object's Z and correctly adjust it by subtracting the camera's Z
		// this makes up for the odd z translation that sometimes occurs
		z = transform.position.z - testCam.transform.position.z;
		transform.position = testCam.ScreenToWorldPoint(new Vector3 (x, y, z));
	}

}
