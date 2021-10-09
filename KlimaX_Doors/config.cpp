////////////////////////////////////////////////////////////////////
//DeRap: KlimaX_Doors\config.bin
//Produced from mikero's Dos Tools Dll version 8.23
//https://mikero.bytex.digital/Downloads
//'now' is Sat Oct 09 21:26:17 2021 : 'file' last modified on Thu Jan 01 05:30:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KlimaX_Doors
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.25;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class KlimaX_Doors
	{
		dir = "KlimaX_Doors";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "KlimaX_Doors";
		credits = "";
		author = "";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"KlimaX_Doors/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"KlimaX_Doors/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"KlimaX_Doors/Scripts/5_Mission"};
			};
		};
	};
};
