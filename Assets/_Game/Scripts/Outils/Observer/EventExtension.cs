using System;
using UnityEngine;



public enum EventID
{
    None = 0,

    // score
    OnEvent_UpdateScore,

    // game
    OnEvent_GameOver,


    // if you need more event, add it here
    // todo
}



public static class EventExtension
{
    public static void ByInvoke(this Action action)
    {
        action?.Invoke();
    }

    public static void ByInvoke<T>(this Action<T> action, T param)
    {
        action?.Invoke(param);
    }


    public static void RegisterListener(this MonoBehaviour listener, EventID eventID, Action<object> callback)
    {
        EventDispatcher.Instance?.RegisterListener(eventID, callback);
    }

    public static void RemoveListener(this MonoBehaviour listener, EventID eventID, Action<object> callback)
    {
        EventDispatcher.Instance?.RemoveListener(eventID, callback);
    }

    public static void PostEvent(this MonoBehaviour listener, EventID eventID, object param)
    {
        EventDispatcher.Instance.PostEvent(eventID, param);
    }

    public static void PostEvent(this MonoBehaviour sender, EventID eventID)
    {
        EventDispatcher.Instance.PostEvent(eventID, null);
    }

}
