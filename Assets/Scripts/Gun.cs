using UnityEngine;
using System.Collections;

public class Gun : MonoBehaviour
{
	public Rigidbody2D rocket;				
	public float attackPower = 0; 
	public float fireTime = 0;

	public delegate void GunFired ();
	public event GunFired gunFired;

	private float targetSpeed = 0f;
	private Rigidbody2D bulletInstance;
	private PlayerControl playerCtrl;

	//private Animator anim;				

	void Awake()
	{
		// Setting up the references.
		//anim = transform.root.gameObject.GetComponent<Animator>();
		playerCtrl = transform.root.GetComponent<PlayerControl>();
	}


	void FixedUpdate ()
	{
		if(Input.GetButtonDown("Fire1") && playerCtrl.tag == "Player")
		{	
			Debug.Log ("Down");
			fireTime = Time.time;
		}

		if(Input.GetButtonUp("Fire1") && playerCtrl.tag == "Player"){
			attackPower = Time.time - fireTime;
			Fire ();
		}

		if (rocket.velocity.y < 0) {
			Debug.Log ("Falling");
		}

		if (bulletInstance) {
			//bulletInstance.transform.rotation = Quaternion.LookRotation(bulletInstance.velocity);
		}
	}

	public void Fire() {
		Debug.Log ("Fire");

		bulletInstance = Instantiate (rocket, transform.position, transform.rotation) as Rigidbody2D;

		if (targetSpeed > 0) {
			bulletInstance.velocity = transform.right.normalized * targetSpeed * 0.5f;
		} else {
			bulletInstance.velocity = transform.right.normalized * attackPower * 10f;
		}

		bulletInstance.GetComponentInChildren<Rocket> ().ignoreTag = transform.root.tag;
		targetSpeed = attackPower = 0;

		if (gunFired != null) {
			gunFired ();
		}

		//bulletInstance.transform.rotation = Quaternion.LookRotation(bulletInstance.velocity);
	}

	public void Fire(float targetSpeed) {
		Debug.Log ("Target Speed" + targetSpeed);
		this.targetSpeed = targetSpeed;
		Fire ();
	}
		
}
