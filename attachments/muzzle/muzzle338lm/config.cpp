class CfgPatches
{
	class kr_weapatt_muzzle338lm
	{
		units[]=
		{
			"kr_muzzle338lm_flashhider_mrad"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"kr_data",
			"kr_weaponpack_muzzles"
		};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle338lm_flashhider_mrad: kr_muzzle_t1_Base
	{
		scope=2;
		displayName="$STR_kr_weapons_attachments_muzzle338lm_flashhider_mrad";
		descriptionShort="$STR_kr_weapons_attachments_muzzle338lm_flashhider_mrad_dsc";
		model="\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\muzzle338lm_flashhider_mrad.p3d";
		weight=60;
		itemModelLength=0.068000004;
		inventorySlot[]=
		{
			"kr_muzzle338"
		};
		hiddenSelectionsTextures[]=
		{
			"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle.rvmat"
		};
		recoilModifier[]={0.93000001,0.93000001,0.85000002};
		swayModifier[]={1,1,1};
		dispersionModifier=-0.00060000003;
		noiseShootModifier=-0.15000001;
		barrelArmor=9000;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics=12;
		};
		class kr_description
		{
			kr_caliber="338lm";
			kr_tier=3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle_worn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle_badlydamage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle338lm\data\mrad_muzzle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
