
modded class Land_KlimaX_T3Door 
{
    ref LootSpawnControllerBase m_LootSpawnController;

    void Land_KlimaX_T3Door()
    {
        m_LootSpawnController = new LootSpawnControllerBase;
    }

    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
       m_LootSpawnController.T3Door( crate );

    }
};