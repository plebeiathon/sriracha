using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instantiation : MonoBehaviour {
    //Instantiate accepts any component type, because it instantiates the GameObject 

    public Transform brick;

    void Start() 
    {
        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++) 
            {
                Instantiate(brick, new Vector3(x, y, 0), Quaternion.identity);
                Debug.Log(Quaternion.identity);
            }
        }
    }
}