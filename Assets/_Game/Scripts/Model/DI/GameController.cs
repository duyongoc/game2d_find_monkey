using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using Zenject;


public class GameController : Singleton<GameController>
{


    [Header("[Setting]")]
    [SerializeField] private LevelDesign levelDesign;
    [SerializeField] private GridController gridController;
    [SerializeField] private int canWrong = 5;

    // [DI]
    [Inject] ViewInGame viewInGame;

    // [private]
    private int _currentIndex = 0;
    private int _currentWrong = 0;
    private bool _blockTile = false;
    private TurnData _currentTurn;


    // [properties]
    public bool BlockTile => _blockTile;



    #region UNITY
    // private void Start()
    // {
    // }

    private void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Space))
        // {
        //     NextTurn();
        // }
    }
    #endregion



    public void Load()
    {
        SetupTurn();
        _currentWrong = canWrong;
        viewInGame.UpdateWrongText(_currentWrong);
    }


    public void NextTurn()
    {
        SetupTurn();
        StartTurn();
    }


    public void StartDelayNextTurn()
    {
        DOVirtual.DelayedCall(1f, () => { NextTurn(); });
    }


    public void SetupTurn()
    {
        _blockTile = true;
        _currentTurn = levelDesign.GetTurn(_currentIndex);

        // setup for the turn
        gridController.CreateMatrix(_currentTurn.matrixSize);
        var arrKey = _currentTurn.patternString
                            .Split(new[] { " " }, StringSplitOptions.RemoveEmptyEntries)
                            .Select(x => int.Parse(x)).ToList();

        gridController.SetupKeyForTheMatrix(arrKey.ToArray());
        ShowSquareRemain();

        _currentIndex++;
        viewInGame.UpdateLevel(_currentIndex);
        ScoreManager.Instance.UpdateScore(_currentIndex);
    }


    public void StartTurn()
    {
        gridController.ShowTiles();
        DG.Tweening.DOVirtual.DelayedCall(1.5f, () =>
        {
            _blockTile = false;
            gridController.HideTilesByRotateY();
            viewInGame.StartCountTime(_currentTurn.timeFinish);
        });
    }


    private void ShowSquareRemain()
    {
        var remain = gridController.GetTilesRemain();
        var total = gridController.GetTilesTotal();
        viewInGame.UpdateSquareRemain(remain, total);
    }


    public void CheckGridResult()
    {
        ShowSquareRemain();
        switch (gridController.CheckResult())
        {
            case false: break;
            case true: ShowWin(); break;
        }
    }


    public void ShowLose(string content)
    {
        viewInGame.CancelCounting();
        viewInGame.ShowInfo(content, () =>
        {
            Reset();
            StartDelayNextTurn();
        });
    }


    public void ShowWin()
    {
        _blockTile = true;
        viewInGame.CancelCounting();

        ShakeCameraWin();
        gridController.PlayAnimationWin();

        // print("Level pass");
        string content = $"Level passed: \n {_currentIndex}";
        DOVirtual.DelayedCall(0.75f, () =>
        {
            viewInGame.ShowInfo(content, () => { ResetTurn(); });
        });
    }


    public void ShowInfo(string content, System.Action callback)
    {
        viewInGame.ShowInfo(content, callback);
    }


    public void ShakeCameraWin()
    {
        gridController.transform.DOShakeScale(0.5f, new Vector3(1.75f, 1.75f, 0), 10, 0)
            .OnComplete(() => { gridController.transform.localRotation = Quaternion.identity; });
    }


    public void PickWrong()
    {
        // update wrong text on ui
        viewInGame.UpdateWrongText(--_currentWrong);
        if (_currentWrong <= 0)
        {
            viewInGame.CancelCounting();
            GameManager.Instance.GameOver();
        }
    }


    private void ResetTurn()
    {
        _blockTile = false;
        _currentWrong = canWrong;
        viewInGame.UpdateWrongText(_currentWrong);

        transform.DOKill();
        gridController.HideTilesByRotateY();

        // check for next turn
        DOVirtual.DelayedCall(1f, () => { NextTurn(); });
    }


    public void Reset()
    {
        _currentIndex = 0;
        _currentTurn = null;
        _currentWrong = canWrong;

        transform.DOKill();
        viewInGame.Reset();
        gridController.Reset();
        viewInGame.UpdateWrongText(_currentWrong);
       
        this.PostEvent(EventID.OnEvent_GameOver);
    }




}
