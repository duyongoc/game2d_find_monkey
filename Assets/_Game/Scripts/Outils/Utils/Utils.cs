using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;


public class Utils : MonoBehaviour
{

    public static bool IsEditor()
    {
        return Application.isEditor;
    }


    public static bool IsAndroidOrIOS()
    {
        return Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer;
    }


    public static bool IsAndroid()
    {
        return Application.platform == RuntimePlatform.Android;
    }


    public static bool IsIOS()
    {
        return Application.platform == RuntimePlatform.IPhonePlayer;
    }


    public static Color GetColorByStringHex(string hex)
    {
        ColorUtility.TryParseHtmlString(hex, out var c);
        return c;
    }


    public static void Delay(float delayTime, System.Action callback)
    {
        DG.Tweening.DOVirtual.DelayedCall(delayTime, () => { callback.ByInvoke(); });
    }


    // return string time with format : mm:ss
    public static string GetStringTimeFromSecond(float time)
    {
        int minute = (int)time / 60;
        int second = (int)time - minute * 60;
        return $"{minute.ToString("##.")}:{second.ToString("##.")}";
    }


    public static void LOG(string log)
    {
#if UNITY_EDITOR
        UnityEngine.Debug.Log($"[ui] {log}");
#endif
    }



    //---------------------------------------------
    //------------- Assert ------------------------


    // Thown an exception if condition = false
    public static void CheckNull<T>(T param)
    {
        if (param == null) throw new UnityException();
    }

    [Conditional("ASSERT")]
    public static void Assert<T>(T param)
    {
        if (param == null) throw new UnityException();
    }

    [Conditional("ASSERT")]
    public static void Assert(bool condition)
    {
        if (!condition) throw new UnityException();
    }

    /// Thown an exception if condition = false, show message on console's log
    [Conditional("ASSERT")]
    public static void Assert(bool condition, string message)
    {
        if (!condition) throw new UnityException(message);
    }

    /// Thown an exception if condition = false, show message on console's log
    [Conditional("ASSERT")]
    public static void Assert(bool condition, string format, params object[] args)
    {
        if (!condition) throw new UnityException(string.Format(format, args));
    }


}
