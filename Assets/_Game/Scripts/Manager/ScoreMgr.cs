using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreMgr : Singleton<ScoreMgr>
{


    // public
    public int score;
    public int highscore;


    #region UNITY
    private void OnEnable()
    {
        GameMgr.EVENT_RESET_INGAME += ResetData;
    }

    private void OnDisable()
    {
        GameMgr.EVENT_RESET_INGAME -= ResetData;
    }

    // private void Update()
    // {
    // }
    #endregion


    public void UpdateScore(int addScore = 10)
    {
        score += addScore;
        highscore = PlayerPrefs.GetInt("high_score");

        if (score > highscore)
            highscore = (int)score;

        PlayerPrefs.SetInt("high_score", highscore);
    }


    public void ResetData()
    {
        score = 0;
    }


}
