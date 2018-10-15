using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class PointCloud : MonoBehaviour {

	public Transform Sphere;

	void Points(float theta, float phi, float row) {
		float x = row * Mathf.Cos(theta) * Mathf.Sin(phi);
		float y = row * Mathf.Sin(theta) * Mathf.Sin(phi);
		float z = row * Mathf.Cos(phi);
		Instantiate(Sphere, new Vector3(x, y, z), Quaternion.identity);
	}
 int count = 0;
	void Start () {


	
	}
	

	void Update () {
		count++;
		if (Input.GetKeyDown(KeyCode.Space))
		{

		
string path = "/Users/adarian/sriracha/server/test.txt";

        //Read the text from directly from the test.txt file
        StreamReader reader = new StreamReader(path); 
      string data = reader.ReadToEnd();
        reader.Close();
      Debug.Log(data);
			string[] split_data = data.Split('w');
			string[] split_data2 = data.Split('a');
       for (int i = 1; i < split_data.Length; i++)
			 {
 Points(int.Parse(split_data2[i].Substring(3,3)), 90, int.Parse(split_data[i].Substring(3,3)));
			 }
	}
	}
}
