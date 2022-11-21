using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ObjectExtension
{

    public static T UnBoxing<T>(this object obj, T param)
    {
        return (T)obj;
    }


}
