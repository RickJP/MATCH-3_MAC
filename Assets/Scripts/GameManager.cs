using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


[RequireComponent(typeof(LevelGoal))]
public class GameManager : Singleton<GameManager>
{
    //    public int movesLeft = 3;
    //    public int scoreGoal = 10000;

    bool m_isReadyToBegin = false;
    bool m_isGameOver = false;
    bool m_isWinner = false;
    bool m_isReadyToReload = false;
    //bool m_isGameFinished = false;

    public bool IsGameOver { get { return m_isGameOver; } set { m_isGameOver = value; } }

    public Sprite winIcon;
    public Sprite loseIcon;
    public Sprite goalIcon;

    int activeScene;
    int sceneCount;
    int nextLevel = 0;

    Board m_board;
    LevelGoal m_levelGoal;
    //LevelGoalTimed m_levelGoalTimed;
    LevelGoalCollected m_levelGoalCollected;

    public LevelGoal levelGoal { get { return m_levelGoal; } }


    public override void Awake()
    {
        base.Awake();

        m_levelGoal = GetComponent<LevelGoal>();
        //m_levelGoalTimed = GetComponent<LevelGoalTimed>();
        m_levelGoalCollected = GetComponent<LevelGoalCollected>();

        m_board = GameObject.FindObjectOfType<Board>().GetComponent<Board>();

    }

    void Start()
    {

        if (UIManager.Instance != null)
        {
            if (UIManager.Instance.scoreMeter != null)
            {
                //print("Setup stars");
                UIManager.Instance.scoreMeter.SetupStars(m_levelGoal);
            }

            if (UIManager.Instance.levelNameText.text != null)
            {
                Scene scene = SceneManager.GetActiveScene();
                UIManager.Instance.levelNameText.text = scene.name;
            }
            if (m_levelGoalCollected != null)
            {

                UIManager.Instance.EnableCollectionGoalLayout(true);
                UIManager.Instance.SetupCollectionGoalLayout(m_levelGoalCollected.collectionGoals);
            }
            else
            {
                UIManager.Instance.EnableCollectionGoalLayout(false);   
            }

            bool useTimer = (m_levelGoal.levelCounter == LevelCounter.Timer);

            UIManager.Instance.EnableTimer(useTimer);
            UIManager.Instance.EnableMovesCounter(!useTimer);

        }

        int sceneCount = SceneManager.sceneCount;

        m_levelGoal.movesLeft++;
        UpdateMoves();

        StartCoroutine(ExecuteGameLoop());
    }


    public void UpdateMoves()
    {
        if (m_levelGoal.levelCounter == LevelCounter.Moves)
        {
            m_levelGoal.movesLeft--;

            if (UIManager.Instance != null && UIManager.Instance.movesLeftText != null)
            {
                UIManager.Instance.movesLeftText.text = m_levelGoal.movesLeft.ToString();
            }
        }
           
    }

    IEnumerator ExecuteGameLoop()
    {
        yield return StartCoroutine("StartGameRoutine");
        yield return StartCoroutine("PlayGameRoutine");

        yield return StartCoroutine("WaitForBoardRoutine", 0.5f);
        yield return StartCoroutine("EndGameRoutine");
    }


    public void BeginGame()
    {    
        m_isReadyToBegin = true;
    }

    IEnumerator StartGameRoutine()
    {


        if (UIManager.Instance != null)
        {
            if (UIManager.Instance.messageWindow != null)
            {
                UIManager.Instance.messageWindow.GetComponent<RectXFormMover>().MoveOn();
                UIManager.Instance.messageWindow.ShowMessage(goalIcon, "score goal\n" + m_levelGoal.scoreGoals[0].ToString(), "start");           
            
            }
        }



        while (!m_isReadyToBegin)
        {
            yield return null;
            yield return new WaitForSeconds(0.5f);
            m_isReadyToBegin = true;
        }
        if (UIManager.Instance != null && UIManager.Instance.screenFader != null)
        {
            UIManager.Instance.screenFader.FadeOff();
        }
        yield return new WaitForSeconds(0.5f);

        if (m_board != null)
        {
            m_board.SetupBoard();
        }
       
    }

    IEnumerator PlayGameRoutine()
    {

        if (m_levelGoal.levelCounter == LevelCounter.Timer)
        {
            m_levelGoal.StartCountdown();
        }

        while (!m_isGameOver)
        {
            m_isGameOver = m_levelGoal.IsGameOver();

            m_isWinner = m_levelGoal.IsWinner();

            yield return null;
        }
    }


