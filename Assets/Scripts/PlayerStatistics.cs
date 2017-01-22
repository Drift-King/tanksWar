using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerStatistics {

	public int totalShots;
	public int shotsToEnemy;

	public double accuracy (){
		Debug.Log ("Calculating Accuracy------ ");
		Debug.Log ("TotalShots" + totalShots);
		double totalShotsToDie = 4;
		double accuracyFactor = totalShots / totalShotsToDie;
		Debug.Log ("Accuracy Factor: " + accuracyFactor);
		Debug.Log ("ACCURACY:::: " + (100 / accuracyFactor));

		return Math.Round((100 / accuracyFactor), 2);
	} 
}
