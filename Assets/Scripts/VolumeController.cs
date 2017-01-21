using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class VolumeController : MonoBehaviour {

	private float pos = 0f;
	private float scale = 0f;
	public Transform volIndicator;

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

		volIndicator.GetComponent<Transform> ().localScale = new Vector3 (scale, 1f, 1f);
	}
		
}
