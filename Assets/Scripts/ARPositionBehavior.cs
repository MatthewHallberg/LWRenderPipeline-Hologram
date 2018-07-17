using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARPositionBehavior : MonoBehaviour {

	public GameObject PlaneFinder;

	private void Update () {
		if (Input.GetMouseButtonDown (1)) {
			ActivatePlaneFinder (true);
		}
	}

	public void ActivatePlaneFinder (bool active) {
		PlaneFinder.SetActive (active);
	}
}
