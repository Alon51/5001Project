using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GlobalController : MonoBehaviour {

	public static GlobalController Instance;
	//Teleporter Room Bools
	public bool arrayPortalActive = false;
	public bool loopPortalActive = false;

	//ArraySumationPuzzle Blocks
	public bool box0 = false;
	public bool box1 = false;
	public bool box2 = false;
	public bool box3 = false;
	public bool box4 = false;
	public bool box5 = false;

	//Camera variables
	public Camera mainCam;
	public Camera secondCam;
	public bool onMainCam;
	public string camName;


	//Loop Level Completion Bools
	public bool singleForLoopComplete = false;
	public bool nestedForLoopComplete = false;
	public bool whileLoopComplete = false;

	//Conditional Level Completion Bools
	public bool boolOpsComplete = false;
	public bool logicalOrComplete = false;
	public bool logicalAndComplete = false;

	public PlayerMovement thePlayer;

	public Transform glPlayerPos; //global player pos for scene transitions

	void Awake(){
		if (Instance == null) {
			DontDestroyOnLoad (gameObject);
			Instance = this;
		} else if (Instance != this) {
			Destroy (gameObject);
		}
	}

	void Start(){
		//thePlayer = FindObjectOfType<PlayerMovement> ();
		onMainCam = true;
		camName = mainCam.name;
	}

	//save the players position for use between scenes
	public void savePlayerPos(){
		//glPlayerPos.position = thePlayer.transform.position;
	}
	//changes the scene based on the name
	public void changeScene(string sceneName){

		SceneManager.LoadScene (sceneName);

	}
	//toggles between the main camera and the specified second camera	
	public void toggleCamera(){
		if (onMainCam) {
			mainCam.enabled = false;
			secondCam.enabled = true;
			camName = secondCam.name;
			onMainCam = !onMainCam;
		}
		else if (!onMainCam) {
			mainCam.enabled = true;
			secondCam.enabled = false;
			onMainCam = !onMainCam;
			camName = mainCam.name;
		}
	}
	//changes the second camera in order to allow togling between multiple camera
	public void changeSecondCamera(Camera newCam){
		secondCam = newCam;
	}

	public void resetBoxBools(){
		box0 = false;
		box1 = false;
		box2 = false;
		box3 = false;
		box4 = false;
		box5 = false;
	}

}
