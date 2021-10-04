
modded class Land_KlimaX_T3Door 
{
    //super.AddLoot( crate );
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
       int i;

        int rndIndex;
		EntityAI weapon;
		EntityAI optic;


        weapon = crate.GetInventory().CreateInInventory("Winchester70_Black");
        if ( weapon )
        {
            weapon.GetInventory().CreateAttachment("HuntingOptic");
            weapon.GetInventory().CreateAttachment("GhillieAtt_Woodland");
        }

        for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Ammo_308WinTracer");

        rndIndex = Math.RandomInt(0,2);
        switch( rndIndex )
        {
            case 0:
                weapon = crate.GetInventory().CreateInInventory("M4A1");
                if ( weapon )
                {
                    for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
                }
                break;
            case 1:
                break;
        }
    }
};