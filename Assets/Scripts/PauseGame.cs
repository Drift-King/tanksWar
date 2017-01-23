using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseGame : MonoBehaviour {

	public GameObject pauseMenu;
	public GameObject settingsMenu;

	public void Pause() {
		pauseMenu.SetActive (true);
		GamePlayManager.Instance.isPaused = true;
		GamePlayManager.Instance.GamePausedToggleEvent ();

	}

	public void Resume() {
		GamePlayManager.Instance.isPaused = false;
		GamePlayManager.Instance.GamePausedToggleEvent ();
		pauseMenu.SetActive (false);
	}
		

	public void Settings() {
		settingsMenu.SetActive (true);
	}
}
