﻿using UnityEngine;
using System.Collections;

public class ReactToTileFive : MonoBehaviour {

	private AudioSource correct;
	public GameObject completedTile;
	public bool success;


	// Use this for initialization
	void Start () {
		correct = GetComponent<AudioSource> ();

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "5" && !success) {
			correct.Play ();
			SpriteRenderer.Instantiate (completedTile, this.transform.position, Quaternion.identity);
			other.gameObject.SetActive (false);
			success = true;
		}
	}
}