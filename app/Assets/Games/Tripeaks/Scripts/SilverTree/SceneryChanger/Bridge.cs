#if UNITY_EDITOR
#define ENABLE_PREVIEW
#endif

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class ContactBody
{
	public Transform transform;
	public 
#if ENABLE_BOX2D
		Rigidbody2d
#else
		Rigidbody
#endif
 rigidbody;
	public float groundedFactor; // 0 to 1
	public Vector3 offsetToBottom;
	public float halfWidth;
	public float worldX;
	public float mass;
	public bool dead;
	public bool lastWasGrounded;
}

abstract public class DynamicSurface
{
	// local coord meaning: x=-1 means left end, x=1 means right end, y=0 means neutral height, y scale remains in world units
	public Vector3 worldOffsetToCenter;
	public float halfWidth = 5.0f;
	public float inverseHalfWidth = 1.0f / 5.0f;
	public List<ContactBody> contactBodies;

	public float WorldToLocalX(float worldX)
	{
		return (worldX - worldOffsetToCenter.x) * inverseHalfWidth;
	}

	public float LocalToWorldX(float localX)
	{
		return (localX * halfWidth) + worldOffsetToCenter.x;
	}

//	public float WorldToLocalY(float worldY)
//	{
//		return worldY - worldOffsetToCenter.y;
//	}

	public float LocalToWorldY(float localY)
	{
		return localY + worldOffsetToCenter.y;
	}
	
	public float GetWorldYAt(float worldX)
	{
		return LocalToWorldY(GetLocalYAt(WorldToLocalX(worldX)));
	}
	
	abstract public float GetLocalYAt(float localX);

	public virtual Vector3 GetDerivAt(float localX)
	{
		const float dx = 0.03125f;
		float y0 = GetLocalYAt(localX + (-0.5f*dx));
		float y1 = GetLocalYAt(localX + (0.5f*dx));
		//return (y1 - y0) * (1.0f / dx); // slope
		return new Vector3(dx, y1 - y0, 0.0f);
	}
	
	public Vector3 GetNormalAt(float localX)
	{
		Vector3 deriv = GetDerivAt(localX);
		deriv.x *= halfWidth;
		return Vector3.Cross(Vector3.forward, deriv).normalized;
	}
}

public class ContactSineSurface : DynamicSurface
{
	public float displacementFactor = 1.0f;
	public float gravitySagDist = 0.5f;
	public float sagLimit = -4.0f;
	public float massCap = 1.0f;
	public float flatDist = 0.8f;

	public float FactorWithOvershoot(float factor)
	{
		return Mathf.Sin(factor*2.0f) * 1.09975017f;
	}
	
	public float CalculateSag(float relativeX, float magnitude)
	{
		if(relativeX <= -1.0f || relativeX >= 1.0f)
			return 0.0f;
		//return magnitude * (Mathf.Cos((relativeX) * Mathf.PI) * -0.5f - 0.5f);
		float xxm1 = relativeX*relativeX - 1.0f;
		return -magnitude * xxm1 * xxm1;
	}
	
	public float CalculateDistributedSag(float relativeX, float magnitude)
	{
		if(relativeX <= -1.0f || relativeX >= 1.0f)
			return 0.0f;
		return magnitude * (Mathf.Cos(relativeX) - 0.5403023f) * -2.17534265f;
		//float xxm1 = relativeX*relativeX - 1.0f;
		//return -magnitude * xxm1 * xxm1;
	}
	
