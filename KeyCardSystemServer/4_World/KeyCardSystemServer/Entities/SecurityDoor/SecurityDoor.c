modded class KeyCard_Door_Base {
    ref SecurityDoorPersistanceData m_persistanceData;
    ref PluginKeyCardSystemServer m_Plugin;

    protected SoundOnVehicle m_ClosingAlarm;
    protected bool m_IsClosing = false;

    void KeyCard_Door_Base() 
    {
        m_Plugin = PluginKeyCardSystemServer.Cast( GetPlugin( PluginKeyCardSystemServer ) );
    }

    void SetPersistanceData( ref SecurityDoorPersistanceData data ) 
    {
        m_persistanceData = data;

        /* Update door state */
        foreach( int index, bool state : m_persistanceData.m_DoorState ) 
            if (state == true)
                this.OpenDoor( index );

    }

    void UpdatePersistance() 
    {
        m_persistanceData.className = this.GetType();
        m_persistanceData.location = this.GetPosition();
        m_persistanceData.dir = this.GetDirection();

        foreach( int index, bool state : m_persistanceData.m_DoorState )
            m_persistanceData.m_DoorState[index] = IsDoorOpen( index );
    }

    ref SecurityDoorPersistanceData GetPersistanceData() 
    {
        return m_persistanceData;
    }


    void SetTimeTillAutoClose( int index, float time ) 
    {
        m_persistanceData.m_DoorTimers[index] = time;
    }

    float TimeTillAutoClose(int index ) 
    {
        return m_persistanceData.m_DoorTimers[index];
    }

    protected string GetCrateClassName()
    {
        return "";
    }

    float GetSumRewardChance(ref array< ref SecurityDoorRandomRewardConfig > rewards) {
        float sum = 0;
        foreach( ref SecurityDoorRandomRewardConfig reward : rewards ) {
            sum += reward.chance;
        }
        return sum;
    } 

    protected void AddLoot( EntityAI crate ) 
    {
        AddFixedLoots(crate);
        AddRandomLoots(crate);
    }

    void AddFixedLoots(EntityAI crate) {
        //add random rewards
        foreach( ref SecurityDoorRewardConfig reward : m_persistanceData.fixedRewards ) 
        {
            //add attachments
            EntityAI rewardObject = crate.GetInventory().CreateInInventory(reward.className);
            foreach( ref SecurityDoorRewardConfig attachment : reward.attachments ) 
            {
                EntityAI attachmentObject = rewardObject.GetInventory().CreateInInventory(attachment.className);
                foreach( ref SecurityDoorRewardConfig attachmentOfTheAttachment : attachment.attachments ) 
                {
                    attachmentObject.GetInventory().CreateInInventory(attachmentOfTheAttachment.className);
                }
            }
        }
    }

    void AddRandomLoots(EntityAI crate) {
        //add random rewards
        float totalRewardChance = GetSumRewardChance(m_persistanceData.randomRewards);
        int rewardRnd = Math.Floor(Math.RandomFloat(0.0, 1.0) * (totalRewardChance * 100));
        Print("RND " + rewardRnd);
        int rewardsCounter = 0;
        foreach( ref SecurityDoorRandomRewardConfig reward : m_persistanceData.randomRewards ) 
        {
            rewardsCounter += reward.chance * 100;
            if(rewardsCounter > rewardRnd)
            {
                //add attachments
                EntityAI rewardObject = crate.GetInventory().CreateInInventory(reward.className);
                int attachmentsCounter = 0;
                float totalAttachmentRewardChance = GetSumRewardChance(reward.attachments);
                int rndAttachment = Math.Floor(Math.RandomFloat(0.0, 1.0) * (totalAttachmentRewardChance * 100));
                foreach( ref SecurityDoorRandomRewardConfig attachment : reward.attachments ) 
                {
                    attachmentsCounter += attachment.chance * 100;
                    if(attachmentsCounter > rndAttachment) 
                    {
                        EntityAI attachmentObject = rewardObject.GetInventory().CreateInInventory(attachment.className);
                        
                        //add attachments of the attachment
                        int attachmentOfTheAttachmentCounter = 0;
                        float totalAttachmentOfTheAttachmentChance = GetSumRewardChance(attachment.attachments);
                        int rndAttachmentOfTheAttachment = Math.Floor(Math.RandomFloat(0.0, 1.0) * (totalAttachmentOfTheAttachmentChance * 100));
                        foreach( ref SecurityDoorRandomRewardConfig attachmentOfTheAttachment : attachment.attachments ) 
                        {
                            attachmentOfTheAttachmentCounter += attachmentOfTheAttachment.chance * 100;
                            if(attachmentOfTheAttachmentCounter > rndAttachmentOfTheAttachment) 
                            {
                                attachmentObject.GetInventory().CreateInInventory(attachmentOfTheAttachment.className);
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
    }

    protected void SpawnRewards()
    {

        /* Spawn crate */
        if( GetCrateClassName() == "")
            return;

        Object crateObject = m_Plugin.SpawnRewardCrate( GetCrateClassName(), m_persistanceData.GetCratePosition(), m_persistanceData.GetCrateOrientation() );
        EntityAI crate;

        if ( Class.CastTo( crate, crateObject) )
            AddLoot(crate);

    }

    protected void DeleteRewards()
    {
        vector cratePos = m_persistanceData.GetCratePosition();

        bool success = m_Plugin.DeleteRewardCrate( GetCrateClassName(), m_persistanceData.GetCratePosition());
    }

    override void Open( int index ) 
    {
        this.OpenDoor( index );
        m_persistanceData.SetIsOpen( index, true);

        SetTimeTillAutoClose( index, m_persistanceData.GetAutoCloseTime() * 1000 );

        if( m_ClosingAlarm )
        {
            GetGame().ObjectDelete(m_ClosingAlarm);
		    m_ClosingAlarm = NULL;
        }
        
        m_ClosingAlarm = PlaySound("KeyCard_DoorAlarm", 200, false);

        /* Spawn crate */
        SpawnRewards();
    }

    override void InitiateClose( int index )
    {
        float delay = m_persistanceData.GetCloseDelay();
        
        GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( Close, delay * 1000, false, index );

        m_ClosingAlarm = PlaySound("KeyCard_DoorAlarm", 200, false);
        m_IsClosing = true;
    }

    override void Close( int index )
    {

        this.CloseDoor( index );
        m_persistanceData.SetIsOpen( index, false);

        DeleteRewards();


        if( m_ClosingAlarm )
        {
            GetGame().ObjectDelete(m_ClosingAlarm);
		    m_ClosingAlarm = NULL;
        }

        m_IsClosing = false;
    }

    bool IsClosing()
    {
        return m_IsClosing;
    }
};