author = "AChesheireCat";
description = "Irregular Militia (as seen from Squad) c. 2020 - Uses S.O.G Prarie Fire assets. (Last Updated: 2025/06/24)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_O_RUS_Gorka_Partizan","CUP_U_O_RUS_Gorka_Partizan_gloves2","CUP_U_O_RUS_Gorka_Partizan","CUP_U_O_RUS_Gorka_Partizan_gloves2","CUP_U_O_CHDKZ_Kam_04","CUP_U_O_CHDKZ_Kam_05","CUP_U_O_CHDKZ_Kam_06"
#define CAMO_VEST "CUP_V_O_SLA_M23_1_OD","CUP_V_O_RUS_RPS_Smersh_AK_ModernOlive", "rhs_6sh92_vsr_radio", "rhs_6sh92_vsr"
#define CAMO_BACKPACK "cwr3_o_backpack_gasmask"
#define CARRYALL "CUP_B_HikingPack_Civ"
#define CAMO_HEADGEAR "rhs_6b28_green","rhs_6b28_green_ess"
#define CAMO_HEADGEAR_SPECIAL "cwr3_b_headgear_cap_og107"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "cwr3_i_camel_pilot_uniform"
#define CAMO_VEST_PILOT CAMO_VEST
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT CAMO_HEADGEAR
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_C_Tracksuit_02","CUP_U_C_Tracksuit_02","CUP_U_C_Tracksuit_02","CUP_U_O_CHDKZ_Bardak"
#define CAMO_VEST_VICC CAMO_VEST
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "rhs_tsh4","rhs_tsh4_ess"
// Rifle
#define RIFLE 
#define RIFLE_MAG 
#define RIFLE_ATTACHMENTS "potato_strongerFlashlights_acc_cup_Flashlight_05"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_Aimpoint_5000","CUP_optic_1p63","CUP_optic_CompM2_low","rhs_acc_ekp1","rhs_acc_ekp8_02"
#define MAG_OPTICS "rhs_acc_1p29","CUP_optic_ACOG_TA01B_Black"
// GL Rifle
#define GLRIFLE 
#define GLRIFLE_MAG 
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2", "1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE "CUP_arifle_AKS74U"
#define CARBINE_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:8"
// AR
#define AR "CUP_lmg_minimipara","CUP_lmg_M249_E1","CUP_lmg_M249_E2"
#define AR_MAG "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249:2"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7V_M:2","rhs_rpg7_OG7V_mag:1"
#define GREN_MAG "rhs_rpg7_OG7V_mag:3"
// MMG
#define MMG "CUP_lmg_PKMN"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VL_M:2","rhs_rpg7_OG7V_mag:1"
#define MAT_MAG2 "CUP_PG7VL_M:1","rhs_rpg7_OG7V_mag:3"
#define MAT_MAG3 "CUP_PG7VR_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V3"
// MAT (alt)
#define MAT2 "RPG29"
#define MAT2_MAG "PG29V:2"
#define MAT2_MAG2 "PG29V:1","TBG29V:1"
#define MAT2_OPTIC "optic_PGO"
// HMG - DShKM
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "ace_compat_rhs_afrf3_spg9m_carry"
#define HAT_TRI "ace_csw_spg9CarryTripod"
#define HAT_MAG "ace_compat_rhs_afrf3_mag_PG9V:2", "ace_compat_rhs_afrf3_mag_OG9V:1"
// SAM - should be an SPAA gun if possible
#define SAM "CUP_launch_Igla"
#define SAM_MAG 
// Sniper
#define SNIPER "rhs_weap_svdp_wd_npz"
#define SNIPER_MAG "10Rnd_762x54_Mag:10"
#define SNIPER_OPTIC "hlc_optic_ZF95Base"
// Spotter
#define SPOTTER 
#define SPOTTER_MAG 
#define SPOTTER_ATTACHMENTS
// SMG
#define SMG "CUP_smg_SA61"
#define SMG_MAG "CUP_20Rnd_B_765x17_Ball_M:5"
// Pistol
#define PISTOL "CUP_hgun_TT"
#define PISTOL_MAG "CUP_8Rnd_762x25_TT:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES LOADOUT_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define LOADOUT_FRAG "rhs_mag_rgd5:2"
#define AT_FRAG "vn_rkg3_grenade_mag:2"
#define LOADOUT_GRENADES LOADOUT_FRAG,BASE_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS RADIO_SR,"ACE_MapTools","ACE_Flashlight_MX991","ACE_CableTie:2"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "cwr3_b_vest_alice_mg","CUP_V_O_RUS_RPS_Smersh_PKP_Light_ModernOlive","CUP_V_O_RUS_RPS_Smersh_PKP_SPP_ModernOlive","CUP_V_B_RRV_MG"
#define CAMO_VEST_LAT "CUP_V_O_SLA_M23_1_OD","rhs_6sh92_vsr_radio","rhs_6sh92_vsr"
#define CAMO_VEST_FTL "rhs_6sh92_vsr_vog_headset", "CUP_V_B_GER_Carrier_Rig_3_Brown","CUP_V_O_RUS_RPS_Smersh_VOG_SPP_ModernOlive","rhs_6sh92_vsr_vog"
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_VEST_CC CAMO_VEST_PILOT
#define CAMO_BACKPACK_LAT "rhs_rpg_2"
#define CAMO_BACKPACK_AR "CUP_B_ACRPara_dpm"
#define CAMO_BACKPACK_FTL "CUP_B_CivPack_WDL"
#define CAMO_BACKPACK_SL "CUP_B_AlicePack_Bedroll"
#define CAMO_BACKPACK_MEDIC "rhs_medic_bag_XL"
#define MMG_ATTACHMENTS "rhs_acc_1p29"
#define CAMO_UNIFORM_SNIPER "CUP_U_I_Ghillie_Top"

