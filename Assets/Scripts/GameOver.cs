using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour {

	public void startNewGame() {	
		SceneManager.LoadScene ("Level1");
	}

	public void Exit() {
		Application.Quit ();
	}
}