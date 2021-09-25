////////////////////////////////////////////////////////////////////
//DeRap: KeyCardSystemServer\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 25 15:07:02 2021 : 'file' last modified on Sun Sep 12 15:29:04 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KeyCardSystemServer
	{
		requiredAddons[] = {"KeyCardSystem"};
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
