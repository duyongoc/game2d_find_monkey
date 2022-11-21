
using System;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class EventDispatcher : Singleton<EventDispatcher>
{


    /// Store all "listener"
    [SerializeField] private bool isShowLog = false;
    private Dictionary<EventID, Action<object>> _listeners = new Dictionary<EventID, Action<object>>();



    /// <summary> Register to listen for eventID /// </summary>
    /// <param name="eventID">EventID that object want to listen</param>
    /// <param name="callback">Callback will be invoked when this eventID be raised</para	m>
    public void RegisterListener(EventID eventID, Action<object> callback)
    {
        // checking params
        Utils.Assert(callback != null, $"AddListener, event {0}, callback = null !! {eventID}");

        // check if listener exist in distionary
        if (!_listeners.ContainsKey(eventID))
        {
            _listeners.Add(eventID, null);
            _listeners[eventID] += callback;
            LogEvent($"Register new key {eventID} | Method {callback?.Method} | Count {_listeners[eventID]?.GetInvocationList().Length}");
            return;
        }

        _listeners[eventID] += callback;
        LogEvent($"Register Key {eventID} | Method {callback?.Method} | Count {_listeners[eventID]?.GetInvocationList().Length}");
    }


    /// <summary> Posts the event. This will notify all listener that register for this event/// </summary>
    /// <param name="eventID">EventID.</param>
    /// <param name="sender">Sender, in some case, the Listener will need to know who send this message.</param>
    /// <param name="param">Parameter. Can be anything (struct, class ...), Listener will make a cast to get the data</param>
    public void PostEvent(EventID eventID, object param = null)
    {
        if (!_listeners.ContainsKey(eventID))
        {
            LogEvent($"No listeners for this event : {eventID}");
            return;
        }

        // posting event
        var callbacks = _listeners[eventID];

        // if there's no listener remain, then do nothing
        if (callbacks == null)
        {
            _listeners.Remove(eventID);
            LogEvent($"PostEvent {eventID}, but no listener remain, Remove this key");
            return;
        }

        callbacks(param);
        LogEvent($"PostEvent {eventID} | Method {callbacks?.Method} | Count {_listeners[eventID]?.GetInvocationList().Length}");
    }


    /// <summary> Removes the listener. Use to Unregister listener </summary>
    public void RemoveListener(EventID eventID, Action<object> callback)
    {
        // checking params
        Utils.Assert(callback != null, "RemoveListener, event {0}, callback = null !!", eventID.ToString());

        if (_listeners.ContainsKey(eventID))
        {
            LogEvent($"RemoveListener: key {eventID} | Target {callback?.Method} | Count {_listeners[eventID]?.GetInvocationList().Length} ");
            _listeners[eventID] -= callback;
        }
        else
        {
            LogEvent($"RemoveListener, not found key : {eventID}");
        }
    }


    /// <summary> Clears all the listener. </summary>
    public void ClearAllListener()
    {
        _listeners.Clear();
    }


    private void LogEvent(string message)
    {
        if (!isShowLog)
        {
            return;
        }

        Debug.LogWarning(message);
    }



    [ContextMenu("ConsoleOutput")]
    private void ConsoleOutput()
    {
        foreach (KeyValuePair<EventID, Action<object>> kvp in _listeners)
        {
            Utils.LOG($"Key: {kvp.Key} | with callback: {kvp.Value?.Target}");
        }
    }

    [ContextMenu("ShowDebug")]
    public void ShowDebug()
    {
        isShowLog = true;
        Utils.LOG("[Event] EventDispatcher active show debug");
    }

    [ContextMenu("ShowCallbackCounting")]
    public void ShowCallbackCounting()
    {
        foreach (KeyValuePair<EventID, Action<object>> kvp in _listeners)
        {
            Utils.LOG($"=== Key: {kvp.Key} === | Count: {kvp.Value?.GetInvocationList().Length}");
            kvp.Value?.GetInvocationList().ToList().ForEach(x => Utils.LOG($"Key: {kvp.Key} | Method: {x?.Method.Name} | Target: {x?.Target} "));
        }
    }


}




