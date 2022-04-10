using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Soundy : MonoBehaviour
{

    [SerializeField] 
    private AudioSource audioSource;
    // private AudioClip audioClip;


    #region UNITY
    // private void Start()
    // {
    // }

    // private void Update()
    // {
    // }
    #endregion


    public void Play(AudioClip audi)
    {
        audioSource.clip = audi;
        audioSource.Play();

        gameObject.name = audi.name;
        SelfDestroy();
    }


    private void SelfDestroy()
    {
        var time = audioSource.clip.length * 2;
        Destroy(gameObject, time);
    }

}
