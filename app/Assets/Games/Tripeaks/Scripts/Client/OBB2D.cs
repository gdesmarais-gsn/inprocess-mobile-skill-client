using UnityEngine;
using System.Collections;

public class OBB2D
{
	Vector2[] corner = new Vector2[4];
	Vector2[] axis = new Vector2[2];
	double[] origin = new double[2];
	
	public OBB2D(Vector2 center, float w, float h, float angle)
	{
		Vector2 X = new Vector2( Mathf.Cos(angle), Mathf.Sin(angle));
		Vector2 Y = new Vector2(-Mathf.Sin(angle), Mathf.Cos(angle));
		
		X *= w / 2;
		Y *= h / 2;
		
		corner[0] = center - X - Y;
		corner[1] = center + X - Y;
		corner[2] = center + X + Y;
		corner[3] = center - X + Y;
		
		computeAxes();
	}
	
	// Returns true if the intersection of the boxes is non-empty.
	public bool overlaps(OBB2D other)
	{
		return overlaps1Way(other) && other.overlaps1Way(this);
	}
	
	// Returns true if other overlaps one dimension of this.
	bool overlaps1Way(OBB2D other)
	{
		for (int i = 0; i < 2; i++) 
		{
			
			double t = Vector2.Dot(other.corner[0], axis[i]);
			
			// Find the extent of box 2 on axis a
			double tMin = t;
			double tMax = t;
			
			for (int j = 1; j < 4; j++) 
			{
				t = Vector2.Dot(other.corner[j], axis[i]);
				
				if (t < tMin) 
				{
					tMin = t;
				} 
				else if (t > tMax) 
				{
					tMax = t;
				}
			}
			
			// We have to subtract off the origin
			
			// See if [tMin, tMax] intersects [0, 1]
			if ((tMin > 1 + origin[i]) || (tMax < origin[i])) {
				// There was no intersection along this dimension;
				// the boxes cannot possibly overlap.
				return false;
			}
		}
		
		// There was no dimension along which there is no intersection.
		// Therefore the boxes overlap.
		return true;
	}
	
	// Updates the axes after the corners move.  Assumes the corners actually form a rectangle.
	void computeAxes() {
		axis[0] = corner[1] - corner[0]; 
		axis[1] = corner[3] - corner[0]; 
		
		// Make the length of each axis 1/edge length so we know any
		// dot product must be less than 1 to fall within the edge.
		for (int i = 0; i < 2; i++) {
			axis[i] /= axis[i].sqrMagnitude;
			origin[i] = Vector2.Dot(corner[0], axis[i]);
		}
	}
	
	public void OnDrawGizmos()
	{
		for(int j = 0 ; j < 4 ; j++)
		{
			Gizmos.DrawLine(corner[j], corner[(j+1)&3]);
		}
	}
}
