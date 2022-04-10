using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Tile : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
                                , IPointerDownHandler, IPointerUpHandler
{

    [Header("Setting")]
    public Image imgTile;
    public Color colorHide;
    public Color colorWhite;
    public Color colorBlack;
    public float timeEffect;


    // private
    private GameScene _gameScene;
    private bool _hasKey = false;
    private bool _isOpen = false;


    // properties
    public bool HasKey => _hasKey;



    #region UNITY
    private void Start()
    {
        // Init();
    }

    // private void Update()
    // {
    // }
    #endregion


    public void RefeshTile()
    {
        _isOpen = false;
        _gameScene = GameScene.Instance;
        imgTile.color = colorHide;
        transform.DOKill();
    }


    public void SetKey(bool value)
    {
        _hasKey = value;
    }


    public void ShowTile()
    {
        PlayAnimationFlip();
        imgTile.color = colorWhite;
    }


    public void HideTile()
    {
        PlayAnimationFlip();
        imgTile.color = colorHide;
    }


    private void OnClickTheTile()
    {
        if (_isOpen)
            return;

        switch (_hasKey)
        {
            case false: PickWrong(); break;
            case true: PickRight(); break;
        }

        _isOpen = true;
        PlayAnimationFlip();
        GameScene.Instance.CheckGridResult();
    }


    private void PickWrong()
    {
        var origin = transform.localScale;
        imgTile.color = colorBlack;

        transform.DOShakeScale(0.5f, Vector3.one * 0.25f, 20, 0)
            .OnComplete(() => { transform.localScale = origin; });

        GameScene.Instance.PickWrong();
        SoundMgr.Instance.PlaySFX(SoundMgr.SFX_PICK_WRONG);

        // var origin = transform.localRotation;
        // transform.DOShakeRotation(0.5f, new Vector3(0f, 0f, 90f), 20, 90)
        //     .OnComplete(() => { transform.localRotation = origin; });
    }


    private void PickRight()
    {
        _hasKey = false;
        imgTile.color = colorWhite;
        SoundMgr.Instance.PlaySFX(SoundMgr.SFX_PICK_RIGHT);
    }


    // public void OnPointerClick(PointerEventData pointerEventData)
    // {
    //     Debug.Log(name + " Game Object Clicked!");
    // }


    public void OnPointerDown(PointerEventData eventData)
    {
        // Debug.Log(this.gameObject.name + " OnPointerDown.");
        if (_gameScene.BlockTile)
            return;

        OnClickTheTile();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        // Debug.Log(this.gameObject.name + " OnPointerUp.");
    }


    private void PlayAnimationFlip()
    {
        transform.DORotate(new Vector3(0, 180, 0), 0.5f)
            .OnComplete(() =>
            {
                transform.localRotation = Quaternion.identity;
            });
    }


    public void PlayAnimationWin()
    {
        // imgTile.DOFade(1, 0);
        // transform.DOScale(Vector3.zero, timeEffect);

        Sequence effectSq = DOTween.Sequence();
        // effectSq.Append(imgTile.DOColor(Color.yellow, timeEffect))
        effectSq.Append(imgTile.DOFade(0, timeEffect))
           .OnComplete(() =>
           {
               imgTile.DOKill();
               transform.DOKill();
           });
    }

    public void PlayAnimationClose()
    {
        // imgTile.DOFade(1, 0);
        transform.DOScale(Vector3.zero, timeEffect);

        Sequence effectSq = DOTween.Sequence();
        // effectSq.Append(imgTile.DOColor(Color.yellow, timeEffect))
        effectSq.Append(imgTile.DOFade(0, timeEffect))
           .OnComplete(() =>
           {
               imgTile.DOKill();
               transform.DOKill();
           });
    }


    public void OnPointerEnter(PointerEventData eventData)
    {
        // print("enter " + gameObject.name);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        // print("exit " + gameObject.name);
    }

}
