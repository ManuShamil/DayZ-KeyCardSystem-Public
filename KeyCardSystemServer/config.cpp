class CfgPatches
{
	class KeyCardSystemServer
	{
		requiredAddons[] = {"SecurityDoorScriptsClient"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class KeyCardSystemServer
	{
		name = "KeyCardSystemServer";
		type = "mod";
		dependencies[] = {"World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"KeyCardSystemServer\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"KeyCardSystemServer\5_Mission"};
			};
		};
	};
};
