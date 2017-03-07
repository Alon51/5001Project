using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElevatorController : MonoBehaviour {

	public Transform startMarker, endMarkerUp, endMarkerDown, midMarker;
	public float speed = .01f;
	private float startTime;
	private float journeyLengthUp, journeyLengthDown,journeyToOriginFromUp;

	private bool inArea = false;
	public bool up = false; //Is the player on the second floor/Go Up from Start?
	private bool down = false; //Is the player on the sub level/Go Down from Start?
	public BoolOpsCompletion elevatorFlag, goingUp;

	// Use this for initialization
	void Start () {
		startTime = Time.time;
		journeyLengthUp = Vector3.Distance(startMarker.position, endMarkerUp.position);
		journeyLengthDown = Vector3.Distance(startMarker.position, endMarkerDown.position);
		journeyToOriginFromUp = Vector3.Distance (endMarkerUp.position, midMarker.position);
	}
	
	// Update is called once per frame
	void Update () {
		if (inArea && elevatorFlag.useElevator) {
			if (goingUp.goingUp) {
				float distCovered = (Time.time - startTime) * speed;
				float fracJourney = distCovered / journeyLengthUp;
				transform.position = Vector3.Lerp (startMarker.position, endMarkerUp.position, fracJourney);
				if (transform.position.y >= endMarkerUp.position.y - 2.0f) {
					up = true; 
				}
			} else if (!goingUp.goingUp) {
				down = true; //The player went down
				float distCovered = (Time.time - startTime) * speed;
				float fracJourney = distCovered / journeyLengthDown;
				transform.position = Vector3.Lerp (startMarker.position, endMarkerDown.position, fracJourney);
			} else if (inArea && up) {
				float distCovered = (Time.time - startTime) * speed;
				float fracJourney = distCovered / journeyToOriginFromUp;
				transform.position = Vector3.Lerp (endMarkerUp.position, midMarker.position, fracJourney);
			}
		} 
			
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			//set the flag
			inArea = true;
		}
	}

	void OnTriggerExit2D(Collider2D other){
		if (other.tag == "Player") {
			//set the flag
			inArea = false;
		}
	}
}
