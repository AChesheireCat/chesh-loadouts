author = "AChesheireCat";
description = "Middle Eastern Alliance c. 2010 (Last Updated 2025/06/30)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_B_BDUv2_dirty_desert","CUP_U_B_BDUv2_roll2_dirty_desert","CUP_U_B_BDUv2_roll_dirty_desert"
#define CAMO_VEST "cwr3_b_vest_pasgt_alice_woodland","cwr3_b_vest_pasgt_alice_woodland_ar"
#define CAMO_BACKPACK "B_Battle_Belt_F","cwr3_o_backpack_gasmask"
#define CARRYALL "cwr3_b_backpack_alice"
#define CAMO_HEADGEAR "CUP_H_PASGTv2_desert","CUP_H_PASGTv2_desert","CUP_H_PASGTv2_NVG_desert"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_LWHv2_desert_comms","CUP_H_LWHv2_desert_ess_comms"
#define BERET "cwr3_i_headgear_beret_02_black_fia"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USMC_PilotOverall"
#define CAMO_VEST_PILOT "Aircrew_vest_2_NH"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_RUS_ZSH_Shield_Down","CUP_H_RUS_ZSH_Shield_Up"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "vn_b_vest_usarmy_14"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_o_headgear_tsh4"
// Rifle
#define RIFLE "CUP_arifle_AKMS_Early"
#define RIFLE_MAG "CUP_30Rnd_762x39_AK47_M:7","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:3"
#define RIFLE_ATTACHMENTS 
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "rhs_acc_rakursPM","CUP_optic_ZeissZPoint"
#define MAG_OPTICS "hlc_optic_STANAGZF2D_G3","hlc_optic_STANAGZF_G3"
// GL Rifle
#define GLRIFLE "CUP_arifle_AKMS_GL_Early"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:5"
#define GLRIFLE_MAG_FLARE "CUP_FlareYellow_GP25_M:4"
#define GLRIFLE_MAG_ILLUM "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74"
#define AR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M:6"
#define AAR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M:6"
#define AR_ATTACHMENTS RIFLE_ATTACHMENTS
// Alt AR
#define LMG "gm_mg8a1_blk"
#define LMG_MAG "gm_100Rnd_762x51mm_B_T_DM21_mg8_oli:4"
#define LMG_ATTACHMENTS "gm_g8_bipod_blk"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7V_M:1","CUP_OG7_M:2"
// Light AT
#define LAT "CUP_launch_RPG26"
// MMG
#define MMG "CUP_lmg_MG3_rail"
#define MMG_MAG "CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M:5"
#define MMG_OPTIC "ptv_c79","ptv_c79_pip"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7V_M:2","CUP_OG7_M:2"
#define MAT_MAG2 "CUP_PG7V_M:2","CUP_OG7_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V2"
// HMG - NSV (1985)
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HMG - DSHKM (AI Only)
#define HMG_AI "RHS_DShkM_Gun_Bag"
#define HMG_TRI_HI_AI "RHS_DShkM_TripodHigh_Bag"
#define HMG_TRI_LO_AI "RHS_DShkM_TripodLow_Bag"
// HAT - RPG-29
#define HAT "RPG29"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "PG29V:2","OG29:1"
#define HAT_OPTIC "optic_PGO"
// HAT - SPG-9 (AI Only)
#define HAT_AI "RHS_SPG9_Gun_Bag"
#define HAT_TRI_HI_AI "RHS_SPG9_Tripod_Bag"
#define HAT_TRI_LO_AI "RHS_SPG9_Tripod_Bag"
// SAM
#define SAM "CUP_launch_Igla"
#define SAM_MAG 
// Sniper
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "CUP_10Rnd_762x54_SVD_M:10"
#define SNIPER_OPTIC "CUP_optic_PSO_1"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG CARBINE_MAG
#define SPOTTER_OPTIC 
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_Green_Tracer_9x19_MP5:5"
// Pistol
#define PISTOL "CUP_hgun_Browning_HP"
#define PISTOL_MAG "CUP_13Rnd_9x19_Browning_HP:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "vn_f1_grenade_mag:2"
#define SIDE_SMOKE "SmokeShell:2"
#define LOADOUT_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS RADIO_SR,"ACE_MapTools",SIDE_CHEM_LIGHT,"ACE_Flashlight_MX991","ACE_CableTie:2"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

#define NVG "CUP_NVG_PVS7"
#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"
#define SIDE_BINOS "gm_df7x40_blk"

// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "cwr3_b_vest_pasgt_alice_woodland_ar"
#define CAMO_VEST_FTL "cwr3_b_vest_pasgt_alice_woodland_gl"
#define CAMO_VEST_SL "cwr3_b_vest_pasgt_alice_woodland_officer"
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT "rhs_rpg_empty"
#define CAMO_BACKPACK_AR "CUP_B_Kombat_Olive"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "CUP_B_Kombat_Radio_Olive"
#define CAMO_BACKPACK_MEDIC "rhs_medic_bag_XL"
#define MMG_ATTACHMENTS "ptv_c79_2D"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

//  init = "this addGoggles selectRandom ['ptv_ess_ct3_b','ptv_ess_nvg_b','ptv_comtac3_g','CUP_TK_NeckScarf','cwr3_b_facewear_scrimnet_scarf_olive','vn_b_acc_goggles_01','vn_b_acc_towel_02','None','None','G_Aviator'];"

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
  magazines[] = {RIFLE_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  headgear[] = {BERET};
  backpack[] = {CAMO_BACKPACK_SL};
  backpackItems[] += {CAMO_HEADGEAR};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
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
  magazines[] = {AR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {AR_ATTACHMENTS};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AAR_MAG};
  linkedItems[] += {SIDE_BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  vest[] = {"cwr3_b_vest_pasgt_alice_woodland_etool"};
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem_Double"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  vest[] = {"cwr3_b_vest_pasgt_alice_woodland_mg"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  opticChoices[] = {MMG_OPTIC};
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
  launchers[] = {"CUP_2b14_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:5"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:5"};
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
  backpack[] = {CARRYALL};
  weapons[] = {SNIPER};
  handguns[] = {PISTOL};
  magazines[] = {SNIPER_MAG,PISTOL_MAG,LOADOUT_GRENADES};
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
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS,"cwr3_o_nvg_pnv57_tsh3"};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED,"cwr3_o_nvg_pnv57_tsh3"};
};
class Fic_eng: Fic_Soldier_Carbine {
  weapons[] = {CARBINE};
  backpack[] = {CARRYALL};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_ENG,"WBK_HeadLampItem_Double",BASE_MEDICAL};
  backpackItems[] = {};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {"rhs_mine_tm62m_mag:2","rhs_mag_mine_pfm1:10"};
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
  backpack[] = {CAMO_BACKPACK_FTL};
  backpackItems[] += {RIFLE_MAG};
};
class rifleman_03: rifleman {// Rifleman 3 - Light AT
  launchers[] = {LAT};
};
class rifleman_04: rifleman {// Rifleman 4 - Assistant AT Rifleman
  vest[] = {"cwr3_b_vest_pasgt_alice_woodland_etool"};
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  linkedItems[] += {SIDE_BINOS};
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {"cwr3_b_backpack_alice_medic_empty"};
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
  vest[] = {"vn_b_vest_usarmy_13"};
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG2};
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
  secondaryAttachments[] = {HAT_OPTIC};
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
  magazines[] += {"ACE_1Rnd_82mm_Mo_Smoke:3"};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes

#define SF_UNIFORM "acp_Solid_Black_core_lite_U_obr88_Solid_Black","acp_Solid_Black_core_lite_U_obr88_rolled_Solid_Black"
#define SF_VEST "V_TacVest_camo"
#define SF_VEST_AR SF_VEST
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "CUP_H_SLA_Beret"
#define SF_BACKPACK "B_Battle_Belt_F"
#define SF_CARRYALL "acp_Solid_Black_core_lite_B_Kitbag_rgr_Solid_Black"

#define SF_RIFLE "CUP_smg_MP5A5"
#define SF_RIFLE_MAG "CUP_30Rnd_9x19_MP5:7","CUP_30Rnd_Yellow_Tracer_9x19_MP5:3"
#define SF_RIFLE_ATTACHMENTS

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE
#define SF_GLRIFLE_MAG
#define SF_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define SF_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define SF_GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"

#define SF_AR
#define SF_AR_MAG
#define SF_AR_ATTACHMENTS

#define SF_SNIPER DMR
#define SF_SNIPER_MAG DMR_MAG
#define SF_SNIPER_ATTACHMENTS DMR_ATTACHMENTS

#define SF_AT "CUP_launch_RShG2"
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS

#define SF_PISTOL "ptv_usp45t"
#define SF_PISTOL_MAG "ptv_12Rnd_45ACP_USP:3"
#define SF_PISTOL_ATTACHMENTS "CUP_muzzle_snds_mk23","CUP_acc_MLPLS_Laser"

#define SF_GLPISTOL "ptv_hk69"

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
/*
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
  linkedItems[] += {SIDE_BINOS};
};
*/
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
  weapons[] = {SF_RIFLE};
  handguns[] = {SF_GLPISTOL};
  magazines[] = {SF_RIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
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