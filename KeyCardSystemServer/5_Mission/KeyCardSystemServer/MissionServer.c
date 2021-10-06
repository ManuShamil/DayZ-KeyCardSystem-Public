modded class MissionServer 
{
    override void OnMissionStart()
	{
        super.OnMissionStart();

        PluginKeyCardSystemServer.Cast( GetPlugin( PluginKeyCardSystemServer ) ).SpawnItems();
    }
}