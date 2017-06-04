using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AnalyticsByLevel : MonoBehaviour {

	public GoogleAnalyticsV4 googleAnalytics;
	public long noteButtonCounter, helpButtonCounter;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void NotesAnalytics(){
		googleAnalytics.LogEvent ("Notes in " + SceneManager.GetActiveScene ().name, "User Clicked", "Assist Page", noteButtonCounter);
		googleAnalytics.LogEvent (new EventHitBuilder ()
			.SetEventCategory ("Notes in " + SceneManager.GetActiveScene ().name)
			.SetEventAction ("User Clicked")
			.SetEventLabel ("Assist Page")
			.SetEventValue (noteButtonCounter));
	}

	public void HelpButtonAnalytics(){
		googleAnalytics.LogEvent ("Help in " + GlobalController.Instance.camName, "User Hovered", "HelpButton", helpButtonCounter);
		googleAnalytics.LogEvent (new EventHitBuilder ()
			.SetEventCategory ("Help in " + GlobalController.Instance.camName)
			.SetEventAction ("User Hovered")
			.SetEventLabel ("Assist Page")
			.SetEventValue (helpButtonCounter));
	}
		
}
