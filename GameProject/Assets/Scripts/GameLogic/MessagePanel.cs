
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MessagePanel : MonoBehaviour {
	public Text WordDisplay;
	public GameObject button;

	// Use this for initialization
	void Start () {
		this.GetComponent<Image>().enabled = false;
		button.SetActive(false);
	}

	// Update is called once per frame
	void Update () {
		if (!string.IsNullOrEmpty (WordDisplay.text.ToString ().Trim ())) {
			this.GetComponent<Image>().enabled = true;
			button.SetActive(true);
		}  else {
			this.GetComponent<Image>().enabled = false;
			button.SetActive(false);
		}
	}
}