modded class Land_KlimaX_T1Door 
{
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
        KeyCardLootSpawnControllerBase.GetInstance().T1Door( crate );
    }
};
