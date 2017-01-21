using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GamePlayManager : MonoBehaviour {

	public EnemyAI enemy;
	public PlayerControl player;
	public CameraFollow cameraFollow;
	public GameObject gameOverScreen;
	private GameObject playerTurnIndicator;
	private GameObject enemyTurnIndicator;
	public Transform gameResult;

	// Use this for initialization
	void Start () {
		gameOverScreen.SetActive (false);
		enemy.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponent<PlayerHealth>().playerDied += PlayerHasDied;
		enemy.GetComponent<PlayerHealth>().playerDied += EnemyHasDied;
		playerTurnIndicator = player.gameObject.transform.FindChild ("currentTurn").gameObject;
		enemyTurnIndicator = enemy.gameObject.transform.FindChild ("currentTurn").gameObject;

		StartGame ();
	}

	public void StartGame(){
		enemy.hasTurn = true;
		SwapTurn ();
	}
		
	void SwapTurn(){
		StartCoroutine (SwapTurnCoroutine());
	}

	void startSwapTurn(){
		StartCoroutine (SwapTurnCoroutine());
	}

	IEnumerator SwapTurnCoroutine(){
		player.hasTurn = !player.hasTurn;
		cameraFollow.SetPlayerToFollow (player.hasTurn ? player.transform : enemy.transform);

		if (!player.hasTurn) {
			yield
			return new WaitForSeconds (2f);
		}

		enemy.hasTurn = !enemy.hasTurn;

	}

	void PlayerHasDied(){
		gameResult.GetComponent<Text>().text = "You Lose!";
		StartCoroutine (GameOverShowScreenCoroutine());
	}

	IEnumerator GameOverShowScreenCoroutine(){
		yield return new WaitForSeconds (1);
		gameOverScreen.SetActive (true);
	}

	void EnemyHasDied(){
		gameResult.GetComponent<Text>().text = "Victory!";
		StartCoroutine (GameOverShowScreenCoroutine());
	}

	void setTurnIndicator() {
		if (player.hasTurn && player.GetComponent<PlayerHealth>().isAlive) {
			playerTurnIndicator.SetActive (true);
			enemyTurnIndicator.SetActive (false);
		} else {
			playerTurnIndicator.SetActive (false);
			enemyTurnIndicator.SetActive (true);
		}
	}

	void FixedUpdate(){
		setTurnIndicator ();
	}
}
