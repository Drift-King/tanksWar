using UnityEngine;
using System.Collections;

public class PlayerHealth : MonoBehaviour {
	
	public float health = 100f;
	public float hurtForce = 30f;
	public float damageAmount = 30f;

	private SpriteRenderer healthBar;
	private Vector3 healthScale;
	private PlayerControl playerControl;
	private Animator anim;


	// Use this for initialization
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
				// Find all of the colliders on the gameobject and set them all to be triggers.
				Collider2D[] cols = GetComponents<Collider2D>();
				foreach(Collider2D c in cols) {
					c.isTrigger = true;
				}

				// Move all sprite parts of the player to the front
				SpriteRenderer[] spr = GetComponentsInChildren<SpriteRenderer>();
				foreach(SpriteRenderer s in spr){
					s.sortingLayerName = "UI";
				}

				// ... disable user Player Control script
				GetComponent<PlayerControl>().enabled = false;

				// ... disable the Gun script to stop a dead guy shooting a nonexistant bazooka
				GetComponentInChildren<Gun>().enabled = false;

				// ... Trigger the 'Die' animation state
				//anim.SetTrigger("Die");
			}
		}	
	
	}

	void TakeDamage(Transform enemy){
		// Create a vector that's from the enemy to the player with an upwards boost.
		Vector3 hurtVector = transform.position - enemy.position + Vector3.up * 5f;

		// Add a force to the player in the direction of the vector and multiply by the hurtForce.
		GetComponent<Rigidbody2D>().AddForce(hurtVector * hurtForce);

		health -= damageAmount;

		UpdateHealthBar();
	}

	public void UpdateHealthBar () {
		// Set the health bar's colour to proportion of the way between green and red based on the player's health.
		healthBar.material.color = Color.Lerp(Color.green, Color.red, 1 - health * 0.01f);

		// Set the scale of the health bar to be proportional to the player's health.
		healthBar.transform.localScale = new Vector3(healthScale.x * health * 0.01f, 1, 1);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
