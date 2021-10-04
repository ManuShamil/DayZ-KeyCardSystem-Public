
modded class Land_KlimaX_T3Door 
{
    //super.AddLoot( crate );
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
        int rndIndex;
		EntityAI weapon;
		EntityAI optic;

        rndIndex = Math.RandomInt(0,3);


        weapon = crate.GetInventory().CreateInInventory("Winchester70_Black");
        for (int i=0; i<3; i++) crate.GetInventory().CreateInInventory("Ammo_308WinTracer");
        if ( weapon )
        {
            weapon.GetInventory().CreateAttachment("HuntingOptic");
            weapon.GetInventory().CreateAttachment("GhillieAtt_Woodland");
        }
    }
};