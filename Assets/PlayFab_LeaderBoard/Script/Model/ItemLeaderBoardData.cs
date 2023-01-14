using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ItemLeaderBoardData
{
    public string id;
    public string ranking;
    public string name;
    public string score;

    public ItemLeaderBoardData(string id, string ranking, string name, string score)
    {
        this.id = id;
        this.ranking = ranking;
        this.name = name;
        this.score = score;
    }
}