#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"

// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
    "CUP_O_Ural_CHDKZ",
    "CUP_O_Ural_CHDKZ",
    "CUP_O_Ural_CHDKZ",
    "CUP_O_Ural_Open_CHDKZ",
    "CUP_O_Ural_Open_CHDKZ",
    "CUP_O_Hilux_unarmed_CHDKZ",
    "CUP_O_UAZ_Unarmed_CHDKZ",
    "CUP_O_UAZ_Open_CHDKZ"
};
armedSoftVehiclesPool[] = {
    "CUP_O_UAZ_MG_CHDKZ",
    "CUP_O_UAZ_MG_CHDKZ",
    "CUP_O_UAZ_MG_CHDKZ",
    "CUP_O_UAZ_METIS_CHDKZ",
    "CUP_O_UAZ_SPG9_CHDKZ",
    "CUP_O_Datsun_PK",
    "CUP_O_Datsun_PK",
    "CUP_O_Datsun_PK",
    "CUP_O_Hilux_DSHKM_CHDKZ",
    "CUP_O_Hilux_DSHKM_CHDKZ",
    "CUP_O_Hilux_DSHKM_CHDKZ",
    "CUP_O_Hilux_metis_CHDKZ",
    "CUP_O_Hilux_SPG9_CHDKZ",
    "CUP_O_Hilux_podnos_CHDKZ",
    "CUP_O_Hilux_UB32_CHDKZ",
    "CUP_O_Hilux_zu23_CHDKZ",
    "CUP_O_Ural_ZU23_CHDKZ",
    "CUP_O_UAZ_AA_CHDKZ"
};
armoredVehiclePool[] = {
    "CUP_O_BTR80_CHDKZ",
    "CUP_O_BTR80_CHDKZ",
    "CUP_O_BTR80_CHDKZ",
    "CUP_O_BTR80_CHDKZ",
    "CUP_O_BRDM2_CHDKZ",
    "CUP_O_BRDM2_CHDKZ",
    "CUP_O_BRDM2_CHDKZ",
    "CUP_O_MTLB_pk_ChDKZ",
    "CUP_O_MTLB_pk_ChDKZ",
    "gmx_chdkz_bmp1sp2_wdr",
    "gmx_chdkz_bmp1sp2_wdr",
    "CUP_O_BTR80A_CHDKZ",
    "CUP_O_BMP2_CHDKZ",
    "CUP_O_BRDM2_ATGM_CHDKZ"
};
tankVehiclePool[] = {
    "CUP_O_T72_CHDKZ"
};
reinforcementTruck = "CUP_O_Ural_CHDKZ"
reinforcementArmed = "CUP_O_BTR80_CHDKZ"
// ------------- End Vehicle Pool -------------

