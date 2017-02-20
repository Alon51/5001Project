﻿using UnityEngine;
using System.Collections;

public class ReactToTilePlus : MonoBehaviour {


	private AudioSource correct;
	public GameObject completedTile;
	public bool success = false;


	// Use this for initialization
	void Start () {
		correct = GetComponent<AudioSource> ();

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "+" && !success) {
			correct.Play ();
			SpriteRenderer.Instantiate (completedTile, new Vector3 (607f, 471f, 0f), Quaternion.identity);
			other.gameObject.SetActive (false);
			success = true;
		}
	}

	// Update is called once per frame
	void Update () {

	}
}
