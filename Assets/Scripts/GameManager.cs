using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager> {


    public int movesLeft = 3;
    public int scoreGoal = 10000;
    public ScreenFader screenFader;
    public Text levelNameText;
    public Text movesLeftText;

    public MessageWindow messageWindow;

    bool m_isReadyToBegin = false;
    bool m_isGameOver = false;
    bool m_isWinner = false;
    bool m_isReadyToReload = false;

    public Sprite winIcon;
    public Sprite loseIcon;
    public Sprite goalIcon;

    Board m_board;

	void Start ()
    {
        m_board = GameObject.FindObjectOfType<Board>().GetComponent<Board>();

        Scene scene = SceneManager.GetActiveScene();
        if (levelNameText.text != null)
        {
            levelNameText.text = scene.name;
        }

        UpdateMoves();

        StartCoroutine(ExecuteGameLoop());
	}
	

    public void UpdateMoves()
    {
        if (movesLeftText != null)
        {
            movesLeftText.text = movesLeft.ToString();
        }
    }

    IEnumerator ExecuteGameLoop()
    {
        yield return StartCoroutine("StartGameRoutine");
        yield return StartCoroutine("PlayGameRoutine");
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
            messageWindow.ShowMessage(goalIcon, "score goal\n" + scoreGoal.ToString(), "start");           
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

            if (ScoreManager.Instance != null)
            {
                if (ScoreManager.Instance.CurrentScore >= scoreGoal)
                {
                    m_isGameOver = true;
                    m_isWinner = true;
                }
            } 

            if (movesLeft == 0)
            {
                m_isGameOver = true;
                m_isWinner = false;
            }

            yield return null;
        }
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
        } else
        {
            messageWindow.GetComponent<RectXFormMover>().MoveOn();
            messageWindow.ShowMessage(loseIcon, "YOU LOST!", "OK");
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

        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void ReloadScene()
    {
        m_isReadyToReload = true;
    }

}
