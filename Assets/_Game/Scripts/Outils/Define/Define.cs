

using System;

public static class Define
{
    public const string KEY_SETTING = "Setting";
}


public enum EGameState
{
    Loading,
    Menu,
    InGame,
    GameOver,
}


public enum ESceneName
{
    SplashScene,
    GameScene,
    BattleScene
}


public enum EView
{
    Splash,
    Loading,
    Login,
    Privacy,
    Profile,
    Lobby,
    Quest,
    Character,
    Equipment,
    Formation,
    BloodUnion,
    SkillSynthesis,
    Arena,
    ArenaConfirm,
}


public enum SFX
{
    // music
    MUSIC_BACKGROUND,

    // sfx
    SFX_CLICK,
}