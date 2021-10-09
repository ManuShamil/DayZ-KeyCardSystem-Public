////////////////////////////////////////////////////////////////////
//DeRap: RedemptionKeyCards\config.bin
//Produced from mikero's Dos Tools Dll version 8.23
//https://mikero.bytex.digital/Downloads
//'now' is Sat Oct 09 21:26:15 2021 : 'file' last modified on Thu Jan 01 05:30:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class RedemptionKeyCards
	{
		units[] = {"RedemptionKeyCard_01","RedemptionKeyCard_02","RedemptionKeyCard_03","RedemptionKeyCard_04"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class RedemptionKeyCards
	{
		dir = "RedemptionKeyCards";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "RedemptionKeyCards";
		credits = "";
		author = "";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"RedemptionKeyCards/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class RedemptionKeyCard_Base: Inventory_Base
	{
		scope = 0;
		displayName = "Keycard";
		descriptionShort = "A keycard used to grant access to locked areas around the map.";
		model = "RedemptionKeyCards\Data\Keycard.p3d";
		hiddenSelections[] = {"camo"};
		rotationFlags = 16;
	};
	class RedemptionKeyCard_01: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 01";
		descriptionShort = "A keycard used to grant access to locked level 01 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\keycard01_co.paa"};
	};
	class RedemptionKeyCard_02: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 02";
		descriptionShort = "A keycard used to grant access to locked level 02 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\keycard02_co.paa"};
	};
	class RedemptionKeyCard_03: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 03";
		descriptionShort = "A keycard used to grant access to locked level 03 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\keycard03_co.paa"};
	};
	class RedemptionKeyCard_04: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 04";
		descriptionShort = "A keycard used to grant access to locked level 04 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\keycard04_co.paa"};
	};
};
