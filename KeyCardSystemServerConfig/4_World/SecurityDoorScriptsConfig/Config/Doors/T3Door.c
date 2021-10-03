
modded class Land_KlimaX_T3Door 
{
    //super.AddLoot( crate );
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
        crate.GetInventory().CreateInInventory("M4A1");
    }
};