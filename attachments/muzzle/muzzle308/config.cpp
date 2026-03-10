class CfgPatches
{
	class kletka_kr_weapatt_muzzle308
	{
		units[]=
		{
			"kr_muzzle308_flashhider_hk_prolonged",
			"kr_muzzle308_flashhider_armanent_X3",
			"kr_muzzle308_flashhider_fortis_red",
			"kr_muzzle308_flashhider_m11_severe_duty",
			"kr_muzzle308_flashhider_kac_qdc_fsk",
			"kr_muzzle308_flashhider_keeno_arms_shrewd",
			"kr_muzzle308_flashhider_odin_works_atlas_7",
			"kr_muzzle308_flashhider_kac_qdc_mbk",
			"kr_muzzle308_flashhider_surefire_warden",
			"kr_muzzle308_suppressor_sig_SRD762Ti",
			"kr_muzzle308_suppressor_sig_srd762qd",
			"kr_muzzle308_suppressor_kac_prs_qdc"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"kr_data",
			"kr_weapatt_muzzle308",
			"kr_weaponpack_muzzles"
		};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;
	class kr_muzzle308_flashhider_hk_prolonged: kr_muzzle_t1_Base
	{
	};
	class kr_muzzle308_flashhider_armanent_X3: kr_muzzle_t1_Base
	{		
	};
	class kr_muzzle308_flashhider_fortis_red: kr_muzzle_t2_Base
	{		
	};
	class kr_muzzle308_flashhider_m11_severe_duty: kr_muzzle_t2_Base
	{
	};
	class kr_muzzle308_flashhider_keeno_arms_shrewd: kr_muzzle_t3_Base
	{
	};
	class kr_muzzle308_flashhider_kac_qdc_mbk: kr_muzzle_t4_Base
	{		
	};
	class kr_muzzle308_flashhider_surefire_warden: kr_muzzle_t4_Base
	{
		dispersionModifier=-0.0009;			
	};
	class kr_muzzle308_suppressor_sig_SRD762Ti: kr_suppressor_t1_Base
	{		
	};
	class kr_muzzle308_suppressor_sig_srd762qd: kr_suppressor_t2_Base
	{	
	};
	class kr_muzzle308_suppressor_kac_prs_qdc: kr_suppressor_t3_Base
	{
	};
};
