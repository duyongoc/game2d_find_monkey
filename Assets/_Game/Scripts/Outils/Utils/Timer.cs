using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// this class is used for counting time do something
public class Timer
{

    // private
    private float _timer = 0f;
    private float _duration = 0f;
    private bool _isPause = false;


    // properties
    public float GetTimer { get => _timer; }
    public float GetDuration { get => _duration; }
    public bool IsDone { get { return _timer == 0; } }
    public bool Pause { get => _isPause; set => _isPause = value; }



    public void SetDuration(float time)
    {
        _timer = time;
        _duration = time;
    }


    public void UpdateTime(float deltaTime)
    {
        if (_timer == 0 || _isPause)
            return;

        _timer -= deltaTime;
        if (_timer < 0)
        {
            _timer = 0;
        }
    }


    public void Reset()
    {
        _timer = _duration;
    }

}