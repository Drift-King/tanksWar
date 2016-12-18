using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GamePlayManager : MonoBehaviour {

	public EnemyAI enemy;
	public PlayerControl player;
	//public GameObject startButton;
	//public GameObject attackButton;
	public CameraFollow cameraFollow;
	public GameObject gameOverScreen;
	private GameObject playerTurnIndicator;
	private GameObject enemyTurnIndicator;
	//public GameObject UIRoot;
	//private Text mainText;
	//private int timeRemaining = 10;
	//private GameObject[] UI;

	// Use this for initialization
	void Start () {
		gameOverScreen.SetActive (false);
		enemy.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponent<PlayerHealth>().playerDied += PlayerHasDied;
		enemy.GetComponent<PlayerHealth>().playerDied += EnemyHasDied;
		playerTurnIndicator = player.gameObject.transform.FindChild ("currentTurn").gameObject;
		enemyTurnIndicator = enemy.gameObject.transform.FindChild ("currentTurn").gameObject;
		//mainText = startButton.GetComponentInChildren<Text> ();
		//UIRoot.SetActive (false);

		StartGame ();
	}

	public void StartGame(){
		//startButton.GetComponent<Button> ().enabled = false;
		enemy.hasTurn = true;
		//InvokeRepeating ("DecreaseTime", 0, 1);
		SwapTurn ();
	}
		
	void SwapTurn(){
		StartCoroutine (SwapTurnCoroutine());
	}

	IEnumerator SwapTurnCoroutine(){
		//timeRemaining = 10;
		player.hasTurn = !player.hasTurn;
		//UIRoot.SetActive (player.hasTurn);
		cameraFollow.SetPlayerToFollow (player.hasTurn ? player.transform : enemy.transform);

		if (!enemy.hasTurn) {
			yield
			return new WaitForSeconds (2f);
		}
		enemy.hasTurn = !enemy.hasTurn;
	}

	void PlayerHasDied(){
		Debug.Log ("======== Player Has Died");
		gameOverScreen.SetActive (true);
		GameObject.FindGameObjectWithTag ("GameResult").GetComponent<Text>().text = "You Lose!";

	}

	void EnemyHasDied(){
		Debug.Log ("======== Enemy Has Died");
		gameOverScreen.SetActive (true);
		GameObject.FindGameObjectWithTag ("GameResult").GetComponent<Text>().text = "Victory!";
	}

	void setTurnIndicator() {
		if (player.hasTurn) {
			playerTurnIndicator.SetActive (true);
			enemyTurnIndicator.SetActive (false);
		} else {
			playerTurnIndicator.SetActive (false);
			enemyTurnIndicator.SetActive (true);
		}
	}

	void FixedUpdate(){
		setTurnIndicator ();
//		if (!player.gameObject.GetComponent<PlayerHealth> ().isAlive) {
//			Debug.Log ("Player has died");
//			gameOverScreen.setActive (true);
//		}
//
//		if (!enemy.gameObject.GetComponent<PlayerHealth> ().isAlive) {
//			gameOverScreen.setActive (false);
//		}
	}

//	void DecreaseTime(){
//		timeRemaining--;
//		if (timeRemaining < 0)
//			SwapTurn ();
//		mainText.text = timeRemaining.ToString();
//		//		foreach(Text t in mainText){
//		//			t.text = "" + timeRemaining;
//		//		}
//
//	}

}
