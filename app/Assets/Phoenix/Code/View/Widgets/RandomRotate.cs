using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomRotate : MonoBehaviour {

    public float minRotate = 0;
    public float maxRotate = 0;

    private void OnEnable()
    {
        this.transform.eulerAngles = new Vector3(this.transform.eulerAngles.x, this.transform.eulerAngles.y, Random.Range(minRotate, maxRotate));
    }
}
