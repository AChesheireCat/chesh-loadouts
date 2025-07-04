author = "AChesheireCat";
description = "Australian Defense Force c. 2024 - requires Wikd's Australian Defence Force 2035 mod and the EF-88 (JCA-style Expansion) mod. (Last Updated: 2025/04/26).";
#include "undef.hpp" // Reset defines

// rifleman_03 is a Marksman

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "ADF_CombatUniform_AMCU","ADF_CombatUniform_Rolled_AMCU"
#define CAMO_VEST "ADF_TBAS_1","ADF_TBAS_2","ADF_TBAS_3","ADF_TBAS_4"
#define CAMO_BACKPACK "B_Battle_Belt_F","ADF_TBAS_Backpannel","ADF_TBAS_Backpannel"
#define CARRYALL "ADF_Carryall_AMCU"
#define CAMO_HEADGEAR "ADF_Exfil_1_F","ADF_Exfil_2_F","ADF_Exfil_3_F"
#define CAMO_HEADGEAR_SPECIAL "ADF_Booniehat_AMCU"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USMC_PilotOverall"
#define CAMO_VEST_PILOT "Aircrew_vest_2_NH"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "ADF_CrewHelmetHeli"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "ADF_TBAS_8"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "potato_AUG_black_F"
#define RIFLE_MAG "CUP_30Rnd_556x45_AUG:7","CUP_30Rnd_TE1_Red_Tracer_556x45_AUG:3"
#define RIFLE_ATTACHMENTS "ACE_DBAL_A3_Green","CUP_optic_Elcan_SpecterDR_KF_black"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_eot552","ptv_xps3","ptv_t1","ptv_t1s","CUP_optic_VortexRazor_UH1_Black"
#define MAG_OPTICS "CUP_optic_Elcan_SpecterDR_KF_black","CUP_optic_Elcan_SpecterDR_KF_RMR_black"
// GL Rifle
#define GLRIFLE "potato_AUG_GL_black_F"
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
#define AR "CUP_lmg_minimi_railed"
#define AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch:2"
// AT
#define AT "ptv_m72a7"
#define AT_MAG 
#define AT_ATTACHMENTS "ACE_DBAL_A3_Green"
// MMG
#define MMG "CUP_lmg_FNMAG_RIS"
#define MMG_MAG "hlc_200Rnd_762x51_Barrier_M60E4:3"
// MAT
#define MAT "launch_MRAWS_green_rail_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:3"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1"
#define MAT_OPTIC "CUP_acc_ANPEQ_15_Black"
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
// SAM - RBS-70
#define SAM 
#define SAM_MAG 
// Sniper
#define SNIPER "ptv_AX_t"
#define SNIPER_MAG "ACE_10Rnd_338_300gr_HPBT_Mag:5"
#define SNIPER_OPTIC "ACE_DBAL_A3_Green","ptv_PMII_525_des","CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC RIFLE_ATTACHMENTS
// SMG
#define SMG "potato_AUG_C_black_F"
#define SMG_MAG "CUP_30Rnd_TE1_Red_Tracer_556x45_AUG:5"
// Pistol
#define PISTOL "ptv_p320"
#define PISTOL_MAG "ptv_15Rnd_9mm_P320:3"
#define PISTOL_OPTIC "hlc_acc_TLR1","ptv_romeo1pro"
// Grenades
#define SIDE_LEADER_GRENADES SIDE_FRAG,LOADOUT_LEADER_GRENADES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "HandGrenade:2"
#define SIDE_SMOKE "ptv_mag_smoke01:2"
#define LOADOUT_GRENADES SIDE_FRAG,SIDE_SMOKE
#define LOADOUT_LEADER_GRENADES "ptv_mag_smoke01:2","ptv_mag_smoke01_Green:2","ptv_mag_smoke01_Purple"
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "ADF_TBAS_5","ADF_TBAS_6"
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL "ADF_TBAS_9"
#define CAMO_VEST_MEDIC "ADF_TBAS_7"
#define CAMO_VEST_CREW CAMO_VEST_PILOT
#define CAMO_VEST_JFO CAMO_VEST_SL
#define CAMO_VEST_PLT CAMO_VEST_SL
#define CAMO_VEST_PLM CAMO_VEST_MEDIC
#define CAMO_VEST_ENG CAMO_VEST
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "ADF_TacticalPack_AMCU"
#define CAMO_BACKPACK_FTL "ADF_TBAS_Backpannel_Antenna"
#define CAMO_BACKPACK_SL "ADF_AssaultPack_AMCU"
#define CAMO_BACKPACK_MEDIC "ADF_Kitbag_AMCU"
#define CAMO_BACKPACK_RADIO "ADF_RadioBag_AMCU"
#define CAMO_BACKPACK_MAT "ptv_M3_Tan"
#define MMG_ATTACHMENTS "CUP_optic_ElcanM145"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define DMR "CUP_srifle_m110_kac"
#define DMR_MAG "CUP_20Rnd_762x51_B_M110:10"
#define DMR_ATTACHMENTS "ptv_PMII_des_sunshade","CUP_muzzle_snds_M110","CUP_bipod_Harris_1A2_L_BLK"

