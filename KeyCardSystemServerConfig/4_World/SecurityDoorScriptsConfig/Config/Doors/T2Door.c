modded class Land_KlimaX_T2Door 
{
    //super.AddLoot( crate ); /* Ignore global config */
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
        crate.GetInventory().CreateInInventory("M4A1");
    }
};