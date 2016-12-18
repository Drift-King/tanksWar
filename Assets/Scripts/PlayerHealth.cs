using UnityEngine;
using System.Collections;

public class PlayerHealth : MonoBehaviour {
	
	public float health = 50f;
	public float hurtForce = 20f;
	public float damageAmount = 20f;
	public bool isAlive = true;
	public delegate void PlayerDied ();
	public event PlayerDied playerDied;

	private SpriteRenderer healthBar;
	private Vector3 healthScale;
	private PlayerControl playerControl;
	private Animator anim;

	void Awake () {
		playerControl = GetComponent<PlayerControl>();
		healthBar = getHealthBar ();
		anim = GetComponent<Animator>();

		healthScale = healthBar.transform.localScale;
	}

	SpriteRenderer getHealthBar() {
		if (gameObject.tag == "Player"){
			return GameObject.Find ("PlayerHealthBar").GetComponent<SpriteRenderer> ();
		}else {
			return GameObject.Find ("EnemyHealthBar").GetComponent<SpriteRenderer> ();
		}
	}

	void OnCollisionEnter2D (Collision2D col) {

		if (col.gameObject.tag == "ExplosionFX") {
			if(health > 0f) {
				TakeDamage(col.transform); 
			}
		
			else {
				playerDied ();
				isAlive = false;
				anim.SetTrigger("Dies");
				GetComponent<PlayerControl>().enabled = false;
				GetComponentInChildren<Gun>().enabled = false;

			}
		}	
	
	}

	void TakeDamage(Transform enemy){
		// Create a vector that's from the enemy to the player with an upwards boost.
		Vector3 hurtVector = transform.position - enemy.position + Vector3.up * 2f;

		// Add a force to the player in the direction of the vector and multiply by the hurtForce.
		GetComponent<Rigidbody2D>().AddForce(hurtVector * hurtForce);

		health -= damageAmount;
		Debug.Log ("Health: " + gameObject.tag + " -->> " + health);

		UpdateHealthBar();
	}

	public void UpdateHealthBar () {
		// Set the health bar's colour to proportion of the way between green and red based on the player's health.
		healthBar.material.color = Color.Lerp(Color.green, Color.red, 1 - health * 0.01f);

		// Set the scale of the health bar to be proportional to the player's health.
		healthBar.transform.localScale = new Vector3(healthScale.x * health * 0.01f, 1, 1);
	}

}
