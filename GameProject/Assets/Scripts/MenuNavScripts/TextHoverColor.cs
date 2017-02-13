using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TextHoverColor : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler {

	public Text text;
	public PointerEventData eventData;


	Color myColor = new Color32( 0x00, 0xDF, 0x00, 0xFF ); 

	public void OnPointerEnter(PointerEventData eventData){
		text.color = Color.red;
	}

	public void OnPointerExit(PointerEventData eventData){
		text.color = myColor;
	}
		
}
