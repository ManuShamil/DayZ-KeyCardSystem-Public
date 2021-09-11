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
