class CfgPatches
{
	class Kletka_kr_weapons_firearms_svd
	{
		units[]={};
		weapons[]=
		{
			"kr_SVDS",
			"kr_SVD",
			"kr_SVU"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"kr_weapons_firearms_svd",
			"kr_data"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class Rifle_Base;
	class kr_SVD_Base: Rifle_Base
	{
	};
	class kr_SVDS: kr_SVD_Base
	{		
		class SemiAuto: Mode_SemiAuto
		{
			dispersion=0.0024999999;
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;					
				};
			};
		};
	};
	class kr_SVD: kr_SVD_Base
	{		
		class SemiAuto: Mode_SemiAuto
		{		
			dispersion=0.0026999999;			
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;	
					
				};
			};
		};		
	};
	class kr_SVU: kr_SVD_Base
	{		
		class SemiAuto: Mode_SemiAuto
		{		
			dispersion=0.0026999999;
			
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;	
					
				};
			};
		};		
	};	
};
