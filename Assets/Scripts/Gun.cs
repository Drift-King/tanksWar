using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

public class Gun : MonoBehaviour
{
	public Rigidbody2D rocket;				
	public float attackPower = 0; 
	public float fireTime = 0;

	public delegate void GunFired ();
	public event GunFired gunFired;
	public delegate void RocketExploded ();
	public event GunFired rocketExploded;

	public bool attackTriggered = false;
	public AudioClip fireSound;

	private float targetSpeed = 0f;
	public Rigidbody2D bulletInstance;
	private PlayerControl playerCtrl;
	private GameObject attackBarInstance;
	private Animator attackBarAnim;
	private AudioSource audioSource;

	void Awake() {
		playerCtrl = transform.root.GetComponent<PlayerControl>();
		attackBarAnim = GameObject.Find ("AttackBarSprite").GetComponent<Animator> ();
		audioSource = GetComponent<AudioSource> ();
	}
		
		
	void FixedUpdate () {
		
		if (playerCtrl.hasTurn) {
			
			if (bulletInstance != null) {
				attackTriggered = true;
			}

			if (bulletInstance == null) {
				attackTriggered = false;
			}

			if (attackTriggered == false) {

				if(CrossPlatformInputManager.GetButtonDown("Shoot")){
//					attackBarAnim.SetTime (1);
					attackBarAnim.SetBool ("Attacking", true);
					fireTime = Time.time;

				}
				if (CrossPlatformInputManager.GetButtonUp ("Shoot")) {
					attackPower = Time.time - fireTime;
					attackBarAnim.SetBool ("Attacking", false);
					Fire ();
				}
				
				if(Input.GetKeyDown(KeyCode.Space) && playerCtrl.tag == "Player") {	
					fireTime = Time.time;

				}

				if(Input.GetKeyUp(KeyCode.Space) && playerCtrl.tag == "Player"){
					attackPower = Time.time - fireTime;
					Fire ();
				}

			}
		
		}
			
	}
		

	public void FinishFire(){
		if (rocketExploded != null) {
			rocketExploded ();
		}
	}

	public void Fire() {

		if (playerCtrl.hasTurn && attackTriggered == false) {

			if (gunFired != null) {
				gunFired ();
			}

			if (GlobalSettings.Instance.soundsOn) {
				audioSource.PlayOneShot (fireSound);
			}
			attackTriggered = true;

			bulletInstance = Instantiate (rocket, transform.position, transform.rotation) as Rigidbody2D;
			bulletInstance.GetComponent<Rocket> ().gun = this;
			if (targetSpeed > 0) {
				bulletInstance.velocity = transform.right.normalized * targetSpeed * 0.5f;
			} else {
				bulletInstance.velocity = transform.right.normalized * attackPower * 10f;
			}

			bulletInstance.GetComponentInChildren<Rocket> ().ignoreTag = transform.root.tag;
			targetSpeed = attackPower = 0;

		}
	}

	public void Fire(float targetSpeed) {
		this.targetSpeed = targetSpeed;
		Fire ();
	}
		
}
