author = "AChesheireCat";
description = "Russian Federation VDV c. 2022 (Last updated: 2024/12/13)";
#include "undef.hpp" // Reset defines

//Rifleman_02 is a Marksman.

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_O_RUS_Ratnik_Summer"
#define CAMO_VEST "CUP_V_O_RUS_6B45_6Sh117_SPP_AK_Summer","CUP_V_O_RUS_6B45_6Sh117_SPP_AK_Med_Summer"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "CUP_B_RUS_Raid_bag_Summer"
#define CAMO_HEADGEAR "CUP_H_RUS_6B47_Summer","CUP_H_RUS_6B47_6B34C_Summer","CUP_H_RUS_6B47_Summer","CUP_H_RUS_6B47_6B34C_Summer","CUP_H_RUS_6B47_Summer","CUP_H_RUS_6B47_6B34C_Summer","CUP_H_RUS_6B47_6M2_6B34C_Summer","CUP_H_RUS_6B47_6M21_6B34C_Summer","CUP_H_RUS_6B47_6B34D_Summer","CUP_H_RUS_6B47_6B34U_Summer","CUP_H_RUS_6B47_6B34D_Summer","CUP_H_RUS_6B47_6B34U_Summer","CUP_H_RUS_6B47_6M2_6B34D_Summer","CUP_H_RUS_6B47_6M2_6B34U_Summer","CUP_H_RUS_6B47_6M21_6B34D_Summer","CUP_H_RUS_6B47_6M21_6B34U_Summer","CUP_H_RUS_6B47_6M2_Summer","CUP_H_RUS_6B47_6M21_Summer"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_RUS_6B47_NV_Summer","CUP_H_RUS_6B47_NV_6B34C_Summer","CUP_H_RUS_6B47_NV_Summer","CUP_H_RUS_6B47_NV_6B34C_Summer","CUP_H_RUS_6B47_NV_6M2_6B34C_Summer","CUP_H_RUS_6B47_NV_6M21_6B34C_Summer","CUP_H_RUS_6B47_NV_6B34D_Summer","CUP_H_RUS_6B47_NV_6B34U_Summer","CUP_H_RUS_6B47_NV_6B34D_Summer","CUP_H_RUS_6B47_NV_6B34U_Summer","CUP_H_RUS_6B47_NV_6M2_6B34D_Summer","CUP_H_RUS_6B47_NV_6M2_6B34U_Summer","CUP_H_RUS_6B47_NV_6M21_6B34D_Summer","CUP_H_RUS_6B47_NV_6M21_6B34U_Summer","CUP_H_RUS_6B47_NV_6M2_Summer","CUP_H_RUS_6B47_NV_6M21_Summer"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "rhs_uniform_df15"
#define CAMO_VEST_PILOT "rhs_6sh92_digi"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "rhs_zsh7a_mike_alt"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_O_RUS_6B45_Light_Summer"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "rhs_6b48"
// Rifle
#define RIFLE "rhs_weap_ak74mr"
#define RIFLE_MAG "CUP_30Rnd_545x39_AK12_M:7","CUP_30Rnd_TE1_Green_Tracer_545x39_AK12_M:3"
#define RIFLE_ATTACHMENTS "rhs_acc_grip_ffg2","rhs_acc_dtk","rhs_acc_1p87"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "rhs_acc_rakurspm","CUP_optic_MicroT1_low","rhs_acc_okp7_picatinny","rhs_acc_ekp8_18","CUP_optic_VortexRazor_UH1_Black"
#define NVG_OPTICS "CUP_optic_GOSHAWK_RIS"
// GL Rifle
#define GLRIFLE "rhs_weap_ak74mr_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_INSTASMOKE "rhs_GDM40:2"
#define GLRIFLE_MAG_HE "rhs_VOG25P:5"
#define GLRIFLE_MAG_FLARE "CUP_FlareRed_GP25_M:4"
#define GLRIFLE_MAG_ILLUM "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_Pecheneg"
#define AR_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:4"
// AT
#define AT "CUP_launch_RPG26"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_Pecheneg"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VL_M:2","CUP_OG7_M:1"
#define MAT_OPTIC "CUP_optic_PGO7V3"
// HMG
#define HMG "CUP_KORD_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripod"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:5"
// HAT
#define HAT "ace_compat_rhs_afrf3_kornet_carry"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_rhs_afrf3_mag_9m133f:2","ace_compat_rhs_afrf3_mag_9m133m2:1"
// SAM
#define SAM "rhs_weap_igla"
#define SAM_MAG "rhs_mag_9k38_rocket:2"
// Sniper
#define SNIPER "rhs_weap_t5000"
#define SNIPER_MAG "rhs_5Rnd_338lapua_t5000:10"
#define SNIPER_OPTIC "rhs_acc_dh520x56", "rhs_acc_harris_swivel"
// Spotter
#define SPOTTER "rhs_weap_asval_grip"
#define SPOTTER_MAG "rhs_20rnd_9x39mm_SP6:10"
#define SPOTTER_OPTIC "rhs_acc_2dpZenit_ris", "rhs_acc_pso1m21"
// SMG
#define SMG "CUP_arifle_AKS74U"
#define SMG_MAG "hlc_30Rnd_545x39_EP_ak_Black:5"
// Pistol
#define PISTOL "hgun_Rook40_F"
#define PISTOL_MAG "16Rnd_9x21_Mag:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "rhs_mag_rgd5:2"
#define SIDE_SMOKE "SmokeShell:2"
#define OFF_FRAG "rhs_mag_rgn:2"
#define DEF_FRAG "rhs_mag_rgo:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

