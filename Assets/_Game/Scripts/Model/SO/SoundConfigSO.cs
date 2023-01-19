using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Sound", menuName = "Setting/Sound")]
public class SoundConfigSO : ScriptableObject
{

    [Header("Music")]
    public AudioClip MUSIC_BACKGROUND;

    [Header("SFX")]
    public AudioClip SFX_PICK_RIGHT;
    public AudioClip SFX_PICK_WRONG;
    public AudioClip SFX_TIMECOUNT;
    public AudioClip SFX_GAMEOVER;

}
