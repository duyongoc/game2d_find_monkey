using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;

public class PlayfabController : SingletonEvent<PlayfabController>
{

    // [Event]
    public Action OnEventShowLeaderBoard;
    public Action OnEventHideLeaderBoard;


    [Header("[Setting]")]
    [SerializeField] private string leaderboard;
    [SerializeField] private int currentScore;

    [Header("[User information]")]
    [SerializeField] private string playFabId;
    [SerializeField] private string userName;
    [SerializeField] private int highScore;

    [Space]
    [SerializeField] private UILeaderboard uiLeaderboard;


    // [properties]
    public string UserName { get => userName; set => userName = value; }
    public int HighScore { get => highScore; set => highScore = value; }
    public int CurrentScore { get => currentScore; set => currentScore = value; }



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
        if (string.IsNullOrEmpty(PlayFabSettings.staticSettings.TitleId))
        {
            // Please change the titleId below to your own titleId from PlayFab Game Manager.
            // If you have already set the value in the Editor Extensions, this can be skipped.
            PlayFabSettings.staticSettings.TitleId = "2E41C";
        }

        //
        uiLeaderboard.ReLoad();
        RequestLogin(() =>
        {
            GetUserCurrentRanking();

            // GetAccountInfo();
            // GetMinimumScoreLeaderboard();
            // SendLeaderboard(10, "test_bum");
        });
    }


    public void GetUserCurrentRanking(Action cbSuccess = null)
    {
        var request = new GetLeaderboardAroundPlayerRequest
        {
            StatisticName = leaderboard,
            MaxResultsCount = 1,
        };

        PlayFabClientAPI.GetLeaderboardAroundPlayer(request,
        (result) =>
        {
            foreach (var entry in result.Leaderboard)
            {
                print($"entry {entry.DisplayName} | {entry.StatValue} | {entry.PlayFabId}");
                playFabId = entry.PlayFabId;
                userName = entry.DisplayName;
                highScore = entry.StatValue;
                cbSuccess?.Invoke();
            }
        },
        (error) => Debug.Log(error.GenerateErrorReport()));
    }


    public void CheckShowRecordScore(int score)
    {
        print($"minimumScore: {highScore} | score: {score}");
        if (highScore >= score)
            return;

        currentScore = score;
        uiLeaderboard.ShowObjUpdateInfo(true);
    }


    public void ShowLeaderBoard()
    {
        uiLeaderboard.ShowObjLoading(true);
        OnEventShowLeaderBoard?.Invoke();

        // request for the user login 
        RequestLogin(() =>
        {
            // get ranking of user
            GetUserCurrentRanking(() =>
            {
                uiLeaderboard.RefeshLeaderBoard();
                RequestTopPlayers();
            });
        });
    }


    private void RequestLogin(Action cbSuccess = null, Action cbFail = null)
    {
        // request for login
        var request = new LoginWithCustomIDRequest { CustomId = SystemInfo.deviceUniqueIdentifier, CreateAccount = true };
        PlayFabClientAPI.LoginWithCustomID(request,
        (result) =>
        {
            cbSuccess?.Invoke();
        },
        (error) =>
        {
            Debug.Log(error.GenerateErrorReport());
            cbFail?.Invoke();
        });
    }


    public void RequestTopPlayers()
    {
        // create request and get 10 top players
        var request = new GetLeaderboardRequest
        {
            StatisticName = PlayfabController.Instance.leaderboard,
            StartPosition = 0,
            MaxResultsCount = 10
        };

        // get leader board and show it
        PlayFabClientAPI.GetLeaderboard(request,
        (result) =>
        {
            ShowTopPlayers(result.Leaderboard);
            uiLeaderboard.ShowObjLoading(false);
        },
        (error) =>
        {
            Debug.Log(error.GenerateErrorReport());
        });
    }


    private void ShowTopPlayers(List<PlayerLeaderboardEntry> board)
    {
        // show no result
        if (board.Count <= 0)
        {
            uiLeaderboard.ShowNoResultFound(true);
        }

        // create item on  leader board 
        for (int index = 0; index <= board.Count - 1; index++)
        {
            uiLeaderboard.CreateItemPlayer(board[index], index);
        }

        // check if user on the leader board
        uiLeaderboard.CheckMeOnLeaderBoard(playFabId);
    }



    public void SendLeaderboard(int score, string name, Action cb_success = null)
    {
        // set name for display
        SetDisplayName(name);

        // create update request
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate> { new StatisticUpdate { StatisticName = leaderboard, Value = score } }
        };

        // send request for update score
        PlayFabClientAPI.UpdatePlayerStatistics(request,
        (result) =>
        {
            Debug.Log($"SendLeaderboard success with name: {name} | score: {score}");
            cb_success?.Invoke();
        },
        (error) => Debug.LogError(error.GenerateErrorReport()));
    }


    public void SetDisplayName(string name)
    {
        var requestName = new UpdateUserTitleDisplayNameRequest { DisplayName = name, };
        PlayFabClientAPI.UpdateUserTitleDisplayName(requestName,
        (result) => { },
        (error) => { Debug.LogError(error.GenerateErrorReport()); });
    }



    // private void GetAccountInfo(Action<string> cbSuccess = null)
    // {
    //     PlayFabClientAPI.GetAccountInfo(new GetAccountInfoRequest(),
    //     (result) =>
    //     {
    //         playFabId = result.AccountInfo.PlayFabId;
    //         cbSuccess?.Invoke(playFabId);
    //     },
    //     (error) =>
    //     {
    //         Debug.Log(error.GenerateErrorReport());
    //     });
    // }


    // public void GetPlayerProfile()
    // {
    //     PlayFabClientAPI.GetPlayerProfile(new GetPlayerProfileRequest()
    //     {
    //         PlayFabId = playFabId,
    //         ProfileConstraints = new PlayerProfileViewConstraints() { ShowDisplayName = true }
    //     },
    //     (result) =>
    //     {
    //         Debug.Log("The player's DisplayName profile data is: " + result.PlayerProfile);
    //     },
    //     (error) =>
    //     {
    //         Debug.Log(error.GenerateErrorReport());
    //     });
    // }


    // public void GetDisplayName(Action<string> cb_success = null)
    // {
    //     PlayFabClientAPI.GetPlayerProfile(new GetPlayerProfileRequest()
    //     {
    //         PlayFabId = playFabId,
    //         ProfileConstraints = new PlayerProfileViewConstraints() { ShowDisplayName = true }
    //     },
    //     (result) =>
    //     {
    //         var num = result.PlayerProfile.Statistics[0].Value;
    //         cb_success?.Invoke(result.PlayerProfile.DisplayName);
    //     },
    //     (error) => { Debug.LogError(error.GenerateErrorReport()); });
    // }


    // public void SendLeaderboard(int score, Action cb_success = null)
    // {
    //     var request = new UpdatePlayerStatisticsRequest
    //     {
    //         Statistics = new List<StatisticUpdate> { new StatisticUpdate { StatisticName = leaderboard, Value = score } }
    //     };
    //     // send request for update score
    //     PlayFabClientAPI.UpdatePlayerStatistics(request,
    //     (result) => { cb_success?.Invoke(); },
    //     (error) => Debug.LogError(error.GenerateErrorReport()));
    // }


    // public void GetMinimumScoreLeaderboard()
    // {
    //     var request = new GetLeaderboardRequest
    //     {
    //         StatisticName = leaderboard,
    //         StartPosition = 0,
    //         MaxResultsCount = 20
    //     };
    //     PlayFabClientAPI.GetLeaderboard(request,
    //     result =>
    //     {
    //         minimumScore = result.Leaderboard.Last().StatValue;
    //     },
    //     error => Debug.LogError(error.GenerateErrorReport()));
    // }


    // PlayFabClientAPI.GetPlayerStatistics(new GetPlayerStatisticsRequest()
    // {
    //     StatisticNames = new List<string> { leaderboard }
    // },
    // result =>
    // {
    //     Debug.Log("Complete " + result.ToString());
    //     if (result.Statistics.First() != null)
    //     {
    //         minimumScore = result.Statistics.First().Value;
    //     }
    // },
    // error => Debug.Log(error.GenerateErrorReport()));

}