	public override float GetLocalYAt(float localX)
	{
		float y = 0.0f;

		if(localX > -1.0f && localX < 1.0f)
		{
			//float fCount = 0.0f;
			int count = contactBodies.Count;
			for(int i = 0 ; i < count ; i++)
			{
				ContactBody cb = contactBodies[i];
				if(cb.groundedFactor < 0.001f)
					continue;
				float cbLocalX = WorldToLocalX(cb.worldX);
				float relativeX = cbLocalX - localX;
				float magnitude = FactorWithOvershoot(cb.groundedFactor) * MathUtil.Min(massCap, cb.mass) * displacementFactor;
				float sag = CalculateSag(relativeX, magnitude);
				
				float xExtended2 = cbLocalX * (1.0f + flatDist * inverseHalfWidth);
				sag *= MathUtil.Max(0.0f, 1.0f - xExtended2*xExtended2); // level out influence near edges

				y += sag;

				//fCount += cb.groundedFactor;
			}

			// sag from gravity alone
			//y += CalculateDistributedSag(localX, gravitySagDist / (1.0f + fCount));
			y += CalculateDistributedSag(localX, gravitySagDist);

			if(y < sagLimit)
				y = sagLimit;
			if(y > -sagLimit)
				y = -sagLimit;
			
			float xExtended = localX * (1.0f + flatDist * inverseHalfWidth);
			//y *= Mathf.Sqrt(MathUtil.Max(0.0f, 1.0f - xExtended*xExtended)); // level out near edges
			y *= MathUtil.Max(0.0f, 1.0f - xExtended*xExtended); // level out near edges
			//y *= MathUtil.Max(0.0f, CalculateSag(xExtended, -1.0f));
		}
		
		return y;
	}
}

public class RollingSineSurface : DynamicSurface
{
	public float frequency = 1.0f;
	public float speed = 0.5f;
	public float magnitude = 1.0f;
	public float limit = -4.0f;
	public float flatDist = 0.8f;
	
	public float CalculateSag(float relativeX, float magnitude)
	{
		//if(relativeX <= -1.0f || relativeX >= 1.0f)
		//	return 0.0f;
		return magnitude * (Mathf.Cos((relativeX) * Mathf.PI) * 0.5f + 0.5f);
	}
	
	public override float GetLocalYAt(float localX)
	{
		float y = 0.0f;

		if(localX > -1.0f && localX < 1.0f)
		{
			y += CalculateSag(localX * frequency + Time.time * speed, magnitude);

			if(y < limit)
				y = limit;
			if(y > -limit)
				y = -limit;
			
			//y *= Mathf.Sqrt(1.0f - localX*localX); // level out near edges
			float xExtended = localX * (1.0f + flatDist * inverseHalfWidth);
			y *= MathUtil.Max(0.0f, 1.0f - xExtended*xExtended); // level out near edges
		}
		
		return y;
	}
}


#if ENABLE_PREVIEW
[ExecuteInEditMode]
#endif
public class Bridge : TagTrigger
{
	public enum Equation
	{
		ContactSine,
		RollingSine,
	}
	
	List<ContactBody> contactBodies;
	List<Transform> invisiblePlatforms;
	DynamicSurface surface;
	Transform root;
	float prevHeight;

	public Vector3 meshScale = Vector3.one;
	public Mesh mesh;
	public Material material;
	public float initialSeparation = 0.5f;
	public Vector3 forwardAxis = new Vector3(-1.0f, 0.0f, 0.0f);
	public float rotationAngle = 90.0f;
	public Vector3 rotationAxis = new Vector3(0.0f, 1.0f, 0.0f);
	public bool faceNormal = true;

	//public Mesh leftCapMesh;
	//public Mesh rightCapMesh;
	public float cullOnscreenLeftOffset = 0.0f;
	public float cullOnscreenRightOffset = 0.0f;

	public float downSpeed = 4.0f;
	public float upSpeed = 2.0f;
	public float width = 10.0f;
	public float height = 4.0f;

	public Equation equation;
	
	// for ContactSineSurface
	public float selfSag = 0.5f;
	public float displacementFactor = 1.0f;
	public float massCap = 1.0f;
	public float flatDist = 0.8f;
	
	// for RollingSineSurface
	public float rollSpeed = 0.5f;
	public float rollMagnitude = 1.0f;
	public float rollFrequency = 1.0f;
	
