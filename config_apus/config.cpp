////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.66
//Sun Nov 08 12:51:26 2015 : Source 'file' date Sun Nov 08 12:51:26 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Taliban_Fighters : config.bin{
class CfgPatches
{
	class Taliban_fighters
	{
		units[] = {"TBan_Warlord","Afghan_Civilian6NH","Afghan_Civilian6","Afghan_Civilian5","Afghan_Civilian4","Afghan_Civilian3","Afghan_Civilian2","Afghan_Civilian1","Afghan_Civilian3NH","Afghan_Civilian2NH","Afghan_Civilian1NH","Tban_O_Offroad_01_F","TBan_Fighter6NH","TBan_Fighter6","TBan_Fighter5","TBan_Fighter4","TBan_Fighter3NH","TBan_Fighter2NH","TBan_Fighter1NH","TBan_Fighter3","TBan_Fighter2","TBan_Fighter1","TBan_Recruit6","TBan_Recruit6NH","TBan_Recruit5","TBan_Recruit4","TBan_Recruit3NH","TBan_Recruit3","TBan_Recruit2NH","TBan_Recruit2","TBan_Recruit1","TBan_Recruit1NH","TBan_chef","TBan_Anfuehrer","TBan_Truppfuehrer","TBan_Schuetze","TBan_Grenadier","TBan_RPG","TBan_AA","TBan_Medic","TBan_MGPKM","TBan_MGPKP","TBan_Muni","TBan_Pionier","TBan_Sniper","TBan_unarmed","TBan_Besatzung"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"A3_Characters_F","A3_Data_F","A3_Soft_F","rhs_weapons"};
	};
};
class CfgVehicleClasses
{
	class TBan
	{
		displayName = "Taliban";
	};
	class TBanGSG
	{
		displayName = "TalibanGSG";
	};
	class AFGCIV
	{
		displayName = "Afghan Civilians";
	};
};
class CfgFactionClasses
{
	class AFGCIV
	{
		displayName = "Afghan Civilians";
		flag = "\Taliban_fighters\data\Flags\flag_afghanistan_co.paa";
		icon = "\Taliban_fighters\data\cfgfactionclasses_afgciv.paa";
		priority = 1;
		side = 3;
	};
	class Tban
	{
		displayName = "Taliban";
		flag = "\Taliban_Fighters\data\Aggressor\flag_taliban_co.paa";
		icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
		priority = 1;
		side = 0;
	};
	class TbanGSG
	{
		displayName = "TalibanGSG";
		flag = "\Taliban_Fighters\data\Aggressor\flag_taliban_co.paa";
		icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
		priority = 1;
		side = 0;
	};
};
class CfgGroups
{
	class East
	{
		class Taliban
		{
			name = "Taliban";
			class Infantry
			{
				name = "Taliban Infanterie";
				class Trupp
				{
					faction = "TbanGSG";
					name = "Taliban Trupp";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TBan_Truppfuehrer";
					};
					class Unit1: Unit0
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "TBan_MGPKM";
					};
					class Unit2: Unit1
					{
						position[] = {10,-5,0};
						vehicle = "TBan_Muni";
					};
					class Unit3: Unit1
					{
						position[] = {15,-5,0};
						vehicle = "TBan_Schuetze";
					};
					class Unit4: Unit1
					{
						position[] = {20,-5,0};
						vehicle = "TBan_RPG";
					};
					class Unit5: Unit1
					{
						position[] = {25,-5,0};
						vehicle = "TBan_Anfuehrer";
					};
					class Unit6: Unit1
					{
						position[] = {30,-5,0};
						vehicle = "TBan_Medic";
					};
					class Unit7: Unit1
					{
						position[] = {35,-5,0};
						vehicle = "TBan_Pionier";
					};
				};
				class TbATTrupp
				{
					faction = "TbanGSG";
					name = "AT-Trupp";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TBan_RPG";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TBan_Grenadier";
					};
				};
				class TbFireteam
				{
					faction = "TbanGSG";
					name = "Feuerteam";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TBan_Truppfuehrer";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TBan_Grenadier";
					};
					class Unit2: Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "TBan_MGPKM";
					};
					class Unit3: Unit1
					{
						position[] = {10,-5,0};
						vehicle = "TBan_RPG";
					};
				};
				class TbWache
				{
					faction = "TbanGSG";
					name = "Wache";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TBan_Schuetze";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TBan_Grenadier";
					};
				};
				class TbAAteam
				{
					faction = "TbanGSG";
					name = "Flugabwehrteam";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TBan_Truppfuehrer";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TBan_AA";
					};
					class Unit2: Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "TBan_AA";
					};
					class Unit3: Unit1
					{
						position[] = {10,-5,0};
						vehicle = "TBan_Schuetze";
					};
				};
				class TbSniper
				{
					faction = "TbanGSG";
					name = "Sniperteam";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TBan_Sniper";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TBan_Schuetze";
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_Base;
	class rhs_sidor: B_AssaultPack_Base
	{
		dlc = "RHS_AFRF";
		scope = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_sidor";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_sidor_ca.paa";
		author = "RHS";
		displayName = "Sidor";
		hiddenSelectionsTextures[] = {};
		maximumLoad = 160;
		mass = 20;
	};
	class rhs_sidorAA: rhs_sidor
	{
		scope = 1;
		displayName = "SidorAA";
		class TransportMagazines
		{
			class _GSG_AA
			{
				magazine = "rhs_mag_9k38_rocket";
				count = 1;
			};
		};
	};
	class rhs_sidorMedic: rhs_sidor
	{
		scope = 1;
		displayName = "SidorMedic";
		class TransportItems
		{
			class _GSG_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _GSG_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class B_TacticalPack_Base;
	class IODBackpack: B_TacticalPack_Base
	{
		scope = 1;
		displayName = "IODBack";
		class TransportItems
		{
			class _GSG_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _GSG_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _GSG_Claymore
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _GSG_DemoCharge
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _GSG_IEDUrbanSmall
			{
				magazine = "IEDUrbanSmall_Remote_Mag";
				count = 1;
			};
		};
	};	
	class O_Soldier_base_F;
	class TBan_Fighter1: O_Soldier_base_F
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Leader";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 70;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessO_gry"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01";
		modelSides[] = {3};
		uniformClass = "U_Afghan01";
	};
	class TBan_Fighter1NH: O_Soldier_base_F
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Leader (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 70;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessO_gry"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan01NH";
	};
	class TBan_Fighter2: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 1";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_02";
		modelSides[] = {3};
		uniformClass = "U_Afghan02";
	};
	class TBan_Fighter2NH: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 1 (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_02NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan02";
	};
	class TBan_Fighter3: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 2";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03";
		modelSides[] = {3};
		uniformClass = "U_Afghan03";
	};
	class TBan_Fighter3NH: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 2";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan03NH";
	};
	class TBan_Fighter4: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter4";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 3";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 50;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessO_gry"};
		model = "\Taliban_Fighters\Uniforms\Afghan_04";
		modelSides[] = {3};
		uniformClass = "U_Afghan04";
	};
	class TBan_Fighter5: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter5";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 4";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 50;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_gry"};
		model = "\Taliban_Fighters\Uniforms\Afghan_05";
		modelSides[] = {3};
		uniformClass = "U_Afghan05";
	};
	class TBan_Fighter6: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter6";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 5";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 50;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_06";
		modelSides[] = {3};
		uniformClass = "U_Afghan06";
	};
	class TBan_Fighter6NH: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter6";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Fighter 5 (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 50;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_06NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan06NH";
	};
	class TBan_Warlord: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Warlord";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 80;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03";
		modelSides[] = {3};
		uniformClass = "U_Afghan03";
	};
	class TBan_Recruit: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 1";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 30;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01";
		modelSides[] = {3};
		uniformClass = "U_Afghan01";
	};
	class TBan_Recruit1NH: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 1 (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 30;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan01NH";
	};
	class TBan_Recruit2: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 2";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 30;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_02";
		modelSides[] = {3};
		uniformClass = "U_Afghan02";
	};
	class TBan_Recruit2NH: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 2 (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 20;
		backpack = "";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_02NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan02NH";
	};
	class TBan_Recruit3: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 3";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 30;
		backpack = "rhs_sidor";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03";
		modelSides[] = {3};
		uniformClass = "U_Afghan03";
	};
	class TBan_Recruit3NH: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 3 (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 25;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan03NH";
	};
	class TBan_Recruit4: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter4";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 4";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 35;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_04";
		modelSides[] = {3};
		uniformClass = "U_Afghan04";
	};
	class TBan_Recruit5: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter5";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 5";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 25;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_05";
		modelSides[] = {3};
		uniformClass = "U_Afghan05";
	};
	class TBan_Recruit6: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter6";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 6";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 30;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_06";
		modelSides[] = {3};
		uniformClass = "U_Afghan06";
	};
	class TBan_Recruit6NH: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "TBan_Fighter6";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Recruit 6 (No Hat)";
		faction = "Tban";
		vehicleClass = "Men";
		detectSkill = 30;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Uniforms\Afghan_06NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan06NH";
	};
	class Afghan_civilian1: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_civilian1";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Village Leader";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 70;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_01";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan01";
	};
	class Afghan_civilian1NH: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_civilian1";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Village Leader (No Hat)";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 70;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_01NH";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan01NH";
	};
	class Afghan_Civilian2: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_Civilian2";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 1";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_02";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan02";
	};
	class Afghan_Civilian2NH: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_Civilian2";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 1 (No Hat)";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_02NH";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan02NH";
	};
	class Afghan_civilian3: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_civilian3";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 2";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_03";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan03";
	};
	class Afghan_civilian3NH: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_civilian3";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 2 (No Hat)";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_03NH";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan03NH";
	};
	class Afghan_Civilian4: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_Civilian4";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 3";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_04";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan04";
	};
	class Afghan_Civilian5: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_Civilian5";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 4";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_05";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan05";
	};
	class Afghan_Civilian6: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_Civilian6";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 5";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_06";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan06";
	};
	class Afghan_Civilian6NH: Afghan_civilian1
	{
		nameSound = "veh_infantry_SF_s";
		author = "EricJ";
		_generalMacro = "Afghan_Civilian6";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Afghan Civilian 5 (No Hat)";
		faction = "AFGCIV";
		vehicleClass = "Men";
		detectSkill = 55;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		model = "\Taliban_fighters\Uniforms\Afghan_06NH";
		modelSides[] = {3};
		headgearProbability = 0;
		uniformClass = "U_Afghan06NH";
	};
	class B_G_Offroad_01_armed_F;
	class Tban_O_Offroad_01_F: B_G_Offroad_01_armed_F
	{
		dlc = "u100";
		scope = 2;
		side = 0;
		Displayname = "Taliban Technical";
		faction = "Tban";
		forceInGarage = 1;
		crew = "TBan_Schuetze";
		author = "EricJ";
		class TransportWeapons
		{
			class _xx_ej_akm
			{
				weapon = "rhs_weap_akm";
				count = 2;
			};
			class _xx_ej_RPG
			{
				weapon = "rhs_weap_rpg7";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_akm_mag
			{
				magazine = "rhs_30Rnd_762x39mm";
				count = 16;
			};
			class _xx_akms_mag
			{
				magazine = "rhs_30Rnd_545x39_AK";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 16;
			};
			class _xx_RPG7_F
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 4;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_PIFRPG
			{
				backpack = "rhs_rpg_empty";
				count = 2;
			};
			class _xx_B_FieldPack_PIF
			{
				backpack = "rhs_sidor";
				count = 4;
			};
		};
	};
	class TBan_chef: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Boss";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 80;
		icon = "iconManOfficer";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pya","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_pya","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03";
		modelSides[] = {3};
		uniformClass = "U_Afghan03";
	};
	class TBan_Anfuehrer: O_Soldier_base_F
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Anführer";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 70;
		icon = "iconManLeader";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_plummag_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01";
		modelSides[] = {3};
		uniformClass = "U_Afghan01";
	};
	class TBan_Truppfuehrer: O_Soldier_base_F
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Truppführer";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 70;
		icon = "iconManLeader";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_plummag_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan01NH";
	};
	class TBan_Schuetze: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Schütze";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_02";
		modelSides[] = {3};
		uniformClass = "U_Afghan02";
	};
	class TBan_Grenadier: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Grenadier";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VG40OP_red","rhs_VG40OP_red","rhs_VG40OP_white","rhs_VG40OP_white"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VG40OP_red","rhs_VG40OP_red","rhs_VG40OP_white","rhs_VG40OP_white"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_02NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan02";
	};
	class TBan_RPG: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_RPG";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban AT-Schütze";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 60;
		icon = "iconManAT";
		backpack = "rhs_rpg";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_rpg7","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rpg7","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_rpg7_PG7VL_mag"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_rpg7_PG7VL_mag"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03";
		modelSides[] = {3};
		uniformClass = "U_Afghan03";
	};
	class TBan_AA: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_RPG";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban AA-Schütze";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 60;
		icon = "iconManAT";
		backpack = "rhs_sidorAA";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_igla","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_igla","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9k38_rocket"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9k38_rocket"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan03NH";
	};
	class TBan_Medic: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Medic";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		attendant = 1;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Sanitäter";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 50;
		icon = "iconManMedic";
		picture = "pictureHeal";
		backpack = "rhs_sidorMedic";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_04";
		modelSides[] = {3};
		uniformClass = "U_Afghan04";
	};
	class TBan_MGPKM: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_MGPKM";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban MG PKM";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 50;
		icon = "iconManMG";
		backpack = "rhs_sidorMG";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_100Rnd_762x54mmR","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_100Rnd_762x54mmR","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_05";
		modelSides[] = {3};
		uniformClass = "U_Afghan05";
	};
	class TBan_MGPKP: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_MGPKP";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban MG PKP";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 50;
		icon = "iconManMG";
		backpack = "rhs_sidorMG";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkp","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_pkp","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_100Rnd_762x54mmR","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_100Rnd_762x54mmR","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_06";
		modelSides[] = {3};
		uniformClass = "U_Afghan06";
	};
	class TBan_Muni: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_MGPKP";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Munitionsträger";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 50;
		backpack = "rhs_sidorMG";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_06NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan06NH";
	};
	class TBan_Pionier: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Pionier";
		faction = "TbanGSG";
		canDeactivateMines = 1;
		engineer = 1;
		vehicleClass = "Men";
		detectSkill = 30;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		backpack = "IODBackpack";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01";
		modelSides[] = {3};
		uniformClass = "U_Afghan01";
	};
	class TBan_Sniper: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter1";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Scharfschütze";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 30;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_svd_pso1","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_svd_pso1","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_01NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan01NH";
	};
	class TBan_unarmed: TBan_Fighter1
	{
		dlc = "u100";
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter4";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Unbewaffnet";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 35;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\Taliban_Fighters\Uniforms\Afghan_04";
		modelSides[] = {3};
		uniformClass = "U_Afghan04";
	};
	class TBan_Besatzung: TBan_Fighter1
	{
		nameSound = "veh_infantry_SF_s";
		author = "Apus";
		_generalMacro = "TBan_Fighter3";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};
		displayName = "Taliban Besatzung";
		faction = "TbanGSG";
		vehicleClass = "Men";
		detectSkill = 60;
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_plummag_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_folded","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"V_HarnessO_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_tsh4"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_tsh4"};
		model = "\Taliban_Fighters\Uniforms\Afghan_03NH";
		modelSides[] = {3};
		uniformClass = "U_Afghan03NH";
	};
};
class CfgWeapons
{
	class ItemInfo;
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class ItemCore;
	class Uniform_Base;
	class U_Afghan01: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 1";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil01_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter1";
			containerClass = "Supply30";
			armor = 0;
			mass = 30;
		};
	};
	class U_Afghan02: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 2";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil02_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter2";
			containerClass = "Supply30";
			armor = 0;
			mass = 30;
		};
	};
	class U_Afghan03: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 3";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_03.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil03_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter3";
			containerClass = "Supply30";
			armor = 0;
			mass = 30;
		};
	};
	class U_Afghan04: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 4";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_04.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil04_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter4";
			armor = 0;
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan05: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 5";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_05.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil05_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter5";
			containerClass = "Supply30";
			armor = 0;
			mass = 30;
		};
	};
	class U_Afghan06: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 6";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_06.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil06_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter6";
			containerClass = "Supply30";
			armor = 0;
			mass = 30;
		};
	};
	class U_Afghan01NH: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 1 (No Hat)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_01NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil01_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter1NH";
			containerClass = "Supply30";
			armor = 0;
			mass = 30;
		};
	};
	class U_Afghan02NH: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 2 (No Hat)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_02NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil02_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter2NH";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan03NH: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 3 (No Hat)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_03NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil03_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter3NH";
			armor = 0;
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan06NH: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 6 (No Hat)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Uniforms\Afghan_06NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil06_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter6NH";
			armor = 0;
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class H_HelmetB;
	class Afghan_01Hat: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Afghan_01Hat";
		displayName = "Afghan Hat 1";
		picture = "\Taliban_Fighters\data\ui\Afghan_01Hat.paa";
		model = "\Taliban_Fighters\gear\Afghan_01Hat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil01_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\Taliban_Fighters\gear\Afghan_01Hat.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class Afghan_02Hat: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Afghan_01Hat";
		displayName = "Afghan Hat 2";
		picture = "\Taliban_Fighters\data\ui\Afghan_02Hat.paa";
		model = "\Taliban_Fighters\gear\Afghan_02Hat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil02_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\Taliban_Fighters\gear\Afghan_02Hat.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class Afghan_03Hat: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Afghan_01Hat";
		displayName = "Afghan Hat 3";
		picture = "\Taliban_Fighters\data\ui\Afghan_03Hat.paa";
		model = "\Taliban_Fighters\gear\Afghan_03Hat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil03_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\Taliban_Fighters\gear\Afghan_03Hat.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class Afghan_04Hat: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Afghan_01Hat";
		displayName = "Afghan Hat 4";
		picture = "\Taliban_Fighters\data\UI\Afghan_04Hat.paa";
		model = "\Taliban_Fighters\gear\Afghan_04Hat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil04_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\Taliban_Fighters\gear\Afghan_04Hat.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class Afghan_05Hat: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Afghan_01Hat";
		displayName = "Afghan Hat 5";
		picture = "\Taliban_Fighters\data\UI\Afghan_05Hat.paa";
		model = "\Taliban_Fighters\gear\Afghan_05Hat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil05_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\Taliban_Fighters\gear\Afghan_05Hat.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class Afghan_06Hat: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Afghan_01Hat";
		displayName = "Afghan Hat 6";
		picture = "\Taliban_Fighters\data\ui\Afghan_06Hat.paa";
		model = "\Taliban_Fighters\gear\Afghan_06Hat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil06_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\Taliban_Fighters\gear\Afghan_06Hat.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
};
class cfgMods
{
	author = "EricJ562";
	timepacked = "1446899039";
};
//};
