using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;


public class UILeaderboardItem : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{

    [Space]
    [SerializeField] private GameObject objMine;
    [SerializeField] private GameObject objHover;

    [Space]
    [SerializeField] private TMP_Text txtRanking;
    [SerializeField] private TMP_Text txtName;
    [SerializeField] private TMP_Text txtScore;


    [Header("DEBUG")]
    [SerializeField] private ItemLeaderBoardData _data;
    public ItemLeaderBoardData GetData => _data;


    public void Init(ItemLeaderBoardData newData)
    {
        _data = newData;

        txtRanking.text = _data.ranking;
        txtName.text = _data.name;
        txtScore.text = _data.score;
    }


    public void ShowMineBackground(bool value)
    {
        objMine.SetActive(value);
        if (value == true) txtName.text += " (you)";
    }


    public void OnPointerEnter(PointerEventData eventData)
    {
        objHover.SetActive(true);
    }


    public void OnPointerExit(PointerEventData eventData)
    {
        objHover.SetActive(false);
    }


}
