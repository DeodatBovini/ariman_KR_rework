class CfgPatches
{
	class kletka_kr_weapons_rifles_awm
	{
		units[]={};
		weapons[]=
		{
			"kr_awm_black",
			"kr_awm_green",
			"kr_awm_tan"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"kr_weapons_rifles_awm",
			"kr_data"
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
	class kr_awm_Base: BoltActionRifle_ExternalMagazine_Base
	{
		class Single: Mode_Single
		{	
			dispersion=0.00225;
		};		
	};	
};
