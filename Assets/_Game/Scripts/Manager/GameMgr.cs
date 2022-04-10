using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class GameMgr : Singleton<GameMgr>
{

    // public
    public static Action EVENT_RESET_INGAME;
    public GameState gameState = GameState.None;


    // DI
    [Inject] private GameView _gameView;


    // properties
    public bool IsInGameState => gameState == GameState.InGame;



    #region UNITY
    private void Start()
    {
        InitGame();
    }

    // private void Update()
    // {
    // }
    #endregion



    private void InitGame()
    {
        SetState(gameState);
        // SoundMgr.PlayMusic(SoundMgr.MUSIC_MENU);
    }


    public void PlayGameWithInfo()
    {
        string info = "Lets test your memory. \n Get the white blocks as much as possible";
        info += "\n\nBe aware! The time is counting down.";

        SetState(GameState.InGame);
        GameScene.Instance.InitScene();
        GameScene.Instance.ShowInfo(info, () =>
        {
            PlayGame();
            GameScene.Instance.StartTurn();
        });
    }


    public void PlayGame()
    {
        SetState(GameState.InGame);
        SoundMgr.PlayMusic(SoundMgr.MUSIC_BACKGROUND);
    }


    public void ReplayGame()
    {
        GameScene.Instance.ResetGame();
        SetState(GameState.InGame);
        SoundMgr.PlayMusic(SoundMgr.MUSIC_BACKGROUND);
    }


    public void GameOver()
    {
        SetState(GameState.GameOver);
        SoundMgr.Instance.PlaySFX(SoundMgr.SFX_GAMEOVER);
    }


    public void SetState(GameState newState)
    {
        gameState = newState;

        switch (gameState)
        {
            case GameState.Loading: _gameView.SetStateView("Loading"); break;
            // case GameState.Info: _gameView.SetStateView("Info"); break;
            case GameState.Menu: _gameView.SetStateView("Menu"); break;
            case GameState.InGame: _gameView.SetStateView("InGame"); break;
            case GameState.GameOver: _gameView.SetStateView("GameOver"); break;
            case GameState.Setting: _gameView.SetStateView("Setting"); break;
            case GameState.None: _gameView.SetStateView("None"); break;
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