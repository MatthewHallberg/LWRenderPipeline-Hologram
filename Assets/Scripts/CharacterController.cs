using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.UI;

public class CharacterController : MonoBehaviour {

	private const float speed = .4f;

	private Animator anim;
	private Rigidbody rb;
	private Vector3 startPosition;

	// Use this for initialization
	void Start () {
		startPosition = transform.localPosition;
		anim = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody> ();
	}

	// Update is called once per frame
	void Update () {

		//respawn
		if (transform.localPosition.y < -.5f) {
			transform.localPosition = startPosition;
		}

		//move character from joystick input
		float x = CrossPlatformInputManager.GetAxis ("Horizontal");
		float y = CrossPlatformInputManager.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (x, 0.0f, y);

		rb.velocity = movement * speed;

		if (!x.Equals(0) && !y.Equals (0)) {
			transform.eulerAngles = new Vector3 (transform.eulerAngles.x, Mathf.Atan2 (x, y) * Mathf.Rad2Deg, transform.eulerAngles.z);
		}

		if (!x.Equals (0) || !y.Equals (0)) {
			anim.SetTrigger ("walk");
		} else {
			anim.SetTrigger ("idle");
		}
	}
}
