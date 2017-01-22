using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class NewGame : MonoBehaviour {


	public void startNewGame() {
		SceneManager.LoadScene (GlobalSettings.Instance.sceneToLoad);
	}

	public void MainMenu() {	
		SceneManager.LoadScene ("Main Menu");
	}

	public void Exit() {
		Application.Quit ();
	}


	public void MissionSelection(){
		SceneManager.LoadScene ("MissionSelection");
	}
}