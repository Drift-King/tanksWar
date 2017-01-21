using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RocketExplosion : MonoBehaviour {

	private AudioSource audioSource;

	void Start(){
		Debug.Log ("Global Settings Sounds ON? "+ GlobalSettings.Instance.soundsOn);
		audioSource = GetComponent<AudioSource> ();
		if(GlobalSettings.Instance.soundsOn){
			audioSource.Play ();
		}
	}
}
