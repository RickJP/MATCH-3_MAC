using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RectXFormMover))]
public class MessageWindow : MonoBehaviour
{

    public Image messageIcon;
    public Text messageText;
    public Text buttonText;

    public Sprite winIcon;
    public Sprite loseIcon;
    public Sprite goalIcon;

    static string m_finalScoreStr;



    public void ShowMessage(Sprite sprite = null, string message = "", string buttonMsg = "start")
    {
        if (messageIcon != null)
        {
            messageIcon.sprite = sprite;
        }

        if (messageText != null)
        {
            messageText.text = message;
        }

        if (buttonText != null) 
        {
            buttonText.text = buttonMsg;
        }

    }


    public void ShowScoreMessage(int scoreGoal)
    {
        string message = "score goal \n" + scoreGoal.ToString();
        ShowMessage(goalIcon, message, "start");
    }


    public void ShowWinMessage()
    {
        ShowMessage(winIcon, "level\ncomplete", "ok");
    }

    public void ShowLoseMessage()
    {
        ShowMessage(loseIcon, "level\nfailed", "ok");
    }

    public void ShowFinishedGameMessage()
    {
        m_finalScoreStr = ScoreManager.Instance.CurrentScore.ToString();
        string message = "You Finished\n with a score of: ";
        ShowMessage(winIcon, message, "try again!");
    }
        
}
