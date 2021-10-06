
modded class Land_KlimaX_T3Door 
{

    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
       LootSpawnControllerBase.GetInstance().T3Door( crate );
    }
};