	protected override void Awake()
	{
		base.Awake();
		root = transform;
		contactBodies = new List<ContactBody>();
		if(equation == Equation.ContactSine)
		{
			surface = new ContactSineSurface()
			{
				sagLimit = -0.5f * height,
				gravitySagDist = selfSag,
				displacementFactor = displacementFactor,
				massCap = massCap,
				flatDist = flatDist,
			};
		}
		if(equation == Equation.RollingSine)
		{
			surface = new RollingSineSurface()
			{
				limit = -0.5f * height,
				speed = rollSpeed,
				magnitude = rollMagnitude,
				frequency = rollFrequency,
				flatDist = flatDist,
			};
		}
		if(surface != null)
		{
			surface.worldOffsetToCenter = root.position;
			surface.halfWidth = width * 0.5f;
			surface.inverseHalfWidth = 2.0f / width;
			surface.contactBodies = contactBodies;
		}
		
//#if ENABLE_BOX2D
//		Collider2d
//#else
//		Collider
//#endif
//		triggerBox = GetComponent<
//#if ENABLE_BOX2D
//		Collider2d
//#else
//		Collider
//#endif
//		>();
//		Bounds triggerBounds = PhysicsHelper.GetSimpleColliderLocalBounds(triggerBox);

		SetColliderDimensions();
		
		invisiblePlatforms = new List<Transform>();
	}
	
	void SetColliderDimensions()
	{
#if ENABLE_BOX2D
		// NYI
#else
		BoxCollider box = GetComponent<BoxCollider>();
		if(box != null)
		{
			box.center = Vector3.zero;
			box.size = new Vector3(width, height, 2.0f);
		}
#endif
		prevHeight = height;
	}
	
	bool CanCollideWithLayer(GameObject go)
	{
		if(go.layer == CollisionHelper.kLayerFrictionless
		|| go.layer == CollisionHelper.kLayerNoCollisions
		|| gameObject.layer == CollisionHelper.kLayerNoCollisions)
			return false;
		if(go.layer == CollisionHelper.kLayerPlayer
		? (gameObject.layer == CollisionHelper.kLayerNotPlayer)
		: (gameObject.layer == CollisionHelper.kLayerJustPlayer))
			return false;
		if(go.layer == CollisionHelper.kLayerSpecial
		? (gameObject.layer == CollisionHelper.kLayerNotSpecial)
		: (gameObject.layer == CollisionHelper.kLayerJustSpecial))
			return false;
		return true;
	}

    protected override void OnTagEnter(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c) {
		if(c.isTrigger || !CanCollideWithLayer(c.gameObject))
			return;
		
#if ENABLE_BOX2D
	Rigidbody2d
#else
	Rigidbody
#endif
 attachedRigidbody = c.attachedRigidbody;
		if(attachedRigidbody == null)
			return;

//Debug.Log("OnTagEnter: " + c + ", " + attachedRigidbody);
			
		int count = contactBodies.Count;
		for(int i = 0 ; i < count ; i++)
		{
			ContactBody cb = contactBodies[i];
			if(cb.rigidbody == attachedRigidbody)
			{
//Debug.Log("OnTagEnter REACTIVATED: " + c + ", " + attachedRigidbody);
				cb.dead = false;
				return;
			}
		}

		Bounds localBounds = PhysicsHelper.GetSimpleColliderLocalBounds(c);
		Vector3 offsetToBottom = localBounds.center + new Vector3(0.0f, localBounds.size.y * -0.5f, 0.0f);
		float halfWidth = localBounds.extents.x;
		Transform rigidbodyTransform = attachedRigidbody.transform;

		{
			ContactBody cb = new ContactBody()
			{
				transform = rigidbodyTransform,
				rigidbody = attachedRigidbody,
				mass = attachedRigidbody.mass,
				groundedFactor = 0.0f,
				offsetToBottom = rigidbodyTransform.InverseTransformPoint(c.transform.TransformPoint(offsetToBottom)),
				halfWidth = halfWidth,
				worldX = rigidbodyTransform.position.x,
			};
			contactBodies.Add(cb);
//Debug.Log("OnTagEnter ADDED: " + cb.transform + ", count = " + contactBodies.Count);
		}
    }
	
