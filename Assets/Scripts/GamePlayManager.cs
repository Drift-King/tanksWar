using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GamePlayManager : MonoBehaviour {


	public EnemyAI enemy;
	public PlayerControl player;
	public CameraFollow cameraFollow;
	public GameObject victorySummary;
	public GameObject defeatSummary;
	public GameObject pauseMenuScreen;
	public Text shotsCounter;
	public PlayerStatistics playerStatistics = new PlayerStatistics();

	// GameObjects to represent Final Score on Victory Summary Screen
	public GameObject ZeroStars;
	public GameObject OneStar;
	public GameObject TwoStars;
	public GameObject ThreeStars;

	private GameObject playerTurnIndicator;
	private GameObject enemyTurnIndicator;
	private AudioSource audioSource;

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

	void Start () {
		audioSource = GetComponent<AudioSource> ();
		audioSource.loop = true;
		victorySummary.SetActive (false);
		defeatSummary.SetActive (false);
		pauseMenuScreen.SetActive (false);
		enemy.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponent<PlayerHealth>().playerDied += PlayerHasDied;
		enemy.GetComponent<PlayerHealth>().playerDied += EnemyHasDied;
		GlobalSettings.Instance.musicToggled += ToggleMusic;
		GlobalSettings.Instance.volumeChanged += UpdateMusicVolume;
		playerTurnIndicator = player.gameObject.transform.FindChild ("currentTurn").gameObject;
		enemyTurnIndicator = enemy.gameObject.transform.FindChild ("currentTurn").gameObject;

		StartGame ();
	}

	public void StartGame(){
		if (GlobalSettings.Instance.musicOn) {
			audioSource.Play ();
		}
		playerStatistics.totalShots = 0;
		playerStatistics.shotsToEnemy = 0;
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
		if (player.hasTurn) {
			playerStatistics.totalShots += 1;
			shotsCounter.text = playerStatistics.totalShots.ToString();
			Debug.Log ("Player shooted " + playerStatistics.totalShots + " times");
		}
		player.hasTurn = !player.hasTurn;
		cameraFollow.SetPlayerToFollow (player.hasTurn ? player.transform : enemy.transform);

		if (!player.hasTurn) {
			yield
			return new WaitForSeconds (2f);
		}

		enemy.hasTurn = !enemy.hasTurn;

	}
		

	void PlayerHasDied(){
		StartCoroutine (DefeatSummaryCoroutine());
	}

	IEnumerator VictorySummaryCoroutine(){
		Debug.Log ("Player shots: " + playerStatistics.totalShots + " , Accuracy: " + playerStatistics.accuracy ());
		yield return new WaitForSeconds (1);

		victorySummary.SetActive (true);
		double accuracy = playerStatistics.accuracy ();
		GameObject.Find("VictoryTotalShots").GetComponent<Text>().text = playerStatistics.totalShots + " Shots";
		GameObject.Find("VictoryAccuracy").GetComponent<Text>().text = accuracy + "% Accuracy";

		if (accuracy >= 80) {
			Debug.Log ("3 Stars");
			ThreeStars.SetActive (true);
		} else if (accuracy < 80 && accuracy >= 58) {
			Debug.Log ("2 Stars");
			TwoStars.SetActive (true);
		} else if (accuracy < 58 && accuracy >= 37) {
			Debug.Log ("1 Star");
			OneStar.SetActive (true);
		} else {
			Debug.Log ("0 Stars");
			ZeroStars.SetActive (true);
		}


	}

	IEnumerator DefeatSummaryCoroutine(){
		Debug.Log ("Player shots: " + playerStatistics.totalShots + " , Accuracy: " + playerStatistics.accuracy ());
		yield return new WaitForSeconds (1);

		defeatSummary.SetActive (true);
		GameObject.Find("DefeatTotalShots").GetComponent<Text>().text = playerStatistics.totalShots + " Shots";
		GameObject.Find("DefeatAccuracy").GetComponent<Text>().text = playerStatistics.accuracy() + "% Accuracy";
	}

	void EnemyHasDied(){
		StartCoroutine (VictorySummaryCoroutine());
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
		Debug.Log ("Toogle Music ======");
		if (GlobalSettings.Instance.musicOn) {
			if (audioSource != null) {
				audioSource.Play ();
			}
		} else if (GlobalSettings.Instance.musicOn == false) {
			if (audioSource != null) {
				audioSource.Stop ();
			}
		}
	}

	void UpdateMusicVolume(){
		if (audioSource != null) {
			audioSource.volume = GlobalSettings.Instance.volume;
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
