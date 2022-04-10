using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer
{

    //= private
    private float timer = 0f;
    private float duration = 0f;
    private bool isPause = false;
    // private bool isDone = true;


    //= properties
    public float GetTimer { get => timer; }
    public float GetDuration { get => duration; }
    public bool IsDone { get { return timer == 0; } }
    public bool Pause { get => isPause; set => isPause = value; }


    public void SetDuration(float time)
    {
        timer = time;
        duration = time;
        // isDone = false;
    }

    public void UpdateTime(float deltaTime)
    {
        if (timer == 0 || isPause)
            return;

        timer -= deltaTime;
        if (timer < 0)
        {
            timer = 0;
        }
    }

    public void Reset()
    {
        timer = duration;
        // isDone = false;
    }


}
