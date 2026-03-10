class CfgPatches
{
	class kletka_kr_weaponpack_ammunition_bullets
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"kr_data",
			"kr_weaponpack_ammunition_bullets"
		};
		ammo[]=
		{
			"Bullet_HollowPointTech_Base",
			"kr_Bullet_9x19_Base",
			"Bullet_9x19_quakemaker",
			"Bullet_9x19_rip",
			"Bullet_HollowPointTech",
			"Bullet_9x19_pso_gz",
			"Bullet_9x19_gt",
			"Bullet_9x19_7n21",
			"Bullet_9x19_7n31",
			"Bullet_9x19_ap_63",
			"kr_Bullet_9x18_Base",
			"Bullet_9x18_sp7_gz",
			"Bullet_9x18_ppt_gz",
			"Bullet_9x18_pso_gz",
			"Bullet_9x18_pst_gz",
			"Bullet_9x18_pmm_gz",
			"Bullet_9x18_pbm_gz",
			"kr_Bullet_762x25_Base",
			"Bullet_762x25_PT_gz",
			"Bullet_762x25_PST_gz",
			"Bullet_762x25_FMJ43",
			"Bullet_762x25_AKBS",
			"Bullet_762x25_HP",
			"kr_Bullet_545x39_Base",
			"Bullet_545x39_BS",
			"Bullet_545x39_BT",
			"Bullet_545x39_FMJ",
			"Bullet_545x39_PRS",
			"Bullet_545x39_PS",
			"Bullet_545x39_T",
			"Bullet_545x39_US",
			"Bullet_545x39_HP",
			"kr_Bullet_556x45_Base",
			"Bullet_556x45_FMJ",
			"Bullet_556x45_m855",
			"Bullet_556x45_m855a1",
			"Bullet_556x45_m856",
			"Bullet_556x45_m995",
			"Bullet_556x45_warmageddon",
			"kr_Bullet_762x39_Base",
			"Bullet_762x39_bp",
			"Bullet_762x39_fmj",
			"Bullet_762x39_mai_ap",
			"Bullet_762x39_pp",
			"Bullet_762x39_ps",
			"Bullet_762x39_t45m",
			"Bullet_762x39_us",
			"Bullet_762x39_HP",
			"kr_Bullet_762x51_Base",
			"Bullet_762x51_bpz_fmj",
			"Bullet_762x51_m61",
			"Bullet_762x51_m80",
			"Bullet_762x51_m993",
			"Bullet_762x51_tpz_sp",
			"Bullet_762x51_ultra_nosler",
			"kr_Bullet_762x54_Base",
			"Bullet_762x54r_bs",
			"Bullet_762x54r_bthp",
			"Bullet_762x54r_fmj",
			"Bullet_762x54r_lps",
			"Bullet_762x54r_ps",
			"Bullet_762x54r_snb",
			"Bullet_762x54r_t46m",
			"kr_Bullet_9x39_Base",
			"Bullet_9x39_bp",
			"Bullet_9x39_pab9",
			"Bullet_9x39_sp5",
			"Bullet_9x39_sp6",
			"Bullet_9x39_HP",
			"kr_Bullet_366TKM_Base",
			"Bullet_366TKM_custom_ap",
			"Bullet_366TKM_EKO",
			"Bullet_366TKM_FMJ",
			"Bullet_366TKM_Geksa",
			"kr_Bullet_127x55_Base",
			"Bullet_127x55_PS12",
			"Bullet_127x55_PS12A",
			"Bullet_127x55_PS12B",
			"Bullet_127x55_PS12HP",
			"kr_Bullet_338LM_Base",
			"Bullet_338LM_ap",
			"Bullet_338LM_upz",
			"Bullet_338LM_fmj",
			"Bullet_338LM_tac_x",
			"kr_Bullet_408CheyTac_Base",
			"Bullet_408CheyTac",
			"kr_Bullet_50BMG_Base",
			"Bullet_50BMG",
			"Bullet_50BMG_AP",
			"Bullet_50BMG_T",
			"kr_Bullet_12x76_Base",
			"Bullet_12x76_AP20",
			"Bullet_12x76_lead_slug",
			"Bullet_12x76_FTX_custom",
			"Bullet_12x76_RIP",
			"Bullet_12x76_Grizzly40",
			"Bullet_12x76_buckshot_5",
			"Bullet_12x76_buckshot_7",
			"Bullet_12x76_buckshot_8",
			"Bullet_23x75_shrapnel_10",
			"Bullet_23x75_shrapnel_25",
			"Bullet_23x75_barrikade"
		};
	};
};
class kr_Gunplay_Base;
class CfgAmmo
{
	class Bullet_Base;
	class Shotgun_Base;
	class Bullet_HollowPointTech_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=350;
		typicalSpeed=380;
		airFriction=-0.0023000001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
		weight=0.0083999997;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			defaultDamageOverrideString="{{0.95,1.0}}";
			class Health
			{
				damage=1;
			};
			class Blood
			{
				damage=1;
			};
			class Shock
			{
				damage=1;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_9x19_Base: Bullet_Base
	{
	};
	class Bullet_9x19_rip: kr_Bullet_9x19_Base
	{		
		unconRefillModifier=6;
		dispersion=0.0020000001;		
		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint=1;
			hollowPointMultiplier=8.5;
		};
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.92699999,1},
				{0.861,0.80000001},
				{0.81900001,0.5},
				{0.79799998,0.1}
			};
			defaultDamageOverrideString="{{0.927, 1.0}, {0.861, 0.8}, {0.819, 0.5}, {0.798, 0.1}}";
			class Health
			{
				damage=10;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
				damageOverride[]=
				{
					{0.98000002,1},
					{0.94,0.5},
					{0.77999997,0.1}
				};
				damageOverrideString="{{0.98, 1.0}, {0.94, 0.5}, {0.78, 0.1}}";
			};
		};
	};
	class kr_Bullet_9x18_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_9x18";
		hit=5.5;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=300;
		typicalSpeed=345;
		airFriction=-0.0015;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=150;
		damageBarrelDestroyed=150;
		weight=0.0060000001;
		hitAnimation=0;
		unconRefillModifier=6;
		kr_caliber="9x18";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=35;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=35;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_762x25_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_762x25";
		hit=7.5;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=300;
		typicalSpeed=345;
		airFriction=-0.0015;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=150;
		damageBarrelDestroyed=150;
		weight=0.0060000001;
		hitAnimation=0;
		unconRefillModifier=6;
		kr_caliber="7.62x25";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=35;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=35;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_545x39_Base: Bullet_Base
	{		
	};
	class Bullet_545x39_HP: kr_Bullet_545x39_Base
	{
		
		unconRefillModifier=6;
		dispersion=0.0044999998;
		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint=1;
			hollowPointMultiplier=10;
		};
		class DamageApplied
		{			
			class Health
			{
				damage=12;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=25;
				damageOverride[]=
				{
					{0.97000003,1},
					{0.69999999,0.1}
				};
				damageOverrideString="{{0.97, 1.0},{0.7, 0.1}}";
			};
		};
	};	
	class kr_Bullet_556x45_Base: Bullet_Base
	{
		scope=0;
		spawnPileType="";
		round="";
		casing="FxCartridge_kr_556x45";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=850;
		typicalSpeed=1000;
		airFriction=-0.00125;
		caliber=1;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=0.0099999998;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.0040000002;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		kr_caliber="5.56x45";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.87,1}
			};
			defaultDamageOverrideString="{{0.87,1.0}}";
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_762x39_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_762x39";
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=640;
		typicalSpeed=740;
		airFriction=-0.0015;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.0080000004;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		kr_caliber="7.62x39";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			defaultDamageOverrideString="{{0.95,1.0}}";
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
				damageOverride[]=
				{
					{0.80000001,1}
				};
				damageOverrideString="{{0.8,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_762x51_Base: Bullet_Base {};
	class Bullet_762x51_bpz_fmj: kr_Bullet_762x51_Base
	{
		class DamageApplied
		{			
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=50;
				damageOverride[]=
				{
					{0.80000001,1},
					{0.40000001,0.1}
				};
				damageOverrideString="{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};
	class Bullet_762x51_m61: kr_Bullet_762x51_Base
	{		
		class DamageApplied
		{			
			class Health
			{
				armorDamage=5;
				damage=200;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=50;
				damageOverride[]=
				{
					{0.80000001,1},
					{0.40000001,0.1}
				};
				damageOverrideString="{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};
	class Bullet_762x51_m80: kr_Bullet_762x51_Base
	{
		
		class DamageApplied
		{			
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=190;
			};
			class Shock
			{
				damage=80;
				damageOverride[]=
				{
					{0.80000001,1},
					{0.40000001,0.1}
				};
				damageOverrideString="{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};
	class Bullet_762x51_m993: kr_Bullet_762x51_Base
	{
		
		class DamageApplied
		{			
			class Health
			{
				armorDamage=11;
				damage=190;
			};
			class Blood
			{
				damage=150;
			};
			class Shock
			{
				damage=75;
				damageOverride[]=
				{
					{0.94999999,1},
					{0.34999999,0.1}
				};
				damageOverrideString="{{0.95, 1.0},{0.35, 0.1}}";
			};
		};
	};
	class kr_Bullet_762x54_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_762x54";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=785;
		typicalSpeed=865;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.012;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=2.75;
		kr_caliber="7.62x54";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94,1}
			};
			defaultDamageOverrideString="{{0.94,1.0}}";
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
				damageOverride[]=
				{
					{0.86000001,1}
				};
				damageOverrideString="{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_9x39_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_9x39";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.89999998;
		deflecting=20;
		typicalSpeed=280;
		airFriction=-0.0015;
		initSpeed=280;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.017000001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		kr_caliber="9x39";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=75;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
				damageOverride[]=
				{
					{0.89999998,1}
				};
				damageOverrideString="{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_366TKM_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_366TKM";
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=640;
		typicalSpeed=740;
		airFriction=-0.0015;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.0080000004;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		kr_caliber=".366TKM";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			defaultDamageOverrideString="{{0.95,1.0}}";
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
				damageOverride[]=
				{
					{0.80000001,1}
				};
				damageOverrideString="{{0.8,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_127x55_Base: Bullet_Base
	{		
	};
	
	class kr_Bullet_338LM_Base: Bullet_Base	{};
	class Bullet_338LM_ap: kr_Bullet_338LM_Base
	{
		class DamageApplied
		{			
			class Health
			{
				armorDamage=9;
				damage=300;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=200;
				damageOverride[]=
				{
					{0.89999998,1}
				};
				damageOverrideString="{{0.9,1.0}}";
			};
		};
	};
	class Bullet_338LM_upz: kr_Bullet_338LM_Base
	{
		
		class DamageApplied
		{			
			class Health
			{
				damage=230;
			};
			class Blood
			{
				damage=300;
			};
			class Shock
			{
				damage=210;
				damageOverride[]=
				{
					{0.89999998,1}
				};
				damageOverrideString="{{0.9,1.0}}";
			};
		};
	};
	class Bullet_338LM_fmj: kr_Bullet_338LM_Base
	{
		
		class DamageApplied
		{			
			class Health
			{
				damage=230;
			};
			class Blood
			{
				damage=400;
			};
			class Shock
			{
				damage=190;
				damageOverride[]=
				{
					{0.89999998,1}
				};
				damageOverrideString="{{0.9,1.0}}";
			};
		};
	};
	class kr_Bullet_408CheyTac_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		casing="FxCartridge_kr_408CheyTac";
		hit=20;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=785;
		typicalSpeed=865;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.012;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=2.75;
		kr_caliber=".408";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94,1}
			};
			defaultDamageOverrideString="{{0.94,1.0}}";
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
				damageOverride[]=
				{
					{0.86000001,1}
				};
				damageOverrideString="{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_50BMG_Base: Bullet_Base
	{
		scope=0;
		round="FxRound_50BMG";
		spawnPileType="kr_Ammo_50BMG";
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=785;
		typicalSpeed=865;
		airFriction=-0.001;
		caliber=12;
		deflecting=3;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.0089999996;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=0.75;
		kr_caliber=".50BMG";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94,1}
			};
			defaultDamageOverrideString="{{0.94,1.0}}";
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
				damageOverride[]=
				{
					{0.86000001,1}
				};
				damageOverrideString="{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class kr_Bullet_12x76_Base: Bullet_Base
	{
		scope=0;
		round="";
		spawnPileType="";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=380;
		typicalSpeed=420;
		airFriction=-0.0049999999;
		caliber=1;
		deflecting=0;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight=0.028000001;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=1.75;
		kr_caliber="12x70";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_23x75_shrapnel_25: Shotgun_Base
	{
		scope=1;
		round="FxRound_23x75_shrapnel_25";
		spawnPileType="kr_Ammo_23x75_shrapnel_25";
		initSpeed=375;
		typicalSpeed=375;
		airFriction=-0.0077999998;
		caliber=0.5;
		deflecting=0;
		projectilesCount=8;
		damageBarrel=1800;
		damageBarrelDestroyed=1800;
		weight=0.0049999999;
		impactBehaviour=0;
		hitAnimation=0;
		dispersion=0.015;
		proxyShape="KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_25_SingleRound.p3d";
		kr_caliber="23x75";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.90399998,1},
				{0.824,0.80000001},
				{0.75999999,0.5},
				{0.704,0.1}
			};
			defaultDamageOverrideString="{{0.904, 1.0}, {0.824, 0.8}, {0.760, 0.5}, {0.704, 0.1}}";
			class Health
			{
				armorDamage=0.5;
				damage=90;
			};
			class Blood
			{
				damage=30;
			};
			class Shock
			{
				damage=19;
				damageOverride[]=
				{
					{0.89999998,1}
				};
				damageOverrideString="{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength=5;
			type="shot";
		};
	};
	class Bullet_23x75_barrikade: Bullet_Base
	{
		scope=1;
		round="FxRound_23x75_barrikade";
		spawnPileType="kr_Ammo_23x75_barrikade";
		initSpeed=420;
		typicalSpeed=420;
		airFriction=-0.0015;
		caliber=0.5;
		deflecting=0;
		damageBarrel=2000;
		damageBarrelDestroyed=2000;
		weight=0.0083999997;
		impactBehaviour=0;
		hitAnimation=0;
		dispersion=-0.00050000002;
		proxyShape="KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_barrikade_SingleRound.p3d";
		kr_caliber="23x75";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.80000001;
			defaultDamageOverride[]=
			{
				{0.94999999,1},
				{0.89999998,0.80000001},
				{0.86000001,0.5},
				{0.79799998,0.1}
			};
			defaultDamageOverrideString="{{0.950, 1.0}, {0.900, 0.8}, {0.860, 0.5}, {0.798, 0.1}}";
			class Health
			{
				armorDamage=3;
				damage=250;
			};
			class Blood
			{
				damage=400;
			};
			class Shock
			{
				damage=120;
				damageOverride[]=
				{
					{0.89999998,1},
					{0.74000001,0.1}
				};
				damageOverrideString="{{0.9, 1.0}, {0.740, 0.1}}";
			};
		};
		class NoiseHit
		{
			strength=20;
			type="shot";
		};
	};
};
