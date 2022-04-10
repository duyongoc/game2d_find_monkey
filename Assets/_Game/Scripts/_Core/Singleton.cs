using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Singleton<T> : MonoBehaviour where T: Component
{
    #region FILEDS
    ///
    /// Instance
    ///
    private static T instance;
    #endregion

    ///
    /// Gets instance
    ///
    public static T Instance
    {
        get
        {
            if(instance == null)
            {
                instance = FindObjectOfType<T>();
                if(instance == null)
                {
                    GameObject obj = new GameObject();
                    obj.name = typeof(T).Name;
                    instance = obj.AddComponent<T>();
                }
            }
            return instance;
        }
    }

    /// <summary>
    /// Use this for initialization
    /// </summary>
    public virtual void Awake()
    {
        if(instance == null)
        {
            instance = this as T;
            DontDestroyChildOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public static void DontDestroyChildOnLoad(GameObject child)
    {
        Transform parentTransfrom = child.transform;
        while(parentTransfrom.parent != null)
        {
            parentTransfrom = parentTransfrom.parent;
        }

        // Debug.Log(parentTransfrom.name);
        // DontDestroyOnLoad(parentTransfrom.gameObject);
    }

}
