modded class ActionCloseDoors
{

    protected bool IsSecurityDoor(Object target) 
    {
        if ( !target ) 
			return false;

        KeyCard_Door_Base door;
        if ( Class.CastTo(door, target))
            return true;

        return false;
    }

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target)
            return false;

        if ( IsSecurityDoor(target.GetObject()) )
            return false;

        return super.ActionCondition( player, target, item);
	}
}
