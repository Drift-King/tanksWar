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
	//public GameObject UIRoot;
	//private Text mainText;
	//private int timeRemaining = 10;
	//private GameObject[] UI;

	// Use this for initialization
	void Start () {
		enemy.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
		player.GetComponentInChildren<Gun> ().gunFired += SwapTurn;
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

	void FixedUpdate(){
		if (!player.gameObject.GetComponent<PlayerHealth> ().isAlive) {
			Debug.Log ("Player has died");
		}

		if (!enemy.gameObject.GetComponent<PlayerHealth> ().isAlive) {
			Debug.Log ("Enemy has died");
		}
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
