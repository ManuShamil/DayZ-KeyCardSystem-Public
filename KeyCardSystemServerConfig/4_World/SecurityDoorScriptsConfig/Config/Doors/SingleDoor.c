/* ====================================================================================================================
*  Single Doors
*/


modded class Land_KlimaX_T1Door 
{
    /*  ==================================== 
    *   Global configs for every Double door
    */
    override string GetCrateClassName()
    {
        return "TortillaBag";
    }

    override void AddLoot( EntityAI crate )
    {
        super.AddLoot( crate );

        crate.GetInventory().CreateInInventory("AK74");
    }
};

modded class Land_KlimaX_T2Door 
{
    //super.AddLoot( crate ); /* Ignore global config */

    override void AddLoot( EntityAI crate )
    {
        crate.GetInventory().CreateInInventory("M4A1");
    }
};
modded class Land_KlimaX_T3Door 
{
    //super.AddLoot( crate );

    override void AddLoot( EntityAI crate )
    {
        crate.GetInventory().CreateInInventory("M4A1");
    }
};