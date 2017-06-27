using System.Collections;
using System.Diagnostics;
using System.Reflection;
using System;
using UnityEngine;
using Stm.V1_1;

// note: to control the color, set Gizmos.color beforehand

public class GizmoHelper
{
	const int CircleResolution = 20;
	
	[Conditional("UNITY_EDITOR")]
	public static void DrawCircleX(float radius, float startDegrees = 0f, float endDegrees = 360f) {
#if UNITY_EDITOR
        var curr = Complex.Rotation(startDegrees * Mathf.Deg2Rad);
        curr.x *= radius;
        curr.y *= radius;
        var delta = Complex.Rotation((endDegrees - startDegrees) * Mathf.Deg2Rad / (float)CircleResolution);
        for (int i=0; i<CircleResolution; i++) {
            Complex next = curr * delta;
            Gizmos.DrawLine(
                new Vector3(0, curr.x, curr.y),
                new Vector3(0, next.x, next.y)
            );
            curr = next;
        }
#endif
	}
	
	[Conditional("UNITY_EDITOR")]
	public static void DrawCircleY(float radius, float startDegrees = 0f, float endDegrees = 360f) {
#if UNITY_EDITOR
        var curr = Complex.Rotation(startDegrees * Mathf.Deg2Rad);
        curr.x *= radius;
        curr.y *= radius;
        var delta = Complex.Rotation((endDegrees - startDegrees) * Mathf.Deg2Rad / (float)CircleResolution);
		for (int i=0; i<CircleResolution; i++) {
            Complex next = curr * delta;
			Gizmos.DrawLine(
				new Vector3(curr.x, 0, curr.y),
				new Vector3(next.x, 0, next.y)
			);
            curr = next;
		}
#endif
	}
	
	[Conditional("UNITY_EDITOR")]
    public static void DrawCircleZ(float radius, float startDegrees = 0f, float endDegrees = 360f) {
#if UNITY_EDITOR
        var curr = Complex.Rotation(startDegrees * Mathf.Deg2Rad);
        curr.x *= radius;
        curr.y *= radius;
        var delta = Complex.Rotation((endDegrees - startDegrees) * Mathf.Deg2Rad / (float)CircleResolution);
        for (int i=0; i<CircleResolution; i++) {
            Complex next = curr * delta;
            Gizmos.DrawLine(
                new Vector3(curr.x, curr.y),
                new Vector3(next.x, next.y)
            );
            curr = next;
        }
#endif
	}

	[Conditional("UNITY_EDITOR")]
	public static void DrawRectY(Rect rect) {
#if UNITY_EDITOR
		Gizmos.DrawLine(new Vector3(rect.xMin, 0, rect.yMin), new Vector3(rect.xMax, 0, rect.yMin));
		Gizmos.DrawLine(new Vector3(rect.xMax, 0, rect.yMin), new Vector3(rect.xMax, 0, rect.yMax));
		Gizmos.DrawLine(new Vector3(rect.xMax, 0, rect.yMax), new Vector3(rect.xMin, 0, rect.yMax));
		Gizmos.DrawLine(new Vector3(rect.xMin, 0, rect.yMax), new Vector3(rect.xMin, 0, rect.yMin));
#endif
	}
	
	[Conditional("UNITY_EDITOR")]
	public static void DrawRectZ(Rect rect) {
#if UNITY_EDITOR
		Gizmos.DrawLine(new Vector3(rect.xMin, rect.yMin, 0), new Vector3(rect.xMax, rect.yMin, 0));
		Gizmos.DrawLine(new Vector3(rect.xMax, rect.yMin, 0), new Vector3(rect.xMax, rect.yMax, 0));
		Gizmos.DrawLine(new Vector3(rect.xMax, rect.yMax, 0), new Vector3(rect.xMin, rect.yMax, 0));
		Gizmos.DrawLine(new Vector3(rect.xMin, rect.yMax, 0), new Vector3(rect.xMin, rect.yMin, 0));
#endif
	}
	
	[Conditional("UNITY_EDITOR")]
	public static void DrawArrowXZ(Vector3 start, Vector3 direction, float length) {
#if UNITY_EDITOR
		Vector3 end = start + length * direction;
		Vector3 mid = Vector3.Lerp(start, end, 0.666f);
		Gizmos.DrawLine( start, end );
		Vector3 right = Vector3.Cross(Vector3.up, direction) * 0.15f * length;
		Gizmos.DrawLine( end, mid + right );
		Gizmos.DrawLine( end, mid - right );
#endif
	}
	
