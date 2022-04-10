using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using Zenject;

public class GameScene : Singleton<GameScene>
{

    // inspector
    [Header("Param")]
    public LevelDesign levelDesign;
    public GridController gridController;
    public int canWrong = 5;

    [Header("View infomation")]
    public ViewInfo viewInfo;


    // private 
    private TurnData _currentTurn;
    private int _currentIndex = 0;
    private int _currentWrong = 0;
    private bool _blockTile = false;


    // DI
    [Inject] ViewInGame _viewInGame;
    public bool BlockTile => _blockTile;



    #region UNITY
    private void Start()
    {
        // CacheComponent();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            NextTurn();
        }
    }
    #endregion



    public void InitScene()
    {
        SetupTurn();

        _currentWrong = canWrong;
        _viewInGame.UpdateWrongText(_currentWrong);
    }


    public void NextTurn()
    {
        //prepare for the turn
        SetupTurn();
        StartTurn();
    }


    public void SetupTurn()
    {
        // setup for the turn
        _blockTile = true;
        _currentTurn = levelDesign.GetTurn(_currentIndex);

        gridController.CreateMatrix(_currentTurn.matrixSize);
        var arrKey = _currentTurn.patternString
                            .Split(new[] { " " }, StringSplitOptions.RemoveEmptyEntries)
                            .Select(x => int.Parse(x)).ToList();

        gridController.SetupKeyForTheMatrix(arrKey.ToArray());
        ShowSquareRemain();

        _currentIndex++;
        _viewInGame.UpdateLevel(_currentIndex);
    }


    public void StartTurn()
    {
        gridController.ShowListTileHasKey();
        DG.Tweening.DOVirtual.DelayedCall(1.5f, () =>
        {
            _blockTile = false;
            gridController.HideListTile();

            _viewInGame.StartCountTime(_currentTurn.timeFinish);
        });
    }


    private void ShowSquareRemain()
    {
        int remain = gridController.GetTileRemain();
        int total = gridController.GetTileTotal();
        _viewInGame.UpdateSquareRemain(remain, total);
    }


    public void CheckGridResult()
    {
        ShowSquareRemain();
        var result = gridController.CheckGridResult();
        switch (result)
        {
            case false:
                //PickWrong(); 
                break;

            case true:
                ShowWin();
                break;
        }
    }


    public void ShowLose(string content)
    {
        _viewInGame.CancelCounting();
        viewInfo.ShowInfo(content, () => { ResetGame(); });
    }


    public void ShowWin()
    {
        _blockTile = true;
        _viewInGame.CancelCounting();

        ShakeCameraWin();
        gridController.PlayAnimationWin();

        string content = $"Level passed: \n {_currentIndex}";
        DOVirtual.DelayedCall(0.75f, () =>
        {
            viewInfo.ShowInfo(content, () => { ResetTurn(); });
        });
    }


    public void ShowInfo(string content, System.Action callback)
    {
        viewInfo.ShowInfo(content, callback);
    }


    public void ShakeCameraWin()
    {
        gridController.transform.DOShakeScale(0.5f, new Vector3(1.75f, 1.75f, 0), 10, 0)
            .OnComplete(() => { gridController.transform.localRotation = Quaternion.identity; });
    }


    public void PickWrong()
    {
        // update wrong text on UI
        print("pick wrong");
        _viewInGame.UpdateWrongText(--_currentWrong);

        if (_currentWrong <= 0)
        {
            ShowLose($"Wrong!\n Do you wanna play again? ");
        }

        // shaking camera
        // gridController.transform.DOShakeScale(1f, new Vector3(1.75f, 1.75f, 0), 10, 0)
        //     .OnComplete(() => { gridController.transform.localRotation = Quaternion.identity; });
    }



    private void ResetTurn()
    {
        _currentWrong = canWrong;
        _blockTile = false;
        _viewInGame.UpdateWrongText(_currentWrong);

        transform.DOKill();
        gridController.HideListTile();

        // NextTurn();
        DOVirtual.DelayedCall(1f, () => { NextTurn(); });
    }


    public void ResetGame()
    {
        _currentIndex = 0;
        _currentWrong = canWrong;
        _currentTurn = null;
        _viewInGame.UpdateLevel(_currentIndex);
        _viewInGame.UpdateWrongText(_currentWrong);

        transform.DOKill();
        gridController.ResetData();

        GameMgr.EVENT_RESET_INGAME?.Invoke();
        DOVirtual.DelayedCall(1f, () => { NextTurn(); });
    }




}
