using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionSelector : MonoBehaviour {

	public GameObject missionOneSelector;
	public GameObject missionTwoSelector;

	void Start() {
		HideAllSelectors ();

		if (GlobalSettings.Instance.sceneToLoad == "Level1") {
			missionOneSelector.SetActive (true);
		} else if(GlobalSettings.Instance.sceneToLoad == "Level2") {
			missionTwoSelector.SetActive (true);
		}

	}

	public void HideAllSelectors() {
		missionOneSelector.SetActive (false);
		missionTwoSelector.SetActive (false);
	}
		
	public void SelectMissionOne(){
		GlobalSettings.Instance.sceneToLoad = "Level1";
		HideAllSelectors ();
		missionOneSelector.SetActive (true);
	}

	public void SelectMissionTwo(){
		GlobalSettings.Instance.sceneToLoad = "Level2";
		HideAllSelectors ();
		missionTwoSelector.SetActive (true);
	}

}