	[Conditional("UNITY_EDITOR")]
	public static void DrawArrowXY(Vector3 start, Vector3 direction, float length) {
#if UNITY_EDITOR
		Vector3 end = start + length * direction;
		Vector3 mid = Vector3.Lerp(start, end, 0.666f);
		Gizmos.DrawLine( start, end );
		Vector3 right = Vector3.Cross(Vector3.forward, direction) * 0.15f * length;
		Gizmos.DrawLine( end, mid + right );
		Gizmos.DrawLine( end, mid - right );
#endif
	}

	[Conditional("UNITY_EDITOR")]
	public static void DrawArrowCapXY(Vector3 start, Vector3 direction, float length) {
#if UNITY_EDITOR
		Vector3 end = start;
		start -= length * direction;
		Vector3 mid = Vector3.Lerp(start, end, 0.666f);
		Vector3 right = Vector3.Cross(Vector3.forward, direction) * 0.15f * length;
		Gizmos.DrawLine( end, mid + right );
		Gizmos.DrawLine( end, mid - right );
#endif
	}


	[Conditional("UNITY_EDITOR")]
	static public void DrawLineViewSpace(Vector3 aView, Vector3 bView, Vector3 worldRefPoint)
	{
#if UNITY_EDITOR
        Camera cam = Stm.V1_1.SceneHelper.GetMainCamera();
        aView.z = cam.WorldToViewportPoint(worldRefPoint).z;
        bView.z = aView.z;
        Vector3 a = cam.ViewportToWorldPoint(aView);
        Vector3 b = cam.ViewportToWorldPoint(bView);
		Gizmos.DrawLine(a, b);
#endif
	}

	[Conditional("UNITY_EDITOR")]
	static public void DrawLineViewSpace(Vector3 aView, Vector3 bView)
	{
#if UNITY_EDITOR
        Camera cam = Stm.V1_1.SceneHelper.GetMainCamera();
        aView.z = cam.nearClipPlane + 1.0f;
        bView.z = aView.z;
        Vector3 a = cam.ViewportToWorldPoint(aView);
        Vector3 b = cam.ViewportToWorldPoint(bView);
		Gizmos.DrawLine(a, b);
#endif
	}

	
	public static Matrix4x4 LocalToWorldNoScale(Transform t) {
		return Matrix4x4.TRS(t.position, t.rotation, Vector3.one);
	}
	
	private const int CHAR_TEXTURE_HEIGHT = 12; // todo: line breaks
	private const int CHAR_TEXTURE_WIDTH = 8;
	private const string characters = "abcdefghijklmnopqrstuvwxyz0123456789";
	
#if UNITY_EDITOR
	static GUIStyle textStyle;
	static GUIStyle dropStyle;
	
	public static GUIStyle MakeGUIStyle(Color color)
	{
        GUIStyle style = new GUIStyle();
        style.normal.textColor = color;
        style.hover.textColor = color;
        style.active.textColor = color;
        style.onNormal.textColor = color;
        style.onHover.textColor = color;
        style.onActive.textColor = color;
        style.focused.textColor = color;
        style.onFocused.textColor = color;
        style.fontStyle = FontStyle.Bold;
        return style; 
	}
#endif
	
