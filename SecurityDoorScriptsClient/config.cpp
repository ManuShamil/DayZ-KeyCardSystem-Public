class CfgPatches
{
	class SecurityDoorScriptsClient
	{
		requiredAddons[] = {"SecurityDoorMod"};
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
