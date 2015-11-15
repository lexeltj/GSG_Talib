////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Oct 05 23:19:21 2015 : Created on Mon Oct 05 23:19:21 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Taliban_Fighters : config.bin{
class CfgPatches
{
	class Taliban_fighters
	{
		units[] = {"Afghan_Civilian6NH","Afghan_Civilian6","Afghan_Civilian5","Afghan_Civilian4","Afghan_Civilian3","Afghan_Civilian2","Afghan_Civilian1","Afghan_Civilian3NH","Afghan_Civilian2NH","Afghan_Civilian1NH","Tban_O_Offroad_01_F","TBan_Fighter6","TBan_Fighter5","TBan_Fighter4","TBan_Fighter3","TBan_Fighter2","TBan_Fighter1"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"A3_Characters_F","A3_Data_F","A3_Soft_F"};
	};
};
class CfgVehicleClasses
{
	class TBan
	{
		displayName = "Taliban";
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
};
class CfgVehicles
{
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
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessO_gry"};
		model = "\Taliban_Fighters\Afghan_01";
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
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessO_gry"};
		model = "\Taliban_Fighters\Afghan_01NH";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Afghan_02";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Afghan_02NH";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Afghan_03";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Afghan_03NH";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessO_gry"};
		model = "\Taliban_Fighters\Afghan_04";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_gry"};
		model = "\Taliban_Fighters\Afghan_05";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Afghan_06";
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
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry"};
		respawnLinkedItems[] = {"V_HarnessOSpec_brn"};
		model = "\Taliban_Fighters\Afghan_06NH";
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
		model = "\Taliban_fighters\Afghan_01";
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
		model = "\Taliban_fighters\Afghan_01NH";
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
		model = "\Taliban_fighters\Afghan_02";
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
		model = "\Taliban_fighters\Afghan_02NH";
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
		model = "\Taliban_fighters\Afghan_03";
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
		model = "\Taliban_fighters\Afghan_03NH";
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
		model = "\Taliban_fighters\Afghan_04";
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
		model = "\Taliban_fighters\Afghan_05";
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
		model = "\Taliban_fighters\Afghan_06";
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
		model = "\Taliban_fighters\Afghan_06NH";
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
		crew = "PIF_Soldier";
		author = "EricJ";
		class TransportWeapons
		{
			class _xx_ej_akm
			{
				weapon = "ej_akm";
				count = 2;
			};
			class _xx_ej_RPG
			{
				weapon = "ej_launch_rpg7";
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
				magazine = "akm_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 16;
			};
			class _xx_RPG7_F
			{
				magazine = "RPG7_F";
				count = 4;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_PIFRPG
			{
				backpack = "B_FieldPack_PIFRPG";
				count = 2;
			};
			class _xx_B_FieldPack_PIF
			{
				backpack = "B_FieldPack_PIF";
				count = 4;
			};
		};
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
		model = "\Taliban_Fighters\Afghan_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil01_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter1";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan02: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 2";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Afghan_02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil02_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter2";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan03: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 3";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Afghan_03.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil03_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter3";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan04: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 4";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Afghan_04.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil04_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter4";
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
		model = "\Taliban_Fighters\Afghan_05.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil05_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter5";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan06: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 6";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Afghan_06.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil06_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter6";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan01NH: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 1 (No Hat)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Afghan_01NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil01_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter1NH";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_Afghan02NH: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Afghan Clothes 2 (No Hat)";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\Taliban_Fighters\Afghan_02NH.p3d";
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
		model = "\Taliban_Fighters\Afghan_03NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil03_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter3NH";
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
		model = "\Taliban_Fighters\Afghan_06NH.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Taliban_Fighters\data\tak_civil06_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TBan_Fighter6NH";
			containerClass = "Supply30";
			mass = 30;
		};
	};
};
class cfgMods
{
	author = "76561198016000690";
	timepacked = "1444069161";
};
//};
