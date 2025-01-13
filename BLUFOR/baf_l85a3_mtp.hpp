author = "AChesheireCat";
description = "British Armed Forces c. 2023 - includes Light AT (M72A7) and DMR defines.";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_B_BAF_MTP_UBACSLONG_Gloves","CUP_U_B_BAF_MTP_UBACSROLLED_Gloves","CUP_U_B_BAF_MTP_UBACSTSHIRT_Gloves"
#define CAMO_VEST "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "CUP_B_Motherlode_MTP"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Covered_MTP_SF","CUP_H_OpsCore_Covered_MTP"  //"acp_US_OCP_core_lite_H_HelmetB_US_OCP" 
#define CAMO_HEADGEAR_SPECIAL "H_Watchcap_blk"
//Pilot camo Set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USArmy_PilotOverall"
#define CAMO_VEST_PILOT "CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_visor"
//Vehicle camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_BAF_MTP_Mk6_CREW_PRR"
// Rifle
#define RIFLE "CUP_arifle_L85A2_NG","CUP_arifle_L85A2_G"
#define RIFLE_MAG "hlc_30rnd_556x45_M_PMAG:7","hlc_30rnd_556x45_t_PMAG:3"
#define RIFLE_ATTACHMENTS "CUP_optic_Eotech553_Black","CUP_acc_LLM_od"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_eot552","ptv_rmr"
#define MAG_OPTICS "CUP_optic_Elcan_reflex","CUP_optic_Elcan","CUP_optic_SUSAT"
// GL Rifle
#define GLRIFLE "CUP_arifle_L85A2_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_L7A2"
#define AR_MAG "hlc_100Rnd_762x51_Barrier_M60E4:4"
// Light AT - replace with MATADOR if ever added
#define LAT "ptv_m72a7"
#define LAT_MAG 
// AT
#define AT "launch_NLAW_F"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_L7A2"
#define MMG_MAG "hlc_200Rnd_762x51_Barrier_M60E4:3"
// MAT
#define MAT "launch_MRAWS_green_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1","MAA_MAAWS_ILLUM545:2"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
#define MAT_OPTIC "cup_acc_llm_black"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "ace_spike_launcher"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_spike_lr:2"
// SAM
#define SAM 
#define SAM_MAG 
// Sniper
#define SNIPER "CUP_srifle_AWM_wdl"
#define SNIPER_MAG "CUP_5Rnd_86x70_L115A1:10"
#define SNIPER_OPTIC "ACE_optic_LRPS_2D", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER "ptv_rs556s_t"
#define SPOTTER_MAG "CUP_30Rnd_556x45_Emag:7","CUP_30Rnd_556x45_Emag_Tracer_Red:3"
#define SPOTTER_OPTIC "CUP_acc_LLM_black","CUP_optic_Eotech553_Black","ptv_acc_grip4"
// SMG
#define SMG "CUP_smg_MP5A5_Rail"
#define SMG_MAG "CUP_30Rnd_Red_Tracer_9x19_MP5:5"
// Pistol
#define PISTOL "ptv_p80"
#define PISTOL_MAG "ptv_17Rnd_9mm_G17:3"
#define PISTOL_OPTIC "ptv_x300"
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "CUP_HandGrenade_L109A2_HE:2"
#define SIDE_SMOKE "SmokeShell:2"
#define OFF_FRAG "ACE_CTS9:2"
#define MISC_FRAG "ACE_M14:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS WEST_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED,"CUP_NVG_HMNVS"
#define LEADER_LINKED BASE_LEADER_LINKED,"CUP_NVG_HMNVS"


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman"
#define CAMO_VEST_FTL "CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier"
#define CAMO_VEST_SL "CUP_V_B_BAF_MTP_Osprey_Mk4_Officer"
#define CAMO_VEST_MEDIC "CUP_V_B_BAF_MTP_Osprey_Mk4_Medic"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "CUP_B_Motherlode_MTP"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "CUP_B_Motherlode_Radio_MTP"
#define CAMO_BACKPACK_MEDIC "B_Kitbag_mcamo"
#define MMG_ATTACHMENTS "ptv_ta648_rmr"
#define CAMO_UNIFORM_SNIPER "U_B_FullGhillie_lsh"

