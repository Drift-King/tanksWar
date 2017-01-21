using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleButton : MonoBehaviour {

	private Animator toggleAnim;
	// Use this for initialization
	void Start () {
		toggleAnim = gameObject.GetComponentInParent<Animator> ();
		Debug.Log ("Toggle Starting");
	}

	public void ToggleOff(){
		Debug.Log ("ToggleOFF");
		toggleAnim.SetBool ("isOn", false);
	}

	public void ToggleOn(){
		Debug.Log ("ToggleON");
		toggleAnim.SetBool ("isOn", true);
	}
}