    protected override void OnTagExit(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c) {
		if(!c || c.isTrigger || !CanCollideWithLayer(c.gameObject))
			return;
		
#if ENABLE_BOX2D
	Rigidbody2d
#else
	Rigidbody
#endif
 attachedRigidbody = c.attachedRigidbody;
		if(attachedRigidbody == null)
			return;

//Debug.Log("OnTagExit: " + c + ", " + attachedRigidbody);

		int count = contactBodies.Count;
		for(int i = 0 ; i < count ; i++)
		{
			ContactBody cb = contactBodies[i];
			if(cb.rigidbody == attachedRigidbody)
			{
//Debug.Log("OnTagExit DEACTIVATED: " + c + ", " + attachedRigidbody);
				cb.dead = true;
				return;
			}
		}
#if UNITY_EDITOR
		Debug.LogWarning("exit without enter? " + c + ", " + attachedRigidbody);
#endif
    }
    
//#if UNITY_EDITOR
//	float hax;
//	Vector3 gizmoa, gizmob;
//#endif
    
    void FixedUpdate()
    {
#if UNITY_EDITOR
		if(!Application.isPlaying)
			return;
#endif
		int platformIndex = 0;
		int count = contactBodies.Count;
		for(int i = 0 ; i < count ; i++)
		{
			ContactBody cb = contactBodies[i];
			if(cb.dead)
			{
				cb.groundedFactor -= Time.deltaTime * upSpeed;
				if(cb.groundedFactor <= 0.0f)
				{
					contactBodies.RemoveAt(i);
//Debug.Log("Update REMOVED: " + cb.transform + ", count = " + contactBodies.Count);
					i--;
					count--;
				}
			}
			else if(cb.transform == null || cb.rigidbody.isKinematic)
			{
				cb.dead = true;
			}
			else
			{
				Vector3 bodyWorldPos = cb.transform.position;
				Vector3 bodyWorldFeetPos = bodyWorldPos + cb.offsetToBottom;
//gizmoa = bodyWorldFeetPos;
//				Vector3 tempNormal = surface.GetNormalAt(surface.WorldToLocalX(bodyWorldFeetPos.x));
//				bodyWorldFeetPos = bodyWorldPos + tempNormal * Vector3.Dot(cb.offsetToBottom, tempNormal);
//				//Vector3.Dot(cb.offsetToBottom, tempNormal)
//gizmob = bodyWorldFeetPos;
				
				float bridgeWorldYUnderBody = surface.GetWorldYAt(bodyWorldFeetPos.x);
				float bridgeWorldYUnderBodyEventual;

				//if()
				{
					float groundedFactor = cb.groundedFactor;
					cb.groundedFactor = 1.0f;
					bridgeWorldYUnderBodyEventual = surface.GetWorldYAt(bodyWorldFeetPos.x);
					cb.groundedFactor = groundedFactor;
				}
				//else
				//{
				//	bridgeWorldYUnderBodyEventual = bridgeWorldYUnderBody;
				//}
//Debug.Log("bridgeWorldYUnderBody[" + bodyWorldFeetPos.x + "] = " + bridgeWorldYUnderBody);

#if UNITY_EDITOR
//hax=bodyWorldFeetPos.x;
				Debug.DrawLine(bodyWorldFeetPos, new Vector3(bodyWorldFeetPos.x, bridgeWorldYUnderBody, bodyWorldFeetPos.z), Color.green);
#endif

				float heightTop = MathUtil.Max(bridgeWorldYUnderBody, bridgeWorldYUnderBodyEventual) + 0.25f;
				float heightBottom = MathUtil.Min(bridgeWorldYUnderBody, bridgeWorldYUnderBodyEventual) - 0.75f;
				
				if(displacementFactor < 0.0f)
					heightTop = MathUtil.Max(heightTop, surface.LocalToWorldY(-displacementFactor));
				if(displacementFactor > 0.0f)
					heightBottom = MathUtil.Min(heightBottom, surface.LocalToWorldY(displacementFactor)); // not sure if it's needed
				
				bool grounded = (bodyWorldFeetPos.y <= heightTop
					&& bodyWorldFeetPos.y >= heightBottom
					&& cb.rigidbody.velocity.y <= 5.0f);
				if(grounded || cb.lastWasGrounded)
				{
					// stick to bridge
					Transform platformTransform = GetInvisiblePlatform(platformIndex++);
					Vector3 newPlatformPos = new Vector3(bodyWorldFeetPos.x, (bridgeWorldYUnderBody + bridgeWorldYUnderBodyEventual) * 0.5f, bodyWorldFeetPos.z);
					platformTransform.localPosition = newPlatformPos;

					if(bridgeWorldYUnderBody > bodyWorldFeetPos.y + 0.25f /*|| grounded*/)
					//if(bridgeWorldYUnderBody > (bodyWorldFeetPos.y + cb.rigidbody.velocity.y * 0.05f) - 0.25f)
					{
						Vector3 p = bodyWorldPos;
						p.y = bridgeWorldYUnderBody - cb.offsetToBottom.y;

						//Vector3 v = cb.rigidbody.velocity;
						//v.y = 0.0f;
						//v.y = (p.y - bodyWorldPos.y) * 40.0f;
						//if(v.y < -14.0f)
						//{
							//v.y = -14.0f;
							//cb.rigidbody.velocity = v;
						//}

						cb.transform.position = p;
					}

//Debug.Log("moved collider to " + platformTransform.localPosition.x + ", " + platformTransform.localPosition.y);
					platformTransform.up = surface.GetNormalAt(surface.WorldToLocalX(bodyWorldFeetPos.x));

					cb.worldX = MathUtil.Lerp(cb.worldX, bodyWorldFeetPos.x, 0.25f); // hack since we reuse contact points

					cb.groundedFactor += Time.deltaTime * downSpeed;
					if(cb.groundedFactor > 1.0f)
						cb.groundedFactor = 1.0f;
				}
				else
				{
					//Debug.DrawLine(bodyWorldFeetPos, new Vector3(bodyWorldFeetPos.x, bridgeWorldYUnderBody, bodyWorldFeetPos.z), new Color(UnityEngine.Random.value,UnityEngine.Random.value,UnityEngine.Random.value));
					cb.groundedFactor -= Time.deltaTime * upSpeed;
					if(cb.groundedFactor < 0.0f)
						cb.groundedFactor = 0.0f;
				}
				cb.lastWasGrounded = grounded;
			}
		}

		int invisiblePlatformsCount = invisiblePlatforms.Count;
		while(platformIndex < invisiblePlatformsCount)
		{
			invisiblePlatforms[platformIndex].gameObject.SetActive(false);
			platformIndex++;
		}
    }
    
