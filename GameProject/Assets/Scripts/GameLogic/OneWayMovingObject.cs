using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneWayMovingObject : MonoBehaviour {

	public GameObject objToMove; // object to be moved

	//point that object will move towards
	public Transform endPoint; // ending point
	public float moveSpeed; // how fast the object moves
	private Vector3 currentTarget; // the current point it's going to
	public Vector3 initialPosition; // initial pos of the object

	public bool finishedMoving; // is obj at final position

	// Use this for initialization
	void Start () {
		currentTarget = endPoint.transform.position;
		initialPosition = transform.position;
		finishedMoving = false;
	}

	// Update is called once per frame
	void Update () {
		// uses move towards to let the object move towards it's goal on a one way trip.
		if (objToMove != null) {
			objToMove.transform.position = Vector3.MoveTowards (objToMove.transform.position, currentTarget, moveSpeed * Time.deltaTime);
		}

		if (objToMove.transform.position.Equals (currentTarget)) {
			finishedMoving = true;
		}
	}

	public bool isFinishedMoving(){
		if (finishedMoving) {
			return true;
		} 
		return false;
	}
		

}
