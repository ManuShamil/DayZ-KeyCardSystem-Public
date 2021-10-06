class KeyCardLootSpawnController : KeyCardLootSpawnControllerBase
{
    void T1Door( EntityAI crate )
    {
        KeyCardLootSpawnManager.GetInstance().T1Door( crate );
    }

    void T2Door( EntityAI crate )
    {
        KeyCardLootSpawnManager.GetInstance().T2Door( crate );
    }

    void T3Door( EntityAI crate )
    {
        MissionServer.Cast( GetGame().GetMission() ).T1DoorLootSpawnController( crate );
    }
}

