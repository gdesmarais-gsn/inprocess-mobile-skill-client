using UnityEngine;
using System.Collections;

public class MeshHelper {

    public static Mesh ExtrudeSpline(Parametric spline, Transform root,
                                     int resolutionAlong, int resolutionAround,
                                     float radius, float uStart, float uEnd, bool flipNormals) {
		if(MathUtil.NearZero(radius)) {
			resolutionAlong = 2;
			resolutionAround = 2;
		}
        // initialize buffers
        var vertices = new Vector3[resolutionAlong * resolutionAround];
        var normals = new Vector3[vertices.Length];
        var uvs = new Vector2[vertices.Length];
        var tris = new int[ 3 * (resolutionAlong-1) * (2 * (resolutionAround-1)) ];
        // compute position, tangent and normal
        var t = spline.GetDirectionAt(uStart);
        var n = Mathf.Abs(Vector3.Dot(t,Vector3.up)) > 0.5f ?
            Vector3.Cross(t, Vector3.forward) :
            Vector3.Cross(t, Vector3.up);
        n.Normalize();
        // compute steppers
        var v = 0;
        float uStep = 1f / (resolutionAlong-1f);
        float vStep = 1f / (resolutionAround-1f);
        var u = 0f;
        var uActual = uStart;
        var rotor = Complex.Rotation(Geom.Tau / (float) (resolutionAround-1f));
        var tri = 0;
        // computer vertex positions
        for(int i=0; i<resolutionAlong; ++i) {
            var p = spline.GetPositionAt(uActual);
            var m = Vector3.Cross(t, n);
            var r = Complex.One;
            for (int j=0; j<resolutionAround; ++j) {
                var spindle = r.x * n + r.y * m;
                vertices[v] = root.InverseTransformPoint(p + radius * spindle);
                normals[v] = root.InverseTransformDirection(spindle);
                if (flipNormals) {
                    normals[v] *= -1f;
                }
                uvs[v].x = u;
                uvs[v].y = j * vStep;
                ++v;
                r = rotor * r;
            }

            if (i < resolutionAlong-1) {
                u += uStep;
                uActual = uStart + u * (uEnd - uStart);
                p = spline.GetPositionAt(uActual);
                var t1 = spline.GetDirectionAt(uActual);
                var q = Quaternion.FromToRotation(t, t1);
                n = q * n;
                n.Normalize();
                t = t1;
                var orth = Vector3.Cross(t, n);
                n = Vector3.Cross(orth, t);
            }
        }
        // compute faces
        for (int i=0; i<resolutionAlong-1; ++i) {
            var head = resolutionAround * i;
            var curr = head;
            for (int j=0; j<resolutionAround-1; ++j) {
                //var next = j == resolutionAround-1 ? head : curr + 1; // modulus
                var next = curr + 1;
                if (flipNormals) {
                    tris[tri++] = curr;
                    tris[tri++] = next + resolutionAround;
                    tris[tri++] = next;
                    tris[tri++] = curr;
                    tris[tri++] = curr + resolutionAround;
                    tris[tri++] = next + resolutionAround;
                } else {
                    tris[tri++] = curr;
                    tris[tri++] = next;
                    tris[tri++] = next + resolutionAround;
                    tris[tri++] = curr;
                    tris[tri++] = next + resolutionAround;
                    tris[tri++] = curr + resolutionAround;
                }
                curr++;
            }
        }
        // add components
        var filter = root.GetComponent<MeshFilter>();
        if (filter == null) {
            filter = root.gameObject.AddComponent<MeshFilter>();
        }
        var renderer = root.GetComponent<MeshRenderer>();
        if (renderer == null) {
            renderer = root.gameObject.AddComponent<MeshRenderer>();
        }
        var mesh = new Mesh();
        mesh.vertices = vertices;
        mesh.normals = normals;
        mesh.uv = uvs;
        mesh.triangles = tris;
        filter.sharedMesh = mesh;
        mesh.RecalculateBounds();
        return mesh;
    }
    
    public static void DelayDestroy(UnityEngine.Object o) {
        if(o != null && UpdateMgr.Inst != null) {
            UpdateMgr.Inst.StartSequence(null, DoDelayDestroy(o), SequenceType.RealTime);
        }
    }
    
    static IEnumerator DoDelayDestroy(UnityEngine.Object o) {
        yield return null;
        yield return null;
        yield return null;
        yield return null;
        if(o) {
            UnityEngine.Object.Destroy(o);
        }
    }

}
