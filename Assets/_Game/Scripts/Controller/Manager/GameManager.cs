using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class GameManager : Singleton<GameManager>
{

    // [public]
    public GameState gameState = GameState.Menu;

    // [private]
    [Inject] private ViewManager _gameView;


    // [properties]
    public bool IsInGameState => gameState == GameState.InGame;



    #region UNITY
    private void Start()
    {
        Init();
    }

    // private void Update()
    // {
    // }
    #endregion



    private void Init()
    {
        SetState(gameState);
        SoundManager.PlayMusic(SoundManager.MUSIC_BACKGROUND);
    }


    public void PlayGameWithInfo()
    {
        SetState(GameState.InGame);
        GameController.Instance.Load();
        GameController.Instance.ShowInfo(Define.TEXT_INTRO, () =>
        {
            PlayGame();
            GameController.Instance.StartTurn();
        });
    }


    public void PlayGame()
    {
        SetState(GameState.InGame);
        SoundManager.PlayMusic(SoundManager.MUSIC_BACKGROUND);
    }


    public void ReplayGame()
    {
        GameController.Instance.Reset();
        GameController.Instance.StartDelayNextTurn();
        SetState(GameState.InGame);
        SoundManager.PlayMusic(SoundManager.MUSIC_BACKGROUND);
    }


    public void GameOver()
    {
        SetState(GameState.GameOver);
        SoundManager.Instance.PlaySFX(SoundManager.SFX_GAMEOVER);
    }


    public void SetState(GameState newState)
    {
        gameState = newState;
        switch (gameState)
        {
            case GameState.Menu:
                _gameView.SetStateView("Menu"); break;
            case GameState.InGame:
                _gameView.SetStateView("InGame"); break;
            case GameState.GameOver:
                _gameView.SetStateView("GameOver"); break;
        }
    }


}




// God bless my code to be bug free 
//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//               佛祖保佑         永无BUG
//
// *
// *   Buddha says :
// *           Office room in office building , Programmers in the office ;
// *           Programmers write programs , And program for drinks ;
// *           People laugh at me for being crazy , I laugh at my life ;
// *           No beautiful girls in the street , Which one belongs to the programmer ？
// *

