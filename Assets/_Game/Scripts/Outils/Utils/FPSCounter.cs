using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPSCounter : Singleton<FPSCounter>
{

    // how often should the number update
    public float updateInterval = 0.5f;

    private float fps;
    private float timeleft;
    private int frames = 0;
    private float accum = 0.0f;
    private GUIStyle textStyle = new GUIStyle();



    public void Init()
    {

    }


    private void Start()
    {
        timeleft = updateInterval;

        textStyle.fontStyle = FontStyle.Bold;
        textStyle.normal.textColor = Color.white;
    }


    private void Update()
    {
        timeleft -= Time.deltaTime;
        accum += Time.timeScale / Time.deltaTime;
        ++frames;

        // update GUI text and start new interval
        if (timeleft <= 0.0)
        {
            // display two fractional digits (f2 format)
            fps = (accum / frames);
            timeleft = updateInterval;
            accum = 0.0f;
            frames = 0;
        }
    }


    private void OnGUI()
    {
        // display the fps and round to 2 decimals
        GUI.Label(new Rect(Screen.width - 100, 10, 50, 25), fps.ToString("f1") + "FPS", textStyle);
    }

}