//  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
//  weapons[] = {RIFLE};
//  magazines[] = {RIFLE_MAG,LOADOUT_GRENADES};
  magazines[] = {LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
  init = "[this, selectRandom ['CUP_arifle_AKS74_Early','CUP_arifle_AKS74','CUP_arifle_M16A2','CUP_arifle_Colt727','potato_fauxC7_c7','CUP_arifle_AK74M','CUP_arifle_AKS74U','CUP_arifle_AK74_Early','CUP_arifle_AK74'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
//  weapons[] = {CARBINE};
//  magazines[] = {CARBINE_MAG,LOADOUT_GRENADES};
  magazines[] = {LOADOUT_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
//  weapons[] = {GLRIFLE};
//  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  magazines[] = {GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  init = "[this, selectRandom ['CUP_arifle_AKS74_GL_Early','CUP_arifle_AKS74_GL','CUP_arifle_M16A2_GL','CUP_arifle_Colt727_M203','potato_fauxC7_c7GL','CUP_arifle_AK74M_GL','CUP_arifle_AK74_GL_Early','CUP_arifle_AK74_GL'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
  init = "[this, selectRandom ['CUP_arifle_AKS74_GL_Early','CUP_arifle_AKS74_GL','CUP_arifle_M16A2_GL','CUP_arifle_Colt727_M203','potato_fauxC7_c7GL','CUP_arifle_AK74M_GL','CUP_arifle_AK74_GL_Early','CUP_arifle_AK74_GL'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {"CUP_B_Kombat_Radio_Olive"};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2","Rev_darter:3"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
  init = ""; 
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
  init = "[this, selectRandom ['CUP_arifle_AKS74_Early','CUP_arifle_AKS74','CUP_arifle_M16A2','CUP_arifle_Colt727','potato_fauxC7_c7','CUP_arifle_AK74M','CUP_arifle_AKS74U','CUP_arifle_AK74_Early','CUP_arifle_AK74'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  vest[] = {CAMO_VEST_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
  init = "[this, selectRandom ['CUP_arifle_FNFAL5061_wooden','CUP_arifle_FNFAL5061_wooden','CUP_arifle_FNFAL5062','CUP_arifle_FNFAL5060','CUP_arifle_AKM_Early','CUP_arifle_AKMS_Early','CUP_arifle_TYPE_56_2_Early','CUP_arifle_G3A3_modern_ris','CUP_srifle_M14'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {BINOS};
  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
  items[] += {ETOOL};
  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {ETOOL};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"ace_compat_sog_mortar_type53_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ace_compat_sog_82mm_he:4"};
/*
  ace_compat_sog_82mm_wp 
  ace_compat_sog_82mm_he
  ace_compat_sog_82mm_lume
*/
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ace_compat_sog_82mm_he:2","ace_compat_sog_82mm_wp:2"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  headgear[] = {"PLOT_ARMOR_H_Bandanna_khk"};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_OPTIC};
  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
  init = ""; 
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
  init = ""; 
};
class vicd: vicc {// Repair Specialist
  weapons[] = {};
  handguns[] = {PISTOL};
  magazines[] = {PISTOL_MAG,CREW_GRENADES};
  backpackItems[] = {"Toolkit",SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  backpack[] = {CARRYALL};
  items[] += {BASE_ENG,"WBK_HeadLampItem",BASE_MEDICAL};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2 - FAL
  init = "[this, selectRandom ['CUP_arifle_FNFAL5061_wooden','CUP_arifle_FNFAL5061_wooden','CUP_arifle_FNFAL5062','CUP_arifle_FNFAL5060','CUP_arifle_AKM_Early','CUP_arifle_AKMS_Early','CUP_arifle_TYPE_56_2_Early','CUP_arifle_G3A3_modern_ris','CUP_srifle_M14'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class rifleman_03: rifleman {// Rifleman 3 - Grenadier (Rifle Grenades)
  weapons[] = {"vn_l1a1_01_gl","vn_l1a1_02_gl"};
  magazines[] = {"vn_l1a1_20_mag:7","vn_l1a1_20_t_mag:3","vn_22mm_m61_frag_mag:3","vn_22mm_n94_heat_mag:2",LOADOUT_GRENADES,AT_FRAG};
  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class rifleman_04: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {CARRYALL};
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {// Company Medic
};
class xo: coy {// XO
};
class plt: coy {// Platoon Leader
};
class sgt: plt {// Platoon Sergeant
};
class vicl: vicc {// Vehicle Commander
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY};
};
class mmgl: rifleman {// MMG Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
//  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
//  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MMG_MAG};
  magazines[] = {LEADER_GRENADES,PISTOL_MAG,MMG_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_OPTIC};
  init = "[this, selectRandom ['CUP_arifle_AKS74_Early','CUP_arifle_AKS74','CUP_arifle_M16A2','CUP_arifle_Colt727','potato_fauxC7_c7','CUP_arifle_AK74M','CUP_arifle_AKS74U','CUP_arifle_AK74_Early','CUP_arifle_AK74'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class matl: sl {// MAT Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
//  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
//  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MAT_MAG};
  magazines[] = {LEADER_GRENADES,PISTOL_MAG,MAT_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_OPTIC};
  init = "[this, selectRandom ['CUP_arifle_AKS74_Early','CUP_arifle_AKS74','CUP_arifle_M16A2','CUP_arifle_Colt727','potato_fauxC7_c7','CUP_arifle_AK74M','CUP_arifle_AKS74U','CUP_arifle_AK74_Early','CUP_arifle_AK74'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class hmgl: sl {// HMG Lead
//  weapons[] = {RIFLE};
//  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  magazines[] = {LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
  init = "[this, selectRandom ['CUP_arifle_AKS74_Early','CUP_arifle_AKS74','CUP_arifle_M16A2','CUP_arifle_Colt727','potato_fauxC7_c7','CUP_arifle_AK74M','CUP_arifle_AKS74U','CUP_arifle_AK74_Early','CUP_arifle_AK74'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
//  weapons[] = {RIFLE};
  backpackItems[] = {};
//  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  magazines[] = {LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI};
  items[] += {BASE_MEDICAL};
  init = "[this, selectRandom ['CUP_arifle_AKS74_Early','CUP_arifle_AKS74','CUP_arifle_M16A2','CUP_arifle_Colt727','potato_fauxC7_c7','CUP_arifle_AK74M','CUP_arifle_AKS74U','CUP_arifle_AK74_Early','CUP_arifle_AK74'], 10] call BIS_fnc_addWeapon; this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"; 
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
  magazines[] += {"ace_compat_sog_82mm_he:2","ace_compat_sog_82mm_lume:2"};
};
class helicrew: pilot {// Aircrew
  vest[] = {CAMO_VEST_CC};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  vest[] = {CAMO_VEST_CC};
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes

#define SF_UNIFORM
#define SF_VEST
#define SF_VEST_AR
#define SF_VEST_FTL
#define SF_VEST_SL
#define SF_VEST_SNIPER
#define SF_HEADGEAR
#define SF_BACKPACK
#define SF_CARRYALL

#define SF_RIFLE
#define SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE
#define SF_GLRIFLE_MAG
#define SF_GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM

#define SF_AR
#define SF_AR_MAG
#define SF_AR_ATTACHMENTS

#define SF_SNIPER
#define SF_SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS

#define SF_AT
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS

#define SF_PISTOL
#define SF_PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,LOADOUT_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {SF_PISTOL};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,LOADOUT_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,LOADOUT_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};