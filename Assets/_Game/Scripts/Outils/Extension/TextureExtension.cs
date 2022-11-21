
using UnityEngine;

public static class TextureExtension
{

    public static Texture2D ScaleTexture(this Texture2D source, int targetWidth, int targetHeight)
    {
        Texture2D result = new Texture2D(targetWidth, targetHeight, source.format, true);
        Color[] rpixels = result.GetPixels(0);
        float incX = (1.0f / (float)targetWidth);
        float incY = (1.0f / (float)targetHeight);

        for (int px = 0; px < rpixels.Length; px++)
        {
            var u = incX * ((float)px % targetWidth);
            var v = incY * ((float)Mathf.Floor(px / targetWidth));
            rpixels[px] = source.GetPixelBilinear(u, v);
        }

        result.SetPixels(rpixels, 0);
        result.Apply();
        return result;
    }

    
}
