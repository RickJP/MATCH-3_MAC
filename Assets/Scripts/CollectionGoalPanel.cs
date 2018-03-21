using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CollectionGoalPanel : MonoBehaviour {


    public CollectionGoal collectionGoal;
    public Text numberLeftText;
    public Image prefabImage;

   
	void Start () {
        SetupPanel();
	}
	
    public void SetupPanel()
    {
        if (collectionGoal != null && numberLeftText != null  && prefabImage != null)
        {
            SpriteRenderer prefabSprite = collectionGoal.prefabToCollect.GetComponent<SpriteRenderer>();
            if (prefabSprite != null)
            {
                prefabImage.sprite = prefabSprite.sprite;
                prefabImage.color = prefabImage.color;
            }
            numberLeftText.text = collectionGoal.numberToCollect.ToString();
        }
    }

    public void UpdatePanel()
    {
        if (collectionGoal != null && numberLeftText != null)
        {
            numberLeftText.text = collectionGoal.numberToCollect.ToString();
        }
    }
}
