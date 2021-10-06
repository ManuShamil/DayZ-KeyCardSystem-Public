class CfgPatches
{
	class KeyCardSystemServerConfig
	{
		requiredAddons[] = {"KeyCardSystemServer"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class KeyCardSystemServerConfig
	{
		name = "KeyCardSystemServerConfig";
		type = "mod";
		dependencies[] = {"World", "Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"KeyCardSystemServerConfig\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"KeyCardSystemServerConfig\5_Mission"};
			};
		};
	};
};
