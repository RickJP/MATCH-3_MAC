using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : Singleton<UIManager> 
{
    public RectTransform collectionGoalLayout;
    public int collectionGoalBaseWidth = 125;

    CollectionGoalPanel[] m_collectionGoalPanels;

    public ScreenFader screenFader;
    public Text levelNameText;
    public Text movesLeftText;
    public ScoreMeter scoreMeter;

    public MessageWindow messageWindow, endLevelMessageWindow;


    public GameObject movesCounter;

    public Timer timer;



    public override void Awake()
    {
        base.Awake();

        if (messageWindow != null)
        {
            messageWindow.gameObject.SetActive(true);
        }
        if (screenFader != null)
        {
            screenFader.gameObject.SetActive(true);
        }
    }

    public void SetupCollectionGoalLayout(CollectionGoal[] collectionGoals)
    {
        if (collectionGoalLayout != null && collectionGoals != null && 
            collectionGoals != null)   // ?  formely > collectionGoals.Length != null
        {
            collectionGoalLayout.sizeDelta = new Vector2(collectionGoals.Length * collectionGoalBaseWidth,
                collectionGoalLayout.sizeDelta.y);
            m_collectionGoalPanels = collectionGoalLayout.gameObject.GetComponentsInChildren<CollectionGoalPanel>();

            for (int i = 0; i < m_collectionGoalPanels.Length; i++)
            {
                if (i < collectionGoals.Length && collectionGoals[i] != null)
                {
                    m_collectionGoalPanels[i].gameObject.SetActive(true);
                    m_collectionGoalPanels[i].collectionGoal = collectionGoals[i];
                    m_collectionGoalPanels[i].SetupPanel();

                }
                else
                {
                    m_collectionGoalPanels[i].gameObject.SetActive(false);
                }
            }
        }
    }

    public void UpdateCollectionGoalLayout()
    {
        foreach(CollectionGoalPanel panel in m_collectionGoalPanels)
        {
            if (panel != null && panel.gameObject.activeInHierarchy)
            {
                panel.UpdatePanel();
            }
        }
    }



    public void EnableTimer(bool state)
    {
        if (timer != null)
        {
            timer.gameObject.SetActive(state);
        }
    }

    public void EnableMovesCounter(bool state)
    {
        if (movesCounter!= null)
        {
            movesCounter.gameObject.SetActive(state);
        }
    }

    public void EnableCollectionGoalLayout(bool state)
    {
        if (collectionGoalLayout != null)
        {
            collectionGoalLayout.gameObject.SetActive(state);
        }
    }

}
