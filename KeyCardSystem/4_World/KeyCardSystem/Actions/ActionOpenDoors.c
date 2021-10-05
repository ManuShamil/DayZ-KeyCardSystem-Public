modded class ActionOpenDoors
{
    protected bool m_IsSecurityDoor;
    protected ItemBase m_ItemInHands;
    
    override string GetText()
	{
        if ( m_IsSecurityDoor )
		    return "Swipe Card";
        else
            return "#open";
            
	}

    protected bool IsSecurityDoor(Object target) 
    {
        if ( !target ) 
			return false;

        KeyCard_Door_Base door;
        if ( Class.CastTo(door, target))
            return true;

        return false;
    }

    protected bool CanAuthorize(Object target, KeyCard_ParentBase card) 
    {
        if ( !target ) return false;

        string doorType = target.GetType();

        return card.CanAuthorizeDoor( doorType );

    }

    protected ItemBase GetItemInHands( PlayerBase player) {
        return player.GetItemInHands();
    }

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target)
            return false;

        m_IsSecurityDoor = IsSecurityDoor( target.GetObject() );

        if( m_IsSecurityDoor ) 
        {
            ItemBase inHandItem = GetItemInHands( player );

            if( !inHandItem)
                return false;

            KeyCard_ParentBase keyCard;

            if (inHandItem && !Class.CastTo( keyCard, inHandItem))
                return false;

            if( CanAuthorize( target.GetObject(), keyCard ) ) 
                return super.ActionCondition( player, target, item );
            else
                return false;

        }


        return super.ActionCondition( player, target, item );
	}

    override void OnStartServer( ActionData action_data )
	{
        if ( m_IsSecurityDoor ) 
        {
            m_ItemInHands = action_data.m_Player.GetItemInHands();
            if ( !m_ItemInHands.IsInherited( KeyCard_ParentBase ) )
                return;
            
            m_ItemInHands.Delete();

            KeyCard_Door_Base door;

            if (Class.CastTo( door, action_data.m_Target.GetObject())) 
            {

                int doorIndex = door.GetDoorIndex(action_data.m_Target.GetComponentIndex());
                if ( doorIndex != -1 )
                    door.Open( doorIndex );

                return;
            }
            
        }

        super.OnStartServer( action_data );

	}

    override void OnEndServer( ActionData action_data )
	{
        if ( !m_IsSecurityDoor ) 
        {
            super.OnEndServer( action_data );
            return;
        }

		m_NoisePar = new NoiseParams();
		m_NoisePar.LoadFromPath("CfgVehicles SurvivorBase NoiseActionDefault");
        
		NoiseSystem noise = GetGame().GetNoiseSystem();
		if ( noise && action_data.m_Player)
			noise.AddNoisePos(action_data.m_Player, action_data.m_Target.GetObject().GetPosition(), m_NoisePar, 1000);
	}
	
}