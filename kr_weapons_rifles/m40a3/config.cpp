class CfgPatches
{
	class kletka_kr_weapons_rifles_kr_m40a5
	{
		units[]={};
		weapons[]=
		{
			"kr_m40a5"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"kr_weapons_rifles_kr_m40a5",
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
	class kr_m40a5_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class kr_m40a5: kr_m40a5_Base
	{		
		class Single: Mode_Single
		{
			dispersion=0.00205;
		};
	};
};