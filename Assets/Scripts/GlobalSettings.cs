using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalSettings : MonoBehaviour {

	private static GlobalSettings _instance;

	public static GlobalSettings Instance { get { return _instance; } }

	public bool musicOn = true;
	public bool soundsOn = true;
	public float volume = 0.5f;

	public delegate void MusicToggled();
	public event MusicToggled musicToggled;

	public delegate void VolumeChanged();
	public event VolumeChanged volumeChanged;


	void Awake () {
		
		if (Instance == null) {
			DontDestroyOnLoad (gameObject);
			_instance = this;
		} else if(_instance != this){
			Destroy (gameObject);	
		}	
	}

	public void toggleMusic() {
		if (musicToggled != null) {
			musicToggled ();
		}
	}

	public void updateVolume(){
		if (volumeChanged != null) {
			volumeChanged ();
		}	
	}
}
