////////////////////////////////////////////////////////////////////
//DeRap: KeyCardSystemServerConfig\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 25 15:07:04 2021 : 'file' last modified on Wed Sep 15 02:39:59 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

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
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"KeyCardSystemServerConfig\4_World"};
			};
		};
	};
};
