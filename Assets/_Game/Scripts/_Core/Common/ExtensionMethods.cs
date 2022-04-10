using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ExtensionMethods 
{
    
    public static GameObject SpawnToGarbage(this GameObject prefab, Vector3 position, Quaternion quaternion)
    {
        return PoolGarbage.Instance.Spawn(prefab, position, quaternion);
    }

    public static GameObject SpawnToGarbage(this Transform prefab, Vector3 position, Quaternion quaternion)
    {
        return PoolGarbage.Instance.Spawn(prefab.gameObject, position, quaternion);
    }

    public static GameObject SpawnToGarbage(this GameObject prefab)
    {
        return PoolGarbage.Instance.Spawn(prefab);
    }

    public static GameObject SpawnToGarbage(this Transform prefab)
    {
        return PoolGarbage.Instance.Spawn(prefab.gameObject);
    }

    public static Vector3 GarbagePosition()
    {
        return PoolGarbage.Instance.GetPosition();
    }

}