#define DMR "CUP_srifle_L129A1","CUP_srifle_L129A1_HG"
#define DMR_MAG "CUP_20Rnd_762x51_L129_M:10"
#define DMR_ATTACHMENTS "ptv_ta648_rmr","cup_acc_llm_black","cup_bipod_harris_1a2_l_blk"

#define DEMO "DemoCharge_Remote_Mag:2"
#define DEMO_TOOL "ACE_Clacker"

class CUP_BOX_GB_Ammo_F {
  boxCustomName = "FT Resupply Crate";
  TransportWeapons[] = {LAT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,LAT_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Crate";
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,MEDIC_MEDICAL};
};

class Car {};
class Tank {};
class Helicopter {};
class Plane {};
class Ship_F {};

class CUP_B_Merlin_HC3_Armed_GB {
  minVehicleBoxSpace = 6;
  class CUP_BOX_GB_Ammo_F: CUP_BOX_GB_Ammo_F {
      boxCount = 2;
  };
  class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate_advanced {
      boxCount = 1;
  };
};

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
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,DEMO};
  items[] += {LEADER_TOOLS,"acex_intelitems_notepad",DEMO_TOOL};
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
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT };
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
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
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
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing"};
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
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class demo: Fic_eng {// Explosive Specialist
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2 - LAT
};
class rifleman_03: rifleman {// Rifleman 3 - Marksman
  weapons[] = {DMR};
  handguns[] = {PISTOL};
  magazines[] = {DMR_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {DMR_ATTACHMENTS};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class rifleman_04: rifleman {// Rifleman 4 - Grenadier?
  launchers[] = {LAT};
  magazines[] += {LAT_MAG};
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
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes - British Special Boat Service

#define SF_UNIFORM "CUP_U_CRYE_G3C_MC","CUP_U_CRYE_G3C_MC_V2","CUP_U_CRYE_G3C_MC_V3"
#define SF_VEST "acp_US_OCP_modern_west_lite_LBT_G3_US_OCP"
#define SF_VEST_AR SF_VEST
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "acp_US_OCP_modern_west_lite_H_HelmetFASTMT_Cover_US_OCP_F"
#define SF_BACKPACK "B_Battle_Belt_F"
#define SF_CARRYALL "acp_US_OCP_core_lite_B_Carryall_US_OCP"

#define SF_RIFLE "ptv_rs556s_t"
#define SF_RIFLE_MAG "ptv_40Rnd_556x45_Pmag_Red:1","ptv_30Rnd_556x45_Pmagw:6","ptv_30Rnd_556x45_Pmagw_Red:3"
#define SF_RIFLE_ATTACHMENTS "CUP_optic_MicroT1","ptv_dbalsf","ptv_rotex2","ptv_acc_grip2"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE "ptv_rs556_gl_t"
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM GLRIFLE_MAG_ILLUM

#define SF_AR "CUP_lmg_L110A1"
#define SF_AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1:2"
#define SF_AR_ATTACHMENTS "ptv_xps3","ptv_dbala2"

#define SF_SNIPER "CUP_arifle_HK417_12_Wood"
#define SF_SNIPER_MAG "CUP_20Rnd_762x51_HK417:10"
#define SF_SNIPER_ATTACHMENTS "hlc_optic_ATACR","ptv_dbala2","ptv_rotex308","CUP_bipod_Harris_1A2_L_BLK"

#define SF_AT LAT
#define SF_AT_MAG LAT_MAG
#define SF_AT_ATTACHMENTS 

#define SF_PISTOL "ptv_p80t"
#define SF_PISTOL_MAG "ptv_17Rnd_9mm_G17:3"
#define SF_PISTOL_ATTACHMENTS "ptv_x300","hlc_muzzle_TiRant9S"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED,"CUP_NVG_GPNVG_black_WP"};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED,"CUP_NVG_GPNVG_black_WP"};
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
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER,"CUP_NVG_GPNVG_black_WP"};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};