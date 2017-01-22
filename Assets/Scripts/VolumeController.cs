using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class VolumeController : MonoBehaviour {

	private static VolumeController _instance;

	public static VolumeController Instance { get { return _instance; } }

	private float pos = 0f;
	private float scale = 0f;
	public Transform volIndicator;

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
		
	void Start(){
		UpdateVolumeBar ();
		Debug.Log ("Updating Volume Bar on Start... " + GlobalSettings.Instance.volume);
	}

	void UpdateVolumeBar(){
		float vol = GlobalSettings.Instance.volume;
		double posX = 0;

		if (vol == 0f) {
			posX = -45;
		} else if (vol == 0.5f) {
			posX = 0;
		} else if (vol == 1f) {
			posX = 45;
		} else if (vol < 0.5f) {
			double volPerc = (100 * vol) / 0.5;
			posX = (-45 * volPerc) / 100;
		} else if (vol > 0.5f) {
			double volPerc = (100 * vol);
			posX = (45 * volPerc) / 100;
		}

		gameObject.GetComponent<Transform>().localPosition = new Vector3((float)posX, 0, 0);

		volIndicator.GetComponent<Transform> ().localScale = new Vector3 (GlobalSettings.Instance.volume, 1f, 1f);
	}

	public void MoveVolume(){
		pos = gameObject.GetComponent<Transform> ().localPosition.x;
		if (pos > 0) {
			float localDiff = 45 - pos;
			float diff = 90 - localDiff;
			scale = diff / 90;
		}
		if (pos < 0) {
			float localDiff = 45 + pos;
			scale = localDiff / 90;
		}
			
		if (pos == 0) {
			scale = 0.5f;
		}

		GlobalSettings.Instance.volume = scale;
		//volIndicator.GetComponent<Transform> ().localScale = new Vector3 (scale, 1f, 1f);
		UpdateVolumeBar ();
	}
		
}
