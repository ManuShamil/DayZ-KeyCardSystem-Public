modded class Land_KlimaX_T1Door 
{
    /*  ==================================== 
    *   Global configs for every Double door
    */
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }
    override void AddLoot( EntityAI crate )
    {
        super.AddLoot( crate );

        crate.GetInventory().CreateInInventory("AK74");
    }
};
