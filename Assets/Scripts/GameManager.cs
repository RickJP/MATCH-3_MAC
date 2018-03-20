using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


[RequireComponent(typeof(LevelGoal))]
public class GameManager : Singleton<GameManager> {


//    public int movesLeft = 3;
//    public int scoreGoal = 10000;


    public ScreenFader screenFader;
    public Text levelNameText;
    public Text movesLeftText;

    public MessageWindow messageWindow;

    bool m_isReadyToBegin = false;
    bool m_isGameOver = false;
    bool m_isWinner = false;
    bool m_isReadyToReload = false;
    //bool m_isGameFinished = false;


	public bool IsGameOver
	{
		get {
			return m_isGameOver;
		}
		set {
			m_isGameOver = value;
		}
	}

    public Sprite winIcon;
    public Sprite loseIcon;
    public Sprite goalIcon;


    int activeScene;
    int sceneCount;
    int nextLevel = 0;

    Board m_board;
    LevelGoal m_levelGoal;

    public override void Awake()
    {
        base.Awake();

        m_levelGoal = GetComponent<LevelGoal>();

        m_board = GameObject.FindObjectOfType<Board>().GetComponent<Board>();
    }

	void Start ()
    {
        int sceneCount = SceneManager.sceneCount;



        Scene scene = SceneManager.GetActiveScene();
        if (levelNameText.text != null)
        {
            levelNameText.text = scene.name;
        }

        m_levelGoal.movesLeft++;
        UpdateMoves();

        StartCoroutine(ExecuteGameLoop());
	}
	

    public void UpdateMoves()
    {

        m_levelGoal.movesLeft--;

        if (movesLeftText != null)
        {
            movesLeftText.text = m_levelGoal.movesLeft.ToString();
        }
    }

    IEnumerator ExecuteGameLoop()
    {
        yield return StartCoroutine("StartGameRoutine");
        yield return StartCoroutine("PlayGameRoutine");

		yield return StartCoroutine ("WaitForBoardRoutine", 0.5f);
        yield return StartCoroutine("EndGameRoutine");
    }


    public void BeginGame()
    {    
        m_isReadyToBegin = true;
    }

    IEnumerator StartGameRoutine()
    {

        if (messageWindow != null)
        {
            messageWindow.GetComponent<RectXFormMover>().MoveOn();
            messageWindow.ShowMessage(goalIcon, "score goal\n" + m_levelGoal.scoreGoals[0].ToString(), "start");           
        }

        while (!m_isReadyToBegin)
        {
            yield return null;
            yield return new WaitForSeconds(0.5f);
            m_isReadyToBegin = true;
        }
        if (screenFader != null)
        {
            screenFader.FadeOff();
        }
        yield return new WaitForSeconds(0.5f);

        if (m_board != null)
        {
            m_board.SetupBoard();
        }
       
    }
    IEnumerator PlayGameRoutine()
    {
        while (!m_isGameOver)
        {

            m_isGameOver = m_levelGoal.IsGameOver();

            m_isWinner = m_levelGoal.IsWinner();

            yield return null;
        }
    }


	IEnumerator WaitForBoardRoutine(float delay = 0f) 
	{
		if (m_board != null) 
		{
			yield return new WaitForSeconds (m_board.swapTime);
			while (m_board.isRefilling) 
			{
				yield return null;

			}
		}
		yield return new WaitForSeconds (delay);
	}
		

    IEnumerator EndGameRoutine()
    {
        m_isReadyToReload = false;

       
        if (m_isWinner)
        {
         if (messageWindow != null)
            {
                messageWindow.GetComponent<RectXFormMover>().MoveOn();
                messageWindow.ShowMessage(winIcon, "YOU WON!", "OK");
            }   

            if (SoundManager.Instance != null)
            {
                SoundManager.Instance.PlayWinSound();
            }

        } else
        {
            messageWindow.GetComponent<RectXFormMover>().MoveOn();
            messageWindow.ShowMessage(loseIcon, "YOU LOST!", "OK");

            if (SoundManager.Instance != null)
            {
                SoundManager.Instance.PlayWinSound();
            }
        }

        yield return new WaitForSeconds(1f);
        if (screenFader != null)
        {
            screenFader.FadeOn();
        }

        while (!m_isReadyToReload)
        {
            yield return null;
        }

        activeScene = SceneManager.GetActiveScene().buildIndex;
        sceneCount = SceneManager.sceneCountInBuildSettings;
        nextLevel = ChangeLevel(activeScene, 1);

        //print("ACTIVE SCENE: " + activeScene + "SCENE COUNT: " + sceneCount + "NEXT LEVEL: " + nextLevel);

        
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

            if (messageWindow != null)
            {
                if (messageWindow != null)
                {
                    messageWindow.GetComponent<RectXFormMover>().MoveOn();
                    messageWindow.ShowMessage(goalIcon, "You Finished the Game with a score of: " + ScoreManager.Instance.CurrentScore.ToString(), "close");


                    yield return new WaitForSeconds(1f);
                    if (screenFader != null)
                    {
                        screenFader.FadeOn();
                    }

                    SceneManager.LoadScene(0);
                }
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
        if (ScoreManager.Instance != null )
        {
            ScoreManager.Instance.AddScore(piece.scoreValue * multiplier + bonus);
            m_levelGoal.UpdateScoreStars(ScoreManager.Instance.CurrentScore);
        }

        if (SoundManager.Instance != null && piece.clearSound != null)
        {
            SoundManager.Instance.PlayClipAtPoint(piece.clearSound, Vector3.zero.normalized, SoundManager.Instance.fxVolume);
        }
    }

}
