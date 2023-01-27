using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Tile : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    [Header("Setting")]
    [SerializeField] private Image imgTile;
    [SerializeField] private Color colorHide;
    [SerializeField] private Color colorWhite;
    [SerializeField] private Color colorBlack;
    [SerializeField] private float timeEffect;

    [Space]
    [SerializeField] private GameObject imgMonkey;
    [SerializeField] private GameObject imgLock;


    // [private]
    private bool _hasKey = false;
    private bool _isOpen = false;


    // [properties]
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



    public void Load()
    {
        _isOpen = false;
        ShowLocked(true);
        transform.DOKill();
        imgTile.color = colorHide;
    }


    public void SetKey(bool value)
    {
        _hasKey = value;
    }


    public void ShowTile()
    {
        ShowLocked(false);
        PlayEffectRotationY();
    }


    public void HideTile()
    {
        ShowLocked(true);
        PlayEffectRotationY();
    }


    public void HideByRotateY()
    {
        ShowLocked(true);
        PlayEffectRotationY(180);
    }


    private void OnClickedTheTile()
    {
        if (_isOpen)
            return;

        switch (_hasKey)
        {
            case true: PickRight(); break;
            case false: PickWrong(); break;
        }

        PlayEffectRotationY(180);
        GameController.Instance.CheckGridResult();
    }


    private void PickRight()
    {
        _isOpen = true;
        _hasKey = false;
        ShowLocked(false);
        SoundManager.Instance.PlaySFX(SoundManager.SFX_PICK_RIGHT);
    }


    private void PickWrong()
    {
        var originScale = transform.localScale;
        transform.DOShakeScale(0.5f, Vector3.one * 0.25f, 20, 0)
            .OnComplete(() => { transform.localScale = originScale; });

        GameController.Instance.PickWrong();
        SoundManager.Instance.PlaySFX(SoundManager.SFX_PICK_WRONG);
    }


    private void ShowLocked(bool value)
    {
        imgLock.SetActive(value);
    }


    private void PlayEffectRotationY(float value = 180)
    {
        var scale = transform.transform.transform.localScale;
        var scaleX = scale.x * -1;

        transform.DORotate(new Vector3(0, value, 0), .5f, RotateMode.LocalAxisAdd)
            .OnComplete(() =>
            {
                transform.localRotation = Quaternion.identity;
                transform.transform.localScale = new Vector3(scaleX, 1, 1);
            });
    }


    private void PlayEffectRotationZ(float value = 360)
    {
        transform.DORotate(new Vector3(0, 0, value), .5f, RotateMode.LocalAxisAdd)
            .OnComplete(() => { transform.localRotation = Quaternion.identity; });
    }


    public void PlayAnimationWin()
    {
        Sequence sequence = DOTween.Sequence();
        sequence.Append(imgTile.DOFade(0, timeEffect))
            .OnComplete(() =>
            {
                imgTile.DOKill();
                transform.DOKill();
            });
    }


    public void PlayAnimationClose()
    {
        transform.DOScale(Vector3.zero, timeEffect);
        Sequence sequence = DOTween.Sequence();
        sequence.Append(imgTile.DOFade(0, timeEffect))
           .OnComplete(() =>
            {
                imgTile.DOKill();
                transform.DOKill();
            });
    }


    public void OnPointerDown(PointerEventData eventData)
    {
        if (GameController.Instance.BlockTile)
            return;

        OnClickedTheTile();
    }


    public void OnPointerUp(PointerEventData eventData)
    {
        // Debug.Log(this.gameObject.name + " OnPointerUp.");
    }


}
