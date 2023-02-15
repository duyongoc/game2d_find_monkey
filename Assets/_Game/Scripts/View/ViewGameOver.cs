using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ViewGameOver : View
{


    [Space]
    [SerializeField] private Text txtScore;
    [SerializeField] private Text txtHighScore;
    [SerializeField] private bool _isDoneGameover;



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
        Load();
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



    private void Load()
    {
        var score = ScoreManager.Instance.Score;
        var playfab = PlayfabController.Instance;

        txtScore.text = $"{score.ToString()}";
        txtHighScore.text = $"Best: {playfab.HighScore}";
        playfab.CheckShowRecordScore(score);
    }


    public void OnClickButtonReplay()
    {
        GameManager.Instance.ReplayGame();
    }


    public void OnClickButtonMenu()
    {
        GameController.Instance.Reset();
        GameManager.Instance.SetState(GameState.Menu);
        SoundManager.PlayMusic(SoundManager.MUSIC_BACKGROUND);
    }


    public void OnClickButtonLeaderBoard()
    {
        PlayfabController.Instance.ShowLeaderBoard();
    }

}
