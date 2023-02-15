

using System;

public static class Define
{
    public const string KEY_SETTING = "Setting";
    public const string TEXT_INTRO = "Lets test your memory. \nFind the monkeys. \nBe aware! The time is counting down.";
}

public enum GameState
{
    Loading,
    Menu,
    InGame,
    GameOver,
    Setting,
}
