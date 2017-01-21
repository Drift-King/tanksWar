using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingsMenu : MonoBehaviour {

	public GameObject settingsMenu;

	public void showSettingsMenu(){
		settingsMenu.SetActive (true);
	}

	public void hideSettingsMenu(){
		settingsMenu.SetActive (false);
	}
}
