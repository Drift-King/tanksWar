using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleButton : MonoBehaviour {

	public enum ToggleOptions
	{
		Music,
		Sounds
	}

	public ToggleOptions toggle = ToggleOptions.Music;

	private Animator toggleAnim;
	// Use this for initialization
	void Start () {
		toggleAnim = gameObject.GetComponentInParent<Animator> ();
	}

	public void ToggleOff(){
		Debug.Log ("ToggleOFF");
		toggleAnim.SetBool ("isOn", false);
		if (toggle == ToggleOptions.Music) {
			GlobalSettings.Instance.musicOn = false;
			GlobalSettings.Instance.toggleMusic ();
		} 
		if (toggle == ToggleOptions.Sounds) {
			GlobalSettings.Instance.soundsOn = false;
		}
	}

	public void ToggleOn(){
		Debug.Log ("ToggleON");
		toggleAnim.SetBool ("isOn", true);
		if (toggle == ToggleOptions.Music) {
			GlobalSettings.Instance.musicOn = true;
			GlobalSettings.Instance.toggleMusic ();
		} 
		if (toggle == ToggleOptions.Sounds) {
			GlobalSettings.Instance.soundsOn = true;
		}
	}


	void Update(){
		if (toggle == ToggleOptions.Music) {
			if (GlobalSettings.Instance.musicOn) {
				toggleAnim.SetBool ("isOn", true);
			} else if (GlobalSettings.Instance.musicOn == false) {
				toggleAnim.SetBool ("isOn", false);
			}
		}

		if (toggle == ToggleOptions.Sounds) {
			if (GlobalSettings.Instance.soundsOn) {
				toggleAnim.SetBool ("isOn", true);
			} else if (GlobalSettings.Instance.soundsOn == false) {
				toggleAnim.SetBool ("isOn", false);
			}
		
		}
	}
}
