using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class ViewGameOver : View
{

    // inspector
    [SerializeField] private TMP_Text textHighScore;
    [SerializeField] private Transform highScorePanel;

    private bool _isDoneGameover;



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
        StartView();
    }

    public override void UpdateState()
    {
        base.UpdateState();
        UpdateView();
    }

    public override void EndState()
    {
        base.EndState();
        EndView();
    }
    #endregion



    private void StartView()
    {
        ShowScore();

    }

    private void UpdateView()
    {
        if (Input.GetMouseButtonUp(0))
        {
            GameMgr.Instance.ReplayGame();
        }
    }

    private void EndView()
    {
    }


    private async void ShowScore()
    {
        int score = ScoreMgr.Instance.score;
        textHighScore.text = score.ToString();

        try
        {
            // await CoreGame.CoreClient.Instance.ReportHightScore("archer_score", score);
        }
        catch
        {
        }
    }


}
