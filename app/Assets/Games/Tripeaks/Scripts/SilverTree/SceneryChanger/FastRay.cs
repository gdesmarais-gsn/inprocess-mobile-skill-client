using UnityEngine;
using System.Collections;

public struct FastRay
{
	public Vector3 origin;
	public Vector3 direction;
	
	public FastRay(Vector3 origin, Vector3 alreadyNormalizedDirection)
	{
		this.origin = origin;
		this.direction = alreadyNormalizedDirection;
	}

    public Vector3 GetPoint(float dist)
    {
        return new Vector3(origin.x + direction.x*dist, origin.y + direction.y*dist, origin.z + direction.z*dist);
    }

    public Vector2 GetPoint2D(float dist)
    {
        return new Vector2(origin.x + direction.x*dist, origin.y + direction.y*dist);
    }

    public float LocalRayCast()
    {
        return origin.z / -direction.z;
    }
}
