author = "AChesheireCat";
description = "1-4 IN aka Cherokee Company - United States Army OPFOR unit c. 2020 - inspired by images taken during Exercise Saber Junction 20.";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "vn_b_uniform_macv_01_02","vn_b_uniform_macv_02_02","vn_b_uniform_macv_02_02","vn_b_uniform_macv_03_02","vn_b_uniform_macv_04_02","vn_b_uniform_macv_05_02"
#define CAMO_VEST "V_tweed_iotv_mk4_1","V_tweed_iotv_mk4_2","V_tweed_iotv_mk4_3","V_tweed_iotv_mk4_cell_1","V_tweed_iotv_mk4_cell_2"
#define CAMO_BACKPACK "B_Battle_Belt_F","B_Battle_Belt_F","B_tweed_pack_wasser_molle_ocp","B_tweed_pack_wasser_molle_ocp_alt"
#define CARRYALL "acp_US_OCP_core_lite_B_Carryall_US_OCP"
#define CAMO_HEADGEAR "CUP_H_Ger_M92","CUP_H_Ger_M92_GG_CB","CUP_H_Ger_M92_GG_CF"
#define CAMO_HEADGEAR_SPECIAL "H_tweed_Hat_fleece"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "U_B_HeliPilotCoveralls"
#define CAMO_VEST_PILOT "Aircrew_vest_2_NH"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_CrewHelmetHeli_B"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "V_tweed_iotv_mk4_e_2"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "CUP_arifle_AK101_top_rail","CUP_arifle_AK101_railed"
#define RIFLE_MAG "CUP_30Rnd_556x45_AK:7","CUP_30Rnd_TE1_Green_Tracer_556x45_AK:3"
#define RIFLE_ATTACHMENTS "potato_strongerFlashlights_CUP_LED_flashlight"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE "CUP_arifle_AK101_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:5"
#define GLRIFLE_MAG_FLARE "CUP_FlareRed_GP25_M:4"
#define GLRIFLE_MAG_ILLUM "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_m249_pip3"
#define AR_MAG "CUP_100Rnd_TE4_Green_Tracer_556x45_M249:4"
// AT
#define AT "CUP_launch_M136_Loaded"
#define AT_MAG "CUP_M136_M:1"
// MMG
#define MMG "CUP_lmg_PKM_top_rail"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "launch_MRAWS_green_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1","MAA_MAAWS_ILLUM545:2"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
#define MAT_OPTIC "CUP_acc_ANPEQ_15"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "CUP_Javelin_M:1"
// SAM
#define SAM "CUP_launch_FIM92Stinger_Loaded"
#define SAM_MAG 
// Sniper
#define SNIPER "CUP_srifle_M2010_blk"
#define SNIPER_MAG "CUP_5Rnd_762x67_M2010_M:10"
#define SNIPER_OPTIC "muzzle_snds_B", "ACE_DBAL_A3_Red", "optic_LRPS", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG CARBINE_MAG
#define SPOTTER_OPTIC RIFLE_ATTACHMENTS
// SMG
#define SMG CARBINE
#define SMG_MAG "CUP_30Rnd_TE1_Green_Tracer_556x45_AK:5"
// Pistol
#define PISTOL "CUP_hgun_M9A1"
#define PISTOL_MAG "CUP_15Rnd_9x19_M9:3"
#define PISTOL_OPTIC "potato_strongerFlashlights_Vanilla_HG_LED_flashlight"
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "HandGrenade:2"
#define SIDE_SMOKE "SmokeShell:2"
#define MISC_FRAG "vn_m14_grenade_mag:2"
#define STUN_FRAG "ACE_M84:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS WEST_TOOLS,"ACE_EntrenchingTool"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED,"CUP_NVG_PVS14_WP"
#define LEADER_LINKED BASE_LEADER_LINKED,"CUP_NVG_PVS14_WP"


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "V_tweed_iotv_mk4_249"
#define CAMO_VEST_FTL "V_tweed_iotv_mk4_4cm_1","V_tweed_iotv_mk4_4cm_2","V_tweed_iotv_mk4_cell_4cm_1"
#define CAMO_VEST_SL "V_tweed_iotv_mk4_45_1","V_tweed_iotv_mk4_cell_45_1"
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "B_simc_US_Molle_sturm_OCP","B_simc_US_Molle_sturm_OCP_thermos_OCP","B_simc_US_Molle_sturm_OCP_etool"
#define CAMO_BACKPACK_FTL "acp_US_OCP_core_lite_B_AssaultPack_US_OCP"
#define CAMO_BACKPACK_SL "B_simc_US_Molle_sturm_OCP","B_simc_US_Molle_sturm_OCP_thermos_OCP","B_simc_US_Molle_sturm_OCP_etool"
#define CAMO_BACKPACK_MEDIC "acp_US_OCP_core_lite_B_Kitbag_rgr_US_OCP"
#define MMG_ATTACHMENTS "ptv_ta648_rmr","CUP_acc_ANPEQ_15"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define DMR "arifle_SPAR_03_snd_F"
#define DMR_MAG "ACE_20Rnd_762x51_Mk316_Mod_0_Mag:10"
#define DMR_ATTACHMENTS "ptv_shortdot_dcc_des","CUP_acc_ANPEQ_15","CUP_bipod_Harris_1A2_L_BLK"

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

