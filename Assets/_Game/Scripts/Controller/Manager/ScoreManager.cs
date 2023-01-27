using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : Singleton<ScoreManager>
{


    [Header("Setting")]
    public int score;
    public int highscore;



    #region UNITY
    private void OnEnable()
    {
        this.RegisterListener(EventID.OnEvent_GameOver, Reset);
    }

    private void OnDisable()
    {
        this.RemoveListener(EventID.OnEvent_GameOver, Reset);
    }
    #endregion



    public void UpdateScore(int addScore = 10)
    {
        score += addScore;
        highscore = PlayerPrefs.GetInt("high_score");

        if (score > highscore)
            highscore = (int)score;

        PlayerPrefs.SetInt("high_score", highscore);
    }


    public void Reset(object param)
    {
        score = 0;
    }


}
