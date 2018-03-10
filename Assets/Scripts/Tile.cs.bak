using UnityEngine;
using System.Collections;

public enum TileType
{
    Normal,
    Obstacle,
    Breakable
}

[RequireComponent(typeof(SpriteRenderer))]
public class Tile : MonoBehaviour {

    public int xIndex, yIndex;

    public TileType tileType = TileType.Normal;

    Board m_board;

    SpriteRenderer m_spriteRenderer;

    public Color normalColor;

    public int breakableValue = 0;
    public Sprite[] breakableSprites;

	void Awake()
    {
        m_spriteRenderer = GetComponent<SpriteRenderer>();
	}
	

    public void Init(int x, int y, Board board)
    {
        xIndex = x;
        yIndex = y;
        m_board = board;

        if (tileType == TileType.Breakable)
        {
            if (breakableSprites[breakableValue] != null)
            {
                m_spriteRenderer.sprite = breakableSprites[breakableValue];
            }
        }      
    }

    private void OnMouseDown()
    {
        if (m_board != null)
        {
            m_board.ClickTile(this);
        }
    }
    private void OnMouseEnter()
    {
        if (m_board != null)
        {
            m_board.DragToTile(this);
        }
    }

    private void OnMouseUp()
    {
        if (m_board != null)
        {
            m_board.ReleaseTile();
        }
    }

    public void BreakTile()
    {
        if (tileType != TileType.Breakable)
        {
            return;
        }
        StartCoroutine(BreakTileRoutine());
    }

    IEnumerator BreakTileRoutine()
    {
        breakableValue = Mathf.Clamp(breakableValue--, 0, breakableValue);

        yield return new WaitForSeconds(0.25f);

        if (breakableValue == -1) { breakableValue = 0; }

        if (breakableSprites[breakableValue] != null)
        {
            m_spriteRenderer.sprite = breakableSprites[breakableValue];
        }
        if (breakableValue == 0)
        {
            tileType = TileType.Breakable;
            m_spriteRenderer.color = normalColor;
        }
    }
}
