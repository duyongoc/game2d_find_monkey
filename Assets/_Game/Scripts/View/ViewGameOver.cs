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
        ShowScore();
    }

    public override void UpdateState()
    {
        base.UpdateState();

        if (Input.GetMouseButtonUp(0))
        {
            GameManager.Instance.ReplayGame();
        }
    }

    public override void EndState()
    {
        base.EndState();

    }
    #endregion



    private void ShowScore()
    {
        int score = ScoreManager.Instance.score;
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
