using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UILeaderboard : MonoBehaviour
{

    [Header("Leader Board")]
    [SerializeField] private GameObject objLeaderBoard;
    [SerializeField] private GameObject objUpdateInfo;
    [SerializeField] private GameObject objLoading;
    [SerializeField] private GameObject noResultFound;

    [Header("Leader Board")]
    [SerializeField] private int scrollOffet = 10;
    [SerializeField] private Transform contentLeaderBoard;
    [SerializeField] private UILeaderboardItem itemPrefab;
    [SerializeField] private List<UILeaderboardItem> itemCaches;

    [Header("Pop up input name")]
    [SerializeField] private GameObject uiPopup;
    [SerializeField] private TMP_InputField inputName;
    [SerializeField] private TMP_Text txtYourScore;
    [SerializeField] private TMP_Text txtInfomation;



    #region UNITY
    // private void Start()
    // {
    // }

    // private void Update()
    // {
    // }
    #endregion



    public void ReLoad()
    {
        ShowObjLeaderBoard(false);
        ShowObjUpdateInfo(false);
        ShowObjLoading(false);
        ShowNoResultFound(false);
    }


    public void RefeshLeaderBoard()
    {
        // clear old item cache
        itemCaches.ForEach(x => { if (x != null) Destroy(x.gameObject); });
        itemCaches.Clear();

        // show info
        ShowObjUpdateInfo(false);
        ShowObjLeaderBoard(true);
    }


    public void CreateItemPlayer(PlayerLeaderboardEntry player, int index)
    {
        // get value
        var id = player.PlayFabId;
        var ranking = (index + 1).ToString();
        var name = player.DisplayName;
        var score = player.StatValue.ToString();

        // show item
        var item = Instantiate(itemPrefab, contentLeaderBoard);
        item.Init(new ItemLeaderBoardData(id, ranking, name, score));
        itemCaches.Add(item);

        // increase view size user_character list 
        var rectTran = contentLeaderBoard.AsRectTransform();
        rectTran.sizeDelta = new Vector2(rectTran.sizeDelta.x, rectTran.sizeDelta.y + scrollOffet);
    }


    public void CheckMeOnLeaderBoard(string id)
    {
        var mine = itemCaches.Find(x => x.GetData.id.Equals(id));
        print($"id {id} mine: {mine}");
        if (mine != null)
        {
            mine.ShowMineBackground(true);
        }
    }


    public void UpdateUserScore()
    {
        if (string.IsNullOrEmpty(inputName.text))
        {
            ShowTextWrongName();
            return;
        }

        ShowTextLoading();
        var currentScore = PlayfabController.Instance.CurrentScore;
        PlayfabController.Instance.SendLeaderboard(currentScore, inputName.text, () =>
        {
            ShowTextUpdateSucces();
            PlayfabController.Instance.ShowLeaderBoard();
        });
    }


    private void ShowYourNameAndScore()
    {
        txtYourScore.text = string.Empty;
        var playfab = PlayfabController.Instance;

        // get the lastest value ranking
        playfab.GetUserCurrentRanking(() =>
        {
            txtYourScore.text = $"Your name: <color=green>{playfab.UserName}</color> \n";
            txtYourScore.text += $"Current Score: <color=green>{playfab.CurrentScore}</color> | ";
            txtYourScore.text += $"High Score: <color=green>{playfab.HighScore}</color>";
            inputName.text = playfab.UserName;
        });
    }


    public void ShowObjLeaderBoard(bool value)
    {
        objLeaderBoard.SetActive(value);
    }


    public void ShowObjUpdateInfo(bool value)
    {
        objUpdateInfo.SetActive(value);
        if (value) ShowYourNameAndScore();
    }


    public void ShowObjLoading(bool value)
    {
        objLoading.SetActive(value);
    }
    
    
    public void ShowNoResultFound(bool value)
    {
        noResultFound.SetActive(value);
    }


    public void OnClickButtonExit()
    {
        ShowObjLoading(false);
        ShowObjLeaderBoard(false);
        ShowObjUpdateInfo(false);
        PlayfabController.Instance.OnEventHideLeaderBoard?.Invoke();
    }


    private void ShowPopup(bool value)
    {
        uiPopup.SetActive(value);
    }


    public void OnClickButtonUpdate()
    {
        UpdateUserScore();
    }


    public void OnClickButtonCancel()
    {
        ReLoad();
    }


    private void ShowTextWrongName()
    {
        txtInfomation.gameObject.SetActive(true);
        txtInfomation.text = "Please enter your name!";
        txtInfomation.color = Color.red;
    }


    private void ShowTextUpdateSucces()
    {
        txtInfomation.gameObject.SetActive(true);
        txtInfomation.text = "Post score success!";
        txtInfomation.color = Color.green;
    }


    private void ShowTextLoading()
    {
        txtInfomation.gameObject.SetActive(true);
        txtInfomation.text = "Loading...";
        txtInfomation.color = Color.green;
    }



}
