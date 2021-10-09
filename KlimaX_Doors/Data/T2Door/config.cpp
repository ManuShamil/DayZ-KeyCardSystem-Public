////////////////////////////////////////////////////////////////////
//DeRap: KlimaX_Doors\Data\T2Door\config.bin
//Produced from mikero's Dos Tools Dll version 8.23
//https://mikero.bytex.digital/Downloads
//'now' is Sat Oct 09 21:26:17 2021 : 'file' last modified on Thu Jan 01 05:30:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KlimaX_T2Door
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures_Signs"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_KlimaX_T2Door: HouseNoDestruct
	{
		scope = 1;
		model = "KlimaX_Doors\Data\T2Door\KlimaX_T2Door.p3d";
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 3.2;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen = "doorMetalSlideLargeOpen";
				soundClose = "doorMetalSlideLargeClose";
				soundLocked = "doorMetalSlideLargeRattle";
				soundOpenABit = "doorMetalSlideLargeOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
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
				class Melee
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
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
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
						class Melee
						{
							class Health
							{
								damage = 5;
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
								damage = 3;
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
		};
	};
};
