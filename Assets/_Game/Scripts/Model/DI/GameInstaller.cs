using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class GameInstaller : MonoInstaller
{

    public sealed override void InstallBindings()
    {
        // base.InstallBindings();
        
        // this.Container.Bind<ViewLoading>().FromComponentInHierarchy().AsSingle().Lazy();
        // this.Container.Bind<ViewInfo>().FromComponentInHierarchy().AsSingle().Lazy();
        // this.Container.Bind<ViewSetting>().FromComponentInHierarchy().AsSingle().Lazy();
        // this.Container.Bind<ViewNone>().FromComponentInHierarchy().AsSingle().Lazy();

        this.Container.Bind<GameManager>().FromComponentInHierarchy().AsSingle().Lazy();
        this.Container.Bind<ViewManager>().FromComponentInHierarchy().AsSingle().Lazy();
        this.Container.Bind<ViewMenu>().FromComponentInHierarchy().AsSingle().Lazy();
        this.Container.Bind<ViewInGame>().FromComponentInHierarchy().AsSingle().Lazy();
        this.Container.Bind<ViewGameOver>().FromComponentInHierarchy().AsSingle().Lazy();
    }

}
