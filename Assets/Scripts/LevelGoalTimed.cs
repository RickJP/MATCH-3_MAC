using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelGoalTimed : LevelGoal {


   // public Timer timer;
   // int m_maxTime;


    public override void Start()
    {
        levelCounter = LevelCounter.Timer;
        base.Start();

    }

    public override bool IsWinner()
    {
        if (ScoreManager.Instance != null) 
        {
            return (ScoreManager.Instance.CurrentScore >= scoreGoals[0]);    
        }
        return false;
    }

    public override bool IsGameOver()
    {
        int maxScore = scoreGoals[scoreGoals.Length - 1];

        if (ScoreManager.Instance.CurrentScore >= maxScore)
        {
            return true;
        }

        return (timeLeft <= 0);
    }

}