    IEnumerator WaitForBoardRoutine(float delay = 0f)
    {

        if (m_levelGoal.levelCounter == LevelCounter.Timer && 
            UIManager.Instance != null && UIManager.Instance.timer != null)
        {
 
            UIManager.Instance.timer.FadeOff();
            UIManager.Instance.timer.paused = true;

        }


        if (m_board != null)
        {
            yield return new WaitForSeconds(m_board.swapTime);
            while (m_board.isRefilling)
            {
                yield return null;

            }
        }
        yield return new WaitForSeconds(delay);
    }




    IEnumerator EndGameRoutine()
    {
        m_isReadyToReload = false;

       
        if (m_isWinner)
        {
            if (UIManager.Instance != null && UIManager.Instance.messageWindow != null)
            {
                UIManager.Instance.messageWindow.GetComponent<RectXFormMover>().MoveOn();
                UIManager.Instance.messageWindow.ShowMessage(winIcon, "YOU WIN!", "OK");
            }   

            if (SoundManager.Instance != null)
            {
                SoundManager.Instance.PlayWinSound();
            }

        }
        else
        {
            if (UIManager.Instance != null && UIManager.Instance.messageWindow != null)
            {

                UIManager.Instance.messageWindow.GetComponent<RectXFormMover>().MoveOn();
                UIManager.Instance.messageWindow.ShowMessage(loseIcon, "YOU LOSE!", "OK");
            }

            if (SoundManager.Instance != null)
            {
                SoundManager.Instance.PlayWinSound();
            }
        }

        yield return new WaitForSeconds(1f);


        if (UIManager.Instance.screenFader != null && UIManager.Instance.screenFader != null)
        {
            UIManager.Instance.screenFader.FadeOn();
        }

        while (!m_isReadyToReload)
        {
            yield return null;
        }

        activeScene = SceneManager.GetActiveScene().buildIndex;
        sceneCount = SceneManager.sceneCountInBuildSettings;
        nextLevel = ChangeLevel(activeScene, 1);

//        print("ACTIVE SCENE: " + activeScene + "SCENE COUNT: " + sceneCount + "NEXT LEVEL: " + nextLevel);

        
        if (!m_isWinner)
        {
            SceneManager.LoadScene(0);
        }
        else if (nextLevel < sceneCount)
        {
            SceneManager.LoadScene(nextLevel);
        }
        else
        {
            //m_isGameFinished = true;

            if (UIManager.Instance != null && UIManager.Instance.messageWindow != null)
            {
                
                UIManager.Instance.endLevelMessageWindow.GetComponent<RectXFormMover>().MoveOn();
                UIManager.Instance.endLevelMessageWindow.ShowMessage(goalIcon, "You Finished the Game with a score of: " + ScoreManager.Instance.CurrentScore.ToString(), "Next Level");


                yield return new WaitForSeconds(1f);
                if (UIManager.Instance.screenFader != null)
                {
                    UIManager.Instance.screenFader.FadeOn();
                }

                SceneManager.LoadScene(0);

            }
        }
      
    }

    public int ChangeLevel(int activeScene, int amount)
    {
        return activeScene + amount;
    }

    public void ReloadScene()
    {
        m_isReadyToReload = true;
    }


    public void ScorePoints(GamePiece piece, int multiplier = 1, int bonus = 0)
    {
        if (ScoreManager.Instance != null)
        {
            ScoreManager.Instance.AddScore(piece.scoreValue * multiplier + bonus);

            m_levelGoal.UpdateScoreStars(ScoreManager.Instance.CurrentScore);


            if (UIManager.Instance != null && UIManager.Instance.scoreMeter != null)
            {
                UIManager.Instance.scoreMeter.UpdateScoreMeter(ScoreManager.Instance.CurrentScore,
                    m_levelGoal.scoreStars);
            }

        }

        if (SoundManager.Instance != null && piece.clearSound != null)
        {
            SoundManager.Instance.PlayClipAtPoint(piece.clearSound, Vector3.zero.normalized, SoundManager.Instance.fxVolume);
        }
    }


    public void AddTime(int timeValue)
    {
        if (m_levelGoal.levelCounter == LevelCounter.Timer)
        {
            m_levelGoal.AddTime(timeValue);
        }
    }

    public void UpdateCollectionGoals(GamePiece pieceToCheck)
    {
        if (m_levelGoalCollected != null)
        {
            m_levelGoalCollected.UpdateGoals(pieceToCheck);
        }
    }

}
