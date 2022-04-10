using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TweenObject
{

    // scale
    public bool activeScale;
    public Vector3 scaleFrom;
    public Vector3 scaleTo;

    // rotation
    public bool activeRotation;
    public Vector3 rotationFrom;
    public Vector3 rotationTo;

    // postion 
    public bool activePosition;
    public Vector3 positionFrom;
    public Vector3 positionTo;


    public virtual void Play() { }
    public virtual void ResetTween(Transform transform) { }


    public virtual void SetUpScale(CommonTween.TweenScale _scale) { }
    public virtual void SetUpRotation(CommonTween.TweenRotation _rotation) { }
    public virtual void SetUpPosition(CommonTween.TweenPosition _postion) { }

    public virtual void Play(Transform transform, float duration, int loop, Action callback = null) { }
    public virtual void PlayScale(Transform transform, float duration, int loop, Action callback = null) { }
    public virtual void PlayRotation(Transform transform, float duration, int loop, Action callback = null) { }
    public virtual void PlayPosition(Transform transform, float duration, int loop, Action callback = null) { }

    public virtual void PlayMoveTo(Transform transform, Vector3 _positionTo, float duration, int loop, Action callback = null) { }
    public virtual void PlayRotateTo(Transform transform, Vector3 _rotateTo, float duration, int loop, Action callback = null) { }
    public virtual void PlayScaleTo(Transform transform, Vector3 _scaleTo, float duration, int loop, Action callback = null) { }


}
