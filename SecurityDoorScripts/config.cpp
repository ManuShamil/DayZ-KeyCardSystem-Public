class CfgPatches
{
	class SecurityDoorScripts
	{
		requiredAddons[] = {"SecurityDoorScriptsClient"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class SecurityDoorScripts
	{
		name = "SecurityDoorScripts";
		type = "mod";
		dependencies[] = {"World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"SecurityDoorScripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"SecurityDoorScripts\5_Mission"};
			};
		};
	};
};
