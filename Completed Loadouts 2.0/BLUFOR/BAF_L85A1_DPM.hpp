author = "AChesheireCat";
description = "British Armed Forces c. 1989 - includes DMR defines. Requires the CWRIII BAF expansion mod. (Last updated: 2025/04/25)";
#include "undef.hpp" // Reset defines

// Rifleman_03 is a marksman

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "cwr3_b_uk_uniform_dpm","cwr3_b_uk_uniform_dpm_gloves","cwr3_b_uk_uniform_dpm_rolled"
#define CAMO_VEST "cwr3_b_uk_vest_58webbing"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "vn_b_pack_pfield_01"
#define CAMO_HEADGEAR "cwr3_b_uk_headgear_mk6_helmet_dpm" 
#define CAMO_HEADGEAR_SPECIAL "cwr3_b_uk_headgear_boonie_dpm"
//Pilot camo Set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USArmy_PilotOverall"
#define CAMO_VEST_PILOT "CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_visor"
//Vehicle camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_B_BAF_DDPM_Osprey_Mk3_Crewman"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_BAF_DDPM_Mk6_CREW_PRR"
// Rifle
#define RIFLE "cwr3_arifle_l85a1"
#define RIFLE_MAG "30Rnd_556x45_Stanag_red:7","30Rnd_556x45_Stanag_Tracer_Red:3"
#define RIFLE_ATTACHMENTS 
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_SUSAT"
// GL Rifle
#define GLRIFLE "CUP_arifle_L85A2_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_HEDP "potato_1Rnd_40mm_M433_HEDP:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "cwr3_arifle_l86a1"
#define AR_MAG "30Rnd_556x45_Stanag_Tracer_Red:15"
// AT
#define AT "CUP_launch_M72A6"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_L7A2_Flat"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "cwr3_launch_carlgustaf"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
#define MAT_OPTIC "CUP_optic_MAAWS_Scope"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "potato_cswCompatCUP_patchGM_gm_milan_backpack"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "gm_1Rnd_milan_heat_dm92_csw:1"
// SAM
#define SAM "cwr3_launch_javelin"
#define SAM_MAG "cwr3_javelin_m"
// Sniper
#define SNIPER "CUP_srifle_AWM_wdl"
#define SNIPER_MAG "CUP_5Rnd_86x70_L115A1:10"
#define SNIPER_OPTIC "ptv_PMII_sunshade","CUP_bipod_VLTOR_Modpod_black"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC RIFLE_ATTACHMENTS
// SMG
#define SMG "CUP_smg_MP5A5_Rail"
#define SMG_MAG "CUP_30Rnd_Red_Tracer_9x19_MP5:5"
// Pistol
#define PISTOL "vn_hp"
#define PISTOL_MAG "vn_hp_mag:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "CUP_HandGrenade_L109A1_HE:2"
#define SIDE_SMOKE "SmokeShell:2"
#define MISC_FRAG "ACE_M14:2"
#define LOADOUT_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS RADIO_SR,"ACE_MapTools","ACE_IR_Strobe_item:2","ACE_Flashlight_XL50","ACE_CableTie:2"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL "cwr3_b_uk_vest_58webbing_officer"
#define CAMO_VEST_MEDIC "cwr3_b_uk_vest_58webbing_medic"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "vn_b_pack_p44_01"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "vn_b_pack_p44_01"
#define CAMO_BACKPACK_MEDIC "cwr3_b_uk_backpack_medic_empty"
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER "U_B_FullGhillie_ard"

#define DMR "cwr3_arifle_l1a1_suit"
#define DMR_MAG "CUP_20Rnd_762x51_FNFAL_M:7","CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_M:3"
#define DMR_ATTACHMENTS "cwr3_optic_suit"

#define DEMO "DemoCharge_Remote_Mag:1"
#define DEMO_TOOL "ACE_Clacker"

#define REDUCED_MAG "30Rnd_556x45_Stanag_red:5"

class CUP_BOX_GB_Ammo_F {
  boxCustomName = "FT Resupply Crate";
  TransportWeapons[] = {LAT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,LAT_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Crate";
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,MEDIC_MEDICAL};
};

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
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SPECIAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,LOADOUT_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
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
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {LAR};
  magazines[] = {LAR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {PISTOL};
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
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CAMO_BACKPACK_SL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CAMO_BACKPACK_SL};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"ptv_M3_Tan"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"ptv_M3_Tan"};
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
  vest[] = {"CUP_V_B_RRV_Officer_CB"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  vest[] = {"CUP_V_B_RRV_Officer_CB"};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
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
/*
class pilot {// Jet Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  vest[] = {"Aircrew_vest_2_NH"};
  headgear[] = {"H_PilotHelmetFighter_B"};
  handguns[] = {PISTOL};
  magazines[] = {PISTOL_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
*/
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
  magazines[] = {REDUCED_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class demo: Fic_eng {// Explosive Specialist
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  headgear[] = {CAMO_HEADGEAR};
  vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
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
  magazines[] = {DMR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
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
  backpackItems[] = {SIDE_KEY};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {"ptv_M3_Tan"};
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
  vest[] = {"cwr3_b_uk_vest_58webbing_sapper"};
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
#define SF_VEST_AR SF_VEST
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
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
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM GLRIFLE_MAG_ILLUM

#define SF_AR 
#define SF_AR_MAG 
#define SF_AR_ATTACHMENTS 

#define SF_SNIPER 
#define SF_SNIPER_MAG 
#define SF_SNIPER_ATTACHMENTS 

#define SF_AT LAT
#define SF_AT_MAG LAT_MAG
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
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};