using UnityEngine;
using System.Collections;

public struct Complex {
	
	public float x;	// real part
	public float y; // imaginary part
	
	public Complex(float x, float y) {
		this.x = x;
		this.y = y;
	}

	public Complex Conjugate {
		get {
			Complex result;
			result.x = x;
			result.y = -y;
			return result;
		}
	}
	
	public static Complex Rotation(float radians) {
		Complex result;
		result.x = Mathf.Cos(radians);
		result.y = Mathf.Sin(radians);
		return result;
	}
	
	public static Complex RotationY(Vector3 normal) {
		Complex result;
		result.x = normal.x;
		result.y = normal.z;
		return result;
	}
	
	public Quaternion QuaternionY {
		get { return Quaternion.AngleAxis(Radians * Mathf.Rad2Deg, Vector3.down); }
	}
	
	public static Complex operator*(Complex l, Complex r) {
		Complex result;
		result.x = l.x*r.x - l.y*r.y;
		result.y = l.x*r.y + l.y*r.x;
		return result;
	}
	
	public float Radians {
		get { return Mathf.Atan2(y, x); }
	}
	
	public float Length {
		get { return Mathf.Sqrt(x*x+y*y); }	
	}
	
	public static Complex Zero {
		get {
			Complex result;
			result.x = 0;
			result.y = 0;
			return result;
		}
	}
	
	public static Complex One {
		get {
			Complex result;
			result.x = 1;
			result.y = 0;
			return result;
		}
	}
	
	public void Normalize() {
		var lengthInv = 1f / Length;
		x *= lengthInv;
		y *= lengthInv;
	}
}
