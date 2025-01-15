author = "AChesheireCat";
description = "Russian Federation RATNIK Loadout, circa 2020";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE

// Camo set
#define CAMO_UNIFORM "CUP_U_O_RUS_Ratnik_Summer"
#define CAMO_VEST "CUP_V_RUS_Smersh_New_Full_Spectre"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CAMO_HEADGEAR "CUP_H_RUS_Bandana_GSSh_Headphones","CUP_H_RUS_GSSh01_Headphones_grey","H_Bandanna_khk_hs","CUP_H_RUS_Bandana_GSSh_Headphones","CUP_H_RUS_Bandana_GSSh_Headphones"
// Rifle
#define RIFLE "arifle_AK12_545_F"
#define RIFLE_MAG "potato_magazine_545x39_30rnd_reload_tracer_Green:10"
#define RIFLE_ATTACHMENTS "rhs_acc_perst3"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "rhs_acc_1p87","rhs_acc_rakurspm","cup_optic_eotech553_black","rhs_acc_okp7_picatinny"
// GL Rifle
#define GLRIFLE "arifle_AK12_GL_545_F"
#define GLRIFLE_MAG "potato_magazine_545x39_30rnd_reload_tracer_Green:10"
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:5"
#define GLRIFLE_MAG_FLARE "CUP_FlareYellow_GP25_M:4"
// Carbine
#define CARBINE "arifle_AK12U_545_F"
#define CARBINE_MAG "potato_magazine_545x39_30rnd_reload_tracer_Green:10"
#define CARBINE_ATTACHMENTS "rhs_acc_perst3"
// AR
#define AR "arifle_RPK12_F"
#define AR_MAG "potato_magazine_762x39_75rnd_tracer_Green:6"
#define AR_ATTACHMENTS "rhs_acc_perst3"
// AT
#define AT "CUP_launch_RPG26"
#define AT_MAG
// MMG
#define MMG "CUP_lmg_Pecheneg_top_rail_B50_vfg"
#define MMG_MAG "potato_box_762x54_150rnd_tracer_Green:4"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VL_M:2","CUP_OG7_M:1"
#define MAT_MAG2 "CUP_PG7VL_M:1","CUP_OG7_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V3"

// -------------------- PASTE ABOVE THIS LINE
//HMG
#define HMG "CUP_KORD_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:6"
#define HMG_MAG2 "ace_csw_50Rnd_127x108_mag:5"
//HAT
#define HAT "ace_compat_rhs_afrf3_kornet_carry"
#define HAT_TRI_HI ""
#define HAT_TRI_LO ""
#define HAT_MAG "ace_compat_rhs_afrf3_mag_9m133f:3","ace_compat_rhs_afrf3_mag_9m133m2:2"
#define HAT_MAG2 "ace_compat_rhs_afrf3_mag_9m133f:2","ace_compat_rhs_afrf3_mag_9m133m2:2"
// SAM
#define SAM "rhs_weap_igla"
#define SAM_MAG "rhs_mag_9k38_rocket:3"
#define SAM_MAG2 "rhs_mag_9k38_rocket:2"
// Sniper Rifle
#define SNIPER "srifle_DMR_01_black_F"
#define SNIPER_MAG "potato_magazine_762x54_10rnd:10"
#define SNIPER_ATTACHMENTS "cup_optic_sb_11_4x20_pm","rhs_acc_perst3","bipod_02_f_blk"
// Spotter Rifle
#define SPOTTER "rhs_weap_ak105_zenitco01_b33"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "rhs_acc_1p87","rhs_acc_perst3_2dp_h","rhs_acc_grip_rk6","rhs_acc_dtk4short"
// SMG
#define SMG "rhs_weap_aks74un"
#define SMG_MAG CARBINE_MAG
#define SMG_ATTACHMENTS "rhs_acc_pgs64_74un"
// Pistol
#define PISTOL "hgun_Rook40_F"
#define PISTOL_MAG "16Rnd_9x21_Mag:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED
#define CARRYALL "CUP_O_RUS_Patrol_bag_Summer"

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
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
  attachments[] = {CARBINE_ATTACHMENTS};
};
class ftl: rifleman {// FTL
  vest[] = {"V_SmershVest_01_F"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {"V_SmershVest_01_radio_F"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  vest[] = {"V_SmershVest_01_F"};
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {AR_ATTACHMENTS};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer_Shovel"};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"rhs_rpg_6b2"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"rhs_rpg_6b2"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("CUP_O_RUS_Patrol_bag_Summer",SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("CUP_O_RUS_Patrol_bag_Summer",SAM_MAG2)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: rifleman {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {"rhs_uniform_df15_tan"};
  backpack[] = {"rhs_rk_sht_30_emr"};
  vest[] = {"rhs_6sh92_headset"};
  headgear[] = {"rhs_zsh7a_mike_alt"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  attachments[] = {SMG_ATTACHMENTS};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};

class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {"CUP_U_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  vest[] = {"rhs_6b45_holster"};
  headgear[] = {"rhs_6b48"};
  handguns[] = {PISTOL};
  magazines[] = {CARBINE_MAG,CREW_GRENADES,PISTOL_MAG};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  magazines[] = {CARBINE_MAG,CREW_GRENADES,PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_ENG,BASE_MEDICAL};
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
class rifleman_02: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
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
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {MAT_MAG};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
  magazines[] += {SAM_MAG2};
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
