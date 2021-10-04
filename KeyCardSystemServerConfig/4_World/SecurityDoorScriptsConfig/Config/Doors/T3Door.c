
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
		EntityAI obj;
		EntityAI attachment;

        //! Weapons
        obj = crate.GetInventory().CreateInInventory("Winchester70_Black");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("HuntingOptic");
            obj.GetInventory().CreateAttachment("GhillieAtt_Woodland");
        }

        for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Ammo_308WinTracer");

        rndIndex = Math.RandomInt(0,2);
        switch( rndIndex )
        {
            case 0:
                obj = crate.GetInventory().CreateInInventory("M4A1");
                if ( obj )
                {
                    obj.GetInventory().CreateAttachment("M4_OEBttstck");
                    obj.GetInventory().CreateAttachment("M4_Suppressor");
                    obj.GetInventory().CreateAttachment("M4_PlasticHndgrd");

                    attachment = obj.GetInventory().CreateAttachment("ReflexOptic");
                    if ( attachment ) attachment.GetInventory().CreateAttachment("Battery9V");

                }
                for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");

                break;
            case 1:
                obj = crate.GetInventory().CreateInInventory("SVD");
                if ( obj )
                {
                    obj.GetInventory().CreateAttachment("AK_Suppressor");
                    obj.GetInventory().CreateAttachment("GhillieAtt_Woodland");

                    attachment = obj.GetInventory().CreateAttachment("PSO11Optic");
                    if ( attachment ) attachment.GetInventory().CreateAttachment("Battery9V");

                }
                for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_SVD_10Rnd");

                break;
        }

        //! Food
        const ref array<string> foodItems = { "BakedBeansCan", "TacticalBaconCan", "PeachesCan", "TunaCan" };
        int foodItemsListCount = foodItems.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string foodName = foodItems.Get( Math.RandomInt( 0, foodItemsListCount ) )
            crate.GetInventory().CreateInInventory( foodName );
        }

    }
};