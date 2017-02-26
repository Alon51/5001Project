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
		x = Input.mousePosition.x;
		y = Input.mousePosition.y;
		z = 200.0f;
	}
	void OnMouseDrag(){
		transform.position = testCam.ScreenToWorldPoint(new Vector3 (x, y, z));
	}

}
