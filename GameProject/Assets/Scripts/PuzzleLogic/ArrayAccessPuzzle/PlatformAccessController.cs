using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformAccessController : MonoBehaviour {

	public bool isVisible; //whether or not it should be visible
	public BoxCollider2D bCol; // box collider for this object
	public SpriteRenderer spr; // sprite used to control color of obj

	// Use this for initialization
	void Start () {
		//temp color
		Color tempColor = new Color(255,255,255,128);

		isVisible = false;
		bCol = GetComponent<BoxCollider2D> ();
		spr = GetComponent<SpriteRenderer> ();

		//set collider to inactive and sprite to low alpha(transparent)
		bCol.enabled = false;
		spr.color = tempColor;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//enabled box collider2d, and makes obj visible
	public void SetVisibleAndActive(){
		//temp color
		Color tempColor = new Color(255,255,255,255);

		bCol.enabled = true; 
		spr.color = tempColor;
	}
}
