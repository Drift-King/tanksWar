using UnityEngine;
using System.Collections;

public class Rocket : MonoBehaviour {

	public GameObject explosion;
	public string ignoreTag;
	public Gun gun;

	void Start () {

		Destroy(gameObject, 5);
	}

	void OnExplode() {
		gun.FinishFire ();
		// Create a quaternion with a random rotation in the z-axis.
		Quaternion randomRotation = Quaternion.Euler(0f, 0f, Random.Range(0f, 360f));
		// Instantiate the explosion where the rocket is with the random rotation.
		Instantiate(explosion, transform.position, randomRotation);
	}


	void OnTriggerEnter2D(Collider2D coll) {

		if (coll.tag != ignoreTag) {
			 GameObject explosion = new GameObject ("Explosion");
			 explosion.transform.position = transform.position;
			 explosion.tag = "ExplosionFX";
			 explosion.layer = 12;
			 Destroy (explosion, 0.5f);
			 CircleCollider2D explosionRadius = explosion.AddComponent<CircleCollider2D> ();

			explosionRadius.radius = 1.0f;
	
			// Call the explosion instantiation
			OnExplode ();

			// Destroy the rocket
			Destroy (gameObject);
		}

	}
}