    Transform GetInvisiblePlatform(int index)
    {
		int count = invisiblePlatforms.Count;
		if(index < count)
		{
			Transform rv = invisiblePlatforms[index];
			rv.gameObject.SetActive(true);
			return rv;
		}
		if(index > count)
			return null;
		GameObject go = new GameObject("BridgeCollider");
		go.tag = "NoEdgeStick";
		go.layer = CollisionHelper.kLayerFrictionless;
#if false
		SphereCollider sphere = go.AddComponent<SphereCollider>();
		sphere.radius = 0.5f;
		sphere.center = new Vector3(0.0f, -sphere.radius, 0.0f);
#else
		BoxCollider box = go.AddComponent<BoxCollider>();
		box.size = new Vector3(1.0f, 0.1f, 0.5f);
		box.center = new Vector3(0.0f, -0.5f * box.size.y, 0.0f);
#endif
		Transform t = go.transform;
		Rigidbody bcrb = go.AddComponent<Rigidbody>();
		bcrb.isKinematic = true;
		bcrb.useGravity = false;
		//t.parent = root;
		invisiblePlatforms.Add(t);
		return t;
    }
	
	
	
#if false
	void OnRenderObject()
	{
        if(0 == (Camera.current.cullingMask & (1 << gameObject.layer)))
            return;
#if UNITY_EDITOR
		// hack: don't render stuff in preview panels...
		if(Camera.current.name == "PreRenderCamera")
			return;
		if(surface == null)
			Awake();
		if(MathUtil.Dist(surface.halfWidth + prevHeight, width * 0.5f + height) > 0.0001f)
		{
			surface.halfWidth = width * 0.5f;
			surface.inverseHalfWidth = 2.0f / width;
			SetColliderDimensions();
		}
		surface.worldOffsetToCenter = root.position;
		ContactSineSurface contactSineSurface = surface as ContactSineSurface;
		if(contactSineSurface != null)
		{
			contactSineSurface.gravitySagDist = selfSag;
			contactSineSurface.displacementFactor = displacementFactor;
			contactSineSurface.massCap = massCap;
			contactSineSurface.sagLimit = -height * 0.5f;
			contactSineSurface.flatDist = flatDist;
		}
		RollingSineSurface rollingSineSurface = surface as RollingSineSurface;
		if(rollingSineSurface != null)
		{
			rollingSineSurface.speed = rollSpeed;
			rollingSineSurface.magnitude = rollMagnitude;
			rollingSineSurface.frequency = rollFrequency;
			rollingSineSurface.limit = -height * 0.5f;
			rollingSineSurface.flatDist = flatDist;
		}
#endif
		if(mesh == null || material == null)
			return;

		material.SetPass(0);

		float worldZ = root.position.z;
        int numSegments = Mathf.CeilToInt(width / initialSeparation) + 1;
        float invNumSegmentsTimesTwo = 2.0f / numSegments;

		float bottomWorldY, topWorldY, leftLocalX, rightLocalX;
#if UNITY_EDITOR
		if(Camera.current == Stm.V1_1.SceneHelper.GetMainCamera(gameObject.layer) || Application.isPlaying)
#endif
		{
			float margin = initialSeparation * 2.0f;
			Bounds bounds = PlanarStream.GetWorldBoundsOfScreen(surface.worldOffsetToCenter);
			bottomWorldY = bounds.min.y - margin;
			topWorldY = bounds.max.y + margin;
			leftLocalX = MathUtil.Max(-1.0f, surface.WorldToLocalX(bounds.min.x - margin + cullOnscreenLeftOffset));
			rightLocalX = MathUtil.Min(1.0f, surface.WorldToLocalX(bounds.max.x + margin + cullOnscreenRightOffset));
		}
#if UNITY_EDITOR
		else
		{
			bottomWorldY = float.MinValue;
			topWorldY = float.MaxValue;
			leftLocalX = -1.0f;
			rightLocalX = 1.0f;
		}
#endif
		int iMin = Mathf.FloorToInt((leftLocalX + 1.0f) * (numSegments * 0.5f) + 0.00001f);
		int iMax = Mathf.CeilToInt((rightLocalX + 1.0f) * (numSegments * 0.5f) - 0.00001f);
		
		Quaternion rotation = Quaternion.AngleAxis(rotationAngle, rotationAxis);
		if(!faceNormal)
			rotation = Quaternion.LookRotation(Vector3.up, forwardAxis) * rotation;
		
        Vector3 prevPos = Vector3.zero;
        for(int i = iMin ; i < iMax ; i++)
		{
			float x = i * invNumSegmentsTimesTwo - 1.0f;
			float worldX = surface.LocalToWorldX(x);
			float y = surface.GetLocalYAt(x);
			float worldY = surface.LocalToWorldY(y);
			Vector3 position = new Vector3(worldX, worldY, worldZ);
			if(i == iMin || worldY < bottomWorldY || worldY > topWorldY)
			{
				prevPos = position;
				continue;
			}
			Vector3 scale = meshScale * (position - prevPos).magnitude / (position.x - prevPos.x);
			prevPos = position;
			Vector3 normal = surface.GetNormalAt(x);
			
			//Matrix4x4 matrix = Matrix4x4.TRS(p, Quaternion.LookRotation(MathUtil.Lerp(dir_prev, particle.dir, f)), Vector3.one * MathUtil.Lerp(scale_prev, scale, f));
			Matrix4x4 matrix = Matrix4x4.TRS(position, faceNormal ? (Quaternion.LookRotation(normal, forwardAxis) * rotation) : rotation, scale);
			
//            Graphics.DrawMesh( 
//                mesh,
//                matrix,
//                material,
//                gameObject.layer);
            
            Graphics.DrawMeshNow(mesh, matrix);
		}
	}
#else
	void Update()
	{
#if UNITY_EDITOR
		if(surface == null)
			Awake();
		if(MathUtil.Dist(surface.halfWidth + prevHeight, width * 0.5f + height) > 0.0001f)
		{
			surface.halfWidth = width * 0.5f;
			surface.inverseHalfWidth = 2.0f / width;
			SetColliderDimensions();
		}
		surface.worldOffsetToCenter = root.position;
		ContactSineSurface contactSineSurface = surface as ContactSineSurface;
		if(contactSineSurface != null)
		{
			contactSineSurface.gravitySagDist = selfSag;
			contactSineSurface.displacementFactor = displacementFactor;
			contactSineSurface.massCap = massCap;
			contactSineSurface.sagLimit = -height * 0.5f;
			contactSineSurface.flatDist = flatDist;
		}
		RollingSineSurface rollingSineSurface = surface as RollingSineSurface;
		if(rollingSineSurface != null)
		{
			rollingSineSurface.speed = rollSpeed;
			rollingSineSurface.magnitude = rollMagnitude;
			rollingSineSurface.frequency = rollFrequency;
			rollingSineSurface.limit = -height * 0.5f;
			rollingSineSurface.flatDist = flatDist;
		}
#endif
		if(mesh == null || material == null)
			return;

		float worldZ = root.position.z;
        int numSegments = Mathf.CeilToInt(width / initialSeparation) + 1;
        float invNumSegmentsTimesTwo = 2.0f / numSegments;

		float bottomWorldY, topWorldY, leftLocalX, rightLocalX;
#if UNITY_EDITOR
		if(Camera.current == Stm.V1_1.SceneHelper.GetMainCamera(gameObject.layer) || Application.isPlaying)
#endif
		{
			float margin = initialSeparation * 2.0f;
			Bounds bounds = PlanarStream.GetWorldBoundsOfScreen(surface.worldOffsetToCenter);
			bottomWorldY = bounds.min.y - margin;
			topWorldY = bounds.max.y + margin;
			leftLocalX = MathUtil.Max(-1.0f, surface.WorldToLocalX(bounds.min.x - margin + cullOnscreenLeftOffset));
			rightLocalX = MathUtil.Min(1.0f, surface.WorldToLocalX(bounds.max.x + margin + cullOnscreenRightOffset));
		}
#if UNITY_EDITOR
		else
		{
			bottomWorldY = float.MinValue;
			topWorldY = float.MaxValue;
			leftLocalX = -1.0f;
			rightLocalX = 1.0f;
		}
#endif
		int iMin = Mathf.FloorToInt((leftLocalX + 1.0f) * (numSegments * 0.5f) + 0.00001f);
		int iMax = Mathf.CeilToInt((rightLocalX + 1.0f) * (numSegments * 0.5f) - 0.00001f);
		
		Quaternion rotation = Quaternion.AngleAxis(rotationAngle, rotationAxis);
		if(!faceNormal)
			rotation = Quaternion.LookRotation(Vector3.up, forwardAxis) * rotation;
		
        Vector3 prevPos = Vector3.zero;
        for(int i = iMin ; i < iMax ; i++)
		{
			float x = i * invNumSegmentsTimesTwo - 1.0f;
			float worldX = surface.LocalToWorldX(x);
			float y = surface.GetLocalYAt(x);
			float worldY = surface.LocalToWorldY(y);
			Vector3 position = new Vector3(worldX, worldY, worldZ);
			if(i == iMin || worldY < bottomWorldY || worldY > topWorldY)
			{
				prevPos = position;
				continue;
			}
			Vector3 scale = meshScale * (position - prevPos).magnitude / (position.x - prevPos.x);
			prevPos = position;
			Vector3 normal = surface.GetNormalAt(x);
			
			//Matrix4x4 matrix = Matrix4x4.TRS(p, Quaternion.LookRotation(MathUtil.Lerp(dir_prev, particle.dir, f)), Vector3.one * MathUtil.Lerp(scale_prev, scale, f));
			Matrix4x4 matrix = Matrix4x4.TRS(position, faceNormal ? (Quaternion.LookRotation(normal, forwardAxis) * rotation) : rotation, scale);
			
            Graphics.DrawMesh( 
                mesh,
                matrix,
                material,
                gameObject.layer);
            
            //Graphics.DrawMeshNow(mesh, matrix);
		}
	}
#endif
	
	
	
	
	
#if UNITY_EDITOR
	protected override void OnDrawGizmos()
	{
		base.OnDrawGizmos();
		Gizmos.DrawIcon(transform.position, "bridge.png");
//Gizmos.DrawIcon(gizmoa, "snaptarget.png");
//Gizmos.DrawIcon(gizmob, "shrapnel.png");
//
//if(Application.isPlaying && UnityEditor.EditorApplication.isPaused)
//	return;
//		
//		if(surface == null)
//			Awake();
//
//		surface.worldOffsetToCenter = root.position;
//		surface.halfWidth = width * 0.5f;
//		surface.inverseHalfWidth = 2.0f / width;
//		surface.gravitySagDist = selfSag;
//		surface.displacementFactor = displacementFactor;
//		
//		bool first = true;
//		Vector3 prevPos = Vector3.zero;
//		for(float x = -1.0f ; x < 1.0f ; x += 1.0f/64.0f)
//		{
//			float worldX = surface.LocalToWorldX(x);
////if(prevPos.x < hax && worldX > hax && hax != 0.0f)
////	worldX = hax;
//			//float worldY = surface.GetWorldYAt(worldX);
//			float y = surface.GetLocalYAt(x);
//			float worldY = surface.LocalToWorldY(y);
//
////if(prevPos.x <= hax && worldX >= hax)
////if(Application.isPlaying && !UnityEditor.EditorApplication.isPaused)
////Debug.Log("y[" + worldX + "] = " + worldY);
//
//			Vector3 pos = new Vector3(worldX, worldY, surface.worldOffsetToCenter.z);
//			if(first)
//				first = false;
//			else
//			{
//				Debug.DrawLine(pos, prevPos);
//				//for(float t = 0.0f ; t < 0.125f ; t += 0.015625f)
//				//{
//				//	float f = 1.0f - t * (1.0f/0.125f);
//				//	Debug.DrawLine(pos + new Vector3(0,-t,0), prevPos + new Vector3(0,-t,0), new Color(f,f,f));
//				//}
//
////				int invisiblePlatformsCount = invisiblePlatforms.Count;
////				for(int i = 0 ; i < invisiblePlatformsCount ; i++)
////					Debug.DrawLine(pos, invisiblePlatforms[i].position, invisiblePlatforms[i].activeInHierarchy ? Color.yellow : Color.black);
//
//				Vector3 normal = surface.GetNormalAt(x);
//				Debug.DrawLine(pos + normal * 0.015625f, pos + normal * 0.125f, Color.red);
//			}
//			prevPos = pos;
//		}
	}
#endif
    
}
