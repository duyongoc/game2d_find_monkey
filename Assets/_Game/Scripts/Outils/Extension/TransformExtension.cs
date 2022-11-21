using DG.Tweening;
// using Spine.Unity;
using UnityEngine;
using UnityEngine.UI;

public static class TransformExtension
{

    public static void SetActive(this Transform transfrom, bool value)
    {
        transfrom.gameObject.SetActive(value);
    }


    public static void ResetTransformation(this Transform transfrom)
    {
        transfrom.position = Vector3.zero;
        transfrom.localRotation = Quaternion.identity;
        transfrom.localScale = Vector3.one;
    }


    public static void ResetScale(this Transform transfrom)
    {
        transfrom.localScale = Vector3.one;
    }


    public static void ResetRotation(this Transform transfrom)
    {
        transfrom.localRotation = Quaternion.identity;
    }


    public static void ResetPosition(this Transform transfrom)
    {
        transfrom.position = Vector3.zero;
    }


    public static void DoFade(this Transform transfrom, float endvalue, float duration, System.Action callback)
    {
        transfrom.GetComponent<Image>().DOFade(endvalue, duration).OnComplete(() =>
        {
            callback?.Invoke();
        });
    }
   

    public static void DoFadeCanvas(this Transform transfrom, float endvalue, float duration, System.Action callback = null)
    {
        transfrom.GetComponent<CanvasGroup>().DOFade(endvalue, duration).OnComplete(() =>
        {
            callback?.Invoke();
        });
    }


    public static void DoFadeOnce(this Transform transfrom, float duration, System.Action callback = null)
    {
        transfrom.GetComponent<Image>().DOFade(1, 0);
        transfrom.GetComponent<Image>().DOFade(0, duration).OnComplete(() =>
        {
            callback?.Invoke();
        });
    }


    public static void DoMove(this Transform transfrom, Vector3 endvalue, float duration, System.Action callback = null)
    {
        transfrom.DOMove(endvalue, duration).SetEase(Ease.OutQuint).OnComplete(() => { callback?.Invoke(); });
    }


    public static void DoScale(this Transform transfrom, float newScale, float duration, System.Action callback = null)
    {
        transfrom.DOScale(newScale, duration).OnComplete(() => { callback?.Invoke(); });
    }


    public static void DoScaleOnce(this Transform transfrom, Vector3 newScale, float duration, System.Action callback = null)
    {
        transfrom.DOScale(newScale, duration).OnComplete(() =>
        {
            transfrom.ResetScale();
            callback?.Invoke();
        });
    }


    public static void DoScaleOnce(this Transform transfrom, float newScale, float duration, System.Action callback = null)
    {
        transfrom.DOScale(newScale, duration).OnComplete(() =>
        {
            transfrom.ResetScale();
            callback?.Invoke();
        });
    }


    public static void DoRotation(this Transform transfrom, Vector3 origin, Vector3 rotation, float duration, Ease ease = Ease.InOutQuad, System.Action callback = null)
    {
        transfrom.localRotation = Quaternion.Euler(origin.x, origin.y, origin.z);
        transfrom.DORotate(rotation, duration).SetEase(ease).OnComplete(() =>
        {
            transfrom.ResetRotation();
            callback?.Invoke();
        });
    }


    public static void DoRotationOnce(this Transform transfrom, Vector3 rotation, float duration, System.Action callback = null)
    {
        transfrom.DORotate(rotation, duration).OnComplete(() =>
        {
            transfrom.ResetRotation();
            callback?.Invoke();
        });
    }


    public static void DoShakeRotation(this Transform transfrom, float duration, System.Action callback = null)
    {
        transfrom.DOShakeRotation(duration, new Vector3(90, 0, 0), randomness: 0).OnComplete(() =>
        {
            callback?.Invoke();
        });
    }

    public static void DoShakeScale(this Transform transfrom, float duration, float strength = 1, System.Action callback = null)
    {
        transfrom.DOShakeScale(duration, strength).OnComplete(() =>
        {
            transfrom.ResetScale();
            callback?.Invoke();
        });
    }


    // public static void DOColor(this SkeletonGraphic target, Color endValue, float duration)
    // {
    //     DOTween.To(() => target.color, col => { target.color = col; }, endValue, duration);
    // }


}
