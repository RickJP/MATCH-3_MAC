using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class BoardDeadlock : MonoBehaviour
{
	List<GamePiece> GetRowColumnList(GamePiece[,] allpieces, int x, int y, int listLength = 3, bool checkRow = true)
	{
		int width = allpieces.GetLength (0);
		int height = allpieces.GetLength (1);

		List<GamePiece> piecesList = new List<GamePiece> ();

		for (int i = 0; i < listLength; i++) {
			if (checkRow) {
				if (x + i < width && y < height && allpieces[x + i, y] != null) 
				{
					piecesList.Add (allpieces [x + i, y]);
				}
			} 
			else 
			{
				if (x < width && y + i < height && allpieces[x, y + i] != null) 
				{
					piecesList.Add (allpieces[x, y + i]);
				}
			}
		}
		return piecesList; 
	}

	List<GamePiece> GetMinimumMatches(List<GamePiece> gamePieces, int minForMatch = 2)
	{
		List<GamePiece> matches = new List<GamePiece> ();

		var groups = gamePieces.GroupBy (n => n.matchValue);

		foreach (var grp in groups) 
		{
			if (grp.Count () >= minForMatch && grp.Key != MatchValue.None) 
			{
				matches = grp.ToList ();
			}
		}
		return matches;
	}


	List<GamePiece> GetNeighbors(GamePiece[,] allPieces, int x, int y)
	{
		int width = allPieces.GetLength (0);
		int height = allPieces.GetLength (1);

		List<GamePiece> neighbors = new List<GamePiece> ();

		Vector2[] searchDirections = new Vector2[4] {
			new Vector2 (-1f, 0f),
			new Vector2 (1f, 0f),
			new Vector2 (0f, 1f),
			new Vector2 (0f, -1f),
		};
		foreach (Vector2 dir in searchDirections) {
			if (x + (int)dir.x >= 0 && (int)x + dir.x < width && y + (int)dir.y >= 0 && y + (int)dir.y < height) {
				if (allPieces [x + (int)dir.x, y + (int)dir.y] != null) {
					if (!neighbors.Contains (allPieces [x + (int)dir.x, y + (int)dir.y])) {
						neighbors.Add (allPieces [x + (int)dir.x, y + (int)dir.y]);
					}
				}
			}
		}
		return neighbors;
	}	

	bool HasMoveAt(GamePiece[,] allPieces, int x, int y, int listLength = 3, bool checkRow = true) 
	{
		List<GamePiece> pieces = GetRowColumnList (allPieces, x, y, listLength, checkRow);

		List<GamePiece> matches = GetMinimumMatches (pieces, listLength - 1);

		GamePiece unmatchedPiece = null;

		if (pieces != null && matches != null) 
		{
			if (pieces.Count == listLength && matches.Count == listLength - 1) 
			{
				unmatchedPiece = pieces.Except (matches).FirstOrDefault ();
			}
			if (unmatchedPiece != null) 
			{
				List<GamePiece> neighbors = GetNeighbors (allPieces, unmatchedPiece.xIndex, unmatchedPiece.yIndex);
				neighbors = neighbors.Except (matches).ToList ();
				neighbors = neighbors.FindAll (n => n.matchValue == matches [0].matchValue);

				matches = matches.Union(neighbors).ToList ();
			}

			if (matches.Count >= listLength)
			{
//				string rowColStr = (checkRow) ? " row" : " column ";
//				Debug.Log("======= AVALIABLE MOVE ======================");
//				Debug.Log("Move " + matches[0].matchValue + " piece to " + unmatchedPiece.xIndex + "," + unmatchedPiece.yIndex + " to form matching " + rowColStr);
				return true;
			}
		}
		return false;
	}


	public bool IsDeadlocked(GamePiece[,] allPieces, int listLength = 3) 
	{
		int width = allPieces.GetLength (0);
		int height = allPieces.GetLength (1);

		bool isDeadlocked = true;

		for (int i = 0; i < width; i++) 
		{
			for (int j = 0; j < height; j++) 
			{
				if (HasMoveAt(allPieces, i, j, listLength, true) || HasMoveAt (allPieces, i, j, listLength, false))
				{
					isDeadlocked = false;
				}
			}			
		}
		if (isDeadlocked) 
		{
			Debug.Log ("DEADLOCKED");
		}

		return isDeadlocked;
	}
}

