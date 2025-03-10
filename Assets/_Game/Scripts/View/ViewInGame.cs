using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ViewInGame : View
{


    [Header("[Text]")]
    [SerializeField] private TMP_Text textLevel;
    [SerializeField] private TMP_Text textRemain;
    [SerializeField] private TMP_Text textWrong;
    [SerializeField] private TMP_Text txtInfo;

    [Header("[Timer]")]
    [SerializeField] private Slider sliderTimer;
    [SerializeField] private GameObject objInfo;


    // [private]
    private bool _playsound = false;
    private bool _cancelCounting = false;
    private float _currentTimer = -1;
    private System.Action callbackContinue;



    #region  UNITY
    // private void Start()
    // {
    // }

    // private void Update()
    // {
    // }
    #endregion



    #region STATE
    public override void StartState()
    {
        base.StartState();
    }
    public override void UpdateState()
    {
        base.UpdateState();
    }
    public override void EndState()
    {
        base.EndState();
    }
    #endregion



    public void StartCountTime(float value)
    {
        _cancelCounting = false;
        CountingTime(value);
    }


    public void CancelCounting()
    {
        _cancelCounting = true;
        SoundManager.StopSFX(SoundManager.SFX_TIMECOUNT);
    }


    public async void CountingTime(float value)
    {
        _playsound = false;
        _currentTimer = value;
        sliderTimer.maxValue = value;
        sliderTimer.value = value;

        // counting timer
        while (_currentTimer >= 0 && !_cancelCounting)
        {
            _currentTimer -= .01f;
            sliderTimer.value = _currentTimer;
            if (_currentTimer <= 2 && !_playsound)
            {
                _playsound = true;
                SoundManager.PlaySFXOneShot(SoundManager.SFX_TIMECOUNT);
            }

            await UniTask.Delay(System.TimeSpan.FromSeconds(0.01f));
        }

        // out of time => lose game 
        if (_currentTimer < 0)
        {
            CancelCounting();
            GameManager.Instance.GameOver();
        }
    }


    public void UpdateLevel(int level)
    {
        textLevel.text = $"Level: {level}";
    }


    public void UpdateWrongText(int wrong)
    {
        PlayWrongAnimation();
        textWrong.text = $"Wrong: {wrong}";
    }


    public void UpdateSquareRemain(int remain, int total)
    {
        textRemain.text = $"Monkey remain: {remain}/{total}";
    }


    private void PlayWrongAnimation()
    {
        textWrong.transform.DOScale(Vector3.one * 1.2f, 1)
            .SetEase(Ease.InOutQuad)
            .OnComplete(() =>
            {
                textWrong.transform.localScale = Vector3.one;
            });
    }


    public void ShowInfo(string content, System.Action callback)
    {
        objInfo.SetActive(true);
        txtInfo.text = content;
        callbackContinue = callback;
    }


    public void OnClickButtonContinue()
    {
        callbackContinue?.Invoke();
        objInfo.SetActive(false);
    }


    public void OnClickButtonMenu()
    {
        GameController.Instance.Reset();
        GameManager.Instance.SetState(GameState.Menu);
        SoundManager.PlayMusic(SoundManager.MUSIC_BACKGROUND);
    }


    public void Reset()
    {
        sliderTimer.value = 0;
        sliderTimer.maxValue = 0;

        CancelCounting();
        UpdateLevel(0);
    }




}