#define ETOOL "ACE_EntrenchingTool"
#define NVG "CUP_NVG_PVS14_WP"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"

//  init = "this addGoggles selectRandom ['G_tweed_tacticool_blauw','G_tweed_tacticool_blauw_peltor','G_LEN_TG1_weiss','G_tweed_tacticool','G_tweed_tacticool_peltor','G_tweed_peltor','G_tweed_ESS_tan','ADF_Balaclava_AMCU','ADF_Balaclava_Glasses_AMCU_Amber','ADF_Balaclava_Glasses_AMCU_Clear','ADF_Balaclava_Glasses_AMCU_Faded','ADF_TacticalGlasses_Amber','ADF_TacticalGlasses_Clear','ADF_TacticalGlasses_Faded','cwr3_b_facewear_scrimnet_scarf_olive','CUP_TK_NeckScarf','CUP_G_GPS','CUP_G_Tan_Scarf_Shades_GPS','CUP_G_WatchGPSCombo','CUP_G_WristWatch','ptv_comtac3_g'];"

// Resupply Boxes

class Box_NATO_Wps_F {
  boxCustomName = "FT Resupply Crate";
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,DEMO,DEMO_TOOL};
};
class Box_NATO_WpsLaunch_F {
  boxCustomName = "AT Launcher Crate";
  TransportWeapons[] = {AT,AT,AT,AT};
  TransportMagazines[] = {AT_MAG,AT_MAG,AT_MAG,AT_MAG};
};
class CUP_WeaponCase_Black_CUP {
  boxCustomName = "HAT Resupply Crate";
  TransportMagazines[] = {HAT_MAG,HAT_MAG};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Crate";
  TransportItems[] = {MEDIC_MEDICAL};
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
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
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
  vest[] = {CAMO_VEST_PLT};
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
  magazines[] = {AR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
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
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
  items[] += {ETOOL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {ETOOL};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {CAMO_BACKPACK_MAT};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CAMO_BACKPACK_MAT};
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
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner - 60mm Mortar
  launchers[] = {"avm224_W_M224_mortar_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"avm224_M_6Rnd_60mm_HE_0_csw:10","avm224_M_6Rnd_60mm_HE_csw:10"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
//  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"avm224_M_6Rnd_60mm_HE_csw:10","avm224_M_6Rnd_60mm_SMOKE_csw:10","avm224_M_6Rnd_60mm_ILLUM_IR_csw:5"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SMG_MAG,SNIPER_MAG,LOADOUT_GRENADES};
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
  vest[] = {CAMO_VEST_ENG};
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  vest[] = {CAMO_VEST_JFO};
  backpack[] = {CAMO_BACKPACK_RADIO};
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class rifleman_03: rifleman {// Rifleman 3 - Marksman
  weapons[] = {DMR};
  handguns[] = {PISTOL};
  magazines[] = {DMR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {DMR_ATTACHMENTS};
  handgunAttachments[] = {PISTOL_OPTIC};
  items[] = {"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
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
  vest[] = {CAMO_VEST_PLM};
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
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
  items[] += {"ACE_EntrenchingTool"};
};
class matl: sl {// MAT Lead
  backpack[] = {CAMO_BACKPACK_MAT};
  magazines[] += {MAT_MAG3};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
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
  magazines[] += {"avm224_M_6Rnd_60mm_HE_csw:5","avm224_M_6Rnd_60mm_SMOKE_csw:5","avm224_M_6Rnd_60mm_ILLUM_IR_csw:5"};
};
class helicrew: pilot {// Aircrew
  vest[] = {CAMO_VEST_CREW};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  vest[] = {CAMO_VEST_CREW};
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
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
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,SIDE_LEADER_GRENADES};
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