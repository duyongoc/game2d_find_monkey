using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class ViewManager : MonoBehaviour
{

    // [DI]
    [Inject] private ViewMenu _viewMenu;
    [Inject] private ViewInGame _viewInGame;
    [Inject] private ViewGameOver _viewGameOver;

    // [private]
    private View _stateView;



    #region UNITY
    private void Start()
    {
        Init();
    }

    private void Update()
    {
        if (_stateView == null)
            return;

        _stateView.UpdateState();
    }
    #endregion



    private void Init()
    {
        SetState(_viewMenu);
    }


    public void SetStateView(string viewName)
    {
        switch (viewName)
        {
            case "Menu": SetState(_viewMenu); break;
            case "InGame": SetState(_viewInGame); break;
            case "GameOver": SetState(_viewGameOver); break;
        }
    }


    public void SetState(View newState)
    {
        if (_stateView != null)
            _stateView.EndState();

        _stateView = newState;
        _stateView.StartState();

        //active view with current state
        SetActiveView(_stateView.GetType().Name);
    }


    public void SetActiveView(string nameScene)
    {
        _viewMenu.gameObject.SetActive(_viewMenu.name.Contains(nameScene));
        _viewInGame.gameObject.SetActive(_viewInGame.name.Contains(nameScene));
        _viewGameOver.gameObject.SetActive(_viewGameOver.name.Contains(nameScene));
    }


}
