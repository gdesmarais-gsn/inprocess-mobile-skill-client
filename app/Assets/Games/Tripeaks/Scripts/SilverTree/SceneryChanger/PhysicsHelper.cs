using UnityEngine;

#if ENABLE_BOX2D
using FarseerPhysics.Common;
using FarseerPhysics.Collision;
using FarseerPhysics.Dynamics;
//using FarseerPhysics.Collision.Shapes;
using FarseerPhysics.Framework;
#endif

public class PhysicsHelper {

    public const int kNoCollisionsLayer = 8;
    public const int kNoCollisionsMask = 1<<8;

    public static float FixedTimeRatio {
        get {
            return Mathf.Clamp01(
                (Time.time - Time.fixedTime) / Time.fixedDeltaTime
            );
        }
    }

	static int nextDisableGroupIndex;

    public static void DisableCollisionsBetweenObjects(GameObject objectA, GameObject objectB, bool disable)
    {
#if ENABLE_BOX2D
		Physics2d.IgnoreCollision(objectA.GetComponentsInChildren<Rigidbody2d>(), objectB.GetComponentsInChildren<Rigidbody2d>(), disable);
#else
		if(objectA.activeInHierarchy && objectB.activeInHierarchy)
			foreach(Collider a in objectA.GetComponentsInChildren<Collider>())
				foreach(Collider b in objectB.GetComponentsInChildren<Collider>())
					Physics.IgnoreCollision(a, b, disable);
#endif
    }


    public static Bounds GetColliderBounds(GameObject obj)
    {
		Bounds bounds = new Bounds(Vector3.zero, Vector3.zero);
		bool boundsValid = false;
        foreach(Collider c in obj.GetComponentsInChildren<Collider>()) {
			Bounds subBounds = c.bounds;
			if(!boundsValid) {
				boundsValid = true;
				bounds = subBounds;
			} else {
				bounds.SetMinMax(Vector3.Min(bounds.min, subBounds.min), Vector3.Max(bounds.max, subBounds.max));
			}
		}
		return bounds;
    }
    
#if ENABLE_BOX2D
	static Fixture raycastOneHitFixture;
	static Vector2 raycastOneHitNormal;
	static float raycastOneHitFraction;
    static float RaycastOneCallback(Fixture f, Vec2 p, Vec2 n, float fr)
    {
		//Body body = f.Body;

		//if (!IsActiveOn(body))
		//	return 0;

		raycastOneHitFixture = f;
		raycastOneHitNormal = n;
		raycastOneHitFraction *= fr;//MathUtil.Min(raycastOneHitFraction, fr);
//Debug.Log("HIT AT " + fr);
		return fr;
		//return 1.0f;
    }
#endif
    
    public static bool Raycast(ref Ray ray, out 
#if ENABLE_BOX2D
    RaycastHit2d
#else
    RaycastHit
#endif
 hitInfo, float distance = Mathf.Infinity, int layerMask = Physics.DefaultRaycastLayers)
	{
#if ENABLE_BOX2D
        World2d world2d = World2d.Inst; // TODO: get this somehow else if we want to support multiple worlds?
        if(world2d != null)
        {
            // box2d
            float max = 2.0f * (world2d.maxAABB.x - world2d.minAABB.x + world2d.maxAABB.y - world2d.minAABB.y);
            if(distance > max) { distance = max; }
            //float lambda;
            //Vector2 normal;
            //Shape shape = world2d.world.RaycastOne(new Segment(){P1=ray.origin, P2=ray.origin + ray.direction * distance}, out lambda, out normal, false, null);
			raycastOneHitFixture = null;
			//raycastOneHitFraction = 1.1f;
			raycastOneHitFraction = 1.0f;
			world2d.world.RayCast(RaycastOneCallback, ray.origin, ray.origin + ray.direction * distance);
            
            
            if(raycastOneHitFixture == null) {
                hitInfo.point = Vector3.zero;
                hitInfo.normal = Vector3.zero;
                hitInfo.distance = 0.0f;
                hitInfo.collider = null;
                hitInfo.rigidbody = null;
                hitInfo.transform = null;
#if UNITY_EDITOR
				Debug.DrawLine(ray.origin, ray.origin + ray.direction, Color.gray);
#endif
                return false;
            }
            Rigidbody2d rb2d = (Rigidbody2d)raycastOneHitFixture.UserData;
            hitInfo.point = ray.origin + ray.direction * (raycastOneHitFraction * distance);
            hitInfo.normal = raycastOneHitNormal;
            hitInfo.distance = raycastOneHitFraction * distance;
            hitInfo.collider = new 
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
(){box2dRigidbody = rb2d, box2dShape = raycastOneHitFixture};
            hitInfo.rigidbody = rb2d;
            hitInfo.transform = rb2d.transform;
#if UNITY_EDITOR
            // draw a white line from raycast start to raycast end which turns red at the intersection point
            Debug.DrawLine(ray.origin, ray.origin + ray.direction * hitInfo.distance, Color.white);
            Debug.DrawLine(ray.origin + ray.direction * hitInfo.distance, ray.origin + ray.direction * Mathf.Min(distance, 1000.0f), Color.red);
#endif
            return true;
        }
#if UNITY_EDITOR
		Debug.DrawLine(ray.origin, ray.origin + ray.direction, Color.gray);
#endif
        hitInfo = default(RaycastHit2d);
        return false;
//#endif
//#if ENABLE_BOX2D && !DISABLE_PHYSX
//        else
//#endif
//#if !DISABLE_PHYSX
#else
        {
            // physX
            bool rv = Physics.Raycast(ray, out hitInfo, distance, layerMask);
#if UNITY_EDITOR
            // draw a white line from raycast start to raycast end which turns red at the intersection point
            Debug.DrawLine(ray.origin, ray.origin + ray.direction * hitInfo.distance, rv ? Color.white : Color.gray);
            Debug.DrawLine(ray.origin + ray.direction * hitInfo.distance, ray.origin + ray.direction * Mathf.Min(distance, 1000.0f), rv ? Color.red : Color.gray);
#endif
            return rv;
        }
#endif
	}

    public static Bounds GetSimpleColliderLocalBounds(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c) {
#if ENABLE_BOX2D
		AABB aabb;
		c.box2dShape.GetAABB(out aabb, 0);
		return new Bounds(Vector3.zero, aabb.UpperBound - aabb.LowerBound);
#else
		CapsuleCollider capsule = c as CapsuleCollider;
		if(capsule != null)
		{
			float diameter = capsule.radius * 2.0f;
			return new Bounds(capsule.center, new Vector3(diameter, capsule.height, diameter));
		}
		else
		{
			SphereCollider sphere = c as SphereCollider;
			if(sphere != null)
			{
				float diameter = sphere.radius * 2.0f;
				return new Bounds(sphere.center, new Vector3(diameter, diameter, diameter));
			}
			else
			{
				BoxCollider box = c as BoxCollider;
				if(box != null)
				{
					return new Bounds(box.center, box.size);
				}
				else
				{
					// not supported
					return new Bounds(Vector3.zero, Vector3.one);
				}
			}
		}
#endif
	}


}

