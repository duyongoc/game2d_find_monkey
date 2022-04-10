using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils
{

    public static IEnumerator DelayEvent(Action callback, float timer)
    {
        yield return new WaitForSeconds(timer);
        callback();
    }

}
