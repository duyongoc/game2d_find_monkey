using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolGarbage : Singleton<PoolGarbage>
{
    
    public GameObject Spawn(GameObject prefab, Vector3 position, Quaternion quaternion)
    {
        return Instantiate(prefab, position, quaternion, this.transform);
    }

    public GameObject Spawn(GameObject prefab)
    {
        return Instantiate(prefab, this.transform);
    }


    public Vector3 GetPosition()
    {
        return transform.position;
    }

}
