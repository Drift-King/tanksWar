using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GamePlayManager : MonoBehaviour {

	public EnemyAI enemy;
	public PlayerControl player;
	public CameraFollow cameraFollow;
	public GameObject gameOverScreen;
	public GameObject attackIndicator;
	private GameObject playerTurnIndicator;
	private GameObject enemyTurnIndicator;

	// Use this for initialization
	void Start () {
		gameOverScreen.SetActive (false);
		enemy.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponent<PlayerHealth>().playerDied += PlayerHasDied;
		enemy.GetComponent<PlayerHealth>().playerDied += EnemyHasDied;
		playerTurnIndicator = player.gameObject.transform.FindChild ("currentTurn").gameObject;
		enemyTurnIndicator = enemy.gameObject.transform.FindChild ("currentTurn").gameObject;
		attackIndicator.SetActive (false);

		StartGame ();
	}

	public void StartGame(){
		enemy.hasTurn = true;
		SwapTurn ();
	}
		
	void SwapTurn(){
		StartCoroutine (SwapTurnCoroutine());
	}

	IEnumerator SwapTurnCoroutine(){
		player.hasTurn = !player.hasTurn;
		cameraFollow.SetPlayerToFollow (player.hasTurn ? player.transform : enemy.transform);

		if (!enemy.hasTurn) {
			yield
			return new WaitForSeconds (2f);
		}
		enemy.hasTurn = !enemy.hasTurn;
	}

	void PlayerHasDied(){
		attackIndicator.SetActive (false);
		gameOverScreen.SetActive (true);
		GameObject.FindGameObjectWithTag ("GameResult").GetComponent<Text>().text = "You Lose!";

	}

	void EnemyHasDied(){
		attackIndicator.SetActive (false);
		gameOverScreen.SetActive (true);
		GameObject.FindGameObjectWithTag ("GameResult").GetComponent<Text>().text = "Victory!";
	}

	void setTurnIndicator() {
		if (player.hasTurn && player.GetComponent<PlayerHealth>().isAlive) {
			attackIndicator.SetActive (true);
			playerTurnIndicator.SetActive (true);
			enemyTurnIndicator.SetActive (false);
		} else {
			attackIndicator.SetActive (false);
			playerTurnIndicator.SetActive (false);
			enemyTurnIndicator.SetActive (true);
		}
	}

	void FixedUpdate(){
		setTurnIndicator ();
	}
}
