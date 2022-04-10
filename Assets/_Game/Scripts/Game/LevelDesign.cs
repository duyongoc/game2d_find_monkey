using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelDesign : MonoBehaviour
{

    [Header("Config")]
    public SettingSO setting;
    int level = 5;

    public TurnData GetTurn(int turn)
    {
        switch (turn)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                return GetTurnEasy();

            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                return GetTurnMedium();

            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
                return GetTurnHard();

            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                return GetTurnHarder();

            default:
                return GetNightmare();
        }
    }


    private TurnData GetTurnEasy()
    {
        var rand = Random.Range(0, setting.turnEasy.Count);
        return setting.turnEasy[rand];
    }


    private TurnData GetTurnMedium()
    {
        var rand = Random.Range(0, setting.turnMedium.Count);
        return setting.turnMedium[rand];
    }


    private TurnData GetTurnHard()
    {
        var rand = Random.Range(0, setting.turnHard.Count);
        return setting.turnHard[rand];
    }


    private TurnData GetTurnHarder()
    {
        var rand = Random.Range(0, setting.turnHarder.Count);
        return setting.turnHarder[rand];
    }


    private TurnData GetNightmare()
    {
        var rand = Random.Range(0, setting.nightmare.Count);
        return setting.nightmare[rand];
    }


}
