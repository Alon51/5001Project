﻿using UnityEngine;
using System.Collections;

public class ReactToTileThree : MonoBehaviour {

	private AudioSource correct;
	public GameObject completedTile;
	public bool success;


	// Use this for initialization
	void Start () {
		correct = GetComponent<AudioSource> ();

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "3" && !success) {
			correct.Play ();
			SpriteRenderer.Instantiate (completedTile, new Vector3 (429f, 403f, 0), Quaternion.identity);
			other.gameObject.SetActive (false);
			success = true;
		}
	}
}