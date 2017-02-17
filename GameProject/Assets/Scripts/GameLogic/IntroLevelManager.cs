using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroLevelManager : MonoBehaviour {

	public GameObject arrayPortal;
	// Use this for initialization
	void Start () {
		if (GlobalController.Instance.arrayPortalActive) {
			SpriteRenderer.Instantiate (arrayPortal, new Vector3 (48.8f, -2.7f, 0), Quaternion.identity);
		}
		
	}
	
	// Update is called once per frame
	void Update () {}
}
