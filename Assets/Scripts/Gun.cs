using UnityEngine;
using System.Collections;

public class Gun : MonoBehaviour
{
	public Rigidbody2D rocket;				
	public float attackPower = 0; 
	public float fireTime = 0;

	public delegate void GunFired ();
	public event GunFired gunFired;
	public bool attackTriggered = false;

	private float targetSpeed = 0f;
	public Rigidbody2D bulletInstance;
	private PlayerControl playerCtrl;
	private GameObject attackBarInstance;
	private Vector3 attackScale;
	private GameObject UIAttackBar;

	void Awake() {
		playerCtrl = transform.root.GetComponent<PlayerControl>();
		UIAttackBar = GameObject.Find ("UIAttackPower");
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

				if(Input.GetButtonDown("Fire1") && playerCtrl.tag == "Player") {	
					UIAttackBar.GetComponentInChildren<Animator> ().SetBool("Attack", true);
					fireTime = Time.time;

				}

				if(Input.GetButtonUp("Fire1") && playerCtrl.tag == "Player"){
					attackPower = Time.time - fireTime;
					UIAttackBar.GetComponentInChildren<Animator> ().SetBool ("Attack", false);
					Fire ();
				}

			}
		
		}
			
	}

	public void FinishFire(){
		Debug.Log ("Finish Fire");
		if (gunFired != null) {
			gunFired ();
		}
	}

	public void Fire() {

		if (playerCtrl.hasTurn && attackTriggered == false) {

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
