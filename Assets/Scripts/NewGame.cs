using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class NewGame : MonoBehaviour {

	public enum Scenes
	{
		Level1
	}

	private string sceneToString(Scenes scene) {
		if (scene == Scenes.Level1) {
			return "Level1";
		} else {
			return "Level1";
		}
	}

	public Scenes sceneToLoad = Scenes.Level1;

	public void startNewGame() {
		SceneManager.LoadScene (sceneToString(sceneToLoad));
	}

	public void MainMenu() {	
		SceneManager.LoadScene ("Main Menu");
	}

	public void Exit() {
		Application.Quit ();
	}
		
}