
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
                    weapon.GetInventory().CreateAttachment("M4_OEBttstck");
                    weapon.GetInventory().CreateAttachment("M4_Suppressor");
                    weapon.GetInventory().CreateAttachment("M4_PlasticHndgrd");

                    optic = weapon.GetInventory().CreateAttachment("ReflexOptic");
                    if ( optic ) optic.GetInventory().CreateAttachment("Battery9V");

                }
                for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");

                break;
            case 1:
                weapon = crate.GetInventory().CreateInInventory("SVD");
                if ( weapon )
                {
                    weapon.GetInventory().CreateAttachment("AK_Suppressor");
                    optic = weapon.GetInventory().CreateAttachment("PSO11Optic");
                    if ( optic ) optic.GetInventory().CreateAttachment("Battery9V");

                }
                for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_SVD_10Rnd");

                break;
        }
    }
};