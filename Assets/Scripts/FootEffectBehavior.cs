using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootEffectBehavior : MonoBehaviour {

	public GameObject RipplePrefab;

	private void OnTriggerEnter (Collider other) {
		if (other.CompareTag ("ground")) {
			GameObject ripple = Instantiate (RipplePrefab,this.transform);
			ripple.transform.parent = null;
			Destroy (ripple, 1);
		}
	}
}
