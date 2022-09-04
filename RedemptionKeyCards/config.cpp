////////////////////////////////////////////////////////////////////
//DeRap: RedemptionKeyCards\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Sun Sep 04 16:22:54 2022 : 'file' last modified on Thu Jan 01 03:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class RedemptionKeyCards
	{
		units[] = {"RedemptionKeyCard_01","RedemptionKeyCard_02","RedemptionKeyCard_03","RedemptionKeyCard_04","RedemptionMilitaryCrate"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		weapons[] = {};
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
		author = "Hawkite";
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
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\KeyCard\keycard01_co.paa"};
	};
	class RedemptionKeyCard_02: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 02";
		descriptionShort = "A keycard used to grant access to locked level 02 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\KeyCard\keycard02_co.paa"};
	};
	class RedemptionKeyCard_03: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 03";
		descriptionShort = "A keycard used to grant access to locked level 03 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\KeyCard\keycard03_co.paa"};
	};
	class RedemptionKeyCard_04: RedemptionKeyCard_Base
	{
		scope = 2;
		displayName = "Keycard Level 04";
		descriptionShort = "A keycard used to grant access to locked level 04 areas around the map.";
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\KeyCard\keycard04_co.paa"};
	};
	class Container_Base;
	class HouseNoDestruct;
	class RedemptionMilitaryCrate_Base: Container_Base
	{
		scope = 0;
		displayName = "Military Crate";
		descriptionShort = "A military crate capable of holding a large amount of items.";
		canBeDigged = 0;
		hiddenSelections[] = {"camo"};
		model = "RedemptionKeyCards\Data\Crate.p3d";
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[] = {10,40};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	};
	class RedemptionMilitaryCrate: RedemptionMilitaryCrate_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RedemptionKeyCards\Data\Textures\Crate\crate_co.paa"};
	};
};
