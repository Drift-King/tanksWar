using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionSelector : MonoBehaviour {

	public void HideAllSelectors() {
		

		GameObject[] selectors = GameObject.FindGameObjectsWithTag ("MissionSelector");

		if (selectors != null) {
			foreach (GameObject item in selectors) {
				item.SetActive (false);
			}
		}
	}

	public void SelectMission() {
		
		if (gameObject.tag == "Mission1") {
			GlobalSettings.Instance.sceneToLoad = "Level1";
			HideAllSelectors ();
			transform.Find ("Selector").gameObject.SetActive (true);
			
		} else if (gameObject.tag == "Mission2") {
			GlobalSettings.Instance.sceneToLoad = "Level2";
			HideAllSelectors ();
			transform.Find ("Selector").gameObject.SetActive (true);

		}
	}

}
