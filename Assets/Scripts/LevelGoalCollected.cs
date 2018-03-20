using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelGoalCollected : LevelGoal {

    public override bool IsGameOver()
    {
        return false;
    }

    public override bool IsWinner()
    {
        return false;
    }
}
