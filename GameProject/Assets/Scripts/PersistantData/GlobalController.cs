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


	//Loop Level Completion Bools
	public bool singleForLoopComplete = false;
	public bool nestedForLoopComplete = false;
	public bool whileLoopComplete = false;

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
	}

	//save the players position for use between scenes
	public void savePlayerPos(){
		//glPlayerPos.position = thePlayer.transform.position;
	}
	//changes the scene based on the name
	public void changeScene(string sceneName){

		SceneManager.LoadScene (sceneName);

	}
		
}
