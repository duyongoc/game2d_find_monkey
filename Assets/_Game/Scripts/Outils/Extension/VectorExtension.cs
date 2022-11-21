using UnityEngine;


public static class VectorExtension
{

    public static Vector2 SetX(this Vector2 vector, float x)
    {
        return new Vector2(x, vector.y);
    }


    public static Vector2 SetY(this Vector2 vector, float y)
    {
        return new Vector2(vector.x, y);
    }


    public static Vector2 AddX(this Vector2 vector, float x)
    {
        return new Vector2(vector.x + x, vector.y);
    }


    public static Vector2 AddY(this Vector2 vector, float y)
    {
        return new Vector2(vector.x, vector.y + y);
    }

}
