class CfgPatches
{
	class KeyCardSystem
	{
		requiredAddons[] = 
		{
			"KlimaX_Doors",
			"RedemptionKeyCards",
			"DZ_Characters"
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
		sound[] = {"KeyCardSystem\Assets\Sounds\VaultAlarm10sec",1,1,200};
	};
};