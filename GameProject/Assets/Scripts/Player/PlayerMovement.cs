using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {


	public float moveSpeed; // how fast the player moves 
	public float jumpSpeed; // how high player jumps

	public bool isGrounded; // know if player is on ground
	public bool isJumping; // know if player is jumping

	//variables for checking if player is on ground or not
	public Transform groundCheck;
	public float groundCheckRadius; // radius of ground check space
	public LayerMask whatIsGround;

	private Rigidbody2D myRigidBody; // rigid body used for moving and jumping

	private Animator anim;

//Animation States 
	const int STATE_IDLE = 0;
	const int STATE_RIGHT = 1;
	const int STATE_LEFT = 2;
	const int STATE_JUMP = 3;
	int currentAnimState = STATE_IDLE;


////variables for checking if player is on ground or not
//public Transform groundCheck;
//public float groundCheckRadius; // radius of ground check space
//public LayerMask whatIsGround;

//public bool isGrounded; // know if player is on ground
//public bool isJumping; // know if player is jumping



	// Use this for initialization
	void Start () {
		myRigidBody = GetComponent<Rigidbody2D> (); // rigid body for physics
		anim = GetComponent<Animator> ();
	}

	// Update is called once per frame
	void Update () {

		isGrounded = Physics2D.OverlapCircle (groundCheck.position,groundCheckRadius,whatIsGround);
		myRigidBody.constraints = RigidbodyConstraints2D.FreezeRotation;
		//HorizontaL input is either 0(no input), 1(going right), or -1(going left)

		//checking RIGHT input
		if (Input.GetAxisRaw ("Horizontal") > 0f) {         //don't change y value
			myRigidBody.velocity = new Vector3 (moveSpeed, myRigidBody.velocity.y, 0f);
			transform.localScale = new Vector3 (2f, 2f, 1f); // 2 b/c that's the sprites scale
			changeState(STATE_RIGHT);
		} 

		//Checking LEFT input
		else if (Input.GetAxisRaw ("Horizontal") < 0f) {
			myRigidBody.velocity = new Vector3 (-moveSpeed, myRigidBody.velocity.y, 0f);
			transform.localScale = new Vector3 (2f, 2f, 1f);
			changeState (STATE_LEFT);
		} 
			
		//NO INPUT
		else {
			myRigidBody.velocity = new Vector3 (0f, myRigidBody.velocity.y, 0f);
			changeState(STATE_IDLE);
		}


		// checking jump input(space or up)
		if (Input.GetButtonDown ("Jump") && isGrounded) {
			// put jumpSpeed in y to move up by moveSpeed

			myRigidBody.velocity = new Vector3 (myRigidBody.velocity.x, jumpSpeed, 0f);
			isJumping = true;
			changeState (STATE_JUMP);
		}
		// if on the ground, set falling and jumping to false
		else if(isGrounded){ 
			
			isJumping = false;

		}


	}

		void changeState(int state){
			if (currentAnimState == state) {
				return;
			}
			switch (state) {

				case STATE_RIGHT:
					anim.SetInteger ("state", STATE_RIGHT);
					break;

				case STATE_LEFT:
					anim.SetInteger ("state", STATE_LEFT);
					break;

				case STATE_IDLE:
					anim.SetInteger ("state", STATE_IDLE);
					break;
				
				case STATE_JUMP:
					anim.SetInteger ("state", STATE_JUMP);
					break;
			}

		currentAnimState = state;
	}

}