using UnityEngine;
using System.Collections;

public class ReactToTilePlusPlus : MonoBehaviour {

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
			SpriteRenderer.Instantiate (completedTile, new Vector3 (669f, 471f, 0), Quaternion.identity);
			other.gameObject.SetActive (false);
			success = true;
		}
	}

}