using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonHover : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{

    public void OnPointerEnter(PointerEventData eventData)
    {
        transform.DoScale(1.35f, 0.35f);
        transform.DoRotationOnce(new Vector3(0, 0, -12), 0.35f);
    }


    public void OnPointerExit(PointerEventData eventData)
    {
        transform.DoScale(1f, 0.35f);
        transform.DoRotationOnce(Vector3.zero, 0.35f);
    }

}
