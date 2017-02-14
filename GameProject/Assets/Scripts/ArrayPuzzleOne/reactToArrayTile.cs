using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reactToArrayTile : MonoBehaviour {

	public GameObject completedTile;
	public bool success = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void onTriggerEnter2D(Collider2D other){
		if (other.tag == "array" && !success) {
			SpriteRenderer.Instantiate (completedTile, new Vector3 (333f, 371f, 0), Quaternion.identity);
			other.gameObject.SetActive (false);
			success = true;
		}
	}
}
