using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GamePlayManager : MonoBehaviour {


	public EnemyAI enemy;
	public PlayerControl player;
	public CameraFollow cameraFollow;
	public GameObject gameOverScreen;
	public GameObject pauseMenuScreen;
	private GameObject playerTurnIndicator;
	private GameObject enemyTurnIndicator;
	private AudioSource audioSource;
	public Transform gameResult;

	public bool isPaused = false;


	private static GamePlayManager _instance;

	public static GamePlayManager Instance { get { return _instance; } }


	private void Awake()
	{
		if (_instance != null && _instance != this)
		{
			Destroy(this.gameObject);
		} else {
			_instance = this;
		}
	}
	// Use this for initialization
	void Start () {
		audioSource = GetComponent<AudioSource> ();
		audioSource.loop = true;
		gameOverScreen.SetActive (false);
		pauseMenuScreen.SetActive (false);
		enemy.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponent<PlayerHealth>().playerDied += PlayerHasDied;
		enemy.GetComponent<PlayerHealth>().playerDied += EnemyHasDied;
		GlobalSettings.Instance.musicToggled += ToggleMusic;
		playerTurnIndicator = player.gameObject.transform.FindChild ("currentTurn").gameObject;
		enemyTurnIndicator = enemy.gameObject.transform.FindChild ("currentTurn").gameObject;

		StartGame ();
	}

	public void StartGame(){
		if (GlobalSettings.Instance.musicOn) {
			audioSource.Play ();
		}
		Time.timeScale = 1;
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

	void ToggleMusic() {
		if (GlobalSettings.Instance.musicOn) {
			audioSource.Play ();
		} else if (GlobalSettings.Instance.musicOn == false) {
			audioSource.Stop ();
		}
	}

	void Update() {

		if (isPaused) {
			Time.timeScale = 0;	
		} else if (isPaused == false) {
			Time.timeScale = 1;
		}

	}

	void FixedUpdate(){
		setTurnIndicator ();
	}
}
