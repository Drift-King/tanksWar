using UnityEngine;
using System.Collections;

public class EnemyAI : PlayerControl {

	private Transform player;
	private Gun gun;
	private float shootAngle = 30;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player").transform;
		gun = GetComponentInChildren<Gun> ();
		tilt = 140;
	}

	float CalculateAttackPower(Transform target, float angle) {

		var dir = target.position - transform.position;
		var h = dir.y;
		dir.y = 0;
		var dist = dir.magnitude;
		var a = angle * Mathf.Deg2Rad;
		dist += h / Mathf.Tan (a);

		return Mathf.Sqrt (dist * Physics.gravity.magnitude / Mathf.Sin (2 * a)) * Random.Range (1.2f, 1.8f);
	}

	void LateUpdate () {
		
		if (hasTurn) {
			//tilt -= 20;
			//pivot.rotation = Quaternion.Euler (0, 0, tilt);
			shootAngle = 180 - tilt;
			gun.Fire (CalculateAttackPower (player, shootAngle));

//			if (tilt != shootAngle) {
//				if (tilt < shootAngle) {
//					shootAngle -= 10.0f;
//					tilt = shootAngle;
//					gun.Fire (CalculateAttackPower (player, shootAngle));
//				} else {
//					shootAngle += 10.0f;
//					tilt = shootAngle;
//					gun.Fire (CalculateAttackPower (player, shootAngle));
//				}
//			} else {
//				gun.Fire (CalculateAttackPower (player, shootAngle));
//			}

		} else {
			//tilt += Random.Range (-60, 60);

		}

	}

}