class Car {
  TransportWeapons[] = {AT,AT};
  TransportMagazines[] = {HAT_MAG,HAT_MAG,MMG_MAG,MMG_MAG};
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
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SPECIAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,"acex_intelitems_notepad"};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  vest[] = {"V_tweed_msv_mk2_240","V_tweed_iotv_mk4_240"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
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
  magazines[] += {MAT_MAG2};
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
  launchers[] = {"potato_vz99_carryWeapon"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:6","potato_vz99_flare:2"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:2","potato_vz99_smokeWhite:4","potato_vz99_flare:2"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_OPTIC};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_OPTIC};
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
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
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
  backpack[] = {"B_simc_US_Molle_sturm_OCP_RTO_wasser","B_simc_US_Molle_sturm_OCP_RTO"};
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
  backpack[] = {CAMO_BACKPACK_FTL};
  backpackItems[] += {RIFLE_MAG};
};
class rifleman_03: rifleman {// Rifleman 3
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
};
class rifleman_04: rifleman {// Rifleman 4 - Squad Designated Marksman
  weapons[] = {DMR};
  magazines[] = {DMR_MAG,BASE_GRENADES};
  attachments[] = {DMR_ATTACHMENTS};
  backpackItems[] += {"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR,"acex_intelitems_notepad"};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY,"acex_intelitems_notepad"};
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
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG3};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
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
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
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

//SF Classes - Green Berets based off of 5th SFG training photos c. 2022

#define SF_UNIFORM "CUP_U_CRYE_G3C_MC_US","CUP_U_CRYE_G3C_MC_US_V2"
#define SF_VEST "acp_US_OCP_modern_west_lite_V_Crye_AVS_1_US_OCP_insignia","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_1_US_OCP_insignia","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_3_US_OCP_insignia"
#define SF_VEST_AR "acp_US_OCP_modern_west_lite_V_Crye_AVS_2_US_OCP_insignia"
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "acp_ES_Ejercito_D_modern_west_lite_H_HelmetFASTMT_Headset_ES_Ejercito_D_F"
#define SF_BACKPACK "B_Battle_Belt_XL_F"
#define SF_CARRYALL "acp_US_OCP_core_lite_B_Carryall_US_OCP"

#define SF_RIFLE "CUP_arifle_M4A1_SOMMOD_tan"
#define SF_RIFLE_MAG "ptv_40Rnd_556x45_Pmag_Red","hlc_30rnd_556x45_MDim_PMAG:6","hlc_30rnd_556x45_M_PMAG:3"
#define SF_RIFLE_ATTACHMENTS "ptv_shortdot_des","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","ptv_rotex2","HLC_Panel_Under_Ladder_S_Pride"
#define SF_ALT_OPTICS "ptv_xps3xmag_des","CUP_optic_G33_HWS_COYOTE","CUP_optic_Elcan_SpecterDR_coyote"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE SF_RIFLE
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define SF_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define SF_GLRIFLE_MAG_ILLUM "ACE_40mm_Flare_ir:4"

#define SF_AR "CUP_lmg_m249_pip4"
#define SF_AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch:3"
#define SF_AR_ATTACHMENTS "CUP_optic_Eotech553_Coyote","CUP_acc_ANPEQ_15"

#define SF_SNIPER "CUP_srifle_M110"
#define SF_SNIPER_MAG "CUP_20Rnd_762x51_L129_M:10"
#define SF_SNIPER_ATTACHMENTS "ptv_PMII_rmr_des","CUP_acc_ANPEQ_15","CUP_muzzle_snds_M110","CUP_bipod_Harris_1A2_L_BLK"

#define SF_AT "CUP_launch_M72A6"
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS 

#define SF_PISTOL "ptv_g19t"
#define SF_PISTOL_MAG "ptv_15Rnd_9mm_G19:3"
#define SF_PISTOL_ATTACHMENTS "ptv_x300"

#define SF_GLPISTOL "ptv_hk69"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {SF_ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  handguns[] = {SF_PISTOL};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  handguns[] = {SF_GLPISTOL};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {"acp_US_OCP_core_lite_B_Kitbag_rgr_US_OCP"};
  backpackItems[] = {MEDIC_MEDICAL};
};