	[Conditional("UNITY_EDITOR")]
	public static void DrawText( Vector3 position, string text ) {
#if UNITY_EDITOR
        try
        {
            if(textStyle == null) { textStyle = MakeGUIStyle(Color.white); }
            if(dropStyle == null) { dropStyle = MakeGUIStyle(Color.black); }
            var editorCamera = Camera.current;
            Vector3 screenPoint = editorCamera.WorldToScreenPoint( position );
            if(screenPoint.x < 0 || screenPoint.y < 0 || screenPoint.x > editorCamera.pixelWidth || screenPoint.y > editorCamera.pixelHeight || screenPoint.z < 0)
				return;
            //screenPoint = MathUtil.Clamp(screenPoint, new Vector3(0,16,0), new Vector3(editorCamera.pixelWidth,editorCamera.pixelHeight-16,1));
            position = editorCamera.ScreenToWorldPoint( screenPoint );
            UnityEditor.Handles.Label(position, text, dropStyle);
            screenPoint += new Vector3(-1,1,0); // shadow offset
            //screenPoint = MathUtil.Clamp(screenPoint, new Vector3(0,16,0), new Vector3(editorCamera.pixelWidth,editorCamera.pixelHeight-16,1));
            position = editorCamera.ScreenToWorldPoint( screenPoint );
            UnityEditor.Handles.Label(position, text, textStyle);
        }
        catch
        {
            var editorCamera = Camera.current;
            string lowerText = text.ToLower();
            Vector3 screenPoint = editorCamera.WorldToScreenPoint( position );
            float offset = -0.5f *  text.Length * CHAR_TEXTURE_WIDTH;
            for( int c=0; c<lowerText.Length; c++ ) {	
                Vector3 worldPoint = editorCamera.ScreenToWorldPoint( new Vector3( screenPoint.x + offset, screenPoint.y, screenPoint.z ) );
                // hack because u3 wants string literals (?)
                switch(lowerText[c]) {
                case '0':
                    Gizmos.DrawIcon( worldPoint, "text_0" );
                    break;
                case '1':
                    Gizmos.DrawIcon( worldPoint, "text_1" );
                    break;
                case '2':
                    Gizmos.DrawIcon( worldPoint, "text_2" );
                    break;
                case '3':
                    Gizmos.DrawIcon( worldPoint, "text_3" );
                    break;
                case '4':
                    Gizmos.DrawIcon( worldPoint, "text_4" );
                    break;
                case '5':
                    Gizmos.DrawIcon( worldPoint, "text_5" );
                    break;
                case '6':
                    Gizmos.DrawIcon( worldPoint, "text_6" );
                    break;
                case '7':
                    Gizmos.DrawIcon( worldPoint, "text_7" );
                    break;
                case '8':
                    Gizmos.DrawIcon( worldPoint, "text_8" );
                    break;
                case '9':
                    Gizmos.DrawIcon( worldPoint, "text_9" );
                    break;
                case 'a':
                    Gizmos.DrawIcon( worldPoint, "text_a" );
                    break;
                case 'b':
                    Gizmos.DrawIcon( worldPoint, "text_b" );
                    break;
                case 'c':
                    Gizmos.DrawIcon( worldPoint, "text_c" );
                    break;
                case 'd':
                    Gizmos.DrawIcon( worldPoint, "text_d" );
                    break;
                case 'e':
                    Gizmos.DrawIcon( worldPoint, "text_e" );
                    break;
                case 'f':
                    Gizmos.DrawIcon( worldPoint, "text_f" );
                    break;
                case 'g':
                    Gizmos.DrawIcon( worldPoint, "text_g" );
                    break;
                case 'h':
                    Gizmos.DrawIcon( worldPoint, "text_h" );
                    break;
                case 'i':
                    Gizmos.DrawIcon( worldPoint, "text_i" );
                    break;
                case 'j':
                    Gizmos.DrawIcon( worldPoint, "text_j" );
                    break;
                case 'k':
                    Gizmos.DrawIcon( worldPoint, "text_k" );
                    break;
                case 'l':
                    Gizmos.DrawIcon( worldPoint, "text_l" );
                    break;
                case 'm':
                    Gizmos.DrawIcon( worldPoint, "text_m" );
                    break;
                case 'n':
                    Gizmos.DrawIcon( worldPoint, "text_n" );
                    break;
                case 'o':
                    Gizmos.DrawIcon( worldPoint, "text_o" );
                    break;
                case 'p':
                    Gizmos.DrawIcon( worldPoint, "text_p" );
                    break;
                case 'q':
                    Gizmos.DrawIcon( worldPoint, "text_q" );
                    break;
                case 'r':
                    Gizmos.DrawIcon( worldPoint, "text_r" );
                    break;
                case 's':
                    Gizmos.DrawIcon( worldPoint, "text_s" );
                    break;
                case 't':
                    Gizmos.DrawIcon( worldPoint, "text_t" );
                    break;
                case 'u':
                    Gizmos.DrawIcon( worldPoint, "text_u" );
                    break;
                case 'v':
                    Gizmos.DrawIcon( worldPoint, "text_v" );
                    break;
                case 'w':
                    Gizmos.DrawIcon( worldPoint, "text_w" );
                    break;
                case 'x':
                    Gizmos.DrawIcon( worldPoint, "text_x" );
                    break;
                case 'y':
                    Gizmos.DrawIcon( worldPoint, "text_y" );
                    break;
                case 'z':
                    Gizmos.DrawIcon( worldPoint, "text_z" );
                    break;
                case '.':
                    Gizmos.DrawIcon( worldPoint, "text_." );
                    break;
                case ',':
                    Gizmos.DrawIcon( worldPoint, "text_," );
                    break;
                case ';':
                    Gizmos.DrawIcon( worldPoint, "text_;" );
                    break;
                case ':':
                    Gizmos.DrawIcon( worldPoint, "text_colon" );
                    break;
                case '+':
                    Gizmos.DrawIcon( worldPoint, "text_+" );
                    break;
                case '-':
                    Gizmos.DrawIcon( worldPoint, "text_-" );
                    break;
                case '(':
                    Gizmos.DrawIcon( worldPoint, "text_(" );
                    break;
                case ')':
                    Gizmos.DrawIcon( worldPoint, "text_)" );
                    break;
                case '{':
                    Gizmos.DrawIcon( worldPoint, "text_{" );
                    break;
                case '}':
                    Gizmos.DrawIcon( worldPoint, "text_}" );
                    break;
                case '/':
                    Gizmos.DrawIcon( worldPoint, "text_/" );
                    break;
                case '!':
                    Gizmos.DrawIcon( worldPoint, "text_!" );
                    break;
                case '#':
                    Gizmos.DrawIcon( worldPoint, "text_#" );
                    break;
                case '%':
                    Gizmos.DrawIcon( worldPoint, "text_%" );
                    break;
                case '=':
                    Gizmos.DrawIcon( worldPoint, "text_=" );
                    break;
                }
                offset += CHAR_TEXTURE_WIDTH;
            }
         }
#endif
	}	

#if UNITY_EDITOR
	public static void SetScriptIconVisibility(string className, bool visible)
	{
		System.Array annotations = ReflectionUtil.Eval<System.Array>("AnnotationUtility.GetAnnotations()");
		Type annotationType = ReflectionUtil.GetType("UnityEditor.Annotation");
		if(annotationType == null || annotations == null) {
			SetScriptIconVisibilityLastResort(className, visible);
			return;
		}
		int length = annotations.Length;
		FieldInfo iconEnabledField = annotationType.GetField("iconEnabled");
		FieldInfo scriptClassField = annotationType.GetField("scriptClass");
		FieldInfo classIDField = annotationType.GetField("classID");
		if(iconEnabledField == null || scriptClassField == null || classIDField == null || length == 0) {
			SetScriptIconVisibilityLastResort(className, visible);
			return;
		}
		for(int i = 0 ; i < length ; i++) {
			object annotation = annotations.GetValue(i);
			string scriptClass = Cast<string>(scriptClassField.GetValue(annotation));
			if(scriptClass == className) {
				int iconEnabled = Cast<int>(iconEnabledField.GetValue(annotation));
				if((iconEnabled != 0) != visible) {
					int classID = Cast<int>(classIDField.GetValue(annotation));
					if(classID == 0 || classID == -1) {
						classID = defaultMonoBehaviourClassId;
					}
					ReflectionUtil.Eval("UnityEditor.AnnotationUtility.SetIconEnabled(" + ReflectionUtil.ToCommandString(classID) + "," + ReflectionUtil.ToCommandString(className) + "," + ReflectionUtil.ToCommandString(visible ? 1 : 0) + ")");
				}
			}
		}
	}

	private static void SetScriptIconVisibilityLastResort(string className, bool visible)
	{
		// this version of SetScriptIconVisibility is simpler because it doesn't check if the desired visible state is already set.
		int classId = ReflectionUtil.Eval<int>("UnityEditorInternal.BaseObjectTools.StringToClassID(\"MonoBehaviour\")");
		if(classId == 0 || classId == -1) { classId = defaultMonoBehaviourClassId; }
		ReflectionUtil.Eval("UnityEditor.AnnotationUtility.SetIconEnabled(" + ReflectionUtil.ToCommandString(classId) + "," + ReflectionUtil.ToCommandString(className) + "," + ReflectionUtil.ToCommandString(visible ? 1 : 0) + ")");
	}

	private const int defaultMonoBehaviourClassId = 114;
	
	static T Cast<T>(object o) {
		return (o is T) ? (T)o : default(T);
	}
#endif
}
