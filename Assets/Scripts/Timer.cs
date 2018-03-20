using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

    public Text timeLeftText;
    public Image clockImage;

    int m_maxTime = 60;
    public bool paused = false;

    public void InitTimer(int maxTime = 60)
    {
        m_maxTime = maxTime;

        if (clockImage != null)
        {
            clockImage.type = Image.Type.Filled;
            clockImage.fillMethod = Image.FillMethod.Radial360;
            clockImage.fillOrigin = (int)Image.Origin360.Top;

        }

        if (timeLeftText != null) 
        {
            timeLeftText.text = maxTime.ToString();
        }
    }


    public void UpdateTimer(int currentTime)
    {
        if (paused) 
        {
            return;
        }
           
        if (clockImage != null)
        {
            clockImage.fillAmount = (float)currentTime / (float)m_maxTime;
        }

        if (timeLeftText != null)
        {
            timeLeftText.text = currentTime.ToString();
        }
    }
}