using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GlobalController : MonoBehaviour {

	public static GlobalController Instance;
	public GoogleAnalyticsV4 googleAnalytics;

	public static float timer;
	public bool timeStarted;
	string niceTime;
	long minutes;

	//use for analytics
	public long failedAttempts;

	//Teleporter Room Bools
	public bool arrayPortalActive = false;
	public bool loopPortalActive = false;

	//Camera variables
	public Camera mainCam;
	public Camera secondCam;
	public bool onMainCam;
	public string camName;

	//Final Level Objects
	public GameObject [] scientistSprites;

	//Loop Level Completion Bools
	public bool singleForLoopComplete = false;
	public bool nestedForLoopComplete = false;
	public bool whileLoopComplete = false;

	//Conditional Level Completion Bools
	public bool boolOpsComplete = false;
	public bool logicalOrComplete = false;
	public bool logicalAndComplete = false;

	//IndentPuzzle Completion
	public bool indentComplete = false;

	//Reference to the Player
	public PlayerMovement thePlayer;

	public Vector3 glPlayerPos; //global player pos for scene transitions

	public Text scoreText, scientistText; //text to display score and num of scientists
	public int score; // used to track the player's score
	public int scientistCount; // num of scientists
	public int totalScientists; // max amount of scientists in the game
	public int scrAdditive; // what is added or subtracted from the score

	//text for displaying briefings and such
	public Text wordDisplay;

	//name of last scene that was loaded
	public string previousSceneName;

	//Upgrades
	public bool hasBombs;
	public bool hasDoubleJump;
	public bool hasSpeedUp;

	void Awake(){
		if (Instance == null) {
			DontDestroyOnLoad (gameObject);
			Instance = this;
		} else if (Instance != this) {
			Destroy (gameObject);
		}
	}


	void Start(){
		googleAnalytics.StartSession ();
		thePlayer = FindObjectOfType<PlayerMovement> ();
		glPlayerPos = thePlayer.transform.position;
		onMainCam = true;
		camName = mainCam.name;
		score = 0;
		scientistCount = 0;
		failedAttempts = 0;
		totalScientists = 9;
		scrAdditive = 100;
		scoreText.text = "Score: " + score;
		wordDisplay = GameObject.Find ("WordDisplayer").GetComponent<Text>();
		previousSceneName = "";
		hasSpeedUp = false;
		hasDoubleJump = false;
		hasBombs = false;
		timeStarted = true;
	}

	void Update(){
		//if word display is open because text isn't empty
		if (!wordDisplay.text.Equals ("")) {
			//pressing x will close and clear the box
			if (Input.GetKeyDown (KeyCode.X)) {
				wordDisplay.text = "";
				//unpause
				Time.timeScale = 1.0f;
			}
		}

		//constantly update glPlayerPos if not in settings scene
		if (!SceneManager.GetActiveScene ().name.Equals("Settings")) {
			savePlayerPos ();
		}

		if (timeStarted == true) {
			timer += Time.deltaTime;
		}    
	}

	/*
	 * To call a function when a new scene is loaded, you need to add OnSceneLoaded
	 * as a delegate for SceneManager.sceneLoaded in OnEnable and OnDisable
	 * Then in OnSceneLoaded, add the code you want to run when a new scene loads
	*/

	void OnEnable() {//delegate for onScene loaded which monitors when a scene is changed and done loading
		SceneManager.sceneLoaded += OnSceneLoaded;
	}

	void OnDisable() {
		SceneManager.sceneLoaded -= OnSceneLoaded;
	}

	private void OnSceneLoaded(Scene scene, LoadSceneMode mode) {
		//Reset all cameras and text
		resetWhenSceneChanged ();


		//CHECK IF THE PLAYER IS IN THE FINAL LEVEL
		if(SceneManager.GetActiveScene().name == "FinalLevel" ){
			scientistSprites = GameObject.FindGameObjectsWithTag("Scientist1");
			spawnScientists ();
		}

	}




	//save the players position for use between scenes
	public void savePlayerPos(){
		glPlayerPos = thePlayer.transform.position;
	}
	//sets the players position when returning to scene
	public void setPlayerPos(){
		thePlayer.transform.position = glPlayerPos;
	}

	//changes the scene based on the name
	public void changeScene(string sceneName){

		//set the previous scene name to be reloaded
		previousSceneName = SceneManager.GetActiveScene ().name;
		//mark the global timer in the specific scene and send to Analytics.
		sceneTimerAnalytics();
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

	public void incScientist(){
		scientistCount += 1;
		scientistText.text = "x " + scientistCount;
	}
	public int getScientistCount(){
		return scientistCount;
	}
	//increases score
	public void incScore(){
		score += scrAdditive;
		scoreText.text = "Score: " + score;
	}
	//decreases the score
	public void decScore(){
		score -= scrAdditive;
	}
	//increases additive
	public void incAdditive(){
		scrAdditive += 10;
	}
	// decreases additive
	public void decAdditive(){
		scrAdditive -= 10;
		//decrease in score implies failed attempt. Log in Analytics.
		failedAttempts++;
		failureAnalytics ();
	}
	//resets the additive for the score
	public void resetAdditive(){
		scrAdditive = 100;
	}
	// loads the apt amount of scientists in the final level based on how many were saved
	public void spawnScientists(){ 
		print ("In SPSci");
		scientistCount = 3;
		int tempMax = totalScientists - scientistCount;
		print (tempMax);
		for (int i = 0; i < tempMax; i++) {
			print ("Spawning");
			scientistSprites [i].GetComponent<SpriteRenderer> ().enabled = false;
		}
	}

	void OnGUI() {
		minutes = Mathf.FloorToInt(timer / 60F);
		int seconds = Mathf.FloorToInt(timer - minutes * 60);
		niceTime = string.Format("{0:00}:{1:00}", minutes, seconds);

		GUI.Label(new Rect(10,10,250,100), niceTime);
	}

	/*
	 * Resets the following when the scene is changed
	 * Player
	 * Main Camera
	 * Score Text
	 * Scientist Text
	 * Word Displayer
	*/
	public void resetWhenSceneChanged(){
		
		thePlayer = FindObjectOfType<PlayerMovement> ();
		mainCam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera>();
		scoreText = GameObject.FindGameObjectWithTag ("ScoreText").GetComponent<Text>();
		scientistText = GameObject.FindGameObjectWithTag ("ScientistText").GetComponent<Text>();
		wordDisplay = GameObject.FindGameObjectWithTag ("JITDisplay").GetComponent<Text>();
		googleAnalytics = GameObject.FindGameObjectWithTag ("ANALYTICS").GetComponent<GoogleAnalyticsV4> ();

		//display that text
		scoreText.text = "Score: " + score;
		scientistText.text = "x " + scientistCount;

		//set failed attempts back to 0 to see how many times per scene the player is failing
		failedAttempts = 0;

		 

		//put player back in correct spot
		//setPlayerPos();

	}

	public void failureAnalytics(){
		googleAnalytics.LogEvent ("Challenge in " + camName, "Number of Failures", "Failed a Challenge", failedAttempts);
		googleAnalytics.LogEvent (new EventHitBuilder ()
			.SetEventCategory ("Challenge in " + camName)
			.SetEventAction ("Number of Failures")
			.SetEventLabel ("Failed a Challenge")
			.SetEventValue (failedAttempts));
	}

	public void sceneTimerAnalytics(){
		googleAnalytics.LogEvent ("Time in " + SceneManager.GetActiveScene ().name, "Time in Scene", "Timer", minutes);
		googleAnalytics.LogEvent (new EventHitBuilder ()
			.SetEventCategory ("Time in " + SceneManager.GetActiveScene ().name)
			.SetEventAction ("Time in Scene")
			.SetEventLabel ("Timer")
			.SetEventValue (minutes));
	}

	public void scientistAnalytics(){
		googleAnalytics.LogEvent ("Scientists located", "Scientists located", "Number found", (long)scientistCount);
		googleAnalytics.LogEvent (new EventHitBuilder ()
			.SetEventCategory ("Scientists located")
			.SetEventAction ("Scientists located")
			.SetEventLabel ("Number found")
			.SetEventValue (scientistCount));
	}
		


}
