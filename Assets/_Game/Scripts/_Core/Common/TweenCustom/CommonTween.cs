using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class CommonTween : MonoBehaviour
{

    public enum TransformType { Transform, LocalTransfrom }

    [Space(10)]
    public TransformType transformType;
    public float duration;
    public float delayTime;
    public LoopType loopType;
    public int loopValue;
    public bool runOnAwake = false;

    [Space(10)]
    public TweenScale tweenScale;
    public TweenRotation tweenRotation;
    public TweenPosition tweenPosition;


    // private
    private TweenObject _tweenObject;



    #region UNITY
    // private void Awake()
    // {
    // }

    private void Start()
    {
        SetUpTween();
        SetDefaultTween();

        if (runOnAwake)
        {
            PlayTween();
        }

        // print("transform.localPosition " + transform.localPosition);
        // print("transform.position " + transform.position);
        // print("transform.AsRectTransform().localPosition " + transform.AsRectTransform().anchoredPosition);
        // print("transform.AsRectTransform().position " + transform.AsRectTransform().anchoredPosition);
    }
    #endregion


    private void SetUpTween()
    {
        switch (transformType)
        {
            case TransformType.Transform: InitTweenTransfrom(); break;
            case TransformType.LocalTransfrom: InitTweenLocalTransfrom(); break;
        }
    }

    private void SetDefaultTween()
    {
        // set 1sec for default
        duration = duration <= 0 ? 1 : duration;
    }


    private void InitTweenTransfrom()
    {
        _tweenObject = new TweenTransfrom(transform);
        _tweenObject.SetUpScale(tweenScale);
        _tweenObject.SetUpRotation(tweenRotation);
        _tweenObject.SetUpPosition(tweenPosition);
    }

    private void InitTweenLocalTransfrom()
    {
        _tweenObject = new TweenLocalTransfrom(transform);
        _tweenObject.SetUpScale(tweenScale);
        _tweenObject.SetUpRotation(tweenRotation);
        _tweenObject.SetUpPosition(tweenPosition);
    }


    public void PlayTween(Action callback = null)
    {
        ResetTween();
        _tweenObject.Play(transform, duration, loopValue, callback);
    }

    public void PlayScale(Action callback = null)
    {
        ResetTween();
        _tweenObject.PlayScale(transform, duration, loopValue, callback);
    }

    public void PlayRotation(Action callback = null)
    {
        ResetTween();
        _tweenObject.PlayRotation(transform, duration, loopValue, callback);
    }

    public void PlayPosition(Action callback = null)
    {
        ResetTween();
        _tweenObject.PlayPosition(transform, duration, loopValue, callback);
    }



    public void PlayPositionTo(Vector3 positionTo, Action callback = null)
    {
        ResetTween();
        _tweenObject.PlayMoveTo(transform, positionTo, duration, loopValue, callback);
    }

    public void PlayRotationTo(Vector3 positionTo, Action callback = null)
    {
        ResetTween();
        _tweenObject.PlayRotateTo(transform, positionTo, duration, loopValue, callback);
    }

    public void PlayScaleTo(Vector3 positionTo, Action callback = null)
    {
        ResetTween();
        _tweenObject.PlayScaleTo(transform, positionTo, duration, loopValue, callback);
    }



    public void ResetTween()
    {
        int kill = transform.DOKill();
        print("kill: " + kill);
        _tweenObject.ResetTween(transform);
    }



    [System.Serializable]
    public class TweenScale
    {
        public bool activeScale;
        public Vector3 scaleFrom = Vector3.one;
        public Vector3 scaleTo = Vector3.one;
    }

    [System.Serializable]
    public class TweenRotation
    {
        public bool activeRotation;
        public Vector3 rotationFrom;
        public Vector3 rotationTo;
    }

    [System.Serializable]
    public class TweenPosition
    {
        public bool activePosition;
        public Vector3 positionFrom;
        public Vector3 positionTo;
    }


}
