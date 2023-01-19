using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class TurnData
{
    [Space]
    public int matrixSize;
    public float timeFinish;

    [Space]
    public bool random;
    public string patternString;
}


[CreateAssetMenu(fileName = "Setting", menuName = "Setting/Setting", order = 1)]
public class SettingSO : ScriptableObject
{

    [Space]
    public List<TurnData> turnEasy;
    public List<TurnData> turnMedium;
    public List<TurnData> turnHard;
    public List<TurnData> turnHarder;
    public List<TurnData> nightmare;
}
