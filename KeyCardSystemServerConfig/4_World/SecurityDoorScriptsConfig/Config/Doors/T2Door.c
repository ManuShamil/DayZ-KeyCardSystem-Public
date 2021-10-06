modded class Land_KlimaX_T2Door 
{
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
        KeyCardLootSpawnControllerBase.GetInstance().T2Door( crate );
    }
};