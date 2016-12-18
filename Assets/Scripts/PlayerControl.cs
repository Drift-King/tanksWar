using UnityEngine;
using System.Collections;

public class PlayerControl : MonoBehaviour {

	public float velocity = 0.1f;

	private float hSpeed = 0f;
	private Animator anim;
	private Transform pivot;
	private Rigidbody2D rigidBody;
	private float tilt;

	void Awake () {
		anim = GetComponent<Animator> ();
		pivot = transform.FindChild ("Pivot");
		rigidBody = GetComponent<Rigidbody2D> ();
	}

	void FixedUpdate () {
		hSpeed = Input.GetAxis ("Horizontal");
		anim.SetFloat ("Speed", Mathf.Abs(hSpeed));
		rigidBody.velocity = new Vector2 (hSpeed * velocity, rigidBody.velocity.y);	

		if (Input.GetKey(KeyCode.Z)){
			tilt += 1.0f;
		}

		if (Input.GetKey(KeyCode.X)){
			tilt -= 1.0f;
		}

		tilt = Mathf.Clamp (tilt, 0, 180);
		pivot.rotation = Quaternion.Euler (0, 0, tilt);
	}
}
