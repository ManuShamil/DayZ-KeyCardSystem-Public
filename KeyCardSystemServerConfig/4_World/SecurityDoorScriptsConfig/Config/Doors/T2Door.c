modded class Land_KlimaX_T2Door 
{
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
            
            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Ammo_308WinTracer");
        }


        obj = crate.GetInventory().CreateInInventory("M4A1");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("M4_OEBttstck");
            obj.GetInventory().CreateAttachment("M4_Suppressor");
            obj.GetInventory().CreateAttachment("M4_PlasticHndgrd");
            obj.GetInventory().CreateAttachment("GhillieAtt_Woodland");

            attachment = obj.GetInventory().CreateAttachment("ReflexOptic");
            if ( attachment ) attachment.GetInventory().CreateAttachment("Battery9V");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
        }



        obj = crate.GetInventory().CreateInInventory("SVD");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("AK_Suppressor");
            obj.GetInventory().CreateAttachment("GhillieAtt_Woodland");

            attachment = obj.GetInventory().CreateAttachment("PSO11Optic");
            if ( attachment ) attachment.GetInventory().CreateAttachment("Battery9V");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
        }


        obj = crate.GetInventory().CreateInInventory("UMP45");
        if ( obj )
        {
            obj.GetInventory().CreateAttachment("PistolSuppressor");
            obj.GetInventory().CreateAttachment("GhillieAtt_Woodland");

            attachment = obj.GetInventory().CreateAttachment("M4_T3NRDSOptic");
            if ( attachment ) attachment.GetInventory().CreateAttachment("Battery9V");

            for (i=0; i<Math.RandomInt(1,4); i++) crate.GetInventory().CreateInInventory("Mag_UMP_25Rnd");
        }



        //! Food
        int foodItemsListCount = KEYCARD_FOOD_DRINKS.Count();

        for (i=0; i<Math.RandomInt(10,20); i++) 
        {
            string foodName = KEYCARD_FOOD_DRINKS.Get( Math.RandomInt( 0, foodItemsListCount ) );
            crate.GetInventory().CreateInInventory( foodName );
        }

        //! Backpacks
        int backpacksListCount = KEYCARD_BACKPACKS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string backPackName = KEYCARD_BACKPACKS.Get( Math.RandomInt( 0, backpacksListCount ) );
            crate.GetInventory().CreateInInventory( backPackName );
        }

        //! Vests
        int vestsListCount = KEYCARD_VESTS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string vestName = KEYCARD_VESTS.Get( Math.RandomInt( 0, vestsListCount ) );
            crate.GetInventory().CreateInInventory( vestName );
        }

        //! Shirts
        int shirtsListCount = KEYCARD_SHIRTS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string shirtName = KEYCARD_SHIRTS.Get( Math.RandomInt( 0, shirtsListCount ) );
            crate.GetInventory().CreateInInventory( shirtName );
        }

        //! Pants
        int pantsListCount = KEYCARD_PANTS.Count();

        for (i=0; i<Math.RandomInt(1,4); i++) 
        {
            string pantName = KEYCARD_PANTS.Get( Math.RandomInt( 0, pantsListCount ) );
            crate.GetInventory().CreateInInventory( pantName );
        }

        //! Other
        int otherItemsList = KEYCARD_OTHERITEMS.Count();

        for (i=0; i<otherItemsList; i++) 
        {
            string otherName = KEYCARD_OTHERITEMS.Get( i );

            //! 50% chance
            if ( Math.RandomInt(0,2) == 1 ) crate.GetInventory().CreateInInventory( otherName );
        }
    }
};