#define NVG "CUP_NVG_1PN138"
#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMO_TOOL "ACE_Clacker"

// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "CUP_V_O_RUS_6B45_6Sh117_SPP_PKP_Summer","CUP_V_O_RUS_6B45_6Sh117_SPP_PKP_Radio_Summer"
#define CAMO_VEST_FTL "CUP_V_O_RUS_6B45_6Sh117_SPP_VOG_Summer","CUP_V_O_RUS_6B45_6Sh117_SPP_VOG_Med_Summer"
#define CAMO_VEST_SL "CUP_V_O_RUS_6B45_6Sh117_SPP_VOG_Radio_Light_Summer","CUP_V_O_RUS_6B45_6Sh117_SPP_VOG_Med_Radio_Light_Summer","CUP_V_O_RUS_6B45_6Sh117_SPP_VOG_Radio_Summer"
#define CAMO_VEST_MEDIC "CUP_V_O_RUS_6B45_6Sh117_AK_Med_Radio_Summer"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "CUP_B_RUS_Patrol_bag_Summer"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "CUP_B_RUS_Patrol_bag_Summer"
#define CAMO_BACKPACK_MEDIC "rhs_medic_bag_XL"
#define MMG_ATTACHMENTS "CUP_optic_PechenegScope"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define DMR "rhs_weap_svds"
#define DMR_MAG "10Rnd_762x54_Mag:15"
#define DMR_OPTIC "rhs_acc_pso1m2"

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
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
//  init = "this addGoggles selectRandom ['CUP_G_RUS_Ratnik_Balaclava_EMR_Summer_1','CUP_G_RUS_Ratnik_Balaclava_EMR_Summer_2','CUP_G_RUS_Ratnik_Balaclava_Winter_Green_1','CUP_G_RUS_Ratnik_Balaclava_Winter_Green_2','CUP_G_RUS_Ratnik_Balaclava_Green_1','CUP_G_RUS_Ratnik_Balaclava_Green_2','CUP_G_RUS_Ratnik_6M2_Summer','CUP_G_ESS_BLK'];"
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
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
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
  backpack[] = {CAMO_BACKPACK_LAT};
  backpackItems[] += {AT};
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
  backpack[] = {CAMO_BACKPACK_AR};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"CUP_B_RPGPack_Khaki"};
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
  launchers[] = {"CUP_2b14_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:6"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:2","ACE_1Rnd_82mm_Mo_Smoke:4"};
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
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
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
class rifleman_02: rifleman {// Rifleman 2 - Marksman
  vest[] = {"CUP_V_O_RUS_6B45_6Sh117_SPP_SVD_1_Summer","CUP_V_O_RUS_6B45_6Sh117_SPP_SVD_2_Summer"};
  weapons[] = {DMR};
  handguns[] = {PISTOL};
  magazines[] = {DMR_MAG,PISTOL_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {DMR_OPTIC};
};
class rifleman_03: rifleman {// Rifleman 3
};
class rifleman_04: rifleman {// Rifleman 4
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
  items[] += {"acex_intelitems_notepad"};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
  items[] += {"acex_intelitems_notepad"};
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
  magazines[] += {MAT_MAG};
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

//SF Classes - VDV Recon Detachment

#define SF_UNIFORM "CUP_U_O_RUS_Ratnik_Summer"
#define SF_VEST "rhs_6sh117_val", "rhs_6sh117_rifleman", "rhs_6sh117_ar"
#define SF_VEST_AR "rhs_6sh117_mg"
#define SF_VEST_FTL "rhs_6sh117_nco"
#define SF_VEST_SL "rhs_6sh117_nco_azart"
#define SF_VEST_SNIPER "rhs_6sh117_svd"
#define SF_HEADGEAR CAMO_HEADGEAR
#define SF_ALT_HEADGEAR "rhs_vkpo_cap_alt"
#define SF_BACKPACK "CUP_O_RUS_Patrol_bag_Summer"
#define SF_CARRYALL "CUP_O_RUS_Patrol_bag_Summer"

#define SF_RIFLE "rhs_weap_asval"
#define SF_RIFLE_MAG "rhs_20rnd_9x39mm_SP6:10"
#define SF_RIFLE_ATTACHMENTS "rhs_acc_pso1m21"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG

#define SF_GLRIFLE GLRIFLE
#define SF_GLRIFLE_MAG RIFLE_MAG
#define SF_GLRIFLE_MAG_HE GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM GLRIFLE_MAG_FLARE
#define SF_GLRIFLE_ATTACHMENTS "rhs_acc_dtk4short", "cup_optic_1p87_1p90_blk"

#define SF_AR "CUP_lmg_Pecheneg_B50_vfg"
#define SF_AR_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
#define SF_AR_ATTACHMENTS 

#define SF_SNIPER "rhs_weap_svds"
#define SF_SNIPER_MAG "10Rnd_762x54_Mag:15"
#define SF_SNIPER_ATTACHMENTS "rhs_acc_pso1m21", "rhs_acc_tgpv2"

#define SF_AT "rhs_weap_rpg26"
#define SF_AT_MAG "rhs_rpg26_mag"
#define SF_AT_ATTACHMENTS 

#define SF_PISTOL PISTOL
#define SF_PISTOL_MAG PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS 

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
  opticChoices[] = {ALT_OPTICS};
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
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
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
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  weapons[] = {SF_GLRIFLE};
  handguns[] = {SF_PISTOL};
  magazines[] = {SF_RIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES,SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};