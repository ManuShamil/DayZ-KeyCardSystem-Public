class RedemptionMilitaryCrate_Base: Container_Base
{   
	override bool CanPutInCargo( EntityAI parent )
    {
		return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
	{
		return false;	
    } 

    override bool IsDeployable() 
    {
        return false;
    }    
    
    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);        
    }
    
    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);        
    }
};