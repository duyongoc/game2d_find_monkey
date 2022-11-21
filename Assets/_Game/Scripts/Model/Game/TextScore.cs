using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class TextScore : MonoBehaviour
{

    // inspector
    [SerializeField] private TMP_Text textScore;
    [SerializeField] private float moveSpeed;
    [SerializeField] private float destroyTime;


    #region UNITY
    // private void Start()
    // {
    // }

    private void FixedUpdate()
    {
        MoveText();
    }
    #endregion


    public void Init(int score, Color color)
    {
        textScore.text = $"+{score}";
        textScore.color = color;

        if (score > 10)
        {
            moveSpeed /= 2;
            destroyTime *= 2;
            textScore.color = Color.yellow;
        }

        textScore.DOFade(1, 0);
        textScore.DOFade(0, destroyTime)
            .OnComplete(() =>
            {
                Destroy(this.gameObject);
            });
    }


    private void MoveText()
    {
        transform.Translate(Vector3.up * moveSpeed * Time.deltaTime);
    }

}
