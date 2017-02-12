using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {


public float moveSpeed; // how fast the player moves 
public float jumpSpeed; // how high player jumps

private Rigidbody2D myRigidBody; // rigid body used for moving and jumping


////variables for checking if player is on ground or not
//public Transform groundCheck;
//public float groundCheckRadius; // radius of ground check space
//public LayerMask whatIsGround;

//public bool isGrounded; // know if player is on ground
//public bool isJumping; // know if player is jumping



	// Use this for initialization
	void Start () {
		myRigidBody = GetComponent<Rigidbody2D> (); // rigid body for physics

	}

	// Update is called once per frame
	void Update () {

		//isGrounded = Physics2D.OverlapCircle (groundCheck.position,groundCheckRadius,whatIsGround);

		//HorizontaL input is either 0(no input), 1(going right), or -1(going left)

		//checking RIGHT input
		if (Input.GetAxisRaw ("Horizontal") > 0f) {         //don't change y value
			myRigidBody.velocity = new Vector3 (moveSpeed, myRigidBody.velocity.y, 0f);
			transform.localScale = new Vector3 (1f, 1f, 1f); // 3 b/c that's the sprites scale
		} 

		//Checking LEFT input
		else if (Input.GetAxisRaw ("Horizontal") < 0f) {
			myRigidBody.velocity = new Vector3 (-moveSpeed, myRigidBody.velocity.y, 0f);
			transform.localScale = new Vector3 (-1f, 1f, 1f);
		} 
		//NO INPUT
		else {
			myRigidBody.velocity = new Vector3 (0f, myRigidBody.velocity.y, 0f);
		}
	}

}