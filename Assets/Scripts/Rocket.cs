using UnityEngine;
using System.Collections;

public class Rocket : MonoBehaviour {

	public GameObject explosion;		// Prefab of explosion effect.
	public string ignoreTag;


	// Use this for initialization
	void Start () {

		Destroy(gameObject, 5);
	}

	void OnExplode()
	{
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
			 Destroy (explosion, 0.5f);
			 CircleCollider2D explosionRadius = explosion.AddComponent<CircleCollider2D> ();

			 explosionRadius.radius = 2.5f;

			// Call the explosion instantiation
			OnExplode ();

			// Destroy the rocket
			Destroy (gameObject);
		}

	}
}
