using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ViewInfo : View
{


    public TMP_Text txtInfo;
    private System.Action callbackContinue;


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



    public void ShowInfo(string content, System.Action callback)
    {
        gameObject.SetActive(true);
        txtInfo.text = content;
        callbackContinue = callback;
    }


    public void OnClickButtonContinue()
    {
        callbackContinue?.Invoke();
        gameObject.SetActive(false);
    }



}
