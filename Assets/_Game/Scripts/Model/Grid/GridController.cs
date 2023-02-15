using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class GridController : MonoBehaviour
{


    [Header("[Setting]")]
    [SerializeField] private GridLayoutGroup gridObject;
    [SerializeField] private GameObject tilePrefab;
    [SerializeField] private List<Tile> cacheTiles = new List<Tile>();

    // [private]
    private int _totalKey;
    private int _size;



    #region UNITY
    // private void Start()
    // {
    // }

    // private void Update()
    // {
    // }
    #endregion



    public void CreateMatrix(int size)
    {
        _size = size;
        ClearListTiles();
        CreateMatrixWithSize();
    }


    private void CreateMatrixWithSize()
    {
        // caculate the tile width, height with size
        var sizeWidth = gridObject.GetComponent<RectTransform>().sizeDelta.x;
        var tileSize = sizeWidth / _size;
        var padding = tileSize / (_size * _size);

        // caculate the real tile width, height after subtract the space
        var cellSize = tileSize - (padding * 2);
        var spacingSize = padding * 2;

        // apply for the grid
        gridObject.constraintCount = _size;
        gridObject.cellSize = new Vector2(cellSize, cellSize);
        gridObject.spacing = new Vector2(spacingSize, spacingSize);

        int index = 0;
        for (int i = 0; i < _size; i++)
        {
            for (int j = 0; j < _size; j++)
            {
                var tile = Instantiate(tilePrefab, gridObject.transform);
                tile.gameObject.name = $"tile_{index++}";
                cacheTiles.Add(tile.GetComponent<Tile>());
            }
        }

        LoadTiles();
    }


    public void LoadTiles()
    {
        cacheTiles.ForEach(x => x.Load());
    }


    public bool CheckResult()
    {
        var tileKey = cacheTiles.Any(x => x.HasKey);
        return !tileKey;
    }


    public void SetupKeyForTheMatrix(int[] key)
    {
        _totalKey = key.Length;
        for (int i = 0; i < key.Length; i++)
        {
            var index = key[i];
            if (index > cacheTiles.Count - 1)
                continue;

            cacheTiles[index].SetKey(true);
        }
    }


    public void ShowTiles()
    {
        cacheTiles.ForEach(x => { if (x.HasKey) x.ShowTile(); });
    }


    public void HideTilesByRotateY()
    {
        cacheTiles.ForEach(x => x.HideByRotateY());
    }


    public void PlayAnimationWin()
    {
        cacheTiles.ForEach(x => x.PlayAnimationWin());
    }

    public void PlayAnimationClose()
    {
        cacheTiles.ForEach(x => x.PlayAnimationClose());
    }


    public int GetTilesRemain()
    {
        return cacheTiles.Where(x => x.HasKey).Count();
    }


    public int GetTilesTotal()
    {
        return _totalKey;
    }


    private void ClearListTiles()
    {
        cacheTiles.ForEach(x => { if (x != null) Destroy(x.gameObject); });
        cacheTiles.Clear();
    }


    public void Reset()
    {
        PlayAnimationClose();
    }


}
