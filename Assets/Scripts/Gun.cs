using UnityEngine;
using System.Collections;

public class Gun : MonoBehaviour
{
	public Rigidbody2D rocket;				

	public float attackPower = 0; 
	public float fireTime = 0;

	private Rigidbody2D bulletInstance;

	//private Animator anim;				


	void Awake()
	{
		// Setting up the references.
		//anim = transform.root.gameObject.GetComponent<Animator>();
		//playerCtrl = transform.root.GetComponent<PlayerControl>();
	}


	void FixedUpdate ()
	{
		if(Input.GetButtonDown("Fire1"))
		{	
			Debug.Log ("Down");
			fireTime = Time.time;
		}

		if(Input.GetButtonUp("Fire1")){
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
		attackPower = (Time.time - fireTime) * 5f;

		bulletInstance = Instantiate (rocket, transform.position, transform.rotation) as Rigidbody2D;
		bulletInstance.velocity = transform.right.normalized * attackPower;
		//bulletInstance.transform.rotation = Quaternion.LookRotation(bulletInstance.velocity);

	}
		
}
