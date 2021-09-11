class CfgPatches
{
	class KeyCardSystem
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
	class KeyCardSystem
	{
		name = "KeyCardSystem";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"KeyCardSystem\4_World"};
			};
		};
	};
};
class CfgSounds
{
	class KeyCard_DoorAlarm
	{
		sound[] = {"KeyCardSystem\Assets\Sounds\VaultAlarm10sec",4,1,200};
	};
};
