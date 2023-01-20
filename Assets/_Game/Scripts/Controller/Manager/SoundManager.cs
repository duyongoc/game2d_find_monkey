using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : Singleton<SoundManager>
{


    [Header("[Setting]")]
    [SerializeField] private SoundConfigSO config;
    [SerializeField] private Soundy soundyPrefab;

    [Header("[Audio]")]
    [SerializeField] private Transform musicAudio;
    [SerializeField] private Transform sfxAudio;


    // [private]
    private static AudioSource audioMusic;
    private static AudioSource audioSFX;

    // [music]
    public static AudioClip MUSIC_BACKGROUND;

    // [SFX]
    public static AudioClip SFX_PICK_RIGHT;
    public static AudioClip SFX_PICK_WRONG;
    public static AudioClip SFX_TIMECOUNT;
    public static AudioClip SFX_GAMEOVER;




    #region UNITY
    public override void Awake()
    {
        base.Awake();
        CacheComponent();
        CacheDefine();
    }

    // private void Update()
    // {
    // }
    #endregion



    private void CacheComponent()
    {
        audioMusic = musicAudio.GetComponent<AudioSource>();
        audioSFX = sfxAudio.GetComponent<AudioSource>();
    }


    private void CacheDefine()
    {
        // music
        MUSIC_BACKGROUND = config.MUSIC_BACKGROUND;

        // sfx
        SFX_PICK_RIGHT = config.SFX_PICK_RIGHT;
        SFX_PICK_WRONG = config.SFX_PICK_WRONG;
        SFX_TIMECOUNT = config.SFX_TIMECOUNT;
        SFX_GAMEOVER = config.SFX_GAMEOVER;
    }

    

    public void PlaySFX(AudioClip audi)
    {
        var sound = Instantiate(soundyPrefab, audioSFX.transform);
        sound.Play(audi);
    }


    public static void PlayMusic(AudioClip audi, bool loop = true)
    {
        audioMusic.clip = audi;
        audioMusic.loop = loop;
        audioMusic.Play();
    }


    public static void StopMusic()
    {
        audioMusic.Stop();
    }


    public static void StopSFX()
    {
        audioSFX.Stop();
        audioSFX.clip = null;
    }


    public static void StopSFX(AudioClip clip)
    {
        audioSFX.Stop();
    }


    public static void PlaySFXOneShot(AudioClip clip)
    {
        audioSFX.PlayOneShot(clip);
    }


    public static void PlaySFXBlend(AudioClip clip, AudioSource audioSource)
    {
        audioSource.PlayOneShot(clip);
    }


    public static bool MusicPlaying(AudioClip audi)
    {
        return audioMusic.clip == audi && audioMusic.isPlaying;
    }


    public static bool SFXPlaying(AudioClip audi)
    {
        return audioSFX.clip == audi && audioSFX.isPlaying;
    }

}
