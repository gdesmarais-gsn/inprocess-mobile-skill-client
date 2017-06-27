using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScrollFX : MonoBehaviour {

	[SerializeField]
	private bool _parallaxY = false;
	[SerializeField]
	private bool _fadeOutY = false;
	[SerializeField]
	private bool _clampAtTop = false;
	[SerializeField]
	private bool _clampAtBottom = false;

	[SerializeField]
	private float _speed = 1.0f;

	private Vector3 _parentStartPos;
    private Vector3 _startPos;

    private float _parentYDelta = 0.0f;
    private float _yDelta = 0.0f;
    private bool _startPosSet = false;
	private CanvasGroup _cGroup;
    private LayoutElement _layoutElement;

	void Awake()
	{
		_cGroup = gameObject.GetComponent<CanvasGroup>();
        if (_cGroup == null && _fadeOutY)
            Debug.LogError("[ScrollFX] Missing Canvas Group component for fade FX");

        _layoutElement = gameObject.GetComponent<LayoutElement>();
        if (_layoutElement == null && _fadeOutY)
            Debug.LogError("[ScrollFX] Missing LayoutElement component for fade FX");

        _parentStartPos = gameObject.transform.parent.position;
		StartCoroutine(SetStartPos());
	}

	void LateUpdate () 
	{
        if (_startPosSet)
		{
            if (_parallaxY)
            {
                _parentYDelta = _parentStartPos.y - gameObject.transform.parent.position.y;

                float childDelta = _parentYDelta * _speed;

                if (_clampAtTop && childDelta > 0.0f)
                    childDelta = 0.0f;

                if (_clampAtBottom && childDelta < 0.0f)
                    childDelta = 0.0f;

                gameObject.transform.localPosition = new Vector3(gameObject.transform.localPosition.x, childDelta, gameObject.transform.localPosition.z);
            }

            if (_fadeOutY)
            {
                if (_layoutElement == null || _cGroup == null)
                    return;

                _yDelta = (_startPos.y - gameObject.transform.position.y) * _speed;

                float alphaVal = Mathf.Abs((_layoutElement.minHeight - Mathf.Abs(_yDelta)) / _layoutElement.minHeight);

                if (Mathf.Abs(_yDelta) > _layoutElement.minHeight)
                    alphaVal = 0.0f;

                if (_clampAtTop && _yDelta > 0.0f)
                    alphaVal = 1.0f;

                if (_clampAtBottom && _yDelta < 0.0f)
                    alphaVal = 1.0f;

                _cGroup.alpha = alphaVal;
            }
		}
	}

	IEnumerator SetStartPos()
	{
		yield return new WaitForEndOfFrame();
		_parentStartPos = gameObject.transform.parent.position;
        _startPos = gameObject.transform.position;
        _startPosSet = true;
	}
}