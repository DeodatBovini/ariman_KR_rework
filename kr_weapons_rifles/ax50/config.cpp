class CfgPatches
{
	class kletka_kr_weapons_rifles_ax50
	{
		units[]={};
		weapons[]=
		{
			"kr_AX50"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"kr_data",
			"kr_weapon_sounds_sounds"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class kr_AX50_Base: BoltActionRifle_ExternalMagazine_Base
	{		
		class Single: Mode_Single
		{
			dispersion=0.0026000001;
		};		
	};
	class kr_AX50: kr_AX50_Base
	{		
	};
};
