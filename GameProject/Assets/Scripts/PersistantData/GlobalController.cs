using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GlobalController : MonoBehaviour {

	public static GlobalController Instance;
	//Teleporter Room Bools
	public bool arrayPortalActive = false;
	public bool loopPortalActive = false;


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
		thePlayer = FindObjectOfType<PlayerMovement> ();
	}

	//save the players position for use between scenes
	public void savePlayerPos(){
		glPlayerPos.position = thePlayer.transform.position;
	}
	//changes the scene based on the name
	public void changeScene(string sceneName){

		SceneManager.LoadScene (sceneName);
//		switch (sceneName) {
//		case "ArrayLevel":
//			SceneManager.LoadScene ();
//			break;
//		case "FunctionsLevel":
//			SceneManager.LoadScene ("");
//			break;
//		case "ArithmeticLevel":
//			SceneManager.LoadScene ("");
//			break;
//		case "LoopsLevel":
//			SceneManager.LoadScene ("");
//			break;
//		case "FinalLevel":
//			SceneManager.LoadScene ("");
//			break;
//		}

	}
		
}
