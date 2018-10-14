using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointCloud : MonoBehaviour {

	public Transform Sphere;

	void Points(float theta, float phi, float row) {
		float x = row * Mathf.Cos(theta) * Mathf.Sin(phi);
		float y = row * Mathf.Sin(theta) * Mathf.Sin(phi);
		float z = row * Mathf.Cos(phi);
		Instantiate(Sphere, new Vector3(x, y, z), Quaternion.identity);
	}

	void Start () {

		for (int i = 0; i < 100; i++) {
			Points(Random.Range(-10.0f, 10.0f), Random.Range(-10.0f, 10.0f), Random.Range(-10.0f, 10.0f));
		}
	}
	

	void Update () {
		
	}
}
