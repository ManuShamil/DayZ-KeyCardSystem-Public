class CfgPatches
{
	class SecurityDoorScriptsClient
	{
		requiredAddons[] = 
		{
			"KlimaX_Doors",
			"RedemptionKeyCards"
		};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class SecurityDoorScriptsClient
	{
		name = "SecurityDoorScriptsClient";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"SecurityDoorScriptsClient\4_World"};
			};
		};
	};
};
class CfgSounds
{
	class KeyCard_DoorAlarm
	{
		sound[] = {"SecurityDoorScriptsClient\Assets\Sounds\VaultAlarm10sec",4,1,200};
	};
};
