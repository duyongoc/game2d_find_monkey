using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class GridController : MonoBehaviour
{

    // inspector
    [Space(10)]
    [SerializeField] private GridLayoutGroup gridObject;
    [SerializeField] private GameObject tilePrefab;


    //
    public List<Tile> tileList = new List<Tile>();
    private int _totalKey;
    private int _size;



    #region UNITY
    private void Start()
    {

    }

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
        var sizeWidth = gridObject.GetComponent<RectTransform>().sizeDelta.x;

        // caculate the tile width, height with size
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

                tileList.Add(tile.GetComponent<Tile>());
            }
        }

        RefeshListTile();
    }


    public void RefeshListTile()
    {
        tileList.ForEach(x => x.RefeshTile());
    }



    public bool CheckGridResult()
    {
        var tileKey = tileList.Any(x => x.HasKey);
        return !tileKey;
    }


    public void SetupKeyForTheMatrix(int[] key)
    {
        _totalKey = key.Length;
        for (int i = 0; i < key.Length; i++)
        {
            var index = key[i];
            // print("key " + index);
            if (index > tileList.Count - 1)
                continue;

            tileList[index].SetKey(true);
        }
    }


    public void ShowListTileHasKey()
    {
        tileList.ForEach(x =>
        {
            if (x.HasKey) x.ShowTile();
        });
    }


    public void HideListTile()
    {
        tileList.ForEach(x => x.HideTile());
    }


    public void PlayAnimationWin()
    {
        tileList.ForEach(x => x.PlayAnimationWin());
    }

    public void PlayAnimationClose()
    {
        tileList.ForEach(x => x.PlayAnimationClose());
    }


    public int GetTileRemain()
    {
        return tileList.Where(x => x.HasKey).Count();
    }


    public int GetTileTotal()
    {
        return _totalKey;
    }


    private void ClearListTiles()
    {
        tileList.ForEach(x => { if (x != null) Destroy(x.gameObject); });
        tileList.Clear();
    }


    public void ResetData()
    {
        PlayAnimationClose();
    }


}
